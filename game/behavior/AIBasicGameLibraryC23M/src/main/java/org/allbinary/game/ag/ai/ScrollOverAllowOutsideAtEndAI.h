#ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERALLOWOUTSIDEATENDAI_H
#define ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERALLOWOUTSIDEATENDAI_H
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

typedef struct ScrollOverAllowOutsideAtEndAI ScrollOverAllowOutsideAtEndAI;
struct ScrollOverAllowOutsideAtEndAI {
    BasicAI base;
};


ScrollOverAllowOutsideAtEndAI* ScrollOverAllowOutsideAtEndAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ScrollOverAllowOutsideAtEndAI_init(ScrollOverAllowOutsideAtEndAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ScrollOverAllowOutsideAtEndAI_processAI(ScrollOverAllowOutsideAtEndAI* this, AllBinaryLayerManager* allBinaryLayerManager);
#define ScrollOverAllowOutsideAtEndAI_new2 ScrollOverAllowOutsideAtEndAI_new
#define ScrollOverAllowOutsideAtEndAI_init2 ScrollOverAllowOutsideAtEndAI_init
#ifndef ScrollOverAllowOutsideAtEndAI_processKeyAI
#define ScrollOverAllowOutsideAtEndAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef ScrollOverAllowOutsideAtEndAI_setLastKey
#define ScrollOverAllowOutsideAtEndAI_setLastKey BasicAI_setLastKey
#endif
#ifndef ScrollOverAllowOutsideAtEndAI_getLastKey
#define ScrollOverAllowOutsideAtEndAI_getLastKey BasicAI_getLastKey
#endif
#ifndef ScrollOverAllowOutsideAtEndAI_getOwnerLayerInterface
#define ScrollOverAllowOutsideAtEndAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef ScrollOverAllowOutsideAtEndAI_getGameInput
#define ScrollOverAllowOutsideAtEndAI_getGameInput BasicAI_getGameInput
#endif
#ifndef ScrollOverAllowOutsideAtEndAI_getName
#define ScrollOverAllowOutsideAtEndAI_getName BasicAI_getName
#endif
#ifndef ScrollOverAllowOutsideAtEndAI_toString
#define ScrollOverAllowOutsideAtEndAI_toString BasicAI_toString
#endif
#ifndef ScrollOverAllowOutsideAtEndAI_getSourceId
#define ScrollOverAllowOutsideAtEndAI_getSourceId BasicAI_getSourceId
#endif
#ifndef ScrollOverAllowOutsideAtEndAI_getInstance
#define ScrollOverAllowOutsideAtEndAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef ScrollOverAllowOutsideAtEndAI_getId
#define ScrollOverAllowOutsideAtEndAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScrollOverAllowOutsideAtEndAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScrollOverAllowOutsideAtEndAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERALLOWOUTSIDEATENDAI_H
