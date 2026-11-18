#ifndef ORG_ALLBINARY_GAME_AG_AI_UPDOWNVECTORAI_H
#define ORG_ALLBINARY_GAME_AG_AI_UPDOWNVECTORAI_H
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
typedef struct BasicVelocityProperties BasicVelocityProperties;
typedef struct VelocityInterfaceCompositeInterface VelocityInterfaceCompositeInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct BasicDecimal BasicDecimal;
#include "org/allbinary/game/ai/BasicAI.h"
#if __has_include("org/allbinary/game/physics/velocity/BasicVelocityProperties.h")
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#endif

typedef struct UpDownVectorAI UpDownVectorAI;
struct UpDownVectorAI {
    BasicAI base;
    BasicVelocityProperties* velocityInterface;
    int32_t index;
};


UpDownVectorAI* UpDownVectorAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void UpDownVectorAI_init(UpDownVectorAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void UpDownVectorAI_processAI(UpDownVectorAI* this, AllBinaryLayerManager* allBinaryLayerManager);
#define UpDownVectorAI_new2 UpDownVectorAI_new
#define UpDownVectorAI_init2 UpDownVectorAI_init
#ifndef UpDownVectorAI_processKeyAI
#define UpDownVectorAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef UpDownVectorAI_setLastKey
#define UpDownVectorAI_setLastKey BasicAI_setLastKey
#endif
#ifndef UpDownVectorAI_getLastKey
#define UpDownVectorAI_getLastKey BasicAI_getLastKey
#endif
#ifndef UpDownVectorAI_getOwnerLayerInterface
#define UpDownVectorAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef UpDownVectorAI_getGameInput
#define UpDownVectorAI_getGameInput BasicAI_getGameInput
#endif
#ifndef UpDownVectorAI_getName
#define UpDownVectorAI_getName BasicAI_getName
#endif
#ifndef UpDownVectorAI_toString
#define UpDownVectorAI_toString BasicAI_toString
#endif
#ifndef UpDownVectorAI_getSourceId
#define UpDownVectorAI_getSourceId BasicAI_getSourceId
#endif
#ifndef UpDownVectorAI_getInstance
#define UpDownVectorAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef UpDownVectorAI_getId
#define UpDownVectorAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void UpDownVectorAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void UpDownVectorAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_UPDOWNVECTORAI_H
