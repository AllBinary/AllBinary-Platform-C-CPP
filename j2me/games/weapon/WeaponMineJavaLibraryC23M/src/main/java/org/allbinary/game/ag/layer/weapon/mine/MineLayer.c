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
// package org.allbinary.game.ag.layer.weapon.mine

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/ag/weapon/media/audio/DropWeaponSound.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/game/layer/weapon/SimpleWeaponLayer.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/media/audio/SecondaryPlayerQueueFactory.h"
#include "org/allbinary/physics/movement/NoMovementFactory.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/view/event/ViewPositionEventHandler.h"

typedef struct MineLayer MineLayer;
struct MineLayer {
    SimpleWeaponLayer base;
    ViewPositionEventHandler* viewPositionEventHandler;
};

static const char* MineLayer_NAME = "MineLayer";

MineLayer* MineLayer_new(ViewPositionBase* viewPosition);

void MineLayer_init(MineLayer* this, ViewPositionBase* viewPosition);
void MineLayer_initXYZ(MineLayer* this, int32_t x, int32_t y, int32_t z);
void MineLayer_damage(MineLayer* this, int32_t damage, int32_t damageType);
int32_t MineLayer_getDamage(MineLayer* this, int32_t damageType);
void MineLayer_setDestroyed(MineLayer* this, bool destroyed);

static void MineLayer_initFields(MineLayer* this) {
    this->viewPositionEventHandler = ViewPositionEventHandler_getInstance();
}


void MineLayer_init(MineLayer* this, ViewPositionBase* viewPosition) {
        SimpleWeaponLayer_init(&this->base, MineLayer_NAME, RemoteInfo_REMOTE_INFO, -1, NoMovementFactory_getMovmentInstance(NoMovementFactory_getInstance()), JAVA_CALL(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), MineWeaponResources_getInstance()->RESOURCE), getInstance, 0), SimpleWeaponLayer_createDestroyed(), Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, 10, 10), viewPosition);
        MineLayer_initFields(this);
}

MineLayer* MineLayer_new(ViewPositionBase* viewPosition) {
    MineLayer* this = calloc(1, sizeof(MineLayer));
    MineLayer_init(this, viewPosition);
    return this;
}


void MineLayer_initXYZ(MineLayer* this, int32_t x, int32_t y, int32_t z) {
        MineLayer_setPosition(this, x + 5, y + 5, z);
        ViewPositionEventHandler_addListener(this->viewPositionEventHandler, ((AllBinaryLayer*) this));
        SecondaryPlayerQueueFactory_add(SecondaryPlayerQueueFactory_getInstance(), DropWeaponSound_getInstance());
}


void MineLayer_damage(MineLayer* this, int32_t damage, int32_t damageType) {
        this->totalDamage = MineLayer_getInitDamage(this) + 1;
}


int32_t MineLayer_getDamage(MineLayer* this, int32_t damageType) {
        SimpleWeaponLayer_getDamage((&this->base), damageType);
        return MineLayer_getInitDamage(this);
}


void MineLayer_setDestroyed(MineLayer* this, bool destroyed) {
        SimpleWeaponLayer_setDestroyed((&this->base), destroyed);
        if (MineLayer_isDestroyed(this)) {
            ViewPositionEventHandler_removeListener(this->viewPositionEventHandler, this);
        }
}

