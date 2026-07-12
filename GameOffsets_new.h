#pragma once
#include <cstdint>

namespace Offsets {
    // Global Pointers
    constexpr uintptr_t GWorld      = 0xadb3360;
    constexpr uintptr_t GObjects    = 0xaef7e78;
    constexpr uintptr_t GNames      = 0xb4e2fc0;
    // FNameXORKey
    constexpr uint8_t FNameXORKey_Value = 0x12;

    // UObject
    constexpr uintptr_t UObject_FNameID = 0x20;

    // Actor
    constexpr uintptr_t Actor_None = 0x0;

    // Character
    constexpr uintptr_t Character_NameProperty = 0x0;
    constexpr uintptr_t Character_None = 0x0;

    // GameInstance
    constexpr uintptr_t GameInstance_None = 0x0;

    // Level
    constexpr uintptr_t Level_None = 0x0;

    // Pawn
    constexpr uintptr_t Pawn_Canvas = 0x370;
    constexpr uintptr_t Pawn_CurrentTargetIndex = 0x324;
    constexpr uintptr_t Pawn_DebugCanvas = 0x378;
    constexpr uintptr_t Pawn_DebugDisplay = 0x350;
    constexpr uintptr_t Pawn_DebugTextList = 0x380;
    constexpr uintptr_t Pawn_NameProperty = 0x0;
    constexpr uintptr_t Pawn_None = 0x0;
    constexpr uintptr_t Pawn_PlayerOwner = 0x318;
    constexpr uintptr_t Pawn_PostRenderedActors = 0x330;
    constexpr uintptr_t Pawn_ShowDebugTargetActor = 0x398;
    constexpr uintptr_t Pawn_ShowDebugTargetDesiredClass = 0x390;
    constexpr uintptr_t Pawn_ToggledDebugCategories = 0x360;
    constexpr uintptr_t Pawn_bEnableDebugTextShadow = 0x328;
    constexpr uintptr_t Pawn_bLostFocusPaused = 0x320;
    constexpr uintptr_t Pawn_bShowDebugInfo = 0x320;
    constexpr uintptr_t Pawn_bShowHUD = 0x320;
    constexpr uintptr_t Pawn_bShowHitBoxDebugInfo = 0x328;
    constexpr uintptr_t Pawn_bShowOverlays = 0x328;

    // PlayerCameraManager
    constexpr uintptr_t PlayerCameraManager_AlreadyBuyItemList = 0x108;
    constexpr uintptr_t PlayerCameraManager_AlreadyUseMoneyNum = 0x120;
    constexpr uintptr_t PlayerCameraManager_AlreadyUseTicketNum = 0x104;
    constexpr uintptr_t PlayerCameraManager_BlackStoreTicketNum = 0x100;
    constexpr uintptr_t PlayerCameraManager_CoinMoneyNum = 0x118;
    constexpr uintptr_t PlayerCameraManager_NameProperty = 0x0;
    constexpr uintptr_t PlayerCameraManager_None = 0x0;
    constexpr uintptr_t PlayerCameraManager_SupplyStationUsedBuyTimes = 0x128;

    // PlayerController
    constexpr uintptr_t PlayerController_ImportKeyField = 0x88;
    constexpr uintptr_t PlayerController_NameProperty = 0x0;
    constexpr uintptr_t PlayerController_None = 0x0;
    constexpr uintptr_t PlayerController_RowStruct = 0x28;
    constexpr uintptr_t PlayerController_bIgnoreExtraFields = 0x80;
    constexpr uintptr_t PlayerController_bIgnoreMissingFields = 0x80;
    constexpr uintptr_t PlayerController_bStripFromClientBuilds = 0x80;

