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
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/animation/NullIndexedAnimationFactory.h"
#include "org/allbinary/game/combat/damage/ExplosionResources.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/physics/movement/Movement.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/layer/weapon/WeaponLayer.h"

typedef struct SimpleWeaponLayer SimpleWeaponLayer;
struct SimpleWeaponLayer {
    WeaponLayer base;
};


SimpleWeaponLayer* SimpleWeaponLayer_new(const char* name, RemoteInfo* remoteInfo, int32_t multiPlayerType, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition);
Animation* SimpleWeaponLayer_createDestroyed(void);

void SimpleWeaponLayer_init(SimpleWeaponLayer* this, const char* name, RemoteInfo* remoteInfo, int32_t multiPlayerType, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition);


// throws Exception
Animation* SimpleWeaponLayer_createDestroyed(void) {
        return JAVA_CALL(FeaturedAnimationInterfaceFactoryInterfaceFactory_getProcedural(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), ExplosionResources_getInstance()->THIRD_EXPLOSION_RESOURCE), getInstanceAnimation, JAVA_CALL(NullIndexedAnimationFactory_getFactoryInstance(), getInstance, 0));
}


void SimpleWeaponLayer_init(SimpleWeaponLayer* this, const char* name, RemoteInfo* remoteInfo, int32_t multiPlayerType, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition) {
        WeaponLayer_init(&this->base, name, remoteInfo, multiPlayerType, movement, animationInterface, destroyedAnimationInterface, rectangle, viewPosition);
        SimpleWeaponLayer_setCollidableInferface(this, CollidableWeaponBehavior_new(true));
}

SimpleWeaponLayer* SimpleWeaponLayer_new(const char* name, RemoteInfo* remoteInfo, int32_t multiPlayerType, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition) {
    SimpleWeaponLayer* this = calloc(1, sizeof(SimpleWeaponLayer));
    SimpleWeaponLayer_init(this, name, remoteInfo, multiPlayerType, movement, animationInterface, destroyedAnimationInterface, rectangle, viewPosition);
    return this;
}

