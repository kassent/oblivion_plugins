#include "SDK/CoreUObject_classes.hpp"
#include "SDK/Engine_classes.hpp"
#include "SDK/InputCore_structs.hpp"
#define NOMINMAX
#include <Windows.h>
#include <cstdint>
#include <array>
#include <LogUtils.h>
#include <HookUtils.h>
#include <BranchTrampoline.h>
#include <PluginAPI.h>
#include <obse64_version.h>
#include <Relocation.h>
#include <SDK.hpp>

#define PLUGIN_NAME "BetterInput"
#define PLUGIN_VERSION_MAJOR 1
#define PLUGIN_VERSION_MINOR 0
#define PLUGIN_VERSION_PATCH 0
#define PLUGIN_VERSION MAKE_EXE_VERSION(PLUGIN_VERSION_MAJOR, PLUGIN_VERSION_MINOR, PLUGIN_VERSION_PATCH)

PluginHandle    g_pluginHandle = kPluginHandle_Invalid;
std::uint32_t   g_runtimeVersion = 0;
OBSEMessagingInterface* g_messaging = nullptr;


namespace EUnrealKey {
enum EKey : int32_t {
    AnyKey,
    MouseX,
    MouseY,
    Mouse2D,
    MouseScrollUp,
    MouseScrollDown,
    MouseWheelAxis,
    LeftMouseButton,
    RightMouseButton,
    MiddleMouseButton,
    ThumbMouseButton,
    ThumbMouseButton2,
    BackSpace,
    Tab,
    Enter,
    Pause,
    CapsLock,
    Escape,
    SpaceBar,
    PageUp,
    PageDown,
    End,
    Home,
    Left,
    Up,
    Right,
    Down,
    Insert,
    Delete,
    Zero,
    One,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    A,
    B,
    C,
    D,
    E,
    F,
    G,
    H,
    I,
    J,
    K,
    L,
    M,
    N,
    O,
    P,
    Q,
    R,
    S,
    T,
    U,
    V,
    W,
    X,
    Y,
    Z,
    NumPadZero,
    NumPadOne,
    NumPadTwo,
    NumPadThree,
    NumPadFour,
    NumPadFive,
    NumPadSix,
    NumPadSeven,
    NumPadEight,
    NumPadNine,
    Multiply,
    Add,
    Subtract,
    Decimal,
    Divide,
    F1,
    F2,
    F3,
    F4,
    F5,
    F6,
    F7,
    F8,
    F9,
    F10,
    F11,
    F12,
    NumLock, // 92
    ScrollLock, // 93
    LeftShift,
    RightShift,
    LeftControl,
    RightControl,
    LeftAlt,
    RightAlt,
    LeftCommand,
    RightCommand,
    Semicolon,
    Equals,
    Comma,
    Underscore,
    Hyphen,
    Period,
    Slash,
    Tilde,
    LeftBracket,
    LeftParantheses,
    Backslash,
    RightBracket,
    RightParantheses,
    Apostrophe,
    Quote,
    Asterix,
    Ampersand,
    Caret,
    Dollar,
    Exclamation,
    Colon,
    A_AccentGrave,
    E_AccentGrave,
    E_AccentAigu,
    C_Cedille,
    Section, // 127
    Invalid,

    Gamepad_Left2D,
    Gamepad_LeftX,
    Gamepad_LeftY,
    Gamepad_Right2D,
    Gamepad_RightX,
    Gamepad_RightY,
    Gamepad_LeftTriggerAxis,
    Gamepad_RightTriggerAxis,

    Gamepad_LeftThumbstick,
    Gamepad_RightThumbstick,
    Gamepad_Special_Left,
    Gamepad_Special_Left_X,
    Gamepad_Special_Left_Y,
    Gamepad_Special_Right,
    Gamepad_FaceButton_Bottom,
    Gamepad_FaceButton_Right,
    Gamepad_FaceButton_Left, // 145
    Gamepad_FaceButton_Top,
    Gamepad_LeftShoulder,
    Gamepad_RightShoulder,
    Gamepad_LeftTrigger,
    Gamepad_RightTrigger,
    Gamepad_DPad_Up,
    Gamepad_DPad_Down,
    Gamepad_DPad_Right,
    Gamepad_DPad_Left,

    Gamepad_LeftStick_Up,
    Gamepad_LeftStick_Down,
    Gamepad_LeftStick_Right,
    Gamepad_LeftStick_Left,

    Gamepad_RightStick_Up,
    Gamepad_RightStick_Down,
    Gamepad_RightStick_Right,
    Gamepad_RightStick_Left, // 162
    Max = 163,
};


}

auto* g_keys = unrestricted_cast<std::array<SDK::FKey, EUnrealKey::Max>*>(0x91459A8_rel);

using FnGetPersistentActor = SDK::ALevelScriptActor*(*)(SDK::UEngine*, int32_t);
static auto GetPersistentActor = unrestricted_cast<FnGetPersistentActor>(0x37F0A20_rel);

using FnGetWorldFromContextObject = SDK::UWorld*(*)(SDK::UEngine*, SDK::UObject*, int32_t);
static auto GetWorldFromContextObject = unrestricted_cast<FnGetWorldFromContextObject>(0x37F28B0_rel);

using FnGetAltarUISubSystem = SDK::UVAltarUISubsystem*(*)(SDK::UGameInstance*);
static auto GetAltarUISubSystem = unrestricted_cast<FnGetAltarUISubSystem>(0x4743EB0_rel);


void OBSEMessageHandler(OBSEMessagingInterface::Message* msg) {
	_MESSAGE("OBSEMessageHandler: %d", msg->type);
	if (msg->type == OBSEMessagingInterface::kMessage_PostLoad) {
        _MESSAGE("OBSEMessageHandler: PostLoad");
	}
}

// 0147B4F4F0 UAltarGraphicsSettingsDebugInfo_VFT
// void Tick(FGeometry MyGeometry, float InDeltaTime)

namespace {