    // PlayerState
    constexpr uintptr_t PlayerState_AssetUserData = 0x88;
    constexpr uintptr_t PlayerState_ComponentTags = 0x78;
    constexpr uintptr_t PlayerState_CreationMethod = 0xa0;
    constexpr uintptr_t PlayerState_MinTickInterval = 0xa4;
    constexpr uintptr_t PlayerState_NameProperty = 0x0;
    constexpr uintptr_t PlayerState_None = 0x0;
    constexpr uintptr_t PlayerState_OnComponentActivated = 0xa1;
    constexpr uintptr_t PlayerState_OnComponentDeactivated = 0xa2;
    constexpr uintptr_t PlayerState_PrimaryComponentTick = 0x38;
    constexpr uintptr_t PlayerState_TickRateHandlerUseRate = 0xf4;
    constexpr uintptr_t PlayerState_UCSModifiedProperties = 0xc0;
    constexpr uintptr_t PlayerState_UCSSerializationIndex = 0x98;
    constexpr uintptr_t PlayerState_bAutoActivate = 0x9d;
    constexpr uintptr_t PlayerState_bCanEverAffectNavigation = 0x9e;
    constexpr uintptr_t PlayerState_bEditableWhenInherited = 0x9e;
    constexpr uintptr_t PlayerState_bIsActive = 0x9e;
    constexpr uintptr_t PlayerState_bIsEditorOnly = 0x9e;
    constexpr uintptr_t PlayerState_bManualReplicates = 0xa8;
    constexpr uintptr_t PlayerState_bNetAddressable = 0x9c;
    constexpr uintptr_t PlayerState_bReplicates = 0x9c;

    // SGCharacter
    constexpr uintptr_t SGCharacter_None = 0x0;
    constexpr uintptr_t SGCharacter_zyObjectProperty?ySoftObjectProperty?~Int64Property}+~Int32Property}5~Int16Property}W~Int8Property?~UInt64Proper = 0x0;

    // SceneComponent
    constexpr uintptr_t SceneComponent_AttachChildren = 0x110;
    constexpr uintptr_t SceneComponent_AttachParent = 0x108;
    constexpr uintptr_t SceneComponent_AttachSocketName = 0x130;
    constexpr uintptr_t SceneComponent_ClientAttachedChildren = 0x120;
    constexpr uintptr_t SceneComponent_ComponentToWorld_ACE = 0x220;
    constexpr uintptr_t SceneComponent_ComponentVelocity = 0x198;
    constexpr uintptr_t SceneComponent_DetailMode = 0x1a8;
    constexpr uintptr_t SceneComponent_Mobility = 0x1a7;
    constexpr uintptr_t SceneComponent_NameProperty = 0x0;
    constexpr uintptr_t SceneComponent_None = 0x0;
    constexpr uintptr_t SceneComponent_PhysicsVolume = 0x100;
    constexpr uintptr_t SceneComponent_PhysicsVolumeChangedDelegate = 0x1a9;
    constexpr uintptr_t SceneComponent_RelativeLocation_ACE = 0x170;
    constexpr uintptr_t SceneComponent_RelativeRotation = 0x180;
    constexpr uintptr_t SceneComponent_RelativeScale3D = 0x18c;
    constexpr uintptr_t SceneComponent_bAbsoluteLocation = 0x1a4;
    constexpr uintptr_t SceneComponent_bAbsoluteRotation = 0x1a4;
    constexpr uintptr_t SceneComponent_bAbsoluteScale = 0x1a4;
    constexpr uintptr_t SceneComponent_bBoundsChangeTriggersStreamingDataRebuild = 0x1a5;
    constexpr uintptr_t SceneComponent_bComponentToWorldUpdated = 0x1a4;
    constexpr uintptr_t SceneComponent_bEnableCompDeferUpdateOverlapWhenEndScopeMove = 0x1ab;
    constexpr uintptr_t SceneComponent_bHiddenInGame = 0x1a5;
    constexpr uintptr_t SceneComponent_bShouldBeAttached = 0x1a4;
    constexpr uintptr_t SceneComponent_bShouldSnapLocationWhenAttached = 0x1a4;
    constexpr uintptr_t SceneComponent_bShouldSnapRotationWhenAttached = 0x1a5;
    constexpr uintptr_t SceneComponent_bShouldUpdatePhysicsVolume = 0x1a5;
    constexpr uintptr_t SceneComponent_bUseAttachParentBound = 0x1a5;
    constexpr uintptr_t SceneComponent_bVisible = 0x1a4;

    // World
    constexpr uintptr_t World_None = 0x0;

    // Special Cases (Not always reflected)
    constexpr uintptr_t ULevel_ActorArray = 0x98;
    constexpr uintptr_t ULevel_ActorCount = 0xA0;
}
