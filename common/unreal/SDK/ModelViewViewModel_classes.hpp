﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModelViewViewModel

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "ModelViewViewModel_structs.hpp"


namespace SDK
{

// Class ModelViewViewModel.MVVMConversionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMVVMConversionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static ESlateVisibility Conv_BoolToSlateVisibility(bool bIsVisible, ESlateVisibility TrueVisibility, ESlateVisibility FalseVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMConversionLibrary">();
	}
	static class UMVVMConversionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMConversionLibrary>();
	}
};
static_assert(alignof(UMVVMConversionLibrary) == 0x000008, "Wrong alignment on UMVVMConversionLibrary");
static_assert(sizeof(UMVVMConversionLibrary) == 0x000028, "Wrong size on UMVVMConversionLibrary");

// Class ModelViewViewModel.MVVMViewModelContextResolver
// 0x0000 (0x0028 - 0x0028)
class UMVVMViewModelContextResolver final : public UObject
{
public:
	TScriptInterface<class INotifyFieldValueChanged> K2_CreateInstance(const class UClass* ExpectedType, const class UUserWidget* UserWidget) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMViewModelContextResolver">();
	}
	static class UMVVMViewModelContextResolver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMViewModelContextResolver>();
	}
};
static_assert(alignof(UMVVMViewModelContextResolver) == 0x000008, "Wrong alignment on UMVVMViewModelContextResolver");
static_assert(sizeof(UMVVMViewModelContextResolver) == 0x000028, "Wrong size on UMVVMViewModelContextResolver");

// Class ModelViewViewModel.MVVMGameSubsystem
// 0x0008 (0x0038 - 0x0030)
class UMVVMGameSubsystem final : public UGameInstanceSubsystem
{
public:
	class UMVVMViewModelCollectionObject*         ViewModelCollection;                               // 0x0030(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	class UMVVMViewModelCollectionObject* GetViewModelCollection() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMGameSubsystem">();
	}
	static class UMVVMGameSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMGameSubsystem>();
	}
};
static_assert(alignof(UMVVMGameSubsystem) == 0x000008, "Wrong alignment on UMVVMGameSubsystem");
static_assert(sizeof(UMVVMGameSubsystem) == 0x000038, "Wrong size on UMVVMGameSubsystem");
static_assert(offsetof(UMVVMGameSubsystem, ViewModelCollection) == 0x000030, "Member 'UMVVMGameSubsystem::ViewModelCollection' has a wrong offset!");

// Class ModelViewViewModel.MVVMSubsystem
// 0x0000 (0x0030 - 0x0030)
class UMVVMSubsystem final : public UEngineSubsystem
{
public:
	bool DoesWidgetTreeContainedWidget(const class UWidgetTree* WidgetTree, const class UWidget* ViewWidget) const;
	class UMVVMViewModelCollectionObject* GetGlobalViewModelCollection() const;
	struct FMVVMAvailableBinding K2_GetAvailableBinding(const class UClass* Class_0, const struct FMVVMBindingName& BindingName, const class UClass* Accessor) const;
	TArray<struct FMVVMAvailableBinding> K2_GetAvailableBindings(const class UClass* Class_0, const class UClass* Accessor) const;
	class UMVVMView* K2_GetViewFromUserWidget(const class UUserWidget* UserWidget) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMSubsystem">();
	}
	static class UMVVMSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMSubsystem>();
	}
};
static_assert(alignof(UMVVMSubsystem) == 0x000008, "Wrong alignment on UMVVMSubsystem");
static_assert(sizeof(UMVVMSubsystem) == 0x000030, "Wrong size on UMVVMSubsystem");