    void DumpObject(auto* a_object) {
        auto objectName = a_object->GetName();
        _MESSAGE("------------------ object: %s, addr: %p", objectName.c_str(), a_object);
        // auto *instanceClass = a_object->Class;
        // if (instanceClass) {
        //     for(const SDK::UStruct* Clss = instanceClass; Clss; Clss = Clss->Super)
        //     {
        //         auto className = Clss->GetName();
        //         _MESSAGE("============== className: %s", className.c_str());     
        //         for (SDK::UField* Field = Clss->Children; Field; Field = Field->Next)
        //         {
        //             auto fieldName = Field->GetName();
        //             if(Field->HasTypeFlag(SDK::EClassCastFlags::Function)) {
        //                 auto fieldName = Field->GetName();
        //                 auto *func = static_cast<class SDK::UFunction*>(Field);
        //                 _MESSAGE("funcName: %s, addr: %p", fieldName.c_str(), to_rel_addr(func->ExecFunction));
        //             }
        //         }
        //     }
        // }
    }

    void DumpContainerWidget(auto* a_containerWidget) {
        auto widgetName = a_containerWidget->GetName();
        _MESSAGE("------------------ containerWidget: %s, addr: %p", widgetName.c_str(), a_containerWidget);
        bool isTakeFocused = a_containerWidget->IsTakeFocused;
        _MESSAGE("isTakeFocused: %d", isTakeFocused);

        bool isInPreviewMode = a_containerWidget->IsInPreviewMode;
        _MESSAGE("isInPreviewMode: %d", isInPreviewMode);

        bool isKeyboardInputMode = a_containerWidget->IsKeyboardInputMode;
        _MESSAGE("isKeyboardInputMode: %d", isKeyboardInputMode);

        bool isContainerOpening = a_containerWidget->IsContainerOpening;
        _MESSAGE("isContainerOpening: %d", isContainerOpening);

        bool isContainerClosing = a_containerWidget->IsContainerClosing;
        _MESSAGE("isContainerClosing: %d", isContainerClosing);

        bool isCloseRequested = a_containerWidget->IsCloseRequested;
        _MESSAGE("isCloseRequested: %d", isCloseRequested);


        SDK::UInputMappingContext* inputMappingContext = a_containerWidget->InputMapping;
        _MESSAGE("inputMappingContext: %s", inputMappingContext ? inputMappingContext->GetName().c_str() : "nullptr");
        if (inputMappingContext) {
            _MESSAGE("inputMappingContext: %s", inputMappingContext->GetName().c_str());
            const auto& mappings = inputMappingContext->Mappings;
            for (const auto& mapping : mappings) {
                _MESSAGE("mapping: %s", mapping.Action->GetName().c_str());
                //auto actionDescription = mapping.Action->ActionDescription.ToString();
                //_MESSAGE("actionDescription: %s", actionDescription.c_str());

                auto keyName = mapping.Key.KeyName.ToString();
                _MESSAGE("keyName: %s", keyName.c_str());
                // auto actionTriggers = mapping.Action->Triggers;
                // for (const auto &trigger : actionTriggers) {
                //     _MESSAGE("trigger: %s", trigger->GetName().c_str());
                // }
                // auto actionModifiers = mapping.Action->Modifiers;
                // for (const auto &modifier : actionModifiers) {
                //     _MESSAGE("modifier: %s", modifier->GetName().c_str());
                // }
                /*
                .text:000000014492E83E                 lea     rcx, [rdi+1C8h]
.text:000000014492E845                 lea     rdx, aUndefined_2 ; "Undefined"
.text:000000014492E84C                 call    sub_140DE4F20

FString::Fstring(const char*)



            sub_140DE4F20((__int64)v40, (const __m128i *)L")");
            sub_140DE4F20((__int64)v39, (const __m128i *)" (CL_Main: ");
                */
            }
            auto contextDescription = inputMappingContext->ContextDescription.ToString();
            _MESSAGE("contextDescription: %s", contextDescription.c_str());
        }


        // CurrentHoveredItem
        auto *currentHoveredItem = a_containerWidget->CurrentHoveredItem;
        if (currentHoveredItem) {
            _MESSAGE("currentHoveredItem: %d", currentHoveredItem->GetInventoryIndex());
        }

        SDK::UVContainerMenuViewModel *viewModel = a_containerWidget->VContainerMenuViewModel;
        if (!viewModel) {
            _MESSAGE("viewModel is nullptr");
            return;
        }
        _MESSAGE("viewModel: %s, %p", viewModel->GetName().c_str(), viewModel);
        const auto& playerData = viewModel->ExtraData;
        auto playerName = playerData.PlayerName.ToString();
        _MESSAGE("playerName: %s", playerName.c_str());
        _MESSAGE("gold: %d", playerData.GoldAmount);

        const auto &buttonData = viewModel->ButtonData;
        _MESSAGE("IsTakeAll: %d", buttonData.IsTakeAll);

        _MESSAGE("IsNegotiate: %d", buttonData.IsNegotiate);
        // MenuType
        _MESSAGE("MenuType: %d", viewModel->MenuType);

        // IsContainerMenu
        _MESSAGE("CurrentTab: %d", viewModel->CurrentTab);

        // IsDialogueMenu
        _MESSAGE("CurrentPageContainer: %d", viewModel->CurrentPageContainer);

        // SortTypeContainer
        _MESSAGE("SortTypeContainer: %d", viewModel->SortTypeContainer);

        // bIsSimpleContainer
        _MESSAGE("bIsSimpleContainer: %d", viewModel->bIsSimpleContainer);

        // CurrentPageInventory
        _MESSAGE("CurrentPageInventory: %d", viewModel->CurrentPageInventory);

        // bIsListViewHovered
        _MESSAGE("bIsListViewHovered: %d", viewModel->bIsListViewHovered);

        // bBlockBackAction
        _MESSAGE("bBlockBackAction: %d", viewModel->bBlockBackAction);
    }

