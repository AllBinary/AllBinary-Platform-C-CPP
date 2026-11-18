#ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TIMEDFIREAI_H
#define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TIMEDFIREAI_H
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
// package org.allbinary.game.ag.ai.scroller

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct TimeFiredInterface TimeFiredInterface;
typedef struct Canvas Canvas;
typedef struct BasicAI BasicAI;
typedef struct GameInput GameInput;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
typedef struct TimeDelayHelper TimeDelayHelper;
#include "org/allbinary/game/ai/BasicAI.h"
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#include "java/lang/Integer.h"

typedef struct TimedFireAI TimedFireAI;
struct TimedFireAI {
    BasicAI base;
    TimeDelayHelper* maxFireDelayTimeHelper;
    int32_t delay;
};

extern int32_t TimedFireAI_TIME;

TimedFireAI* TimedFireAI_new(int32_t delay, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void TimedFireAI_init(TimedFireAI* this, int32_t delay, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void TimedFireAI_processAI(TimedFireAI* this, AllBinaryLayerManager* allBinaryLayerManager);
#define TimedFireAI_new3 TimedFireAI_new
#define TimedFireAI_init3 TimedFireAI_init
#ifndef TimedFireAI_processKeyAI
#define TimedFireAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef TimedFireAI_setLastKey
#define TimedFireAI_setLastKey BasicAI_setLastKey
#endif
#ifndef TimedFireAI_getLastKey
#define TimedFireAI_getLastKey BasicAI_getLastKey
#endif
#ifndef TimedFireAI_getOwnerLayerInterface
#define TimedFireAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef TimedFireAI_getGameInput
#define TimedFireAI_getGameInput BasicAI_getGameInput
#endif
#ifndef TimedFireAI_getName
#define TimedFireAI_getName BasicAI_getName
#endif
#ifndef TimedFireAI_toString
#define TimedFireAI_toString BasicAI_toString
#endif
#ifndef TimedFireAI_getSourceId
#define TimedFireAI_getSourceId BasicAI_getSourceId
#endif
#ifndef TimedFireAI_getInstance
#define TimedFireAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef TimedFireAI_getId
#define TimedFireAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TimedFireAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TimedFireAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TIMEDFIREAI_H
