#ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYERCIRCULARSTATICPOOL_H
#define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYERCIRCULARSTATICPOOL_H
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
// package org.allbinary.game.ag.layer.pickup.health

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct HealLayer HealLayer;
typedef struct HealthInterface HealthInterface;
typedef struct HealthInterfaceCompositeInterface HealthInterfaceCompositeInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerCircularPool AllBinaryLayerCircularPool;
typedef struct AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface;
#include "org/allbinary/layer/AllBinaryLayerCircularPool.h"

typedef struct HealLayerCircularStaticPool HealLayerCircularStaticPool;
struct HealLayerCircularStaticPool {
    AllBinaryLayerCircularPool base;
};


HealLayerCircularStaticPool* HealLayerCircularStaticPool_new(AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total);

void HealLayerCircularStaticPool_init(HealLayerCircularStaticPool* this, AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total);

void HealLayerCircularStaticPool_visit(HealLayerCircularStaticPool* this, AllBinaryLayer* sourceLayerInterface);
#define HealLayerCircularStaticPool_new2 HealLayerCircularStaticPool_new
#define HealLayerCircularStaticPool_init2 HealLayerCircularStaticPool_init
#ifndef HealLayerCircularStaticPool_initAllBinaryLayerCircularPool
#define HealLayerCircularStaticPool_initAllBinaryLayerCircularPool AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool
#endif
#ifndef HealLayerCircularStaticPool_getNextInstance
#define HealLayerCircularStaticPool_getNextInstance BaseCircularPool_getNextInstance
#endif
#ifndef HealLayerCircularStaticPool_getInstance
#define HealLayerCircularStaticPool_getInstance BaseCircularPool_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HealLayerCircularStaticPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HealLayerCircularStaticPool_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYERCIRCULARSTATICPOOL_H
