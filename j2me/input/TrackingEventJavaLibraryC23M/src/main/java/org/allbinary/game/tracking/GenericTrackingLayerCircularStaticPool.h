#ifndef ORG_ALLBINARY_GAME_TRACKING_GENERICTRACKINGLAYERCIRCULARSTATICPOOL_H
#define ORG_ALLBINARY_GAME_TRACKING_GENERICTRACKINGLAYERCIRCULARSTATICPOOL_H
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
// package org.allbinary.game.tracking

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryLayerCircularPool AllBinaryLayerCircularPool;
#include "org/allbinary/layer/AllBinaryLayerCircularPool.h"

typedef struct GenericTrackingLayerCircularStaticPool GenericTrackingLayerCircularStaticPool;
struct GenericTrackingLayerCircularStaticPool {
    AllBinaryLayerCircularPool base;
};


GenericTrackingLayerCircularStaticPool* GenericTrackingLayerCircularStaticPool_new(void);

void GenericTrackingLayerCircularStaticPool_init(GenericTrackingLayerCircularStaticPool* this);

GenericTrackingLayerCircularStaticPool* GenericTrackingLayerCircularStaticPool_getInstance(void);
#define GenericTrackingLayerCircularStaticPool_new0 GenericTrackingLayerCircularStaticPool_new
#define GenericTrackingLayerCircularStaticPool_init0 GenericTrackingLayerCircularStaticPool_init
#ifndef GenericTrackingLayerCircularStaticPool_initAllBinaryLayerCircularPool
#define GenericTrackingLayerCircularStaticPool_initAllBinaryLayerCircularPool AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool
#endif
#ifndef GenericTrackingLayerCircularStaticPool_getNextInstance
#define GenericTrackingLayerCircularStaticPool_getNextInstance BaseCircularPool_getNextInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GenericTrackingLayerCircularStaticPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GenericTrackingLayerCircularStaticPool_register(void);


#endif // ORG_ALLBINARY_GAME_TRACKING_GENERICTRACKINGLAYERCIRCULARSTATICPOOL_H