// Class ModelViewViewModel.MVVMViewModelBase
// 0x0040 (0x0068 - 0x0028)
class UMVVMViewModelBase : public UObject
{
public:
	uint8                                         Pad_28[0x40];                                      // 0x0028(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, TDelegate<void(class UObject* Object, const struct FFieldNotificationId& Field)> Delegate);
	void K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& FieldId);
	void K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, TDelegate<void(class UObject* Object, const struct FFieldNotificationId& Field)> Delegate);
	bool K2_SetPropertyValue(const int32& OldValue, const int32& NewValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMViewModelBase">();
	}
	static class UMVVMViewModelBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMViewModelBase>();
	}
};
static_assert(alignof(UMVVMViewModelBase) == 0x000008, "Wrong alignment on UMVVMViewModelBase");
static_assert(sizeof(UMVVMViewModelBase) == 0x000068, "Wrong size on UMVVMViewModelBase");

// Class ModelViewViewModel.MVVMViewModelCollectionObject
// 0x0028 (0x0050 - 0x0028)
class UMVVMViewModelCollectionObject final : public UObject
{
public:
	struct FMVVMViewModelCollection               ViewModelCollection;                               // 0x0028(0x0028)(Transient, NativeAccessSpecifierPrivate)

public:
	bool AddViewModelInstance(const struct FMVVMViewModelContext& Context, class UMVVMViewModelBase* ViewModel);
	int32 RemoveAllViewModelInstance(class UMVVMViewModelBase* ViewModel);
	bool RemoveViewModel(const struct FMVVMViewModelContext& Context);

	class UMVVMViewModelBase* FindFirstViewModelInstanceOfType(const TSubclassOf<class UMVVMViewModelBase>& ViewModelClass) const;
	class UMVVMViewModelBase* FindViewModelInstance(const struct FMVVMViewModelContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMViewModelCollectionObject">();
	}
	static class UMVVMViewModelCollectionObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMViewModelCollectionObject>();
	}
};
static_assert(alignof(UMVVMViewModelCollectionObject) == 0x000008, "Wrong alignment on UMVVMViewModelCollectionObject");
static_assert(sizeof(UMVVMViewModelCollectionObject) == 0x000050, "Wrong size on UMVVMViewModelCollectionObject");
static_assert(offsetof(UMVVMViewModelCollectionObject, ViewModelCollection) == 0x000028, "Member 'UMVVMViewModelCollectionObject::ViewModelCollection' has a wrong offset!");

// Class ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
// 0x0000 (0x0368 - 0x0368)
class UMVVMViewModelBlueprintGeneratedClass final : public UBlueprintGeneratedClass
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMViewModelBlueprintGeneratedClass">();
	}
	static class UMVVMViewModelBlueprintGeneratedClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMViewModelBlueprintGeneratedClass>();
	}
};
static_assert(alignof(UMVVMViewModelBlueprintGeneratedClass) == 0x000008, "Wrong alignment on UMVVMViewModelBlueprintGeneratedClass");
static_assert(sizeof(UMVVMViewModelBlueprintGeneratedClass) == 0x000368, "Wrong size on UMVVMViewModelBlueprintGeneratedClass");

// Class ModelViewViewModel.MVVMBindingSubsystem
// 0x0060 (0x0090 - 0x0030)
class UMVVMBindingSubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_30[0x60];                                      // 0x0030(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMBindingSubsystem">();
	}
	static class UMVVMBindingSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMBindingSubsystem>();
	}
};
static_assert(alignof(UMVVMBindingSubsystem) == 0x000008, "Wrong alignment on UMVVMBindingSubsystem");
static_assert(sizeof(UMVVMBindingSubsystem) == 0x000090, "Wrong size on UMVVMBindingSubsystem");

// Class ModelViewViewModel.MVVMView
// 0x0030 (0x0058 - 0x0028)
class UMVVMView final : public UUserWidgetExtension
{
public:
	class UMVVMViewClass*                         ClassExtension;                                    // 0x0028(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMVVMViewSource>                Sources;                                           // 0x0030(0x0010)(Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPrivate)
	uint8                                         Pad_40[0x10];                                      // 0x0040(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bLogBinding;                                       // 0x0050(0x0001)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bConstructed;                                      // 0x0051(0x0001)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bSourcesInitialized;                               // 0x0052(0x0001)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bBindingsInitialized;                              // 0x0053(0x0001)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bHasEveryTickBinding;                              // 0x0054(0x0001)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void InitializeBindings();
	void InitializeSources();
	bool SetViewModel(class FName ViewModelName, TScriptInterface<class INotifyFieldValueChanged> ViewModel);
	bool SetViewModelByClass(TScriptInterface<class INotifyFieldValueChanged> NewValue);
	void UninitializeBindings();
	void UninitializeSources();

