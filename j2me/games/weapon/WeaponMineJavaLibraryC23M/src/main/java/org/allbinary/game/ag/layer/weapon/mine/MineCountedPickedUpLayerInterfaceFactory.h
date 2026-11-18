#ifndef ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINECOUNTEDPICKEDUPLAYERINTERFACEFACTORY_H
#define ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINECOUNTEDPICKEDUPLAYERINTERFACEFACTORY_H
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
typedef struct MineLayerCircularStaticPool MineLayerCircularStaticPool;
typedef struct MineWeaponResources MineWeaponResources;
typedef struct FeaturedAnimationInterfaceFactoryInterfaceFactory FeaturedAnimationInterfaceFactoryInterfaceFactory;
typedef struct WeaponProperties WeaponProperties;
typedef struct CountedPickedUpLayerInterfaceFactory CountedPickedUpLayerInterfaceFactory;
typedef struct IconLayerFactory IconLayerFactory;
typedef struct PickedUpLayerInterfaceFactoryInterface PickedUpLayerInterfaceFactoryInterface;
typedef struct PickedUpLayerTypeFactory PickedUpLayerTypeFactory;
typedef struct WeaponLayerCircularPool WeaponLayerCircularPool;
typedef struct ScoreableInterface ScoreableInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct ABHashtable ABHashtable;
#if __has_include("org/allbinary/game/combat/weapon/WeaponProperties.h")
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#endif
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h")
#include "org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h"
#endif
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#include "java/lang/Integer.h"

typedef struct MineCountedPickedUpLayerInterfaceFactory MineCountedPickedUpLayerInterfaceFactory;
struct MineCountedPickedUpLayerInterfaceFactory {
    CountedPickedUpLayerInterfaceFactory base;
    WeaponLayerCircularPool* weaponLayerCircularStaticPool;
    WeaponProperties* weaponProperties;
    SmallIntegerSingletonFactory* smallIntegerSingletonFactory;
};


MineCountedPickedUpLayerInterfaceFactory* MineCountedPickedUpLayerInterfaceFactory_new(void);

void MineCountedPickedUpLayerInterfaceFactory_initMethod(void);

void MineCountedPickedUpLayerInterfaceFactory_init(MineCountedPickedUpLayerInterfaceFactory* this);

PickedUpLayerInterfaceFactoryInterface* MineCountedPickedUpLayerInterfaceFactory_getInstance(void);

int32_t MineCountedPickedUpLayerInterfaceFactory_getTotal(MineCountedPickedUpLayerInterfaceFactory* this);

AllBinaryLayer* MineCountedPickedUpLayerInterfaceFactory_getNextInstance(MineCountedPickedUpLayerInterfaceFactory* this, ABHashtable* hashtable, int32_t x, int32_t y, int32_t z);
#define MineCountedPickedUpLayerInterfaceFactory_new0 MineCountedPickedUpLayerInterfaceFactory_new
#define MineCountedPickedUpLayerInterfaceFactory_init0 MineCountedPickedUpLayerInterfaceFactory_init
#ifndef MineCountedPickedUpLayerInterfaceFactory_getId
#define MineCountedPickedUpLayerInterfaceFactory_getId CountedPickedUpLayerInterfaceFactory_getId
#endif
#ifndef MineCountedPickedUpLayerInterfaceFactory_getIconLayer
#define MineCountedPickedUpLayerInterfaceFactory_getIconLayer PickedUpLayerInterfaceFactory_getIconLayer
#endif
#ifndef MineCountedPickedUpLayerInterfaceFactory_getAnimationInterface
#define MineCountedPickedUpLayerInterfaceFactory_getAnimationInterface PickedUpLayerInterfaceFactory_getAnimationInterface
#endif
#ifndef MineCountedPickedUpLayerInterfaceFactory_getPickedUpLayerType
#define MineCountedPickedUpLayerInterfaceFactory_getPickedUpLayerType PickedUpLayerInterfaceFactory_getPickedUpLayerType
#endif
#ifndef MineCountedPickedUpLayerInterfaceFactory_getIconLayer
#define MineCountedPickedUpLayerInterfaceFactory_getIconLayer PickedUpLayerInterfaceFactoryBase_getIconLayer
#endif
#ifndef MineCountedPickedUpLayerInterfaceFactory_getAnimationInterface
#define MineCountedPickedUpLayerInterfaceFactory_getAnimationInterface PickedUpLayerInterfaceFactoryBase_getAnimationInterface
#endif
#ifndef MineCountedPickedUpLayerInterfaceFactory_getPickedUpLayerType
#define MineCountedPickedUpLayerInterfaceFactory_getPickedUpLayerType PickedUpLayerInterfaceFactoryBase_getPickedUpLayerType
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MineCountedPickedUpLayerInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MineCountedPickedUpLayerInterfaceFactory_register(void);

#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

#endif // ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINECOUNTEDPICKEDUPLAYERINTERFACEFACTORY_H