    void ProcessMessageWidget(auto* playerController, auto* a_messageWidget) {
        if (!a_messageWidget->GetIsFocussed()) {
            return;
        }
        const auto &aKey = g_keys->at(EUnrealKey::A);
        const auto &dKey = g_keys->at(EUnrealKey::D);
        const auto &eKey = g_keys->at(EUnrealKey::E);
        const auto &spaceKey = g_keys->at(EUnrealKey::SpaceBar);
        const auto &tabKey = g_keys->at(EUnrealKey::Tab);

        bool isAKeyPressed = playerController->WasInputKeyJustPressed(aKey);
        bool isDKeyPressed = playerController->WasInputKeyJustPressed(dKey);
        bool isEKeyPressed = playerController->WasInputKeyJustPressed(eKey);
        bool isSpaceKeyPressed = playerController->WasInputKeyJustPressed(spaceKey);
        bool isTabKeyPressed = playerController->WasInputKeyJustPressed(tabKey);

        if (!isAKeyPressed && !isDKeyPressed && !isEKeyPressed && !isSpaceKeyPressed && !isTabKeyPressed) {
            return;
        }
        // WBP_MessageMenuSpecific_Default
        auto *defaultWidget = a_messageWidget->WBP_MessageMenuSpecific_Default;
        if (!defaultWidget) {
            _MESSAGE("defaultWidget is nullptr");
            return;
        }
        auto buttonNum = defaultWidget->Buttons.Num();
        _MESSAGE("buttonNum: %d", buttonNum);

        const auto& buttons = defaultWidget->Buttons;
        for (const auto& button : buttons) {
            _MESSAGE("button: %s", button->GetName().c_str());
        }


        auto *widgetSwitcher = a_messageWidget->WidgetSwitcher;
        if (!widgetSwitcher) {
            _MESSAGE("widgetSwitcher is nullptr");
            return;
        }

        auto maxIndex = widgetSwitcher->GetNumWidgets() - 1;
        _MESSAGE("maxIndex: %d", maxIndex);

        auto currentIndex = widgetSwitcher->GetActiveWidgetIndex();
        _MESSAGE("currentIndex: %d", currentIndex);

        if (isAKeyPressed && currentIndex > 0) {
            currentIndex -= 1;
            widgetSwitcher->SetActiveWidgetIndex(currentIndex);
            return;
        }
        if (isDKeyPressed && currentIndex < maxIndex) {
            currentIndex += 1;
            widgetSwitcher->SetActiveWidgetIndex(currentIndex);
            return;
        }
        if (isEKeyPressed || isSpaceKeyPressed || isTabKeyPressed) {
            a_messageWidget->SendClickedButton(currentIndex);
            return;
        }  
    }

    void ProcessContainerWidget(auto* playerController, auto* a_containerWidget) {
        if (!a_containerWidget->GetIsFocussed()) {
            return;
        }
        const auto &tabKey = g_keys->at(EUnrealKey::Tab);
        auto isTabKeyPressed = playerController->WasInputKeyJustPressed(tabKey);

        const auto &spaceKey = g_keys->at(EUnrealKey::SpaceBar);
        // const auto &eKey = g_keys->at(EUnrealKey::E);
        auto isSpaceKeyPressed = playerController->WasInputKeyJustPressed(spaceKey);
        if (isTabKeyPressed) {
            _MESSAGE("isTabKeyPressed");
        }

        if (!isSpaceKeyPressed && !isTabKeyPressed) {
            return;
        }
        SDK::UVContainerMenuViewModel *viewModel = a_containerWidget->VContainerMenuViewModel;
        if (!viewModel) {
            _MESSAGE("viewModel is nullptr");
            return;
        }
        DumpContainerWidget(a_containerWidget); 

        if (isTabKeyPressed && !viewModel->bBlockBackAction 
            && !a_containerWidget->IsContainerClosing 
            && !a_containerWidget->IsCloseRequested
            && !a_containerWidget->IsContainerOpening
            ) {
            viewModel->RegisterSendButtonExitHandler();
            return;
        }

        if (isSpaceKeyPressed && !viewModel->bBlockBackAction) {
            int32_t currentHoveredItemIndex = -1;
            auto *currentHoveredItem = a_containerWidget->CurrentHoveredItem;
            if (currentHoveredItem) {
                currentHoveredItemIndex = currentHoveredItem->GetInventoryIndex();
            }
            const auto &buttonData = viewModel->ButtonData;
            auto menuType = viewModel->MenuType;
            if (currentHoveredItemIndex != -1) {
                viewModel->RegisterSendClickOnItemHandler(currentHoveredItemIndex);
            }
            return;
        }
    }

    void ProcessDialogueWidget(auto* playerController, auto* a_dialogueWidget) {
        if (!a_dialogueWidget->GetIsFocussed()) {
            return;
        }
        const auto &tabKey = g_keys->at(EUnrealKey::Tab);
        auto isTabKeyPressed = playerController->WasInputKeyJustPressed(tabKey);

        const auto &spaceKey = g_keys->at(EUnrealKey::SpaceBar);
        const auto &eKey = g_keys->at(EUnrealKey::E);
        auto isSpaceKeyPressed = playerController->WasInputKeyJustPressed(spaceKey) || playerController->WasInputKeyJustPressed(eKey);

        if (!isSpaceKeyPressed && !isTabKeyPressed) {
            return;
        }
        SDK::UInputMappingContext *inputMappingContext = a_dialogueWidget->InputMapping;
        _MESSAGE("inputMappingContext: %s", inputMappingContext ? inputMappingContext->GetName().c_str() : "nullptr");
        if (inputMappingContext) {
            _MESSAGE("inputMappingContext: %s", inputMappingContext->GetName().c_str());
            const auto &mappings = inputMappingContext->Mappings;
            for (const auto &mapping : mappings) {
                _MESSAGE("mapping: %s", mapping.Action->GetName().c_str());
                auto actionDescription = mapping.Action->ActionDescription.ToString();
                _MESSAGE("actionDescription: %s", actionDescription.c_str());

                auto keyName = mapping.Key.KeyName.ToString();
                _MESSAGE("keyName: %s", keyName.c_str());
                // auto actionTriggers = mapping.Action->Triggers;
                // for (const auto &trigger : actionTriggers) {
                //     _MESSAGE("trigger: %s", trigger->GetName().c_str());
                // }
                // auto actionModifiers = mapping.Action->Modifiers;
                // for (const auto &modifier : actionModifiers) {
                //     _MESSAGE("modifier: %s", modifier->GetName().c_str());
                // }
            }
            auto contextDescription = inputMappingContext->ContextDescription.ToString();
            _MESSAGE("contextDescription: %s", contextDescription.c_str());
        }
        

        auto *viewModel = a_dialogueWidget->VDialogueMenuViewModel;
        if (!viewModel) {
            _MESSAGE("viewModel is nullptr");
            return;
        }
        DumpObject(a_dialogueWidget);

        const SDK::FLegacyDialogMenuButtonVisibility &buttonVisibility = viewModel->ButtonsVisibility;
        _MESSAGE("bPersuasion: %d", buttonVisibility.bPersuasion);
        _MESSAGE("bBarter: %d", buttonVisibility.bBarter);
        _MESSAGE("bSpellBarter: %d", buttonVisibility.bSpellBarter);
        _MESSAGE("bRepairing: %d", buttonVisibility.bRepairing);
        _MESSAGE("bTraining: %d", buttonVisibility.bTraining);
        _MESSAGE("bRecharging: %d", buttonVisibility.bRecharging);
        _MESSAGE("bGoodbye: %d", buttonVisibility.bGoodbye);
        _MESSAGE("Pad_F: %d", buttonVisibility.Pad_F[0]);

        if (isTabKeyPressed && buttonVisibility.bGoodbye) {
            if (!viewModel->bSubtitleVisibility) {
                viewModel->RegisterSendClickedCloseIcon();
            } else {
                viewModel->RegisterSendClickedSkip();
            }
            return;
        }

        auto *dialogScrollBox = a_dialogueWidget->dialog_scrollbox;
        if (dialogScrollBox) {
            _MESSAGE("dialogScrollBox: %s", dialogScrollBox->GetName().c_str());
            auto index = dialogScrollBox->GetFocusElementIndex();
            _MESSAGE("selected index: %d", index);
            if (!viewModel->bSubtitleVisibility) {
                viewModel->RegisterSendClickedResponse(index);
            } else {
                viewModel->RegisterSendClickedSkip();
            }
        }
    }
}