	bool AreBindingsInitialized() const;
	bool AreSourcesInitialized() const;
	TScriptInterface<class INotifyFieldValueChanged> GetViewModel(class FName ViewModelName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMView">();
	}
	static class UMVVMView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMView>();
	}
};
static_assert(alignof(UMVVMView) == 0x000008, "Wrong alignment on UMVVMView");
static_assert(sizeof(UMVVMView) == 0x000058, "Wrong size on UMVVMView");
static_assert(offsetof(UMVVMView, ClassExtension) == 0x000028, "Member 'UMVVMView::ClassExtension' has a wrong offset!");
static_assert(offsetof(UMVVMView, Sources) == 0x000030, "Member 'UMVVMView::Sources' has a wrong offset!");
static_assert(offsetof(UMVVMView, bLogBinding) == 0x000050, "Member 'UMVVMView::bLogBinding' has a wrong offset!");
static_assert(offsetof(UMVVMView, bConstructed) == 0x000051, "Member 'UMVVMView::bConstructed' has a wrong offset!");
static_assert(offsetof(UMVVMView, bSourcesInitialized) == 0x000052, "Member 'UMVVMView::bSourcesInitialized' has a wrong offset!");
static_assert(offsetof(UMVVMView, bBindingsInitialized) == 0x000053, "Member 'UMVVMView::bBindingsInitialized' has a wrong offset!");
static_assert(offsetof(UMVVMView, bHasEveryTickBinding) == 0x000054, "Member 'UMVVMView::bHasEveryTickBinding' has a wrong offset!");

// Class ModelViewViewModel.MVVMViewClass
// 0x0088 (0x00B0 - 0x0028)
class UMVVMViewClass final : public UWidgetBlueprintGeneratedClassExtension
{
public:
	TArray<struct FMVVMViewClass_SourceCreator>   SourceCreators;                                    // 0x0028(0x0010)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FMVVMViewClass_CompiledBinding> CompiledBindings;                                  // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMVVMCompiledBindingLibrary            BindingLibrary;                                    // 0x0048(0x0060)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_A8[0x4];                                       // 0x00A8(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bInitializeSourcesOnConstruct;                     // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bInitializeBindingsOnConstruct;                    // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_AE[0x2];                                       // 0x00AE(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MVVMViewClass">();
	}
	static class UMVVMViewClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMVVMViewClass>();
	}
};
static_assert(alignof(UMVVMViewClass) == 0x000008, "Wrong alignment on UMVVMViewClass");
static_assert(sizeof(UMVVMViewClass) == 0x0000B0, "Wrong size on UMVVMViewClass");
static_assert(offsetof(UMVVMViewClass, SourceCreators) == 0x000028, "Member 'UMVVMViewClass::SourceCreators' has a wrong offset!");
static_assert(offsetof(UMVVMViewClass, CompiledBindings) == 0x000038, "Member 'UMVVMViewClass::CompiledBindings' has a wrong offset!");
static_assert(offsetof(UMVVMViewClass, BindingLibrary) == 0x000048, "Member 'UMVVMViewClass::BindingLibrary' has a wrong offset!");
static_assert(offsetof(UMVVMViewClass, bInitializeSourcesOnConstruct) == 0x0000AC, "Member 'UMVVMViewClass::bInitializeSourcesOnConstruct' has a wrong offset!");
static_assert(offsetof(UMVVMViewClass, bInitializeBindingsOnConstruct) == 0x0000AD, "Member 'UMVVMViewClass::bInitializeBindingsOnConstruct' has a wrong offset!");

}

