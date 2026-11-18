#ifndef ORG_ALLBINARY_GAME_AG_AI_NULLAIFACTORY_H
#define ORG_ALLBINARY_GAME_AG_AI_NULLAIFACTORY_H
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
typedef struct NullAI NullAI;
typedef struct ArtificialIntelligenceInterface ArtificialIntelligenceInterface;
typedef struct ArtificialIntelligenceInterfaceFactoryInterface ArtificialIntelligenceInterfaceFactoryInterface;
typedef struct GameInput GameInput;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct ABHashtable ABHashtable;
#include "org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h"
#if __has_include("org/allbinary/game/ag/ai/NullAI.h")
#include "org/allbinary/game/ag/ai/NullAI.h"
#endif

typedef struct NullAIFactory NullAIFactory;
struct NullAIFactory {
    ArtificialIntelligenceInterfaceFactoryInterface ArtificialIntelligenceInterfaceFactoryInterface_interface;
};


NullAIFactory* NullAIFactory_new(void);
void NullAIFactory_init(NullAIFactory* this);

ArtificialIntelligenceInterface* NullAIFactory_getInstance4(NullAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

ArtificialIntelligenceInterface* NullAIFactory_getInstance0(void);
#define NullAIFactory_getInstance(...) JAVA_OVERLOADED(NullAIFactory_getInstance, __VA_ARGS__)
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullAIFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullAIFactory_register(void);

#if __has_include("org/allbinary/ai/ArtificialIntelligenceInterface.h")
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#endif

#endif // ORG_ALLBINARY_GAME_AG_AI_NULLAIFACTORY_H