class UAltarGraphicsSettingsDebugInfoWrapper {
    public:
        using FnProcessEvent = void(*)(SDK::UAltarGraphicsSettingsDebugInfo*, SDK::UFunction*, void*);
        static FnProcessEvent ProcessEventVanilla;
        static void ProcessEvent(SDK::UAltarGraphicsSettingsDebugInfo* a_self, SDK::UFunction* a_functor, void* a_params) {
            if (a_functor->GetName() == "Tick") {
                do {

                    static auto* ueEngine = SDK::UEngine::GetEngine();
                    if (!ueEngine) {
                        _MESSAGE("ueEngine is nullptr");
                        break;
                    }

                    //  L_PersistentDungeon
                    static auto* persistentActor = GetPersistentActor(ueEngine, 0);
                    if (!persistentActor) {
                        _MESSAGE("persistentActor is nullptr");
                        break;
                    }

                    static auto* World = GetWorldFromContextObject(ueEngine, persistentActor, 1);
                    if (!World) {
                        _MESSAGE("World is nullptr");
                        break;
                    }

                    static auto* gameInstance = World->OwningGameInstance;
                    if (!gameInstance) {
                        _MESSAGE("gameInstance is nullptr");
                        break;
                    }

                    static auto* altarUISubsystem = GetAltarUISubSystem(gameInstance);
                    if (!altarUISubsystem) {
                        _MESSAGE("altarUISubsystem is nullptr");
                        break;
                    }

                    static auto* playerController = SDK::UGameplayStatics::GetPlayerController(persistentActor, 0);
                    if (!playerController) {
                        _MESSAGE("playerController is nullptr");
                        break;
                    }

                    // const auto &rightMouseButton = g_keys->at(EUnrealKey::RightMouseButton);
                    // // _MESSAGE("spaceKey: %s", spaceKey.KeyName.ToString().c_str());

                    // auto isRightMouseButtonPressed = playerController->WasInputKeyJustPressed(rightMouseButton);


                    //            // WBP_ModernMenu_Dialog_C_2147475584 
                    //            // WBP_ModernMenu_Container_C_2147476754 
                    //            // WBP_ModernMenu_Player_C_2147481113 
                    //            // WBP_AltarHud_Fade_C_2147479908 
                    //            // WBP_ModernMenu_Message_C_2147480238, isFocused: 1 
                    const auto &widgets = altarUISubsystem->WidgetsMap;
                    // for (const auto &pair : widgets) {
                    //     auto *widget = pair.Value();
                    //     if (!widget) {
                    //         _MESSAGE("widget is nullptr");
                    //         continue;
                    //     }
                    //     auto widgetName = widget->GetName();
                    //     auto isFocused = widget->GetIsFocussed();
                    //     // _MESSAGE("widget: %s, isFocused: %d", widgetName.c_str(), isFocused);
                    //     if (isFocused && widgetName.starts_with("WBP_ModernMenu_Message_C")) {
                    //         // _MESSAGE("widget: %s, isFocused: %d", widgetName.c_str(), isFocused);
                    //         auto *messageWidget = static_cast<SDK::UWBP_ModernMenu_Message_C*>(widget);
                    //         ProcessMessageWidget(playerController, messageWidget);
                    //         break;
                    //     }
                    // }

                    for (const auto &pair : widgets) {
                        auto *widget = pair.Value();
                        if (!widget) {
                            _MESSAGE("widget is nullptr");
                            continue;
                        }
                        auto widgetName = widget->GetName();
                        auto isFocused = widget->GetIsFocussed();
                        // _MESSAGE("widget: %s, isFocused: %d", widgetName.c_str(), isFocused);
                        if (isFocused && widgetName.starts_with("WBP_ModernMenu_Dialog_C")) {
                            // _MESSAGE("widget: %s, isFocused: %d", widgetName.c_str(), isFocused);
                            auto *dialogueWidget = static_cast<SDK::UWBP_ModernMenu_Dialog_C*>(widget);
                            ProcessDialogueWidget(playerController, dialogueWidget);
                            break;
                        }
                        if (isFocused && widgetName.starts_with("WBP_ModernMenu_Container_C")) {
                            auto *containerWidget = static_cast<SDK::UWBP_ModernMenu_Container_C*>(widget);
                            ProcessContainerWidget(playerController, containerWidget);
                            break;
                        }
                    }





                    //if (gameInstance) {
                    //    auto* altarUISubsystem = GetAltarUISubSystem(gameInstance);
                    //    if (altarUISubsystem) {
                    //        auto isMenuVisible = altarUISubsystem->IsMenuVisible();
                    //        auto isHudVisible = altarUISubsystem->IsHUDVisible();
                    //        const auto &widgets = altarUISubsystem->WidgetsMap;
                    //        for (const auto &widget : widgets) {
                    //            auto widgetName = widget.Value()->GetName();
                    //            if (widgetName.starts_with("WBP_ModernMenu_Dialog_C")) {
                    //                _MESSAGE("widget: %s", widgetName.c_str());
                    //            }

                    //            // WBP_ModernMenu_Dialog_C_2147475584 
                    //            // WBP_ModernMenu_Container_C_2147476754 
                    //            // WBP_ModernMenu_Player_C_2147481113 
                    //            // WBP_AltarHud_Fade_C_2147479908 
                    //            // WBP_ModernMenu_Message_C_2147480238, isFocused: 1 
                    //            _MESSAGE("widget: %s", widget.Value()->GetName().c_str());
                    //        }
                    //        _MESSAGE("isMenuVisible: %d, isHudVisible: %d", isMenuVisible, isHudVisible);
                    //    }

                    //    
                    //    if (playerController) {
                    //        _MESSAGE("direct playerController: %s. %p", playerController->GetName().c_str(), playerController);
                    //    }
                    //}
                } while (false);
               
            }
            ProcessEventVanilla(a_self, a_functor, a_params);
        }

