// Generated Code Do Not Modify
#include "org/allbinary/game/layer/weapon/DamageWeaponLayer.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/physics/movement/Movement.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/layer/weapon/WeaponLayer.h"
#include "org/allbinary/game/layer/weapon/CollidableDamageWeaponBehavior.h"




void DamageWeaponLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DamageWeaponLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DamageWeaponLayer", "WeaponLayer");
}


void DamageWeaponLayer_init(DamageWeaponLayer* this, const char* name, RemoteInfo* remoteInfo, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition, const char* username, int32_t actorSessionId, int32_t id, int32_t multiPlayerType) {
    DamageWeaponLayer_register();
        WeaponLayer_init(&this->base, name, remoteInfo, multiPlayerType, movement, animationInterface, destroyedAnimationInterface, rectangle, viewPosition);
        WeaponLayer_setCollidableInferface(this, CollidableDamageWeaponBehavior_new(true));
}

DamageWeaponLayer* DamageWeaponLayer_new(const char* name, RemoteInfo* remoteInfo, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition, const char* username, int32_t actorSessionId, int32_t id, int32_t multiPlayerType) {
    DamageWeaponLayer* this = java_object_alloc(sizeof(DamageWeaponLayer), "DamageWeaponLayer");
    DamageWeaponLayer_init(this, name, remoteInfo, movement, animationInterface, destroyedAnimationInterface, rectangle, viewPosition, username, actorSessionId, id, multiPlayerType);
    return this;
}

