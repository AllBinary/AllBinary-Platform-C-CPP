#ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_RANDOMPATROLAI_H
#define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_RANDOMPATROLAI_H
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
typedef struct GameInput GameInput;
typedef struct MyRandomFactory MyRandomFactory;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct ABHashtable ABHashtable;
#include "org/allbinary/game/ag/ai/scroller/BasePatrolAI.h"

typedef struct RandomPatrolAI RandomPatrolAI;
struct RandomPatrolAI {
    BasePatrolAI base;
    bool changedDirection;
};


RandomPatrolAI* RandomPatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void RandomPatrolAI_init(RandomPatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);


void RandomPatrolAI_processAI(RandomPatrolAI* this, AllBinaryLayerManager* allBinaryLayerManager);

void RandomPatrolAI_nextDirection(RandomPatrolAI* this);
#define RandomPatrolAI_new3 RandomPatrolAI_new
#define RandomPatrolAI_init3 RandomPatrolAI_init
#ifndef RandomPatrolAI_update
#define RandomPatrolAI_update BasePatrolAI_update
#endif
#ifndef RandomPatrolAI_updateTotalDistance
#define RandomPatrolAI_updateTotalDistance BasePatrolAI_updateTotalDistance
#endif
#ifndef RandomPatrolAI_changeDirectionIfReachedPacingAreaMax
#define RandomPatrolAI_changeDirectionIfReachedPacingAreaMax BasePatrolAI_changeDirectionIfReachedPacingAreaMax
#endif
#ifndef RandomPatrolAI_disable
#define RandomPatrolAI_disable BasePatrolAI_disable
#endif
#ifndef RandomPatrolAI_processKeyAI
#define RandomPatrolAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef RandomPatrolAI_setLastKey
#define RandomPatrolAI_setLastKey BasicAI_setLastKey
#endif
#ifndef RandomPatrolAI_getLastKey
#define RandomPatrolAI_getLastKey BasicAI_getLastKey
#endif
#ifndef RandomPatrolAI_getOwnerLayerInterface
#define RandomPatrolAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef RandomPatrolAI_getGameInput
#define RandomPatrolAI_getGameInput BasicAI_getGameInput
#endif
#ifndef RandomPatrolAI_getName
#define RandomPatrolAI_getName BasicAI_getName
#endif
#ifndef RandomPatrolAI_toString
#define RandomPatrolAI_toString BasicAI_toString
#endif
#ifndef RandomPatrolAI_getSourceId
#define RandomPatrolAI_getSourceId BasicAI_getSourceId
#endif
#ifndef RandomPatrolAI_getInstance
#define RandomPatrolAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef RandomPatrolAI_getId
#define RandomPatrolAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RandomPatrolAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RandomPatrolAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_SCROLLER_RANDOMPATROLAI_H
