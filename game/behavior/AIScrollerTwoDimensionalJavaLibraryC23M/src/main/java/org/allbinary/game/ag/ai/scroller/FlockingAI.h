#ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_FLOCKINGAI_H
#define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_FLOCKINGAI_H
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
typedef struct BasicAI BasicAI;
typedef struct BasicGroupFactory BasicGroupFactory;
typedef struct GameInput GameInput;
typedef struct GroupLayerManagerListener GroupLayerManagerListener;
typedef struct WeaponLayer WeaponLayer;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct MathUtil MathUtil;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
#include "org/allbinary/game/ai/BasicAI.h"
#include "java/lang/Integer.h"

typedef struct FlockingAI FlockingAI;
struct FlockingAI {
    BasicAI base;
    int32_t allowedDistance;
};


FlockingAI* FlockingAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void FlockingAI_init(FlockingAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void FlockingAI_processAI(FlockingAI* this, AllBinaryLayerManager* allBinaryLayerManager);

#define FlockingAI_new3 FlockingAI_new
#define FlockingAI_init3 FlockingAI_init
#ifndef FlockingAI_processKeyAI
#define FlockingAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef FlockingAI_setLastKey
#define FlockingAI_setLastKey BasicAI_setLastKey
#endif
#ifndef FlockingAI_getLastKey
#define FlockingAI_getLastKey BasicAI_getLastKey
#endif
#ifndef FlockingAI_getOwnerLayerInterface
#define FlockingAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef FlockingAI_getGameInput
#define FlockingAI_getGameInput BasicAI_getGameInput
#endif
#ifndef FlockingAI_getName
#define FlockingAI_getName BasicAI_getName
#endif
#ifndef FlockingAI_toString
#define FlockingAI_toString BasicAI_toString
#endif
#ifndef FlockingAI_getSourceId
#define FlockingAI_getSourceId BasicAI_getSourceId
#endif
#ifndef FlockingAI_getInstance
#define FlockingAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef FlockingAI_getId
#define FlockingAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FlockingAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FlockingAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_SCROLLER_FLOCKINGAI_H
