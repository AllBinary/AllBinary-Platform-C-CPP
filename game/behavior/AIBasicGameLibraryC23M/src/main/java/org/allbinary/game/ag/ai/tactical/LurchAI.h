#ifndef ORG_ALLBINARY_GAME_AG_AI_TACTICAL_LURCHAI_H
#define ORG_ALLBINARY_GAME_AG_AI_TACTICAL_LURCHAI_H
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
// package org.allbinary.game.ag.ai.tactical

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Canvas Canvas;
typedef struct BasicAI BasicAI;
typedef struct GameInput GameInput;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#include "org/allbinary/game/ai/BasicAI.h"

typedef struct LurchAI LurchAI;
struct LurchAI {
    BasicAI base;
    int32_t currentRelativeAngle;
    int32_t currentSpeed;
};


LurchAI* LurchAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void LurchAI_init(LurchAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void LurchAI_processAI(LurchAI* this, AllBinaryLayerManager* allBinaryLayerManager);

void LurchAI_reverse(LurchAI* this);


#define LurchAI_new2 LurchAI_new
#define LurchAI_init2 LurchAI_init
#ifndef LurchAI_processKeyAI
#define LurchAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef LurchAI_setLastKey
#define LurchAI_setLastKey BasicAI_setLastKey
#endif
#ifndef LurchAI_getLastKey
#define LurchAI_getLastKey BasicAI_getLastKey
#endif
#ifndef LurchAI_getOwnerLayerInterface
#define LurchAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef LurchAI_getGameInput
#define LurchAI_getGameInput BasicAI_getGameInput
#endif
#ifndef LurchAI_getName
#define LurchAI_getName BasicAI_getName
#endif
#ifndef LurchAI_toString
#define LurchAI_toString BasicAI_toString
#endif
#ifndef LurchAI_getSourceId
#define LurchAI_getSourceId BasicAI_getSourceId
#endif
#ifndef LurchAI_getInstance
#define LurchAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef LurchAI_getId
#define LurchAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LurchAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LurchAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_TACTICAL_LURCHAI_H
