#ifndef ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTCIRCULARSTATICPOOL_H
#define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTCIRCULARSTATICPOOL_H
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
typedef struct TerrainEventFactory TerrainEventFactory;
typedef struct TerrainEvent TerrainEvent;
typedef struct BasicTerrainInfo BasicTerrainInfo;
typedef struct AllBinaryEventCircularPool AllBinaryEventCircularPool;
#if __has_include("org/allbinary/logic/util/event/AllBinaryEventCircularPool.h")
#include "org/allbinary/logic/util/event/AllBinaryEventCircularPool.h"
#endif

typedef struct TerrainEventCircularStaticPool TerrainEventCircularStaticPool;
struct TerrainEventCircularStaticPool {
    AllBinaryEventCircularPool* EVENT_POOL;
};


TerrainEventCircularStaticPool* TerrainEventCircularStaticPool_new(void);
void TerrainEventCircularStaticPool_init(TerrainEventCircularStaticPool* this);

TerrainEventCircularStaticPool* TerrainEventCircularStaticPool_getInstance(void);

void TerrainEventCircularStaticPool_initMethod(TerrainEventCircularStaticPool* this);

TerrainEvent* TerrainEventCircularStaticPool_getNext(TerrainEventCircularStaticPool* this, BasicTerrainInfo* basicTerrainInfo);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TerrainEventCircularStaticPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TerrainEventCircularStaticPool_register(void);


#endif // ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTCIRCULARSTATICPOOL_H
