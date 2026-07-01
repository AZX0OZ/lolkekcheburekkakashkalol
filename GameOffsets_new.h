#pragma once
#include <cstdint>

namespace Offsets {
    // Global Pointers
    constexpr uintptr_t GWorld      = 0xa473a00;
    constexpr uintptr_t GObjects    = 0xa5b9eb8;
    constexpr uintptr_t GNames      = 0xa884440;
    // FNameXORKey
    constexpr uint8_t FNameXORKey_Value = 0x80;

    // UObject
    constexpr uintptr_t UObject_FNameID = 0x20;

    // Actor
    constexpr uintptr_t Actor_None = 0x0;

    // Character
    constexpr uintptr_t Character_LifeSpanHandle = 0x330;
    constexpr uintptr_t Character_LifeSpanPool = 0x33c;
    constexpr uintptr_t Character_NameProperty = 0x0;
    constexpr uintptr_t Character_None = 0x0;
    constexpr uintptr_t Character_OnPoolBeginPlay = 0x340;
    constexpr uintptr_t Character_OnPoolEndPlay = 0x350;
    constexpr uintptr_t Character_OwningPool = 0x320;
    constexpr uintptr_t Character_SharedPool = 0x328;
    constexpr uintptr_t Character_SpawnTimeSeconds = 0x338;
    constexpr uintptr_t Character_Spawned = 0x318;

    // GameInstance
    constexpr uintptr_t GameInstance_None = 0x0;

    // Level
    constexpr uintptr_t Level_None = 0x0;

    // Pawn
    constexpr uintptr_t Pawn_ArmorDamageReduction = 0x6c;
    constexpr uintptr_t Pawn_CritChance = 0x64;
    constexpr uintptr_t Pawn_CritMultiplier = 0x68;
    constexpr uintptr_t Pawn_Damage = 0x58;
    constexpr uintptr_t Pawn_DodgeChance = 0x70;
    constexpr uintptr_t Pawn_Health = 0x4c;
    constexpr uintptr_t Pawn_LifeSteal = 0x74;
    constexpr uintptr_t Pawn_Mana = 0x50;
    constexpr uintptr_t Pawn_MaxHealth = 0x48;
    constexpr uintptr_t Pawn_MaxMana = 0x54;
    constexpr uintptr_t Pawn_NameProperty = 0x0;
    constexpr uintptr_t Pawn_NoStackAttribute = 0x84;
    constexpr uintptr_t Pawn_None = 0x0;
    constexpr uintptr_t Pawn_PhysicalDamage = 0x60;
    constexpr uintptr_t Pawn_SpellDamage = 0x5c;
    constexpr uintptr_t Pawn_StackingAttribute1 = 0x7c;
    constexpr uintptr_t Pawn_StackingAttribute2 = 0x80;
    constexpr uintptr_t Pawn_Strength = 0x78;

    // PlayerCameraManager
    constexpr uintptr_t PlayerCameraManager_AlreadyBuyItemList = 0x108;
    constexpr uintptr_t PlayerCameraManager_AlreadyUseMoneyNum = 0x120;
    constexpr uintptr_t PlayerCameraManager_AlreadyUseTicketNum = 0x104;
    constexpr uintptr_t PlayerCameraManager_BlackStoreTicketNum = 0x100;
    constexpr uintptr_t PlayerCameraManager_CoinMoneyNum = 0x118;
    constexpr uintptr_t PlayerCameraManager_NameProperty = 0x0;
    constexpr uintptr_t PlayerCameraManager_None = 0x0;

