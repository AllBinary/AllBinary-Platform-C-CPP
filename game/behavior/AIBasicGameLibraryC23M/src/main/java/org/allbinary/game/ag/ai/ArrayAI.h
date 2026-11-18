#ifndef ORG_ALLBINARY_GAME_AG_AI_ARRAYAI_H
#define ORG_ALLBINARY_GAME_AG_AI_ARRAYAI_H
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
typedef struct ArtificialIntelligenceInterface ArtificialIntelligenceInterface;
typedef struct GameInput GameInput;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct BasicAI BasicAI;
#if __has_include("org/allbinary/ai/ArtificialIntelligenceInterface.h")
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#endif
#include "org/allbinary/game/ai/BasicAI.h"

typedef struct ArrayAI ArrayAI;
struct ArrayAI {
    BasicAI base;
    ArtificialIntelligenceInterface** artificialIntelligenceInterfaceArray;
};


ArrayAI* ArrayAI_new(ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ArrayAI_init(ArrayAI* this, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ArrayAI_processAI(ArrayAI* this, AllBinaryLayerManager* allBinaryLayerManager);

ArtificialIntelligenceInterface** ArrayAI_getArtificialIntelligenceInterface(ArrayAI* this);
#define ArrayAI_new3 ArrayAI_new
#define ArrayAI_init3 ArrayAI_init
#ifndef ArrayAI_processKeyAI
#define ArrayAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef ArrayAI_setLastKey
#define ArrayAI_setLastKey BasicAI_setLastKey
#endif
#ifndef ArrayAI_getLastKey
#define ArrayAI_getLastKey BasicAI_getLastKey
#endif
#ifndef ArrayAI_getOwnerLayerInterface
#define ArrayAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef ArrayAI_getGameInput
#define ArrayAI_getGameInput BasicAI_getGameInput
#endif
#ifndef ArrayAI_getName
#define ArrayAI_getName BasicAI_getName
#endif
#ifndef ArrayAI_toString
#define ArrayAI_toString BasicAI_toString
#endif
#ifndef ArrayAI_getSourceId
#define ArrayAI_getSourceId BasicAI_getSourceId
#endif
#ifndef ArrayAI_getInstance
#define ArrayAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef ArrayAI_getId
#define ArrayAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ArrayAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ArrayAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_ARRAYAI_H
