#ifndef ORG_ALLBINARY_GAME_AG_AI_STOPATEDGEAI_H
#define ORG_ALLBINARY_GAME_AG_AI_STOPATEDGEAI_H
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
// package org.allbinary.game.ag.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicAI BasicAI;
typedef struct GameInput GameInput;
typedef struct BasicVelocityProperties BasicVelocityProperties;
typedef struct VelocityInterfaceCompositeInterface VelocityInterfaceCompositeInterface;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#include "org/allbinary/game/ai/BasicAI.h"

typedef struct StopAtEdgeAI StopAtEdgeAI;
struct StopAtEdgeAI {
    BasicAI base;
};


StopAtEdgeAI* StopAtEdgeAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void StopAtEdgeAI_init(StopAtEdgeAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void StopAtEdgeAI_processAI(StopAtEdgeAI* this, AllBinaryLayerManager* allBinaryLayerManager);
#define StopAtEdgeAI_new2 StopAtEdgeAI_new
#define StopAtEdgeAI_init2 StopAtEdgeAI_init
#ifndef StopAtEdgeAI_processKeyAI
#define StopAtEdgeAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef StopAtEdgeAI_setLastKey
#define StopAtEdgeAI_setLastKey BasicAI_setLastKey
#endif
#ifndef StopAtEdgeAI_getLastKey
#define StopAtEdgeAI_getLastKey BasicAI_getLastKey
#endif
#ifndef StopAtEdgeAI_getOwnerLayerInterface
#define StopAtEdgeAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef StopAtEdgeAI_getGameInput
#define StopAtEdgeAI_getGameInput BasicAI_getGameInput
#endif
#ifndef StopAtEdgeAI_getName
#define StopAtEdgeAI_getName BasicAI_getName
#endif
#ifndef StopAtEdgeAI_toString
#define StopAtEdgeAI_toString BasicAI_toString
#endif
#ifndef StopAtEdgeAI_getSourceId
#define StopAtEdgeAI_getSourceId BasicAI_getSourceId
#endif
#ifndef StopAtEdgeAI_getInstance
#define StopAtEdgeAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef StopAtEdgeAI_getId
#define StopAtEdgeAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void StopAtEdgeAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void StopAtEdgeAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_STOPATEDGEAI_H
