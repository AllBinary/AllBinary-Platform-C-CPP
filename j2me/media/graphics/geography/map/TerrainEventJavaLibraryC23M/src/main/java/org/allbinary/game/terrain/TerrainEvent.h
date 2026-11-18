#ifndef ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENT_H
#define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENT_H
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
typedef struct BasicTerrainInfo BasicTerrainInfo;
typedef struct StringMaker StringMaker;
typedef struct AllBinaryEventObject AllBinaryEventObject;
// #include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#if __has_include("org/allbinary/game/terrain/BasicTerrainInfo.h")
#include "org/allbinary/game/terrain/BasicTerrainInfo.h"
#endif

typedef struct TerrainEvent TerrainEvent;
struct TerrainEvent {
    AllBinaryEventObject base;
    BasicTerrainInfo* basicTerrainInfo;
};


TerrainEvent* TerrainEvent_new(void* basicTerrainInfo);

void TerrainEvent_init(TerrainEvent* this, void* basicTerrainInfo);

const char* TerrainEvent_toString(TerrainEvent* this);

BasicTerrainInfo* TerrainEvent_getBasicTerrainInfo(TerrainEvent* this);

void TerrainEvent_setBasicTerrainInfo(TerrainEvent* this, BasicTerrainInfo* basicTerrainInfo);

void TerrainEvent_setBasicTerrainInfoForCircularStaticPool(TerrainEvent* this, BasicTerrainInfo* basicTerrainInfo);
#define TerrainEvent_new1 TerrainEvent_new
#define TerrainEvent_init1 TerrainEvent_init
#ifndef TerrainEvent_getSource
#define TerrainEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef TerrainEvent_setSource
#define TerrainEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TerrainEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TerrainEvent_register(void);


#endif // ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENT_H
