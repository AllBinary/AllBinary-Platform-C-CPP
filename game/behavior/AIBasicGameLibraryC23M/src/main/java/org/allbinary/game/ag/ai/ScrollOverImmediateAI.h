#ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERIMMEDIATEAI_H
#define ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERIMMEDIATEAI_H
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
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#include "org/allbinary/game/ai/BasicAI.h"

typedef struct ScrollOverImmediateAI ScrollOverImmediateAI;
struct ScrollOverImmediateAI {
    BasicAI base;
};


ScrollOverImmediateAI* ScrollOverImmediateAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ScrollOverImmediateAI_init(ScrollOverImmediateAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ScrollOverImmediateAI_processAI(ScrollOverImmediateAI* this, AllBinaryLayerManager* allBinaryLayerManager);
#define ScrollOverImmediateAI_new2 ScrollOverImmediateAI_new
#define ScrollOverImmediateAI_init2 ScrollOverImmediateAI_init
#ifndef ScrollOverImmediateAI_processKeyAI
#define ScrollOverImmediateAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef ScrollOverImmediateAI_setLastKey
#define ScrollOverImmediateAI_setLastKey BasicAI_setLastKey
#endif
#ifndef ScrollOverImmediateAI_getLastKey
#define ScrollOverImmediateAI_getLastKey BasicAI_getLastKey
#endif
#ifndef ScrollOverImmediateAI_getOwnerLayerInterface
#define ScrollOverImmediateAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef ScrollOverImmediateAI_getGameInput
#define ScrollOverImmediateAI_getGameInput BasicAI_getGameInput
#endif
#ifndef ScrollOverImmediateAI_getName
#define ScrollOverImmediateAI_getName BasicAI_getName
#endif
#ifndef ScrollOverImmediateAI_toString
#define ScrollOverImmediateAI_toString BasicAI_toString
#endif
#ifndef ScrollOverImmediateAI_getSourceId
#define ScrollOverImmediateAI_getSourceId BasicAI_getSourceId
#endif
#ifndef ScrollOverImmediateAI_getInstance
#define ScrollOverImmediateAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef ScrollOverImmediateAI_getId
#define ScrollOverImmediateAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScrollOverImmediateAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScrollOverImmediateAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERIMMEDIATEAI_H
