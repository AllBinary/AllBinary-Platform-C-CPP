// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/weapon/mine/MineLayer.h"
#include "org/allbinary/ag/weapon/media/audio/DropWeaponSound.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/media/audio/SecondaryPlayerQueueFactory.h"
#include "org/allbinary/physics/movement/NoMovementFactory.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/view/event/ViewPositionEventHandler.h"
#include "org/allbinary/game/ag/layer/weapon/mine/MineWeaponResources.h"
#if __has_include("org/allbinary/physics/movement/NoMovementFactory.h")
#include "org/allbinary/physics/movement/NoMovementFactory.h"
#endif
#if __has_include("org/allbinary/game/ag/layer/weapon/mine/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/ag/layer/weapon/mine/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/ag/weapon/media/audio/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/ag/weapon/media/audio/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/weapon/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/weapon/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/multiplayer/layer/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/multiplayer/layer/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/graphics/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/graphics/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/graphics/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/graphics/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/layer/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/layer/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/media/audio/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/media/audio/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/physics/movement/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/physics/movement/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/view/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/view/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/view/event/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/view/event/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h")
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#endif
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif
#if __has_include("org/allbinary/game/ag/layer/weapon/mine/PlayerQueue.h")
#include "org/allbinary/game/ag/layer/weapon/mine/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/ag/weapon/media/audio/PlayerQueue.h")
#include "org/allbinary/ag/weapon/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/animation/PlayerQueue.h")
#include "org/allbinary/animation/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/layer/weapon/PlayerQueue.h")
#include "org/allbinary/game/layer/weapon/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/multiplayer/layer/PlayerQueue.h")
#include "org/allbinary/game/multiplayer/layer/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/PlayerQueue.h")
#include "org/allbinary/graphics/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/PlayerQueue.h")
#include "org/allbinary/graphics/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/layer/PlayerQueue.h")
#include "org/allbinary/layer/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/physics/movement/PlayerQueue.h")
#include "org/allbinary/physics/movement/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/view/PlayerQueue.h")
#include "org/allbinary/view/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/view/event/PlayerQueue.h")
#include "org/allbinary/view/event/PlayerQueue.h"
#endif


static const char* MineLayer_NAME = "MineLayer";






void MineLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MineLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MineLayer", "SimpleWeaponLayer");
    java_register_method("MineLayer", "initXYZ", (void*) MineLayer_initXYZ);
    java_register_method("MineLayer", "damage", (void*) MineLayer_damage);
    java_register_method("MineLayer", "getDamage", (void*) MineLayer_getDamage);
    java_register_method("MineLayer", "setDestroyed", (void*) MineLayer_setDestroyed);
}

static void MineLayer_initFields(MineLayer* this) {
    this->viewPositionEventHandler = ViewPositionEventHandler_getInstance();
}


void MineLayer_init(MineLayer* this, ViewPositionBase* viewPosition) {
    MineLayer_register();
        SimpleWeaponLayer_init(&this->base, MineLayer_NAME, (RemoteInfo_staticInit(), RemoteInfo_REMOTE_INFO), -1, NoMovementFactory_getMovmentInstance(NoMovementFactory_getInstance()), AnimationInterfaceFactoryInterface_getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), MineWeaponResources_getInstance()->base.RESOURCE), 0), SimpleWeaponLayer_createDestroyed(), Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, 10, 10), viewPosition);
        MineLayer_initFields(this);
}

MineLayer* MineLayer_new(ViewPositionBase* viewPosition) {
    MineLayer* this = java_object_alloc(sizeof(MineLayer), "MineLayer");
    MineLayer_init(this, viewPosition);
    return this;
}


void MineLayer_initXYZ(MineLayer* this, int32_t x, int32_t y, int32_t z) {
        AllBinaryLayer_setPosition(this, x + 5, y + 5, z);
        ViewPositionEventHandler_addListener(this->viewPositionEventHandler, ((AllBinaryLayer*) this));
        PlayerQueue_add(SecondaryPlayerQueueFactory_getInstance(), DropWeaponSound_getInstance());
}


void MineLayer_damage(MineLayer* this, int32_t damage, int32_t damageType) {
        this->base.base.totalDamage = WeaponLayer_getInitDamage(this) + 1;
}


int32_t MineLayer_getDamage(MineLayer* this, int32_t damageType) {
        WeaponLayer_getDamage((&this->base), damageType);
        return WeaponLayer_getInitDamage(this);
}


void MineLayer_setDestroyed(MineLayer* this, bool destroyed) {
        WeaponLayer_setDestroyed((&this->base), destroyed);
        if (WeaponLayer_isDestroyed(this)) {
            ViewPositionEventHandler_removeListener(this->viewPositionEventHandler, this);
        }
}

