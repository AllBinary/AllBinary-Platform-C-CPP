#ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERCIRCULARPOOL_H
#define ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERCIRCULARPOOL_H
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
typedef struct WeaponLayer WeaponLayer;
typedef struct WeaponProperties WeaponProperties;
typedef struct ScoreableInterface ScoreableInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerCircularPool AllBinaryLayerCircularPool;
#include "org/allbinary/layer/AllBinaryLayerCircularPool.h"

typedef struct WeaponLayerCircularPool WeaponLayerCircularPool;
struct WeaponLayerCircularPool {
    AllBinaryLayerCircularPool base;
};


WeaponLayerCircularPool* WeaponLayerCircularPool_new(void);

void WeaponLayerCircularPool_init(WeaponLayerCircularPool* this);

WeaponLayer* WeaponLayerCircularPool_getInstanceWeaponLayer(WeaponLayerCircularPool* this, AllBinaryLayer* sourceLayerInterface, int32_t x, int32_t y, int32_t z, int32_t angle, int32_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreable);
#define WeaponLayerCircularPool_new0 WeaponLayerCircularPool_new
#define WeaponLayerCircularPool_init0 WeaponLayerCircularPool_init
#ifndef WeaponLayerCircularPool_initAllBinaryLayerCircularPool
#define WeaponLayerCircularPool_initAllBinaryLayerCircularPool AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool
#endif
#ifndef WeaponLayerCircularPool_getNextInstance
#define WeaponLayerCircularPool_getNextInstance BaseCircularPool_getNextInstance
#endif
#ifndef WeaponLayerCircularPool_getInstance
#define WeaponLayerCircularPool_getInstance BaseCircularPool_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void WeaponLayerCircularPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void WeaponLayerCircularPool_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERCIRCULARPOOL_H
