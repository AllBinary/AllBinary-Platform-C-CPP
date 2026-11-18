#ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TERRAINPATROLAI_H
#define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TERRAINPATROLAI_H
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
// package org.allbinary.game.ag.ai.scroller

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct PacePatrolAI PacePatrolAI;
typedef struct GameInput GameInput;
typedef struct BasicTerrainInfo BasicTerrainInfo;
typedef struct TerrainEvent TerrainEvent;
typedef struct TerrainEventCircularStaticPool TerrainEventCircularStaticPool;
typedef struct TerrainEventHandler TerrainEventHandler;
typedef struct TerrainEventListener TerrainEventListener;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct Angle Angle;
typedef struct AngleFactory AngleFactory;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/game/terrain/BasicTerrainInfo.h")
#include "org/allbinary/game/terrain/BasicTerrainInfo.h"
#endif
#if __has_include("org/allbinary/game/terrain/TerrainEventListener.h")
#include "org/allbinary/game/terrain/TerrainEventListener.h"
#endif
#if __has_include("org/allbinary/math/Angle.h")
#include "org/allbinary/math/Angle.h"
#endif
#include "org/allbinary/game/ag/ai/scroller/PacePatrolAI.h"

typedef struct TerrainPatrolAI TerrainPatrolAI;
struct TerrainPatrolAI {
    PacePatrolAI base;
    TerrainEventListener* terrainEventListener;
    Angle* DOWN;
    BasicTerrainInfo* CLIFF;
};


TerrainPatrolAI* TerrainPatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void TerrainPatrolAI_init(TerrainPatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void TerrainPatrolAI_update(TerrainPatrolAI* this);

#define TerrainPatrolAI_new3 TerrainPatrolAI_new
#define TerrainPatrolAI_init3 TerrainPatrolAI_init
#ifndef TerrainPatrolAI_processAI
#define TerrainPatrolAI_processAI PacePatrolAI_processAI
#endif
#ifndef TerrainPatrolAI_setFiringDirectionForTargetIfInRange
#define TerrainPatrolAI_setFiringDirectionForTargetIfInRange PacePatrolAI_setFiringDirectionForTargetIfInRange
#endif
#ifndef TerrainPatrolAI_disable
#define TerrainPatrolAI_disable PacePatrolAI_disable
#endif
#ifndef TerrainPatrolAI_onEvent
#define TerrainPatrolAI_onEvent PacePatrolAI_onEvent
#endif
#ifndef TerrainPatrolAI_onMovement
#define TerrainPatrolAI_onMovement PacePatrolAI_onMovement
#endif
#ifndef TerrainPatrolAI_getFiringDistance
#define TerrainPatrolAI_getFiringDistance PacePatrolAI_getFiringDistance
#endif
#ifndef TerrainPatrolAI_setFiringDistance
#define TerrainPatrolAI_setFiringDistance PacePatrolAI_setFiringDistance
#endif
#ifndef TerrainPatrolAI_updateTotalDistance
#define TerrainPatrolAI_updateTotalDistance BasePatrolAI_updateTotalDistance
#endif
#ifndef TerrainPatrolAI_changeDirectionIfReachedPacingAreaMax
#define TerrainPatrolAI_changeDirectionIfReachedPacingAreaMax BasePatrolAI_changeDirectionIfReachedPacingAreaMax
#endif
#ifndef TerrainPatrolAI_nextDirection
#define TerrainPatrolAI_nextDirection BasePatrolAI_nextDirection
#endif
#ifndef TerrainPatrolAI_disable
#define TerrainPatrolAI_disable BasePatrolAI_disable
#endif
#ifndef TerrainPatrolAI_processAI
#define TerrainPatrolAI_processAI BasicAI_processAI
#endif
#ifndef TerrainPatrolAI_processKeyAI
#define TerrainPatrolAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef TerrainPatrolAI_setLastKey
#define TerrainPatrolAI_setLastKey BasicAI_setLastKey
#endif
#ifndef TerrainPatrolAI_getLastKey
#define TerrainPatrolAI_getLastKey BasicAI_getLastKey
#endif
#ifndef TerrainPatrolAI_getOwnerLayerInterface
#define TerrainPatrolAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef TerrainPatrolAI_getGameInput
#define TerrainPatrolAI_getGameInput BasicAI_getGameInput
#endif
#ifndef TerrainPatrolAI_getName
#define TerrainPatrolAI_getName BasicAI_getName
#endif
#ifndef TerrainPatrolAI_toString
#define TerrainPatrolAI_toString BasicAI_toString
#endif
#ifndef TerrainPatrolAI_getSourceId
#define TerrainPatrolAI_getSourceId BasicAI_getSourceId
#endif
#ifndef TerrainPatrolAI_getInstance
#define TerrainPatrolAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef TerrainPatrolAI_processAI
#define TerrainPatrolAI_processAI ArtificialIntelligence_processAI
#endif
#ifndef TerrainPatrolAI_getId
#define TerrainPatrolAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TerrainPatrolAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TerrainPatrolAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TERRAINPATROLAI_H
