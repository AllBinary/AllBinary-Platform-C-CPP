#ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSLAYERCIRCULARSTATICPOOL_H
#define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSLAYERCIRCULARSTATICPOOL_H
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
// package org.allbinary.game.ag.layer.pickup.points

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct PointsLayer PointsLayer;
typedef struct ScoreableInterface ScoreableInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerCircularPool AllBinaryLayerCircularPool;
typedef struct AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface;
#include "org/allbinary/layer/AllBinaryLayerCircularPool.h"

typedef struct PointsLayerCircularStaticPool PointsLayerCircularStaticPool;
struct PointsLayerCircularStaticPool {
    AllBinaryLayerCircularPool base;
};


PointsLayerCircularStaticPool* PointsLayerCircularStaticPool_new(AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total);

void PointsLayerCircularStaticPool_init(PointsLayerCircularStaticPool* this, AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total);

void PointsLayerCircularStaticPool_visit(PointsLayerCircularStaticPool* this, AllBinaryLayer* sourceLayerInterface);
#define PointsLayerCircularStaticPool_new2 PointsLayerCircularStaticPool_new
#define PointsLayerCircularStaticPool_init2 PointsLayerCircularStaticPool_init
#ifndef PointsLayerCircularStaticPool_initAllBinaryLayerCircularPool
#define PointsLayerCircularStaticPool_initAllBinaryLayerCircularPool AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool
#endif
#ifndef PointsLayerCircularStaticPool_getNextInstance
#define PointsLayerCircularStaticPool_getNextInstance BaseCircularPool_getNextInstance
#endif
#ifndef PointsLayerCircularStaticPool_getInstance
#define PointsLayerCircularStaticPool_getInstance BaseCircularPool_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PointsLayerCircularStaticPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PointsLayerCircularStaticPool_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSLAYERCIRCULARSTATICPOOL_H
