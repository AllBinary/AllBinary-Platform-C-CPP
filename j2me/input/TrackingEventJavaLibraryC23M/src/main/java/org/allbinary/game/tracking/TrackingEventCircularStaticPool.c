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
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/util/event/AllBinaryEventCircularPool.h"

typedef struct TrackingEventCircularStaticPool TrackingEventCircularStaticPool;
struct TrackingEventCircularStaticPool {
    AllBinaryEventCircularPool* EVENT_POOL;
};

static TrackingEventCircularStaticPool* TrackingEventCircularStaticPool_instance;

TrackingEventCircularStaticPool* TrackingEventCircularStaticPool_new(void);
TrackingEventCircularStaticPool* TrackingEventCircularStaticPool_getInstance(void);
void TrackingEventCircularStaticPool_init(TrackingEventCircularStaticPool* this);
TrackingEvent* TrackingEventCircularStaticPool_getNextInstance(TrackingEventCircularStaticPool* this, AllBinaryLayer* layerInterface);

// Static fields with runtime initializers: call this once at startup
void TrackingEventCircularStaticPool_staticInit(void) {
    TrackingEventCircularStaticPool_instance = TrackingEventCircularStaticPool_new();
}

static void TrackingEventCircularStaticPool_initFields(TrackingEventCircularStaticPool* this) {
    this->EVENT_POOL = AllBinaryEventCircularPool_new(20);
}

void TrackingEventCircularStaticPool_init(TrackingEventCircularStaticPool* this) {
    TrackingEventCircularStaticPool_initFields(this);
}

TrackingEventCircularStaticPool* TrackingEventCircularStaticPool_new(void) {
    TrackingEventCircularStaticPool* this = calloc(1, sizeof(TrackingEventCircularStaticPool));
    TrackingEventCircularStaticPool_init(this);
    return this;
}


TrackingEventCircularStaticPool* TrackingEventCircularStaticPool_getInstance(void) {
        return TrackingEventCircularStaticPool_instance;
}


void TrackingEventCircularStaticPool_init(TrackingEventCircularStaticPool* this) {
        AllBinaryEventCircularPool_initAllBinaryEventCircularPool(this->EVENT_POOL, TrackingEventFactory_new());
}


// throws Exception
// synchronized
TrackingEvent* TrackingEventCircularStaticPool_getNextInstance(TrackingEventCircularStaticPool* this, AllBinaryLayer* layerInterface) {
        TrackingEvent* trackingEvent = ((TrackingEvent*) AllBinaryEventCircularPool_getNextInstance(this->EVENT_POOL));
        TrackingEvent_setLayerInterfaceForCircularStaticPool(trackingEvent, layerInterface);
        return trackingEvent;
}