    // PlayerController
    constexpr uintptr_t PlayerController_AssetUserData = 0x88;
    constexpr uintptr_t PlayerController_ComponentTags = 0x78;
    constexpr uintptr_t PlayerController_CreationMethod = 0xa0;
    constexpr uintptr_t PlayerController_MinTickInterval = 0xa4;
    constexpr uintptr_t PlayerController_NameProperty = 0x0;
    constexpr uintptr_t PlayerController_None = 0x0;
    constexpr uintptr_t PlayerController_OnComponentActivated = 0xa1;
    constexpr uintptr_t PlayerController_OnComponentDeactivated = 0xa2;
    constexpr uintptr_t PlayerController_PrimaryComponentTick = 0x38;
    constexpr uintptr_t PlayerController_TickRateHandlerUseRate = 0xf4;
    constexpr uintptr_t PlayerController_UCSModifiedProperties = 0xc0;
    constexpr uintptr_t PlayerController_UCSSerializationIndex = 0x98;
    constexpr uintptr_t PlayerController_bAutoActivate = 0x9d;
    constexpr uintptr_t PlayerController_bCanEverAffectNavigation = 0x9e;
    constexpr uintptr_t PlayerController_bEditableWhenInherited = 0x9e;
    constexpr uintptr_t PlayerController_bIsActive = 0x9e;
    constexpr uintptr_t PlayerController_bIsEditorOnly = 0x9e;
    constexpr uintptr_t PlayerController_bManualReplicates = 0xa8;
    constexpr uintptr_t PlayerController_bNetAddressable = 0x9c;
    constexpr uintptr_t PlayerController_bReplicates = 0x9c;

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
    constexpr uintptr_t SGCharacter_ = 0x0;
    constexpr uintptr_t SGCharacter_None = 0x0;
    constexpr uintptr_t SGCharacter_Services = 0x58;
    constexpr uintptr_t SGCharacter_bIgnoreRestartSelf = 0x68;

    // SceneComponent
    constexpr uintptr_t SceneComponent_AttachChildren = 0x110;
    constexpr uintptr_t SceneComponent_AttachParent = 0x108;
    constexpr uintptr_t SceneComponent_AttachSocketName = 0x130;
    constexpr uintptr_t SceneComponent_ClientAttachedChildren = 0x120;
    constexpr uintptr_t SceneComponent_ComponentVelocity = 0x190;
    constexpr uintptr_t SceneComponent_DetailMode = 0x1a0;
    constexpr uintptr_t SceneComponent_Mobility = 0x19f;
    constexpr uintptr_t SceneComponent_NameProperty = 0x0;
    constexpr uintptr_t SceneComponent_None = 0x0;
    constexpr uintptr_t SceneComponent_PhysicsVolume = 0x100;
    constexpr uintptr_t SceneComponent_PhysicsVolumeChangedDelegate = 0x1a1;
    constexpr uintptr_t SceneComponent_RelativeLocation = 0x16c;
    constexpr uintptr_t SceneComponent_RelativeRotation = 0x178;
    constexpr uintptr_t SceneComponent_RelativeScale3D = 0x184;
    constexpr uintptr_t SceneComponent_bAbsoluteLocation = 0x19c;
    constexpr uintptr_t SceneComponent_bAbsoluteRotation = 0x19c;
    constexpr uintptr_t SceneComponent_bAbsoluteScale = 0x19c;
    constexpr uintptr_t SceneComponent_bBoundsChangeTriggersStreamingDataRebuild = 0x19d;
    constexpr uintptr_t SceneComponent_bComponentToWorldUpdated = 0x19c;
    constexpr uintptr_t SceneComponent_bEnableCompDeferUpdateOverlapWhenEndScopeMove = 0x1a3;
    constexpr uintptr_t SceneComponent_bHiddenInGame = 0x19d;
    constexpr uintptr_t SceneComponent_bShouldBeAttached = 0x19c;
    constexpr uintptr_t SceneComponent_bShouldSnapLocationWhenAttached = 0x19c;
    constexpr uintptr_t SceneComponent_bShouldSnapRotationWhenAttached = 0x19d;
    constexpr uintptr_t SceneComponent_bShouldUpdatePhysicsVolume = 0x19d;
    constexpr uintptr_t SceneComponent_bUseAttachParentBound = 0x19d;
    constexpr uintptr_t SceneComponent_bVisible = 0x19c;

    // World
    constexpr uintptr_t World_None = 0x0;

    // Special Cases (Not always reflected)
    constexpr uintptr_t ULevel_ActorArray = 0x98;
    constexpr uintptr_t ULevel_ActorCount = 0xA0;
}
