/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.layer.weapon

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/physics/movement/Movement.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/layer/weapon/WeaponLayer.h"

typedef struct DamageWeaponLayer DamageWeaponLayer;
struct DamageWeaponLayer {
    WeaponLayer base;
};


DamageWeaponLayer* DamageWeaponLayer_new(const char* name, RemoteInfo* remoteInfo, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition, const char* username, int32_t actorSessionId, int32_t id, int32_t multiPlayerType);

void DamageWeaponLayer_init(DamageWeaponLayer* this, const char* name, RemoteInfo* remoteInfo, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition, const char* username, int32_t actorSessionId, int32_t id, int32_t multiPlayerType);


void DamageWeaponLayer_init(DamageWeaponLayer* this, const char* name, RemoteInfo* remoteInfo, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition, const char* username, int32_t actorSessionId, int32_t id, int32_t multiPlayerType) {
        WeaponLayer_init(&this->base, name, remoteInfo, multiPlayerType, movement, animationInterface, destroyedAnimationInterface, rectangle, viewPosition);
        DamageWeaponLayer_setCollidableInferface(this, CollidableDamageWeaponBehavior_new(true));
}

DamageWeaponLayer* DamageWeaponLayer_new(const char* name, RemoteInfo* remoteInfo, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition, const char* username, int32_t actorSessionId, int32_t id, int32_t multiPlayerType) {
    DamageWeaponLayer* this = calloc(1, sizeof(DamageWeaponLayer));
    DamageWeaponLayer_init(this, name, remoteInfo, movement, animationInterface, destroyedAnimationInterface, rectangle, viewPosition, username, actorSessionId, id, multiPlayerType);
    return this;
}

