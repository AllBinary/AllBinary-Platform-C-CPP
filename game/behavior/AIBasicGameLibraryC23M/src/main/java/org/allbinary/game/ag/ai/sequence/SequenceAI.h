#ifndef ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_SEQUENCEAI_H
#define ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_SEQUENCEAI_H
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
// package org.allbinary.game.ag.ai.sequence

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ArtificialIntelligence ArtificialIntelligence;
typedef struct ArtificialIntelligenceInterface ArtificialIntelligenceInterface;
typedef struct ArtificialIntelligenceTransitionInterface ArtificialIntelligenceTransitionInterface;
typedef struct ArrayAI ArrayAI;
typedef struct GameInput GameInput;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
#include "org/allbinary/game/ag/ai/ArrayAI.h"

typedef struct SequenceAI SequenceAI;
struct SequenceAI {
    ArrayAI base;
    int32_t index;
};


SequenceAI* SequenceAI_new(ArtificialIntelligenceInterface** artificialIntelligenceInterfaceArray, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void SequenceAI_init(SequenceAI* this, ArtificialIntelligenceInterface** artificialIntelligenceInterfaceArray, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void SequenceAI_processAI(SequenceAI* this, AllBinaryLayerManager* allBinaryLayerManager);

void SequenceAI_next(SequenceAI* this);

int32_t SequenceAI_getIndex(SequenceAI* this);

void SequenceAI_setIndex(SequenceAI* this, int32_t index);

ArtificialIntelligenceInterface* SequenceAI_getSelectedArtificialIntelligenceInterface(SequenceAI* this);

const char* SequenceAI_getName(SequenceAI* this);

const char* SequenceAI_toString(SequenceAI* this);
#define SequenceAI_new3 SequenceAI_new
#define SequenceAI_init3 SequenceAI_init
#ifndef SequenceAI_getArtificialIntelligenceInterface
#define SequenceAI_getArtificialIntelligenceInterface ArrayAI_getArtificialIntelligenceInterface
#endif
#ifndef SequenceAI_processKeyAI
#define SequenceAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef SequenceAI_setLastKey
#define SequenceAI_setLastKey BasicAI_setLastKey
#endif
#ifndef SequenceAI_getLastKey
#define SequenceAI_getLastKey BasicAI_getLastKey
#endif
#ifndef SequenceAI_getOwnerLayerInterface
#define SequenceAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef SequenceAI_getGameInput
#define SequenceAI_getGameInput BasicAI_getGameInput
#endif
#ifndef SequenceAI_getSourceId
#define SequenceAI_getSourceId BasicAI_getSourceId
#endif
#ifndef SequenceAI_getInstance
#define SequenceAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef SequenceAI_getId
#define SequenceAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SequenceAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SequenceAI_register(void);

#if __has_include("org/allbinary/ai/ArtificialIntelligenceInterface.h")
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#endif

#endif // ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_SEQUENCEAI_H
