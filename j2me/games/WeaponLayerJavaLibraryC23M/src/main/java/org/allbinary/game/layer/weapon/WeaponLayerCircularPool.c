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
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerCircularPool.h"

typedef struct WeaponLayerCircularPool WeaponLayerCircularPool;
struct WeaponLayerCircularPool {
    AllBinaryLayerCircularPool base;
};


WeaponLayerCircularPool* WeaponLayerCircularPool_new(void);

void WeaponLayerCircularPool_init(WeaponLayerCircularPool* this);
WeaponLayer* WeaponLayerCircularPool_getInstanceWeaponLayer(WeaponLayerCircularPool* this, AllBinaryLayer* sourceLayerInterface, int32_t x, int32_t y, int32_t z, int32_t angle, int32_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreable);


void WeaponLayerCircularPool_init(WeaponLayerCircularPool* this) {
    AllBinaryLayerCircularPool_init(&this->base);
}

WeaponLayerCircularPool* WeaponLayerCircularPool_new(void) {
    WeaponLayerCircularPool* this = calloc(1, sizeof(WeaponLayerCircularPool));
    WeaponLayerCircularPool_init(this);
    return this;
}


// throws Exception
WeaponLayer* WeaponLayerCircularPool_getInstanceWeaponLayer(WeaponLayerCircularPool* this, AllBinaryLayer* sourceLayerInterface, int32_t x, int32_t y, int32_t z, int32_t angle, int32_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreable) {
        WeaponLayer* weaponLayer = ((WeaponLayer*) AllBinaryLayerCircularPool_getNextInstance((&this->base)));
        WeaponLayer_initXYZ(weaponLayer, x, y, z);
        WeaponLayer_init(weaponLayer, sourceLayerInterface, angle, otherAngle, weaponProperties, scoreable);
        return weaponLayer;
}

