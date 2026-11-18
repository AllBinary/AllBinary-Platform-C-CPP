#ifndef ORG_ALLBINARY_GAME_AG_AI_HORIZONTAROTATIONMANEUVERAI_H
#define ORG_ALLBINARY_GAME_AG_AI_HORIZONTAROTATIONMANEUVERAI_H
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
typedef struct ArtificialIntelligence ArtificialIntelligence;
typedef struct ArtificialIntelligenceTransitionInterface ArtificialIntelligenceTransitionInterface;
typedef struct IndexedAnimation IndexedAnimation;
typedef struct RotationAnimationInterface RotationAnimationInterface;
typedef struct RotationAnimationInterfaceCompositeInterface RotationAnimationInterfaceCompositeInterface;
typedef struct BasicAI BasicAI;
typedef struct GameInput GameInput;
typedef struct BasicVelocityProperties BasicVelocityProperties;
typedef struct VelocityInterface VelocityInterface;
typedef struct VelocityInterfaceCompositeInterface VelocityInterfaceCompositeInterface;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct AngleIncrementInfo AngleIncrementInfo;
typedef struct CircularIndexUtil CircularIndexUtil;
#include "org/allbinary/ai/ArtificialIntelligenceTransitionInterface.h"
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#include "org/allbinary/game/ai/BasicAI.h"
#if __has_include("org/allbinary/game/physics/velocity/BasicVelocityProperties.h")
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/VelocityInterface.h")
#include "org/allbinary/game/physics/velocity/VelocityInterface.h"
#endif
#if __has_include("org/allbinary/util/CircularIndexUtil.h")
#include "org/allbinary/util/CircularIndexUtil.h"
#endif
#include "java/lang/Integer.h"

typedef struct HorizontaRotationManeuverAI HorizontaRotationManeuverAI;
struct HorizontaRotationManeuverAI {
    BasicAI base;
    ArtificialIntelligenceTransitionInterface ArtificialIntelligenceTransitionInterface_interface;
    CircularIndexUtil* circularIndexUtil;
    int32_t currentSpeedDivisor;
    IndexedAnimation* rotationAnimationInterface;
    BasicVelocityProperties* baseVelocityInterface;
    VelocityInterface* velocityInterface;
};


HorizontaRotationManeuverAI* HorizontaRotationManeuverAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void HorizontaRotationManeuverAI_init(HorizontaRotationManeuverAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void HorizontaRotationManeuverAI_transition(HorizontaRotationManeuverAI* this);

void HorizontaRotationManeuverAI_processAI(HorizontaRotationManeuverAI* this, AllBinaryLayerManager* allBinaryLayerManager);

void HorizontaRotationManeuverAI_reverse(HorizontaRotationManeuverAI* this);



int32_t HorizontaRotationManeuverAI_getId(HorizontaRotationManeuverAI* this);
#define HorizontaRotationManeuverAI_new2 HorizontaRotationManeuverAI_new
#define HorizontaRotationManeuverAI_init2 HorizontaRotationManeuverAI_init
#ifndef HorizontaRotationManeuverAI_processKeyAI
#define HorizontaRotationManeuverAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef HorizontaRotationManeuverAI_setLastKey
#define HorizontaRotationManeuverAI_setLastKey BasicAI_setLastKey
#endif
#ifndef HorizontaRotationManeuverAI_getLastKey
#define HorizontaRotationManeuverAI_getLastKey BasicAI_getLastKey
#endif
#ifndef HorizontaRotationManeuverAI_getOwnerLayerInterface
#define HorizontaRotationManeuverAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef HorizontaRotationManeuverAI_getGameInput
#define HorizontaRotationManeuverAI_getGameInput BasicAI_getGameInput
#endif
#ifndef HorizontaRotationManeuverAI_getName
#define HorizontaRotationManeuverAI_getName BasicAI_getName
#endif
#ifndef HorizontaRotationManeuverAI_toString
#define HorizontaRotationManeuverAI_toString BasicAI_toString
#endif
#ifndef HorizontaRotationManeuverAI_getSourceId
#define HorizontaRotationManeuverAI_getSourceId BasicAI_getSourceId
#endif
#ifndef HorizontaRotationManeuverAI_getInstance
#define HorizontaRotationManeuverAI_getInstance ArtificialIntelligence_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HorizontaRotationManeuverAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HorizontaRotationManeuverAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_HORIZONTAROTATIONMANEUVERAI_H
