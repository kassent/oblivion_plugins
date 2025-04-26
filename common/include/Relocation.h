#pragma once

#include <cstdint>
#include <type_traits>

class RelocationManager
{
public:
	RelocationManager();

	static uintptr_t	s_baseAddr;
};

// use this for addresses that represent pointers to a type T
template <typename T>
class RelocPtr
{
public:
	RelocPtr(uintptr_t offset)
		:m_offset(offset + RelocationManager::s_baseAddr)
	{
		//
	}

	operator T *() const
	{
		return getPtr();
	}

	T * operator->() const
	{
		return getPtr();
	}

	T * getPtr() const
	{
		return reinterpret_cast <T *>(m_offset);
	}

	const T * getConst() const
	{
		return reinterpret_cast <T *>(m_offset);
	}

	uintptr_t getUIntPtr() const
	{
		return m_offset;
	}

private:
	uintptr_t	m_offset;

	// hide
	RelocPtr() = delete;
	RelocPtr(RelocPtr & rhs) = delete;
	RelocPtr & operator=(RelocPtr & rhs) = delete;
};

// use this for direct addresses to types T. needed to avoid ambiguity
template <typename T>
class RelocAddr
{
public:
	RelocAddr(uintptr_t offset)
		:m_offset(reinterpret_cast <BlockConversionType *>(offset + RelocationManager::s_baseAddr))
	{
		//
	}

	operator T()
	{
		return reinterpret_cast <T>(m_offset);
	}

	uintptr_t getUIntPtr() const
	{
		return reinterpret_cast <uintptr_t>(m_offset);
	}

private:
	// apparently you can't reinterpret_cast from a type to the same type
	// that's kind of stupid and makes it impossible to use this for uintptr_ts if I use the same type
	// so we make a new type by storing the data in a pointer to this useless struct
	// at least this is hidden by a wrapper
	struct BlockConversionType { };
	BlockConversionType * m_offset;

	// hide
	RelocAddr() = delete;
	RelocAddr(RelocAddr & rhs) = delete;
	RelocAddr & operator=(RelocAddr & rhs) = delete;
};


inline uintptr_t operator""_rel(unsigned long long int relOffset) {
    return RelocationManager::s_baseAddr + relOffset;
}

// inline uintptr_t to_rel_addr(uintptr_t absAddr) {
//     return absAddr - RelocationManager::s_baseAddr + 0x140000000;
// }

// inline uintptr_t to_rel_addr(void *ptr) {
//     return reinterpret_cast<uintptr_t>(ptr) - RelocationManager::s_baseAddr + 0x140000000;
// }

template <class To, class From>
[[nodiscard]] To unrestricted_cast(From a_from)
{
	if constexpr (std::is_same_v<
						std::remove_cv_t<From>,
						std::remove_cv_t<To>>) {
		return To{ a_from };

		// From != To
	} else if constexpr (std::is_reference_v<From>) {
		return unrestricted_cast<To>(std::addressof(a_from));

		// From: NOT reference
	} else if constexpr (std::is_reference_v<To>) {
		return *unrestricted_cast<
			std::add_pointer_t<
				std::remove_reference_t<To>>>(a_from);

		// To: NOT reference
	} else if constexpr (std::is_pointer_v<From> &&
							std::is_pointer_v<To>) {
		return static_cast<To>(
			const_cast<void*>(
				static_cast<const volatile void*>(a_from)));
	} else if constexpr ((std::is_pointer_v<From> && std::is_integral_v<To>) ||
							(std::is_integral_v<From> && std::is_pointer_v<To>)) {
		return reinterpret_cast<To>(a_from);
	} else {
		union
		{
			std::remove_cv_t<std::remove_reference_t<From>> from;
			std::remove_cv_t<std::remove_reference_t<To>>   to;
		};

		from = std::forward<From>(a_from);
		return to;
	}
}

template <typename T>
concept Relocatable = std::is_pointer_v<T> || std::is_integral_v<T>;

template <Relocatable T>
inline uintptr_t to_rel_addr(T src) {
    return unrestricted_cast<uintptr_t>(src) - RelocationManager::s_baseAddr + 0x140000000;
}
