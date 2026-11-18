#ifndef ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_NUMBERLAYERSSEQUENCEAI_H
#define ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_NUMBERLAYERSSEQUENCEAI_H
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
typedef struct SequenceAI SequenceAI;
typedef struct ArtificialIntelligenceInterface ArtificialIntelligenceInterface;
typedef struct GameInput GameInput;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#include "org/allbinary/game/ag/ai/sequence/SequenceAI.h"

typedef struct NumberLayersSequenceAI NumberLayersSequenceAI;
struct NumberLayersSequenceAI {
    SequenceAI base;
    int32_t numberOfLayersLeft;
};


NumberLayersSequenceAI* NumberLayersSequenceAI_new(int32_t numberOfEnemiesLeft, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void NumberLayersSequenceAI_init(NumberLayersSequenceAI* this, int32_t numberOfEnemiesLeft, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void NumberLayersSequenceAI_processAI(NumberLayersSequenceAI* this, AllBinaryLayerManager* allBinaryLayerManager);
#define NumberLayersSequenceAI_new4 NumberLayersSequenceAI_new
#define NumberLayersSequenceAI_init4 NumberLayersSequenceAI_init
#ifndef NumberLayersSequenceAI_next
#define NumberLayersSequenceAI_next SequenceAI_next
#endif
#ifndef NumberLayersSequenceAI_getIndex
#define NumberLayersSequenceAI_getIndex SequenceAI_getIndex
#endif
#ifndef NumberLayersSequenceAI_setIndex
#define NumberLayersSequenceAI_setIndex SequenceAI_setIndex
#endif
#ifndef NumberLayersSequenceAI_getSelectedArtificialIntelligenceInterface
#define NumberLayersSequenceAI_getSelectedArtificialIntelligenceInterface SequenceAI_getSelectedArtificialIntelligenceInterface
#endif
#ifndef NumberLayersSequenceAI_getName
#define NumberLayersSequenceAI_getName SequenceAI_getName
#endif
#ifndef NumberLayersSequenceAI_toString
#define NumberLayersSequenceAI_toString SequenceAI_toString
#endif
#ifndef NumberLayersSequenceAI_getArtificialIntelligenceInterface
#define NumberLayersSequenceAI_getArtificialIntelligenceInterface ArrayAI_getArtificialIntelligenceInterface
#endif
#ifndef NumberLayersSequenceAI_processKeyAI
#define NumberLayersSequenceAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef NumberLayersSequenceAI_setLastKey
#define NumberLayersSequenceAI_setLastKey BasicAI_setLastKey
#endif
#ifndef NumberLayersSequenceAI_getLastKey
#define NumberLayersSequenceAI_getLastKey BasicAI_getLastKey
#endif
#ifndef NumberLayersSequenceAI_getOwnerLayerInterface
#define NumberLayersSequenceAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef NumberLayersSequenceAI_getGameInput
#define NumberLayersSequenceAI_getGameInput BasicAI_getGameInput
#endif
#ifndef NumberLayersSequenceAI_getName
#define NumberLayersSequenceAI_getName BasicAI_getName
#endif
#ifndef NumberLayersSequenceAI_toString
#define NumberLayersSequenceAI_toString BasicAI_toString
#endif
#ifndef NumberLayersSequenceAI_getSourceId
#define NumberLayersSequenceAI_getSourceId BasicAI_getSourceId
#endif
#ifndef NumberLayersSequenceAI_getInstance
#define NumberLayersSequenceAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef NumberLayersSequenceAI_getId
#define NumberLayersSequenceAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NumberLayersSequenceAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NumberLayersSequenceAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_NUMBERLAYERSSEQUENCEAI_H
