#ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_PACEPATROLAI_H
#define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_PACEPATROLAI_H
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
typedef struct BasePatrolAI BasePatrolAI;
typedef struct Canvas Canvas;
typedef struct Direction Direction;
typedef struct DirectionCompositeInterface DirectionCompositeInterface;
typedef struct DirectionFactory DirectionFactory;
typedef struct GameInput GameInput;
typedef struct TrackingEvent TrackingEvent;
typedef struct TrackingEventHandler TrackingEventHandler;
typedef struct TrackingEventListenerInterface TrackingEventListenerInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct LayerInterface LayerInterface;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "org/allbinary/game/tracking/TrackingEventListenerInterface.h"
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "org/allbinary/game/ag/ai/scroller/BasePatrolAI.h"

typedef struct PacePatrolAI PacePatrolAI;
struct PacePatrolAI {
    BasePatrolAI base;
    TrackingEventListenerInterface TrackingEventListenerInterface_interface;
    BasicArrayList* trackingList;
    int32_t firingDistance;
    bool isFollowLimitedByTerrain;
};


PacePatrolAI* PacePatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void PacePatrolAI_init(PacePatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void PacePatrolAI_processAI(PacePatrolAI* this, AllBinaryLayerManager* allBinaryLayerManager);


void PacePatrolAI_disable(PacePatrolAI* this);

void PacePatrolAI_onEvent(PacePatrolAI* this, AllBinaryEventObject* eventObject);

void PacePatrolAI_onMovement(PacePatrolAI* this, TrackingEvent* trackingEvent);

int32_t PacePatrolAI_getFiringDistance(PacePatrolAI* this);

void PacePatrolAI_setFiringDistance(PacePatrolAI* this, int32_t firingDistance);
#define PacePatrolAI_new3 PacePatrolAI_new
#define PacePatrolAI_init3 PacePatrolAI_init
#ifndef PacePatrolAI_update
#define PacePatrolAI_update BasePatrolAI_update
#endif
#ifndef PacePatrolAI_updateTotalDistance
#define PacePatrolAI_updateTotalDistance BasePatrolAI_updateTotalDistance
#endif
#ifndef PacePatrolAI_changeDirectionIfReachedPacingAreaMax
#define PacePatrolAI_changeDirectionIfReachedPacingAreaMax BasePatrolAI_changeDirectionIfReachedPacingAreaMax
#endif
#ifndef PacePatrolAI_nextDirection
#define PacePatrolAI_nextDirection BasePatrolAI_nextDirection
#endif
#ifndef PacePatrolAI_processKeyAI
#define PacePatrolAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef PacePatrolAI_setLastKey
#define PacePatrolAI_setLastKey BasicAI_setLastKey
#endif
#ifndef PacePatrolAI_getLastKey
#define PacePatrolAI_getLastKey BasicAI_getLastKey
#endif
#ifndef PacePatrolAI_getOwnerLayerInterface
#define PacePatrolAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef PacePatrolAI_getGameInput
#define PacePatrolAI_getGameInput BasicAI_getGameInput
#endif
#ifndef PacePatrolAI_getName
#define PacePatrolAI_getName BasicAI_getName
#endif
#ifndef PacePatrolAI_toString
#define PacePatrolAI_toString BasicAI_toString
#endif
#ifndef PacePatrolAI_getSourceId
#define PacePatrolAI_getSourceId BasicAI_getSourceId
#endif
#ifndef PacePatrolAI_getInstance
#define PacePatrolAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef PacePatrolAI_getId
#define PacePatrolAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PacePatrolAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PacePatrolAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_SCROLLER_PACEPATROLAI_H
