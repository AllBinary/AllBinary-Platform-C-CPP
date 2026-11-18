#ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERATENDAI_H
#define ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERATENDAI_H
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

typedef struct ScrollOverAtEndAI ScrollOverAtEndAI;
struct ScrollOverAtEndAI {
    BasicAI base;
};


ScrollOverAtEndAI* ScrollOverAtEndAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ScrollOverAtEndAI_init(ScrollOverAtEndAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ScrollOverAtEndAI_processAI(ScrollOverAtEndAI* this, AllBinaryLayerManager* allBinaryLayerManager);
#define ScrollOverAtEndAI_new2 ScrollOverAtEndAI_new
#define ScrollOverAtEndAI_init2 ScrollOverAtEndAI_init
#ifndef ScrollOverAtEndAI_processKeyAI
#define ScrollOverAtEndAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef ScrollOverAtEndAI_setLastKey
#define ScrollOverAtEndAI_setLastKey BasicAI_setLastKey
#endif
#ifndef ScrollOverAtEndAI_getLastKey
#define ScrollOverAtEndAI_getLastKey BasicAI_getLastKey
#endif
#ifndef ScrollOverAtEndAI_getOwnerLayerInterface
#define ScrollOverAtEndAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef ScrollOverAtEndAI_getGameInput
#define ScrollOverAtEndAI_getGameInput BasicAI_getGameInput
#endif
#ifndef ScrollOverAtEndAI_getName
#define ScrollOverAtEndAI_getName BasicAI_getName
#endif
#ifndef ScrollOverAtEndAI_toString
#define ScrollOverAtEndAI_toString BasicAI_toString
#endif
#ifndef ScrollOverAtEndAI_getSourceId
#define ScrollOverAtEndAI_getSourceId BasicAI_getSourceId
#endif
#ifndef ScrollOverAtEndAI_getInstance
#define ScrollOverAtEndAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef ScrollOverAtEndAI_getId
#define ScrollOverAtEndAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScrollOverAtEndAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScrollOverAtEndAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERATENDAI_H
