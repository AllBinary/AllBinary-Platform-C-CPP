#ifndef ORG_ALLBINARY_GAME_AG_AI_LURCHROTATIONAI_H
#define ORG_ALLBINARY_GAME_AG_AI_LURCHROTATIONAI_H
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
typedef struct IndexedAnimation IndexedAnimation;
typedef struct RotationAnimationInterface RotationAnimationInterface;
typedef struct RotationAnimationInterfaceCompositeInterface RotationAnimationInterfaceCompositeInterface;
typedef struct LurchAI LurchAI;
typedef struct GameInput GameInput;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AngleIncrementInfo AngleIncrementInfo;
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#include "org/allbinary/game/ag/ai/tactical/LurchAI.h"

typedef struct LurchRotationAI LurchRotationAI;
struct LurchRotationAI {
    LurchAI base;
    IndexedAnimation* rotationAnimationInterface;
};


LurchRotationAI* LurchRotationAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void LurchRotationAI_init(LurchRotationAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void LurchRotationAI_reverse(LurchRotationAI* this);

#define LurchRotationAI_new2 LurchRotationAI_new
#define LurchRotationAI_init2 LurchRotationAI_init
#ifndef LurchRotationAI_processAI
#define LurchRotationAI_processAI LurchAI_processAI
#endif
#ifndef LurchRotationAI_accelerate
#define LurchRotationAI_accelerate LurchAI_accelerate
#endif
#ifndef LurchRotationAI_drop
#define LurchRotationAI_drop LurchAI_drop
#endif
#ifndef LurchRotationAI_processAI
#define LurchRotationAI_processAI BasicAI_processAI
#endif
#ifndef LurchRotationAI_processKeyAI
#define LurchRotationAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef LurchRotationAI_setLastKey
#define LurchRotationAI_setLastKey BasicAI_setLastKey
#endif
#ifndef LurchRotationAI_getLastKey
#define LurchRotationAI_getLastKey BasicAI_getLastKey
#endif
#ifndef LurchRotationAI_getOwnerLayerInterface
#define LurchRotationAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef LurchRotationAI_getGameInput
#define LurchRotationAI_getGameInput BasicAI_getGameInput
#endif
#ifndef LurchRotationAI_getName
#define LurchRotationAI_getName BasicAI_getName
#endif
#ifndef LurchRotationAI_toString
#define LurchRotationAI_toString BasicAI_toString
#endif
#ifndef LurchRotationAI_getSourceId
#define LurchRotationAI_getSourceId BasicAI_getSourceId
#endif
#ifndef LurchRotationAI_getInstance
#define LurchRotationAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef LurchRotationAI_processAI
#define LurchRotationAI_processAI ArtificialIntelligence_processAI
#endif
#ifndef LurchRotationAI_getId
#define LurchRotationAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LurchRotationAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LurchRotationAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_LURCHROTATIONAI_H
