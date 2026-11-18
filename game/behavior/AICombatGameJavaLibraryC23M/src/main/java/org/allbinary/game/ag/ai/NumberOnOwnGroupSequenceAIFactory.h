#ifndef ORG_ALLBINARY_GAME_AG_AI_NUMBERONOWNGROUPSEQUENCEAIFACTORY_H
#define ORG_ALLBINARY_GAME_AG_AI_NUMBERONOWNGROUPSEQUENCEAIFACTORY_H
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
typedef struct NumberInSameGroupSequence NumberInSameGroupSequence;
typedef struct NumberOnOwnGroupSequenceAI NumberOnOwnGroupSequenceAI;
typedef struct ArtificialIntelligenceInterface ArtificialIntelligenceInterface;
typedef struct GameInput GameInput;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonStrings CommonStrings;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "java/lang/Integer.h"

typedef struct NumberOnOwnGroupSequenceAIFactory NumberOnOwnGroupSequenceAIFactory;
struct NumberOnOwnGroupSequenceAIFactory {
    LogUtil* logUtil;
};


NumberOnOwnGroupSequenceAIFactory* NumberOnOwnGroupSequenceAIFactory_new(void);
void NumberOnOwnGroupSequenceAIFactory_init(NumberOnOwnGroupSequenceAIFactory* this);

ArtificialIntelligenceInterface* NumberOnOwnGroupSequenceAIFactory_getInstance(NumberOnOwnGroupSequenceAIFactory* this, ABHashtable* hashtable, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NumberOnOwnGroupSequenceAIFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NumberOnOwnGroupSequenceAIFactory_register(void);

#if __has_include("org/allbinary/ai/ArtificialIntelligenceInterface.h")
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#endif

#endif // ORG_ALLBINARY_GAME_AG_AI_NUMBERONOWNGROUPSEQUENCEAIFACTORY_H
