#ifndef ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTCIRCULARSTATICPOOL_H
#define ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTCIRCULARSTATICPOOL_H
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
typedef struct TrackingEventFactory TrackingEventFactory;
typedef struct TrackingEvent TrackingEvent;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryEventCircularPool AllBinaryEventCircularPool;
#if __has_include("org/allbinary/logic/util/event/AllBinaryEventCircularPool.h")
#include "org/allbinary/logic/util/event/AllBinaryEventCircularPool.h"
#endif

typedef struct TrackingEventCircularStaticPool TrackingEventCircularStaticPool;
struct TrackingEventCircularStaticPool {
    AllBinaryEventCircularPool* EVENT_POOL;
};


TrackingEventCircularStaticPool* TrackingEventCircularStaticPool_new(void);
void TrackingEventCircularStaticPool_init(TrackingEventCircularStaticPool* this);

TrackingEventCircularStaticPool* TrackingEventCircularStaticPool_getInstance(void);

void TrackingEventCircularStaticPool_initMethod(TrackingEventCircularStaticPool* this);

TrackingEvent* TrackingEventCircularStaticPool_getNextInstance(TrackingEventCircularStaticPool* this, AllBinaryLayer* layerInterface);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TrackingEventCircularStaticPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TrackingEventCircularStaticPool_register(void);


#endif // ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENTCIRCULARSTATICPOOL_H
