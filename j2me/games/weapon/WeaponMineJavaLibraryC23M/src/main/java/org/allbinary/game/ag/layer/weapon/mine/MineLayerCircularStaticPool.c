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
#include "org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h"
#include "org/allbinary/view/ViewPositionFactoryInterface.h"

typedef struct MineLayerCircularStaticPool MineLayerCircularStaticPool;
struct MineLayerCircularStaticPool {
    char unused;
};

static WeaponLayerCircularPool* MineLayerCircularStaticPool_WEAPON_LAYER_CIRCULAR_STATIC_POOL;

MineLayerCircularStaticPool* MineLayerCircularStaticPool_new(void);
void MineLayerCircularStaticPool_init(ViewPositionFactoryInterface* viewPositionFactoryInterface);
WeaponLayerCircularPool* MineLayerCircularStaticPool_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void MineLayerCircularStaticPool_staticInit(void) {
    MineLayerCircularStaticPool_WEAPON_LAYER_CIRCULAR_STATIC_POOL = WeaponLayerCircularPool_new();
}

void MineLayerCircularStaticPool_init(MineLayerCircularStaticPool* this) {
}

MineLayerCircularStaticPool* MineLayerCircularStaticPool_new(void) {
    MineLayerCircularStaticPool* this = calloc(1, sizeof(MineLayerCircularStaticPool));
    MineLayerCircularStaticPool_init(this);
    return this;
}


// throws Exception
void MineLayerCircularStaticPool_init(ViewPositionFactoryInterface* viewPositionFactoryInterface) {
        MineCountedPickedUpLayerInterfaceFactory_init();
        JAVA_CALL(MineLayerCircularStaticPool_WEAPON_LAYER_CIRCULAR_STATIC_POOL, initAllBinaryLayerCircularPool, MineLayerFactory_new(viewPositionFactoryInterface), 20);
}


WeaponLayerCircularPool* MineLayerCircularStaticPool_getInstance(void) {
        return MineLayerCircularStaticPool_WEAPON_LAYER_CIRCULAR_STATIC_POOL;
}

