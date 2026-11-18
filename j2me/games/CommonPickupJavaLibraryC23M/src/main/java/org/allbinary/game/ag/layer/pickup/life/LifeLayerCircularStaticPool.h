#ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFELAYERCIRCULARSTATICPOOL_H
#define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFELAYERCIRCULARSTATICPOOL_H
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
// package org.allbinary.game.ag.layer.pickup.life

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct LifeLayer LifeLayer;
typedef struct Life Life;
typedef struct LifeInterfaceCompositeInterface LifeInterfaceCompositeInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerCircularPool AllBinaryLayerCircularPool;
typedef struct AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface;
#include "org/allbinary/layer/AllBinaryLayerCircularPool.h"

typedef struct LifeLayerCircularStaticPool LifeLayerCircularStaticPool;
struct LifeLayerCircularStaticPool {
    AllBinaryLayerCircularPool base;
};


LifeLayerCircularStaticPool* LifeLayerCircularStaticPool_new(AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total);

void LifeLayerCircularStaticPool_init(LifeLayerCircularStaticPool* this, AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total);

void LifeLayerCircularStaticPool_visit(LifeLayerCircularStaticPool* this, AllBinaryLayer* sourceLayerInterface);
#define LifeLayerCircularStaticPool_new2 LifeLayerCircularStaticPool_new
#define LifeLayerCircularStaticPool_init2 LifeLayerCircularStaticPool_init
#ifndef LifeLayerCircularStaticPool_initAllBinaryLayerCircularPool
#define LifeLayerCircularStaticPool_initAllBinaryLayerCircularPool AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool
#endif
#ifndef LifeLayerCircularStaticPool_getNextInstance
#define LifeLayerCircularStaticPool_getNextInstance BaseCircularPool_getNextInstance
#endif
#ifndef LifeLayerCircularStaticPool_getInstance
#define LifeLayerCircularStaticPool_getInstance BaseCircularPool_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LifeLayerCircularStaticPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LifeLayerCircularStaticPool_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFELAYERCIRCULARSTATICPOOL_H
