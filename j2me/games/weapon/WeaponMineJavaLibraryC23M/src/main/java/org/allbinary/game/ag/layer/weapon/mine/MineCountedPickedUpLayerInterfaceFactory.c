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
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/IconLayerFactory.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#include "org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct MineCountedPickedUpLayerInterfaceFactory MineCountedPickedUpLayerInterfaceFactory;
struct MineCountedPickedUpLayerInterfaceFactory {
    CountedPickedUpLayerInterfaceFactory base;
    WeaponLayerCircularPool* weaponLayerCircularStaticPool;
    WeaponProperties* weaponProperties;
    SmallIntegerSingletonFactory* smallIntegerSingletonFactory;
};

static PickedUpLayerInterfaceFactoryInterface* MineCountedPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface;

MineCountedPickedUpLayerInterfaceFactory* MineCountedPickedUpLayerInterfaceFactory_new(void);
void MineCountedPickedUpLayerInterfaceFactory_init(void);

void MineCountedPickedUpLayerInterfaceFactory_init(MineCountedPickedUpLayerInterfaceFactory* this);
PickedUpLayerInterfaceFactoryInterface* MineCountedPickedUpLayerInterfaceFactory_getInstance(void);
int32_t MineCountedPickedUpLayerInterfaceFactory_getTotal(MineCountedPickedUpLayerInterfaceFactory* this);
AllBinaryLayer* MineCountedPickedUpLayerInterfaceFactory_getNextInstance(MineCountedPickedUpLayerInterfaceFactory* this, ABHashtable* hashtable, int32_t x, int32_t y, int32_t z);

// Static fields with runtime initializers: call this once at startup
void MineCountedPickedUpLayerInterfaceFactory_staticInit(void) {
    MineCountedPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY;
}

static void MineCountedPickedUpLayerInterfaceFactory_initFields(MineCountedPickedUpLayerInterfaceFactory* this) {
    this->weaponLayerCircularStaticPool = MineLayerCircularStaticPool_getInstance();
    this->weaponProperties = WeaponProperties_new(-1LL, -1LL, 0, 8000, ((int16_t) 10));
    this->smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
}


// throws Exception
void MineCountedPickedUpLayerInterfaceFactory_init(void) {
        MineCountedPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = MineCountedPickedUpLayerInterfaceFactory_new();
}


void MineCountedPickedUpLayerInterfaceFactory_init(MineCountedPickedUpLayerInterfaceFactory* this) {
        CountedPickedUpLayerInterfaceFactory_init(&this->base, PickedUpLayerTypeFactory_getInstance()->MINE, IconLayerFactory_getInstance(JAVA_CALL(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), MineWeaponResources_getInstance()->DROP_ICON_RESOURCE), getInstance, 0), 10, 10), JAVA_CALL(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), MineWeaponResources_getInstance()->DROP_RESOURCE), getInstance, 0));
        MineCountedPickedUpLayerInterfaceFactory_initFields(this);
}

MineCountedPickedUpLayerInterfaceFactory* MineCountedPickedUpLayerInterfaceFactory_new(void) {
    MineCountedPickedUpLayerInterfaceFactory* this = calloc(1, sizeof(MineCountedPickedUpLayerInterfaceFactory));
    MineCountedPickedUpLayerInterfaceFactory_init(this);
    return this;
}


PickedUpLayerInterfaceFactoryInterface* MineCountedPickedUpLayerInterfaceFactory_getInstance(void) {
        return MineCountedPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface;
}


int32_t MineCountedPickedUpLayerInterfaceFactory_getTotal(MineCountedPickedUpLayerInterfaceFactory* this) {
        return 3;
}


// throws Exception
AllBinaryLayer* MineCountedPickedUpLayerInterfaceFactory_getNextInstance(MineCountedPickedUpLayerInterfaceFactory* this, ABHashtable* hashtable, int32_t x, int32_t y, int32_t z) {
        AllBinaryLayer* sourceLayerInterface = ((AllBinaryLayer*) ABHashtable_get(hashtable, ((Any*) SmallIntegerSingletonFactory_getAt(this->smallIntegerSingletonFactory, 0))));
        int32_t angle = ((int32_t) ABHashtable_get(hashtable, ((Any*) SmallIntegerSingletonFactory_getAt(this->smallIntegerSingletonFactory, 1))));
        ScoreableInterface* scoreableInterface = ((ScoreableInterface*) sourceLayerInterface);
        return WeaponLayerCircularPool_getInstanceWeaponLayer(this->weaponLayerCircularStaticPool, sourceLayerInterface, x, y, z, ((int32_t) Integer_intValue(angle)), 0, this->weaponProperties, scoreableInterface);
}

