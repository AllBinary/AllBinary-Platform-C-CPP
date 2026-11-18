#ifndef ORG_ALLBINARY_GAME_AG_AI_TACTICAL_HORIZONTALMANEUVERAI_H
#define ORG_ALLBINARY_GAME_AG_AI_TACTICAL_HORIZONTALMANEUVERAI_H
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

typedef struct HorizontalManeuverAI HorizontalManeuverAI;
struct HorizontalManeuverAI {
    BasicAI base;
    int32_t currentRelativeAngle;
    int32_t currentSpeed;
};


HorizontalManeuverAI* HorizontalManeuverAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void HorizontalManeuverAI_init(HorizontalManeuverAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void HorizontalManeuverAI_processAI(HorizontalManeuverAI* this, AllBinaryLayerManager* allBinaryLayerManager);

void HorizontalManeuverAI_reverse(HorizontalManeuverAI* this);


#define HorizontalManeuverAI_new2 HorizontalManeuverAI_new
#define HorizontalManeuverAI_init2 HorizontalManeuverAI_init
#ifndef HorizontalManeuverAI_processKeyAI
#define HorizontalManeuverAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef HorizontalManeuverAI_setLastKey
#define HorizontalManeuverAI_setLastKey BasicAI_setLastKey
#endif
#ifndef HorizontalManeuverAI_getLastKey
#define HorizontalManeuverAI_getLastKey BasicAI_getLastKey
#endif
#ifndef HorizontalManeuverAI_getOwnerLayerInterface
#define HorizontalManeuverAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef HorizontalManeuverAI_getGameInput
#define HorizontalManeuverAI_getGameInput BasicAI_getGameInput
#endif
#ifndef HorizontalManeuverAI_getName
#define HorizontalManeuverAI_getName BasicAI_getName
#endif
#ifndef HorizontalManeuverAI_toString
#define HorizontalManeuverAI_toString BasicAI_toString
#endif
#ifndef HorizontalManeuverAI_getSourceId
#define HorizontalManeuverAI_getSourceId BasicAI_getSourceId
#endif
#ifndef HorizontalManeuverAI_getInstance
#define HorizontalManeuverAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef HorizontalManeuverAI_getId
#define HorizontalManeuverAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HorizontalManeuverAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HorizontalManeuverAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_TACTICAL_HORIZONTALMANEUVERAI_H