        static void InstallHooks() {
            ProcessEventVanilla = HookUtils::SafeWrite64(0x7B4F4F0_rel + 0x4D * 8, ProcessEvent);
        }
};
UAltarGraphicsSettingsDebugInfoWrapper::FnProcessEvent UAltarGraphicsSettingsDebugInfoWrapper::ProcessEventVanilla = nullptr;


class UObjectWrapper {
public:
    using FnProcessEvent = void(*)(SDK::UObject*, SDK::UFunction*, void*);

    static void InstallHooks() {
        auto address = unrestricted_cast<FnProcessEvent>(0x10FE060_rel);
        _MESSAGE("hook address: %p", address);
        HookLambda(address, [](SDK::UObject* a_self, SDK::UFunction* a_functor, void* a_params) {
            auto vtable = *reinterpret_cast<uintptr_t*>(a_self);
            auto className = a_self->GetName();
            auto functionName = a_functor->GetName();
            if (className == "VAltarUISubsystem") {
                _MESSAGE("ProcessEvent, class: %s, vtable: %llx, function: %s, addr: %p", a_self->GetName().c_str(), to_rel_addr(vtable), a_functor->GetName().c_str(), to_rel_addr(a_functor->ExecFunction));
            }

            // _MESSAGE("----------------------------------------a_self->Class: %s", className.c_str());

            auto *instanceClass = a_self->Class;
            if (instanceClass) {
                for(const SDK::UStruct* Clss = instanceClass; Clss; Clss = Clss->Super)
                {
                    auto className = Clss->GetName();
                    // _MESSAGE("============== className: %s", className.c_str());
                    //if (className != "UAltarUISubsystem")
                    //    continue;
                        
                    for (SDK::UField* Field = Clss->Children; Field; Field = Field->Next)
                    {
                        auto fieldName = Field->GetName();
                        if(Field->HasTypeFlag(SDK::EClassCastFlags::Function)) {
                            auto fieldName = Field->GetName();
                            auto *func = static_cast<class SDK::UFunction*>(Field);
                            // _MESSAGE("funcName: %s, addr: %p", fieldName.c_str(), to_rel_addr(func->ExecFunction));
                        }
                    }
                }
            }
            return original(a_self, a_functor, a_params);
        });
    }
};
// OblivionRemastered-Win64-Shipping.exe + 0x4640850
extern "C"
{
	OBSEPluginVersionData OBSEPlugin_Version = {
		OBSEPluginVersionData::kVersion,
		PLUGIN_VERSION,
		PLUGIN_NAME,
		"kassent",
		OBSEPluginVersionData::kAddressIndependence_Signatures,	// not version independent
		OBSEPluginVersionData::kStructureIndependence_NoStructs,	// not version independent (extended field)
		{ 0 },
		0,	// works with any version of the script extender. you probably do not need to put anything here
	};

	bool OBSEPlugin_Preload(const OBSEInterface* obse) {
		_MESSAGE("%s: %08X", PLUGIN_NAME, PLUGIN_VERSION);
		g_pluginHandle = obse->GetPluginHandle();
		g_runtimeVersion = obse->runtimeVersion;

		if (obse->isEditor) {
			_MESSAGE("loaded in editor, marking as incompatible");
			return false;
		}

		g_messaging = (OBSEMessagingInterface*)obse->QueryInterface(kInterface_Messaging);
		if (!g_messaging) {
			_MESSAGE("couldn't get messaging interface");
			return false;
		}

        auto addr = 0x1100_rel;
        _MESSAGE("addr: %p", addr);

		return true;
	}

	bool OBSEPlugin_Load(const OBSEInterface* obse) {
		if (g_messaging != nullptr) {
			_MESSAGE("registering listener for OBSE...");
			g_messaging->RegisterListener(g_pluginHandle, "OBSE", OBSEMessageHandler);
		}
		// UObjectWrapper::InstallHooks();
		UAltarGraphicsSettingsDebugInfoWrapper::InstallHooks();
		return true;
	}
};

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved) {
    if (reason == DLL_PROCESS_ATTACH) {
        initLogger(PLUGIN_NAME);
        _MESSAGE("===============================================================");
        _MESSAGE("Initializing plugin: %s, version: %d.%d.%d", PLUGIN_NAME, PLUGIN_VERSION_MAJOR, PLUGIN_VERSION_MINOR, PLUGIN_VERSION_PATCH);
        if (!g_branchTrampoline.Create(160)) {
            _MESSAGE("couldn't create branch trampoline. this is fatal. skipping remainder of init process.");
            return FALSE;
        }
        _MESSAGE("Branch trampoline created.");
        Sleep(20);
    }
    return TRUE;
}
/*
/// <summary>
    /// Function flags.
    ///
    /// This MUST be kept in sync with EFunctionFlags defined in
    /// Engine\Source\Runtime\CoreUObject\Public\UObject\Script.h
    /// </summary>
    [Flags]
    public enum EFunctionFlags : uint
    {
        None = 0x00000000,

        /// <summary>
        /// Function is final (prebindable, non-overridable function).
        /// </summary>
        Final = 0x00000001,

        /// <summary>
        /// Indicates this function is DLL exported/imported.
        /// </summary>
        RequiredAPI = 0x00000002,

        /// <summary>
        /// Function will only run if the object has network authority
        /// </summary>
        BlueprintAuthorityOnly = 0x00000004,

        /// <summary>
        /// Function is cosmetic in nature and should not be invoked on dedicated servers
        /// </summary>
        BlueprintCosmetic = 0x00000008,

        // = 0x00000010,   // unused.
        // = 0x00000020,   // unused.

        /// <summary>
        /// Function is network-replicated.
        /// </summary>
        Net = 0x00000040,

        /// <summary>
        /// Function should be sent reliably on the network.
        /// </summary>
        NetReliable = 0x00000080,

        /// <summary>
        /// Function is sent to a net service
        /// </summary>
        NetRequest = 0x00000100,

        /// <summary>
        /// Executable from command line.
        /// </summary>
        Exec = 0x00000200,

        /// <summary>
        /// Native function.
        /// </summary>
        Native = 0x00000400,

        /// <summary>
        /// Event function.
        /// </summary>
        Event = 0x00000800,

        /// <summary>
        /// Function response from a net service
        /// </summary>
        NetResponse = 0x00001000,

        /// <summary>
        /// Static function.
        /// </summary>
        Static = 0x00002000,

        /// <summary>
        /// Function is networked multicast Server -> All Clients
        /// </summary>
        NetMulticast = 0x00004000,

        /// <summary>
        /// Function is used as the merge 'ubergraph' for a blueprint, only assigned when using the persistent 'ubergraph' frame
        /// </summary>
        UbergraphFunction = 0x00008000,

        /// <summary>
        /// Function is a multi-cast delegate signature (also requires Delegate to be set!)
        /// </summary>
        MulticastDelegate = 0x00010000,

        /// <summary>
        /// Function is accessible in all classes (if overridden, parameters must remain unchanged).
        /// </summary>
        Public = 0x00020000,

        /// <summary>
        /// Function is accessible only in the class it is defined in (cannot be overridden, but function name may be reused in subclasses.  IOW: if overridden, parameters don't need to match, and Super.Func() cannot be accessed since it's private.)
        /// </summary>
        Private = 0x00040000,

        /// <summary>
        /// Function is accessible only in the class it is defined in and subclasses (if overridden, parameters much remain unchanged).
        /// </summary>
        Protected = 0x00080000,

        /// <summary>
        /// Function is delegate signature (either single-cast or multi-cast, depending on whether MulticastDelegate is set.)
        /// </summary>
        Delegate = 0x00100000,

        /// <summary>
        /// Function is executed on servers (set by replication code if passes check)
        /// </summary>
        NetServer = 0x00200000,

        /// <summary>
        /// function has out (pass by reference) parameters
        /// </summary>
        HasOutParms = 0x00400000,

        /// <summary>
        /// function has structs that contain defaults
        /// </summary>
        HasDefaults = 0x00800000,

        /// <summary>
        /// function is executed on clients
        /// </summary>
        NetClient = 0x01000000,

        /// <summary>
        /// function is imported from a DLL
        /// </summary>
        DLLImport = 0x02000000,

        /// <summary>
        /// function can be called from blueprint code
        /// </summary>
        BlueprintCallable = 0x04000000,

        /// <summary>
        /// function can be overridden/implemented from a blueprint
        /// </summary>
        BlueprintEvent = 0x08000000,

        /// <summary>
        /// function can be called from blueprint code, and is also pure (produces no side effects). If you set this, you should set BlueprintCallable as well.
        /// </summary>
        BlueprintPure = 0x10000000,

        /// <summary>
        /// function can only be called from an editor scrippt.
        /// </summary>
        EditorOnly = 0x20000000,

        /// <summary>
        /// function can be called from blueprint code, and only reads state (never writes state)
        /// </summary>
        Const = 0x40000000,

        /// <summary>
        /// function must supply a _Validate implementation
        /// </summary>
        NetValidate = 0x80000000,

        AllFlags = 0xFFFFFFFF,

        // Combinations of flags.
        FuncInherit = Exec | Event | BlueprintCallable | BlueprintEvent | BlueprintAuthorityOnly | BlueprintCosmetic | Const,
        FuncOverrideMatch = Exec | Final | Static | Public | Protected | Private,
        NetFuncFlags = Net | NetReliable | NetServer | NetClient | NetMulticast,
        AccessSpecifiers = Public | Private | Protected,
    }
*/

