#pragma once
#include <cstdint>
#include <string>
#include <reframework/API.hpp>
namespace RE {
    std::string narrow(std::wstring_view str);
    std::wstring widen(std::string_view str);
#pragma pack(push, 1)
    class REObject
    {
    public:
        class REObjectInfo* info; //0x0000
    }; //Size: 0x0008
    static_assert(sizeof(REObject) == 0x8);

    class REManagedObject : public REObject
    {
    public:
        uint32_t referenceCount; //0x0008
        int16_t N000071AE; //0x000C
        char pad_000E[2]; //0x000E
    }; //Size: 0x0010
    static_assert(sizeof(REManagedObject) == 0x10);

    class REComponent : public REManagedObject
    {
    public:
        class REGameObject* ownerGameObject; //0x0010
        class REComponent* childComponent; //0x0018
        class REComponent* prevComponent; //0x0020
        class REComponent* nextComponent; //0x0028
    }; //Size: 0x0030
    static_assert(sizeof(REComponent) == 0x30);

    class SystemString : public REManagedObject
    {
    public:
        int32_t size; //0x0010
        wchar_t data[256]; //0x0014

        [[nodiscard]] std::string to_str() const { return narrow(data); }
        [[nodiscard]] std::wstring to_wstr() const { return data; }
        [[nodiscard]] std::wstring_view to_view() const { return data; }
        [[nodiscard]] reframework::API::ManagedObject* to_managed_object()  { return reinterpret_cast<reframework::API::ManagedObject*>(this); }
    }; //Size: 0x0214
    static_assert(sizeof(SystemString) == 0x214);

    template <class T> class SystemArray {
    public:
        void* object_info;      // 0x0000
        uint32_t ref_count;     // 0x0008
        int32_t _0;             // 0x000C
        void* contained_type;   // 0x0010
        uint32_t _1;            // 0x0018
        uint32_t count;         // 0x001C
        T elements[1];          // 0x0020
    };

    class SystemGuid {
        public:
        uint32_t mData1; // 0x0
        uint16_t mData2; // 0x4
        uint16_t mData3; // 0x6
        union {
            uint64_t mData4L; // 0x8
            struct {
                uint8_t mData4_0; // 0x8
                uint8_t mData4_1; // 0x9
                uint8_t mData4_2; // 0xA
                uint8_t mData4_3; // 0xB
                uint8_t mData4_4; // 0xC
                uint8_t mData4_5; // 0xD
                uint8_t mData4_6; // 0xE
                uint8_t mData4_7; // 0xF
            };
        } mData4;

         [[nodiscard]] std::string to_str() const;
    };
    static_assert(sizeof(SystemGuid) == 0x10);
#pragma pack(pop)


    struct SystemAction {
        struct DelegateInvocation {
            REManagedObject* object;
            void* func;
            reframework::API::Method* method;
        };
        void* object_info;      // 0x0000
        uint32_t ref_count;     // 0x0008
        int32_t _0;             // 0x000C
        uint32_t num_methods { 0 }; // 0x0010
        int32_t _1;             // 0x0014
        DelegateInvocation methods[1]; // 0x0018
    };
    static_assert(sizeof(SystemAction) == 0x30);


    template <class T> class REArray;

    template <class T> REArray<T>* to_re_array(reframework::API::ManagedObject* obj) {
        return reinterpret_cast<REArray<T>*>(obj);
    }

    template <class T> const REArray<T>* to_re_array(const reframework::API::ManagedObject* obj) {
        return reinterpret_cast<const REArray<T>*>(obj);
    }

    template <class T> reframework::API::ManagedObject* to_managed_object(T *obj) {
        return reinterpret_cast<reframework::API::ManagedObject*>(obj);
    }

    template <class T = reframework::API::ManagedObject*, class... Args>
    T call(reframework::API::ManagedObject* obj, std::string_view name, Args... args) {
        return obj->call<T>(name, reframework::API::get()->get_vm_context(), obj, args...);
    }

    template <class T = reframework::API::ManagedObject*, class... Args> T call(reframework::API::Method* method, Args... args) {
        return method->call<T>(reframework::API::get()->get_vm_context(), args...);
    }

    template <class... Args> std::string str_call(reframework::API::ManagedObject* obj, std::string_view name, Args... args) {
        const SystemString* res = obj->call<SystemString*>(name, reframework::API::get()->get_vm_context(), obj, args...);
        return res->to_str();
    }

    template <class... Args> std::string str_call(reframework::API::Method* method, Args... args) {
        const SystemString* res = method->call<SystemString*>(reframework::API::get()->get_vm_context(), args...);
        return res->to_str();
    }

    template <class T = uint32_t> std::string get_enum_name(std::string_view name, T value) {
        const auto& api = reframework::API::get();
        const auto type = api->tdb()->find_type(name);
        const auto inst = type->create_instance();

        *inst->get_field<T>("value__") = value;
        return call<SystemString*>(inst, "ToString()")->to_str();
    }

    template <class T = uint32_t> std::string get_enum_name(reframework::API::TypeDefinition* type, T value) {
        const auto inst = type->create_instance();
        *inst->get_field<T>("value__") = value;

        return call<SystemString*>(inst, "ToString()")->to_str();
    }

    template <class T = uint32_t> std::string get_enum_name(reframework::API::ManagedObject* value) {
        return call<SystemString*>(value, "ToString()")->to_str();
    }

    SystemString* create_managed_string(std::string_view string);
    reframework::API::ManagedObject* create_managed_array(std::string_view type, size_t length);
    reframework::API::ManagedObject* create_managed_array(const reframework::API::TypeDefinition* type, size_t length);
    bool set_managed_field(reframework::API::ManagedObject* obj, std::string_view field_name, reframework::API::ManagedObject* value);

    template <class T> class REArray : SystemArray<T> {
    public:
        using iterator = T*;
        using const_iterator = const T*;

        [[nodiscard]] size_t size() const { return SystemArray<T>::count; }
        const T& at(size_t idx) const { return SystemArray<T>::elements[idx]; }
        T& at(size_t idx) { return SystemArray<T>::elements[idx]; }

        T get_item(uint32_t idx) const { return call<T>(to_managed_object(this), "get_Item", idx); }
        void set_item(uint32_t idx, const T& value) { call(to_managed_object(this), "set_Item", idx, value); }

        iterator begin() { return &SystemArray<T>::elements[0]; }
        const_iterator begin() const { return &SystemArray<T>::elements[0]; }
        iterator end() { return SystemArray<T>::elements + SystemArray<T>::count; }
        const_iterator end() const { return SystemArray<T>::elements + SystemArray<T>::count; }

        [[nodiscard]] bool contains(const T& value) { return call<bool>(to_managed_object(this), "Contains", value); }

        const T& operator[](size_t idx) const { return at(idx); }
        T& operator[](size_t idx) { return at(idx); }
    };
}
