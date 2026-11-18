#ifndef ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_COMBOSEQUENCEAI_H
#define ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_COMBOSEQUENCEAI_H
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

typedef struct ComboSequenceAI ComboSequenceAI;
struct ComboSequenceAI {
    SequenceAI base;
};


ComboSequenceAI* ComboSequenceAI_new(ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ComboSequenceAI_init(ComboSequenceAI* this, ArtificialIntelligenceInterface** artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ComboSequenceAI_processAI(ComboSequenceAI* this, AllBinaryLayerManager* allBinaryLayerManager);
#define ComboSequenceAI_new3 ComboSequenceAI_new
#define ComboSequenceAI_init3 ComboSequenceAI_init
#ifndef ComboSequenceAI_next
#define ComboSequenceAI_next SequenceAI_next
#endif
#ifndef ComboSequenceAI_getIndex
#define ComboSequenceAI_getIndex SequenceAI_getIndex
#endif
#ifndef ComboSequenceAI_setIndex
#define ComboSequenceAI_setIndex SequenceAI_setIndex
#endif
#ifndef ComboSequenceAI_getSelectedArtificialIntelligenceInterface
#define ComboSequenceAI_getSelectedArtificialIntelligenceInterface SequenceAI_getSelectedArtificialIntelligenceInterface
#endif
#ifndef ComboSequenceAI_getName
#define ComboSequenceAI_getName SequenceAI_getName
#endif
#ifndef ComboSequenceAI_toString
#define ComboSequenceAI_toString SequenceAI_toString
#endif
#ifndef ComboSequenceAI_getArtificialIntelligenceInterface
#define ComboSequenceAI_getArtificialIntelligenceInterface ArrayAI_getArtificialIntelligenceInterface
#endif
#ifndef ComboSequenceAI_processKeyAI
#define ComboSequenceAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef ComboSequenceAI_setLastKey
#define ComboSequenceAI_setLastKey BasicAI_setLastKey
#endif
#ifndef ComboSequenceAI_getLastKey
#define ComboSequenceAI_getLastKey BasicAI_getLastKey
#endif
#ifndef ComboSequenceAI_getOwnerLayerInterface
#define ComboSequenceAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef ComboSequenceAI_getGameInput
#define ComboSequenceAI_getGameInput BasicAI_getGameInput
#endif
#ifndef ComboSequenceAI_getName
#define ComboSequenceAI_getName BasicAI_getName
#endif
#ifndef ComboSequenceAI_toString
#define ComboSequenceAI_toString BasicAI_toString
#endif
#ifndef ComboSequenceAI_getSourceId
#define ComboSequenceAI_getSourceId BasicAI_getSourceId
#endif
#ifndef ComboSequenceAI_getInstance
#define ComboSequenceAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef ComboSequenceAI_getId
#define ComboSequenceAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ComboSequenceAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ComboSequenceAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_COMBOSEQUENCEAI_H
