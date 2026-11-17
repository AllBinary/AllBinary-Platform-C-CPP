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
// package org.allbinary.game.terrain

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/util/event/AllBinaryEventCircularPool.h"

typedef struct TerrainEventCircularStaticPool TerrainEventCircularStaticPool;
struct TerrainEventCircularStaticPool {
    AllBinaryEventCircularPool* EVENT_POOL;
};

static TerrainEventCircularStaticPool* TerrainEventCircularStaticPool_instance;

TerrainEventCircularStaticPool* TerrainEventCircularStaticPool_new(void);
TerrainEventCircularStaticPool* TerrainEventCircularStaticPool_getInstance(void);
void TerrainEventCircularStaticPool_init(TerrainEventCircularStaticPool* this);
TerrainEvent* TerrainEventCircularStaticPool_getNext(TerrainEventCircularStaticPool* this, BasicTerrainInfo* basicTerrainInfo);

// Static fields with runtime initializers: call this once at startup
void TerrainEventCircularStaticPool_staticInit(void) {
    TerrainEventCircularStaticPool_instance = TerrainEventCircularStaticPool_new();
}

static void TerrainEventCircularStaticPool_initFields(TerrainEventCircularStaticPool* this) {
    this->EVENT_POOL = AllBinaryEventCircularPool_new(20);
}

void TerrainEventCircularStaticPool_init(TerrainEventCircularStaticPool* this) {
    TerrainEventCircularStaticPool_initFields(this);
}

TerrainEventCircularStaticPool* TerrainEventCircularStaticPool_new(void) {
    TerrainEventCircularStaticPool* this = calloc(1, sizeof(TerrainEventCircularStaticPool));
    TerrainEventCircularStaticPool_init(this);
    return this;
}


TerrainEventCircularStaticPool* TerrainEventCircularStaticPool_getInstance(void) {
        return TerrainEventCircularStaticPool_instance;
}


void TerrainEventCircularStaticPool_init(TerrainEventCircularStaticPool* this) {
        AllBinaryEventCircularPool_initAllBinaryEventCircularPool(this->EVENT_POOL, TerrainEventFactory_new());
}


// throws Exception
// synchronized
TerrainEvent* TerrainEventCircularStaticPool_getNext(TerrainEventCircularStaticPool* this, BasicTerrainInfo* basicTerrainInfo) {
        TerrainEvent* trackingEvent = ((TerrainEvent*) AllBinaryEventCircularPool_getNextInstance(this->EVENT_POOL));
        TerrainEvent_setBasicTerrainInfoForCircularStaticPool(trackingEvent, basicTerrainInfo);
        return trackingEvent;
}

