#ifndef ORG_ALLBINARY_GAME_AG_AI_NUMBERONOWNGROUPSEQUENCEAI_H
#define ORG_ALLBINARY_GAME_AG_AI_NUMBERONOWNGROUPSEQUENCEAI_H
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
typedef struct SequenceAI SequenceAI;
typedef struct GameInput GameInput;
typedef struct GroupLayerManagerListener GroupLayerManagerListener;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#include "org/allbinary/game/ag/ai/sequence/SequenceAI.h"
#include "java/lang/Integer.h"

typedef struct NumberOnOwnGroupSequenceAI NumberOnOwnGroupSequenceAI;
struct NumberOnOwnGroupSequenceAI {
    SequenceAI base;
    int32_t* numberOnSameTeam;
};


NumberOnOwnGroupSequenceAI* NumberOnOwnGroupSequenceAI_new(int32_t* numberOnSameTeam, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void NumberOnOwnGroupSequenceAI_init(NumberOnOwnGroupSequenceAI* this, int32_t* numberOnSameTeam, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void NumberOnOwnGroupSequenceAI_processAI(NumberOnOwnGroupSequenceAI* this, AllBinaryLayerManager* allBinaryLayerManager);
#define NumberOnOwnGroupSequenceAI_new4 NumberOnOwnGroupSequenceAI_new
#define NumberOnOwnGroupSequenceAI_init4 NumberOnOwnGroupSequenceAI_init
#ifndef NumberOnOwnGroupSequenceAI_next
#define NumberOnOwnGroupSequenceAI_next SequenceAI_next
#endif
#ifndef NumberOnOwnGroupSequenceAI_getIndex
#define NumberOnOwnGroupSequenceAI_getIndex SequenceAI_getIndex
#endif
#ifndef NumberOnOwnGroupSequenceAI_setIndex
#define NumberOnOwnGroupSequenceAI_setIndex SequenceAI_setIndex
#endif
#ifndef NumberOnOwnGroupSequenceAI_getSelectedArtificialIntelligenceInterface
#define NumberOnOwnGroupSequenceAI_getSelectedArtificialIntelligenceInterface SequenceAI_getSelectedArtificialIntelligenceInterface
#endif
#ifndef NumberOnOwnGroupSequenceAI_getName
#define NumberOnOwnGroupSequenceAI_getName SequenceAI_getName
#endif
#ifndef NumberOnOwnGroupSequenceAI_toString
#define NumberOnOwnGroupSequenceAI_toString SequenceAI_toString
#endif
#ifndef NumberOnOwnGroupSequenceAI_getArtificialIntelligenceInterface
#define NumberOnOwnGroupSequenceAI_getArtificialIntelligenceInterface ArrayAI_getArtificialIntelligenceInterface
#endif
#ifndef NumberOnOwnGroupSequenceAI_processKeyAI
#define NumberOnOwnGroupSequenceAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef NumberOnOwnGroupSequenceAI_setLastKey
#define NumberOnOwnGroupSequenceAI_setLastKey BasicAI_setLastKey
#endif
#ifndef NumberOnOwnGroupSequenceAI_getLastKey
#define NumberOnOwnGroupSequenceAI_getLastKey BasicAI_getLastKey
#endif
#ifndef NumberOnOwnGroupSequenceAI_getOwnerLayerInterface
#define NumberOnOwnGroupSequenceAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef NumberOnOwnGroupSequenceAI_getGameInput
#define NumberOnOwnGroupSequenceAI_getGameInput BasicAI_getGameInput
#endif
#ifndef NumberOnOwnGroupSequenceAI_getName
#define NumberOnOwnGroupSequenceAI_getName BasicAI_getName
#endif
#ifndef NumberOnOwnGroupSequenceAI_toString
#define NumberOnOwnGroupSequenceAI_toString BasicAI_toString
#endif
#ifndef NumberOnOwnGroupSequenceAI_getSourceId
#define NumberOnOwnGroupSequenceAI_getSourceId BasicAI_getSourceId
#endif
#ifndef NumberOnOwnGroupSequenceAI_getInstance
#define NumberOnOwnGroupSequenceAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef NumberOnOwnGroupSequenceAI_getId
#define NumberOnOwnGroupSequenceAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NumberOnOwnGroupSequenceAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NumberOnOwnGroupSequenceAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_NUMBERONOWNGROUPSEQUENCEAI_H
