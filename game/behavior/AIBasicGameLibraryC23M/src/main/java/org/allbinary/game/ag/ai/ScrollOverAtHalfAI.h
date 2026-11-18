#ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERATHALFAI_H
#define ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERATHALFAI_H
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

typedef struct ScrollOverAtHalfAI ScrollOverAtHalfAI;
struct ScrollOverAtHalfAI {
    BasicAI base;
};


ScrollOverAtHalfAI* ScrollOverAtHalfAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ScrollOverAtHalfAI_init(ScrollOverAtHalfAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ScrollOverAtHalfAI_processAI(ScrollOverAtHalfAI* this, AllBinaryLayerManager* allBinaryLayerManager);
#define ScrollOverAtHalfAI_new2 ScrollOverAtHalfAI_new
#define ScrollOverAtHalfAI_init2 ScrollOverAtHalfAI_init
#ifndef ScrollOverAtHalfAI_processKeyAI
#define ScrollOverAtHalfAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef ScrollOverAtHalfAI_setLastKey
#define ScrollOverAtHalfAI_setLastKey BasicAI_setLastKey
#endif
#ifndef ScrollOverAtHalfAI_getLastKey
#define ScrollOverAtHalfAI_getLastKey BasicAI_getLastKey
#endif
#ifndef ScrollOverAtHalfAI_getOwnerLayerInterface
#define ScrollOverAtHalfAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef ScrollOverAtHalfAI_getGameInput
#define ScrollOverAtHalfAI_getGameInput BasicAI_getGameInput
#endif
#ifndef ScrollOverAtHalfAI_getName
#define ScrollOverAtHalfAI_getName BasicAI_getName
#endif
#ifndef ScrollOverAtHalfAI_toString
#define ScrollOverAtHalfAI_toString BasicAI_toString
#endif
#ifndef ScrollOverAtHalfAI_getSourceId
#define ScrollOverAtHalfAI_getSourceId BasicAI_getSourceId
#endif
#ifndef ScrollOverAtHalfAI_getInstance
#define ScrollOverAtHalfAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef ScrollOverAtHalfAI_getId
#define ScrollOverAtHalfAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScrollOverAtHalfAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScrollOverAtHalfAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERATHALFAI_H