/*
Started Generation [Dumper-7]!

Dumper-7 by me, you & him


Searching for GObjects...

Found FChunkedFixedUObjectArray GObjects at offset 0x9145170

Found 'FNamePool GNames' at offset 0x909EE80

Found FName::AppendString at Offset 0xF4B710

Off::UObject::Flags: 0x8
Off::UObject::Index: 0xC
Off::UObject::Class: 0x10
Off::UObject::Outer: 0x20
Off::UObject::Name: 0x18

Off::UStruct::Children: 0x48
Off::UField::Next: 0x28
Off::UStruct::SuperStruct: 0x40
Off::UStruct::Size: 0x58
Off::UStruct::MinAlignemnts: 0x5C
Off::UClass::CastFlags: 0xD8

Game uses FProperty system

Off::UStruct::ChildProperties: 0x50
Applaying fix to hardcoded offsets

Off::FField::Next: 0x18
Off::FField::Name: 0x20
Off::FField::Flags: 0x28
Off::UClass::ClassDefaultObject: 0x110
Off::UClass::ImplementedInterfaces: 0x1D8
Off::UEnum::Names: 0x40

Off::UFunction::FunctionFlags: 0xB0
Off::UFunction::ExecFunction: 0xD8

Off::Property::ElementSize: 0x34
Off::Property::ArrayDim: 0x30
Off::Property::Offset_Internal: 0x44
Off::Property::PropertyFlags: 0x38
UPropertySize: 0x70

Off::ArrayProperty::Inner: 0x78
Off::SetProperty::ElementProp: 0x70
Off::MapProperty::Base: 0x70

Off::InSDK::ULevel::Actors: 0x98

Off::InSDK::UDataTable::RowMap: 0x30


PE-Offset: 0x10FE060
PE-Index: 0x4D

GWorld-Offset: 0x92B0A30

Off::InSDK::Text::TextSize: 0x18
Off::InSDK::Text::TextDatOffset: 0x0
Off::InSDK::Text::InTextDataStringOffset: 0x28

GameName: OblivionRemastered
GameVersion: 5.3.2-233194+Test
*/

