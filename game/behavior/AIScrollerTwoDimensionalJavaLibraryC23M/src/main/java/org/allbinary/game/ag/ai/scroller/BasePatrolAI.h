#ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_BASEPATROLAI_H
#define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_BASEPATROLAI_H
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
typedef struct Canvas Canvas;
typedef struct BasicAI BasicAI;
typedef struct GameInput GameInput;
typedef struct BasicVelocityProperties BasicVelocityProperties;
typedef struct VelocityInterfaceCompositeInterface VelocityInterfaceCompositeInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct MathUtil MathUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct ABHashtable ABHashtable;
#include "org/allbinary/game/ai/BasicAI.h"
#include "java/lang/Integer.h"

typedef struct BasePatrolAI BasePatrolAI;
struct BasePatrolAI {
    BasicAI base;
    int32_t maxDistance;
    int32_t currentDistance;
    int32_t xTotalDistance;
    int32_t lastKeyDirection;
    int32_t keyDirection;
};

extern int32_t BasePatrolAI_MAX_DISTANCE;
extern int32_t BasePatrolAI_DIRECTION_ARRAY;
extern int32_t BasePatrolAI_FIRING_DISTANCE;
extern int32_t BasePatrolAI_SPEED;

BasePatrolAI* BasePatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void BasePatrolAI_init(BasePatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void BasePatrolAI_update(BasePatrolAI* this);



void BasePatrolAI_nextDirection(BasePatrolAI* this);

void BasePatrolAI_disable(BasePatrolAI* this);
#define BasePatrolAI_new3 BasePatrolAI_new
#define BasePatrolAI_init3 BasePatrolAI_init
#ifndef BasePatrolAI_processAI
#define BasePatrolAI_processAI BasicAI_processAI
#endif
#ifndef BasePatrolAI_processKeyAI
#define BasePatrolAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef BasePatrolAI_setLastKey
#define BasePatrolAI_setLastKey BasicAI_setLastKey
#endif
#ifndef BasePatrolAI_getLastKey
#define BasePatrolAI_getLastKey BasicAI_getLastKey
#endif
#ifndef BasePatrolAI_getOwnerLayerInterface
#define BasePatrolAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef BasePatrolAI_getGameInput
#define BasePatrolAI_getGameInput BasicAI_getGameInput
#endif
#ifndef BasePatrolAI_getName
#define BasePatrolAI_getName BasicAI_getName
#endif
#ifndef BasePatrolAI_toString
#define BasePatrolAI_toString BasicAI_toString
#endif
#ifndef BasePatrolAI_getSourceId
#define BasePatrolAI_getSourceId BasicAI_getSourceId
#endif
#ifndef BasePatrolAI_getInstance
#define BasePatrolAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef BasePatrolAI_processAI
#define BasePatrolAI_processAI ArtificialIntelligence_processAI
#endif
#ifndef BasePatrolAI_getId
#define BasePatrolAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasePatrolAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasePatrolAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_SCROLLER_BASEPATROLAI_H
