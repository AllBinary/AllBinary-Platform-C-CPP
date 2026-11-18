#ifndef ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYERCIRCULARSTATICPOOL_H
#define ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYERCIRCULARSTATICPOOL_H
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
typedef struct MineCountedPickedUpLayerInterfaceFactory MineCountedPickedUpLayerInterfaceFactory;
typedef struct MineLayerFactory MineLayerFactory;
typedef struct WeaponLayerCircularPool WeaponLayerCircularPool;
typedef struct ViewPositionFactoryInterface ViewPositionFactoryInterface;
#if __has_include("org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h")
#include "org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h"
#endif

typedef struct MineLayerCircularStaticPool MineLayerCircularStaticPool;
struct MineLayerCircularStaticPool {
    char unused;
};


MineLayerCircularStaticPool* MineLayerCircularStaticPool_new(void);
void MineLayerCircularStaticPool_init(MineLayerCircularStaticPool* this);

void MineLayerCircularStaticPool_initMethod(ViewPositionFactoryInterface* viewPositionFactoryInterface);

WeaponLayerCircularPool* MineLayerCircularStaticPool_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MineLayerCircularStaticPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MineLayerCircularStaticPool_register(void);

#if __has_include("org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h")
#include "org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h"
#endif

#endif // ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYERCIRCULARSTATICPOOL_H
