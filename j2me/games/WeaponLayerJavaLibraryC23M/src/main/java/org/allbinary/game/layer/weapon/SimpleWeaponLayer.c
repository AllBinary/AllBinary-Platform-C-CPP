// Generated Code Do Not Modify
#include "org/allbinary/game/layer/weapon/SimpleWeaponLayer.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/animation/NullIndexedAnimationFactory.h"
#include "org/allbinary/game/combat/damage/ExplosionResources.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/physics/movement/Movement.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/layer/weapon/WeaponLayer.h"
#include "org/allbinary/game/layer/weapon/CollidableWeaponBehavior.h"
#if __has_include("org/allbinary/game/layer/weapon/ProceduralAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/weapon/ProceduralAnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/combat/damage/ProceduralAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/combat/damage/ProceduralAnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/multiplayer/layer/ProceduralAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/multiplayer/layer/ProceduralAnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/graphics/ProceduralAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/graphics/ProceduralAnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/physics/movement/ProceduralAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/physics/movement/ProceduralAnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/view/ProceduralAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/view/ProceduralAnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h")
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#endif
#if __has_include("org/allbinary/game/combat/damage/ExplosionResources.h")
#include "org/allbinary/game/combat/damage/ExplosionResources.h"
#endif
#if __has_include("org/allbinary/animation/NullIndexedAnimationFactory.h")
#include "org/allbinary/animation/NullIndexedAnimationFactory.h"
#endif





void SimpleWeaponLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SimpleWeaponLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SimpleWeaponLayer", "WeaponLayer");
}


// throws Exception
Animation* SimpleWeaponLayer_createDestroyed(void) {
        return ProceduralAnimationInterfaceFactoryInterface_getInstanceAnimation(FeaturedAnimationInterfaceFactoryInterfaceFactory_getProcedural(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), ExplosionResources_getInstance()->THIRD_EXPLOSION_RESOURCE), NullIndexedAnimationFactory_getInstance(NullIndexedAnimationFactory_getFactoryInstance(), 0));
}


void SimpleWeaponLayer_init(SimpleWeaponLayer* this, const char* name, RemoteInfo* remoteInfo, int32_t multiPlayerType, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition) {
    SimpleWeaponLayer_register();
        WeaponLayer_init(&this->base, name, remoteInfo, multiPlayerType, movement, animationInterface, destroyedAnimationInterface, rectangle, viewPosition);
        WeaponLayer_setCollidableInferface(this, CollidableWeaponBehavior_new(true));
}

SimpleWeaponLayer* SimpleWeaponLayer_new(const char* name, RemoteInfo* remoteInfo, int32_t multiPlayerType, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition) {
    SimpleWeaponLayer* this = java_object_alloc(sizeof(SimpleWeaponLayer), "SimpleWeaponLayer");
    SimpleWeaponLayer_init(this, name, remoteInfo, multiPlayerType, movement, animationInterface, destroyedAnimationInterface, rectangle, viewPosition);
    return this;
}