/*
__int64 __fastcall UWidget::execGetGameInstance(UWidget *this, __int64 a2, __int64 *a3)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 32) += *(_QWORD *)(a2 + 32) != 0i64;
  result = (*(__int64 (__fastcall **)(UWidget *))(*(_QWORD *)this + 0x188i64))(this); //GetWorld
  if ( result )
  {
    result = *(_QWORD *)(result + 0x1B8); //GetGameInstance
    *a3 = result;
  }
  else
  {
    *a3 = 0i64;
  }
  return result;
}


class UClass;
class FArchive;
struct FStructuredArchive {
    class FRecord {};
};
struct FObjectInstancingGraph;
struct FResourceSizeEx;
struct FObjectPreSaveRootContext;
struct FObjectPostSaveRootContext;
struct FObjectPreSaveContext;
struct FOutParmRec;
struct FFrame;
struct FPropertyChangedChainEvent;
struct FCustomPropertyConditionState;
struct FRepRecord;
class FFeedbackContext;
class FOutputDevice;
class ITargetPlatform;
class FString;
class FName;
struct FPrimaryAssetId;
class FProperty;
class FRestoreForUObjectOverwrite;
class FLifetimeProperty;
class UFunction;
enum class EDuplicateMode { Normal, PIE };
enum ERenameFlags {};
enum EObjectFlags {};

struct FAssetRegistryTag {
    enum ETagType {
        TT_Hidden,
        TT_Alphabetical,
        TT_Numerical,
        TT_Dimensional,
        TT_Chronological,
    };
    
    enum ETagDisplay {
        TD_None = 0,
        TD_Date = 1<<0,
        TD_Time = 1<<1,
        TD_InvariantTz = 1<<2,
        TD_Memory = 1<<3,
    };
    
    FName Name;
    FString Value;
    ETagType Type;
    unsigned int DisplayFlags;
};

#define UE_DEPRECATED(Version, Message)
#define COREUOBJECT_API

namespace UE { 
    namespace Net {
        class FFragmentRegistrationContext;
        enum class EFragmentRegistrationFlags : unsigned int;
    }
}

typedef wchar_t TCHAR;
typedef unsigned char uint8;
typedef int int32;
typedef unsigned int uint32;
typedef unsigned long long uint64;

template<typename T>
class TArray {};

template<typename Key, typename Value>
class TMap {};

class UObject {
    public:
        UObject();
        virtual ~UObject(); // 00
        virtual void RegisterDependencies(); // 08
	    virtual void DeferredRegister(UClass *UClassStaticClass, const TCHAR* PackageName, const TCHAR* Name); // 10
        virtual FName GetFNameForStatID() const; // 18
        virtual bool CanBeClusterRoot() const; // 20    
        virtual bool CanBeInCluster() const; // 28
        virtual void CreateCluster(); // 30
        virtual void OnClusterMarkedAsPendingKill(); // 38
        virtual FString GetDetailedInfoInternal() const; // 40
        virtual void PostInitProperties(); // 48
        virtual void PostReinitProperties(); // 50
        virtual void PostCDOContruct(); // 58
        virtual bool PreSaveRoot(const TCHAR* Filename); // 60
        virtual void PreSaveRoot(FObjectPreSaveRootContext ObjectSaveContext); // 68
        virtual void PostSaveRoot(bool bCleanupIsRequired); // 70
        virtual void PostSaveRoot(FObjectPostSaveRootContext ObjectSaveContext); // 78
        virtual void PreSave(const class ITargetPlatform* TargetPlatform); // 80
        virtual void PreSave(FObjectPreSaveContext SaveContext); // 88
        virtual bool ResolveSubobject(const TCHAR* SubObjectPath, UObject*& OutObject, bool bLoadIfExists); // 90
        virtual bool IsReadyForAsyncPostLoad() const; // 98
        virtual void PostLoad(); // A0
        virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph); // A8
        virtual void BeginDestroy(); // B0
        virtual bool IsReadyForFinishDestroy(); // B8
        virtual void FinishDestroy(); // C0
        virtual void Serialize(FArchive& Ar); // C8
        virtual void Serialize(FStructuredArchive::FRecord Record); // D0
        virtual void ShutdownAfterError(); // D8
        virtual void PostInterpChange(FProperty* PropertyThatChanged); // E0
        virtual void PostRename(UObject* OldOuter, const FName OldName); // E8
        virtual void PreDuplicate(class FObjectDuplicationParameters& DupParams); // F0
        virtual void PostDuplicate(bool bDuplicateForPIE); // F8
        virtual void PostDuplicate(EDuplicateMode DuplicateMode); // 100
        virtual bool NeedsLoadForClient() const; // 108
        virtual bool NeedsLoadForServer() const; // 110
        virtual bool NeedsLoadForTargetPlatform(const class ITargetPlatform* TargetPlatform) const; // 118
        virtual bool NeedsLoadForEditorGame() const; // 120
        virtual bool IsEditorOnly() const; // 128
        virtual bool HasNonEditorOnlyReferences() const; // 130
        virtual bool IsPostLoadThreadSafe() const; // 138
        virtual bool IsDestructionThreadSafe() const; // 140
        virtual void GetPreloadDependencies(TArray<UObject*>& OutDeps); // 148
        virtual void GetPrestreamPackages(TArray<UObject*>& OutPrestream); // 150
        virtual void ExportCustomProperties(FOutputDevice& Out, uint32 Indent); // 158
        virtual void ImportCustomProperties(const TCHAR* SourceText, FFeedbackContext* Warn); // 160
        virtual void PostEditImport(); // 168
        virtual void PostReloadConfig(class FProperty* PropertyThatWasLoaded); // 170
        virtual bool Rename(const TCHAR* NewName, UObject* NewOuter, ERenameFlags Flags); // 178
        virtual FString GetDesc(); // 180
        virtual class UWorld* GetWorld() const; // 188
        virtual bool GetNativePropertyValues(TMap<FString,FString>& out_PropertyValues, uint32 ExportFlags) const; // 190
        virtual void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize); // 198
        virtual FName GetExporterName(); // 1A0
        virtual FRestoreForUObjectOverwrite* GetRestoreForUObjectOverwrite(); // 1A8
        virtual bool AreNativePropertiesIdenticalTo(UObject* Other) const; // 1B0
        virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const; // 1B8
        virtual void GetExternalActorExtendedAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const; // 1C0
        virtual bool IsAsset() const; // 1C8
        virtual FPrimaryAssetId GetPrimaryAssetId() const; // 1D0
        virtual bool IsLocalizedResource() const; // 1D8
        virtual bool IsSafeForRootSet() const; // 1E0
        virtual void TagSubobjects(EObjectFlags NewFlags); // 1E8
        virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const; // 1F0
        virtual void GetReplicatedCustomConditionState(FCustomPropertyConditionState& OutActiveState) const; // 1F8
        virtual void RegisterReplicationFragments(UE::Net::FFragmentRegistrationContext& Context, UE::Net::EFragmentRegistrationFlags RegistrationFlags); // 200
        virtual bool IsNameStableForNetworking() const; // 208
        virtual bool IsFullNameStableForNetworking() const; // 210
        virtual bool IsSupportedForNetworking() const; // 218
        virtual void GetSubobjectsWithStableNamesForNetworking(TArray<UObject*>& ObjList); // 220
        virtual void PreNetReceive(); // 228
        virtual void PostNetReceive(); // 230
        virtual void PostRepNotifies(); // 238
        virtual void PreDestroyFromReplication(); // 240
        virtual void BuildSubobjectMapping(UObject* OtherObject, TMap<UObject*, UObject*>& ObjectMapping) const; // 248
        virtual const TCHAR* GetConfigOverridePlatform() const; // 250
        virtual void OverrideConfigSection(FString& SectionName); // 258
        virtual void OverridePerObjectConfigSection(FString& SectionName); // 260
        virtual void ProcessEvent(UFunction* Function, void* Parms); // 268
        virtual int32 GetFunctionCallspace(UFunction* Function, FFrame* Stack); // 270
        virtual bool CallRemoteFunction(UFunction* Function, void* Parms, struct FOutParmRec* OutParms, FFrame* Stack); // 278
        virtual bool ProcessConsoleExec(const TCHAR* Cmd, FOutputDevice& Ar, UObject* Executor); // 280
        virtual UClass* RegenerateClass(UClass* ClassToRegenerate, UObject* PreviousCDO); // 288
        virtual void MarkAsEditorOnlySubobject(); // 290
};


class UVisual : public UObject {
    public:
        virtual void ReleaseSlateResources(bool bReleaseChildren); // 298        
};

class UWidget : public UVisual {
    public:
        virtual void SetIsEnabled(bool bInIsEnabled); // 2A0
        virtual void SetVisibility(ESlateVisibility InVisibility); // 2A8
        virtual bool IsHovered() const; // 2B0
        virtual void RemoveFromParent(); // 2B8
        virtual APlayerController* GetOwningPlayer() const; // 2C0
        virtual ULocalPlayer* GetOwningLocalPlayer() const; // 2C8
        virtual void SynchronizeProperties(); // 2D0
        virtual void OnBindingChanged(const FName& Property); // 2D8
        virtual TSharedRef<SWidget> RebuildWidget(); // 2E0
        virtual void OnWidgetRebuilt(); // 2E8    
};

*/

