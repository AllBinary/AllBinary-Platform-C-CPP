#ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERXIMMEDIATEYSTOPAI_H
#define ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERXIMMEDIATEYSTOPAI_H
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

typedef struct ScrollOverXImmediateYStopAI ScrollOverXImmediateYStopAI;
struct ScrollOverXImmediateYStopAI {
    BasicAI base;
};


ScrollOverXImmediateYStopAI* ScrollOverXImmediateYStopAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ScrollOverXImmediateYStopAI_init(ScrollOverXImmediateYStopAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ScrollOverXImmediateYStopAI_processAI(ScrollOverXImmediateYStopAI* this, AllBinaryLayerManager* allBinaryLayerManager);
#define ScrollOverXImmediateYStopAI_new2 ScrollOverXImmediateYStopAI_new
#define ScrollOverXImmediateYStopAI_init2 ScrollOverXImmediateYStopAI_init
#ifndef ScrollOverXImmediateYStopAI_processKeyAI
#define ScrollOverXImmediateYStopAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef ScrollOverXImmediateYStopAI_setLastKey
#define ScrollOverXImmediateYStopAI_setLastKey BasicAI_setLastKey
#endif
#ifndef ScrollOverXImmediateYStopAI_getLastKey
#define ScrollOverXImmediateYStopAI_getLastKey BasicAI_getLastKey
#endif
#ifndef ScrollOverXImmediateYStopAI_getOwnerLayerInterface
#define ScrollOverXImmediateYStopAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef ScrollOverXImmediateYStopAI_getGameInput
#define ScrollOverXImmediateYStopAI_getGameInput BasicAI_getGameInput
#endif
#ifndef ScrollOverXImmediateYStopAI_getName
#define ScrollOverXImmediateYStopAI_getName BasicAI_getName
#endif
#ifndef ScrollOverXImmediateYStopAI_toString
#define ScrollOverXImmediateYStopAI_toString BasicAI_toString
#endif
#ifndef ScrollOverXImmediateYStopAI_getSourceId
#define ScrollOverXImmediateYStopAI_getSourceId BasicAI_getSourceId
#endif
#ifndef ScrollOverXImmediateYStopAI_getInstance
#define ScrollOverXImmediateYStopAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef ScrollOverXImmediateYStopAI_getId
#define ScrollOverXImmediateYStopAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScrollOverXImmediateYStopAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScrollOverXImmediateYStopAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERXIMMEDIATEYSTOPAI_H
