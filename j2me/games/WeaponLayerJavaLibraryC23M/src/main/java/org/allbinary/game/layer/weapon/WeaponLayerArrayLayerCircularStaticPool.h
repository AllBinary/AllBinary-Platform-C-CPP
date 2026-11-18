#ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERARRAYLAYERCIRCULARSTATICPOOL_H
#define ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERARRAYLAYERCIRCULARSTATICPOOL_H
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
typedef struct CircularIndexUtil CircularIndexUtil;
#if __has_include("org/allbinary/util/CircularIndexUtil.h")
#include "org/allbinary/util/CircularIndexUtil.h"
#endif
#if __has_include("org/allbinary/game/layer/weapon/WeaponLayer.h")
#include "org/allbinary/game/layer/weapon/WeaponLayer.h"
#endif

typedef struct WeaponLayerArrayLayerCircularStaticPool WeaponLayerArrayLayerCircularStaticPool;
struct WeaponLayerArrayLayerCircularStaticPool {
    int32_t MAX;
    CircularIndexUtil* circularIndexUtil;
    WeaponLayer*** WEAPONLAYER_ARRAY;
    WeaponLayer*** TWO_WEAPONLAYER_ARRAY;
    WeaponLayer*** THREE_WEAPONLAYER_ARRAY;
};


WeaponLayerArrayLayerCircularStaticPool* WeaponLayerArrayLayerCircularStaticPool_new(void);
void WeaponLayerArrayLayerCircularStaticPool_init(WeaponLayerArrayLayerCircularStaticPool* this);

WeaponLayerArrayLayerCircularStaticPool* WeaponLayerArrayLayerCircularStaticPool_getInstance(void);

void WeaponLayerArrayLayerCircularStaticPool_initMethod(WeaponLayerArrayLayerCircularStaticPool* this);


WeaponLayer** WeaponLayerArrayLayerCircularStaticPool_getInstanceArray(WeaponLayerArrayLayerCircularStaticPool* this, int32_t size);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void WeaponLayerArrayLayerCircularStaticPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void WeaponLayerArrayLayerCircularStaticPool_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYERARRAYLAYERCIRCULARSTATICPOOL_H
