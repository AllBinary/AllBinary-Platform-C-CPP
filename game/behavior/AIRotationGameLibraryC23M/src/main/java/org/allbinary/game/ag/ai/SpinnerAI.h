#ifndef ORG_ALLBINARY_GAME_AG_AI_SPINNERAI_H
#define ORG_ALLBINARY_GAME_AG_AI_SPINNERAI_H
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
typedef struct Canvas Canvas;
typedef struct BasicAI BasicAI;
typedef struct GameInput GameInput;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#include "org/allbinary/game/ai/BasicAI.h"

typedef struct SpinnerAI SpinnerAI;
struct SpinnerAI {
    BasicAI base;
    bool isEven;
    int32_t* direction;
};


SpinnerAI* SpinnerAI_new(int32_t* direction, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void SpinnerAI_init(SpinnerAI* this, int32_t* direction, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void SpinnerAI_processAI(SpinnerAI* this, AllBinaryLayerManager* allBinaryLayerManager);
#define SpinnerAI_new3 SpinnerAI_new
#define SpinnerAI_init3 SpinnerAI_init
#ifndef SpinnerAI_processKeyAI
#define SpinnerAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef SpinnerAI_setLastKey
#define SpinnerAI_setLastKey BasicAI_setLastKey
#endif
#ifndef SpinnerAI_getLastKey
#define SpinnerAI_getLastKey BasicAI_getLastKey
#endif
#ifndef SpinnerAI_getOwnerLayerInterface
#define SpinnerAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef SpinnerAI_getGameInput
#define SpinnerAI_getGameInput BasicAI_getGameInput
#endif
#ifndef SpinnerAI_getName
#define SpinnerAI_getName BasicAI_getName
#endif
#ifndef SpinnerAI_toString
#define SpinnerAI_toString BasicAI_toString
#endif
#ifndef SpinnerAI_getSourceId
#define SpinnerAI_getSourceId BasicAI_getSourceId
#endif
#ifndef SpinnerAI_getInstance
#define SpinnerAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef SpinnerAI_getId
#define SpinnerAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpinnerAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpinnerAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_SPINNERAI_H
