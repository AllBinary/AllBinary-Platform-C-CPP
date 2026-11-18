#ifndef ORG_ALLBINARY_GAME_AG_AI_TACTICAL_BASICRANDOMAI_H
#define ORG_ALLBINARY_GAME_AG_AI_TACTICAL_BASICRANDOMAI_H
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
// package org.allbinary.game.ag.ai.tactical

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
typedef struct InputProbability InputProbability;
typedef struct GameInput GameInput;
typedef struct MyRandomFactory MyRandomFactory;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct Visitor Visitor;
typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
#include "org/allbinary/game/ai/BasicAI.h"
#if __has_include("org/allbinary/game/ag/ai/InputProbability.h")
#include "org/allbinary/game/ag/ai/InputProbability.h"
#endif
#if __has_include("org/allbinary/game/rand/MyRandomFactory.h")
#include "org/allbinary/game/rand/MyRandomFactory.h"
#endif
#if __has_include("org/allbinary/logic/util/visitor/Visitor.h")
#include "org/allbinary/logic/util/visitor/Visitor.h"
#endif
#include "java/lang/Integer.h"

typedef struct BasicRandomAI BasicRandomAI;
struct BasicRandomAI {
    BasicAI base;
    int32_t i_random;
    InputProbability* inputProbability;
    Visitor* visitor;
    int32_t* keyArray;
    MyRandomFactory* myRandomFactory;
};


BasicRandomAI* BasicRandomAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, InputProbability* inputProbability, Visitor* visitor);

void BasicRandomAI_init(BasicRandomAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, InputProbability* inputProbability, Visitor* visitor);

void BasicRandomAI_processAI(BasicRandomAI* this, AllBinaryLayerManager* allBinaryLayerManager);
#define BasicRandomAI_new4 BasicRandomAI_new
#define BasicRandomAI_init4 BasicRandomAI_init
#ifndef BasicRandomAI_processKeyAI
#define BasicRandomAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef BasicRandomAI_setLastKey
#define BasicRandomAI_setLastKey BasicAI_setLastKey
#endif
#ifndef BasicRandomAI_getLastKey
#define BasicRandomAI_getLastKey BasicAI_getLastKey
#endif
#ifndef BasicRandomAI_getOwnerLayerInterface
#define BasicRandomAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef BasicRandomAI_getGameInput
#define BasicRandomAI_getGameInput BasicAI_getGameInput
#endif
#ifndef BasicRandomAI_getName
#define BasicRandomAI_getName BasicAI_getName
#endif
#ifndef BasicRandomAI_toString
#define BasicRandomAI_toString BasicAI_toString
#endif
#ifndef BasicRandomAI_getSourceId
#define BasicRandomAI_getSourceId BasicAI_getSourceId
#endif
#ifndef BasicRandomAI_getInstance
#define BasicRandomAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef BasicRandomAI_getId
#define BasicRandomAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicRandomAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicRandomAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_TACTICAL_BASICRANDOMAI_H