/*



// Setup platform specific keys
#if PLATFORM_MAC
const FKey EKeys::Platform_Delete = EKeys::BackSpace;
#else
const FKey EKeys::Platform_Delete = EKeys::Delete;
#endif

// Ensure that the Gamepad_ names match those in GenericApplication.cpp
const FKey EKeys::Gamepad_Left2D("Gamepad_Left2D");
const FKey EKeys::Gamepad_LeftX("Gamepad_LeftX");
const FKey EKeys::Gamepad_LeftY("Gamepad_LeftY");
const FKey EKeys::Gamepad_Right2D("Gamepad_Right2D");
const FKey EKeys::Gamepad_RightX("Gamepad_RightX");
const FKey EKeys::Gamepad_RightY("Gamepad_RightY");
const FKey EKeys::Gamepad_LeftTriggerAxis("Gamepad_LeftTriggerAxis");
const FKey EKeys::Gamepad_RightTriggerAxis("Gamepad_RightTriggerAxis");

const FKey EKeys::Gamepad_LeftThumbstick("Gamepad_LeftThumbstick");
const FKey EKeys::Gamepad_RightThumbstick("Gamepad_RightThumbstick");
const FKey EKeys::Gamepad_Special_Left("Gamepad_Special_Left");
const FKey EKeys::Gamepad_Special_Left_X("Gamepad_Special_Left_X");
const FKey EKeys::Gamepad_Special_Left_Y("Gamepad_Special_Left_Y");
const FKey EKeys::Gamepad_Special_Right("Gamepad_Special_Right");
const FKey EKeys::Gamepad_FaceButton_Bottom("Gamepad_FaceButton_Bottom");
const FKey EKeys::Gamepad_FaceButton_Right("Gamepad_FaceButton_Right");
const FKey EKeys::Gamepad_FaceButton_Left("Gamepad_FaceButton_Left");
const FKey EKeys::Gamepad_FaceButton_Top("Gamepad_FaceButton_Top");
const FKey EKeys::Gamepad_LeftShoulder("Gamepad_LeftShoulder");
const FKey EKeys::Gamepad_RightShoulder("Gamepad_RightShoulder");
const FKey EKeys::Gamepad_LeftTrigger("Gamepad_LeftTrigger");
const FKey EKeys::Gamepad_RightTrigger("Gamepad_RightTrigger");
const FKey EKeys::Gamepad_DPad_Up("Gamepad_DPad_Up");
const FKey EKeys::Gamepad_DPad_Down("Gamepad_DPad_Down");
const FKey EKeys::Gamepad_DPad_Right("Gamepad_DPad_Right");
const FKey EKeys::Gamepad_DPad_Left("Gamepad_DPad_Left");

// Virtual key codes used for input axis button press/release emulation
const FKey EKeys::Gamepad_LeftStick_Up("Gamepad_LeftStick_Up");
const FKey EKeys::Gamepad_LeftStick_Down("Gamepad_LeftStick_Down");
const FKey EKeys::Gamepad_LeftStick_Right("Gamepad_LeftStick_Right");
const FKey EKeys::Gamepad_LeftStick_Left("Gamepad_LeftStick_Left");

const FKey EKeys::Gamepad_RightStick_Up("Gamepad_RightStick_Up");
const FKey EKeys::Gamepad_RightStick_Down("Gamepad_RightStick_Down");
const FKey EKeys::Gamepad_RightStick_Right("Gamepad_RightStick_Right");
const FKey EKeys::Gamepad_RightStick_Left("Gamepad_RightStick_Left");

// const FKey EKeys::Vector axes (FVector("Vector axes (FVector"); not float)
const FKey EKeys::Tilt("Tilt");
const FKey EKeys::RotationRate("RotationRate");
const FKey EKeys::Gravity("Gravity");
const FKey EKeys::Acceleration("Acceleration");
*/