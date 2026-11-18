#ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_HORIZONTALSCREENPATROLAI_H
#define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_HORIZONTALSCREENPATROLAI_H
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
typedef struct Canvas Canvas;
typedef struct BasicAI BasicAI;
typedef struct GameInput GameInput;
typedef struct AllBinaryGameLayerManager AllBinaryGameLayerManager;
typedef struct MyRandomFactory MyRandomFactory;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct PlayerQueue PlayerQueue;
typedef struct SecondaryPlayerQueueFactory SecondaryPlayerQueueFactory;
typedef struct Sound Sound;
typedef struct TimeDelayHelper TimeDelayHelper;
typedef struct ABHashtable ABHashtable;
#include "org/allbinary/game/ai/BasicAI.h"
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/Sound.h")
#include "org/allbinary/media/audio/Sound.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#include "java/lang/Integer.h"

typedef struct HorizontalScreenPatrolAI HorizontalScreenPatrolAI;
struct HorizontalScreenPatrolAI {
    BasicAI base;
    int32_t keyDirection;
    DisplayInfoSingleton* displayInfoSingleton;
    int32_t firingX;
    int32_t firedIndex;
    int32_t MAX_FIRE;
    TimeDelayHelper* timeDelayHelper;
    PlayerQueue* secondaryPlayerQueue;
    Sound* sound;
};

extern int32_t HorizontalScreenPatrolAI_SOUND;

HorizontalScreenPatrolAI* HorizontalScreenPatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void HorizontalScreenPatrolAI_init(HorizontalScreenPatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void HorizontalScreenPatrolAI_processAI(HorizontalScreenPatrolAI* this, AllBinaryLayerManager* allBinaryLayerManager);

void HorizontalScreenPatrolAI_nextDirection(HorizontalScreenPatrolAI* this);
#define HorizontalScreenPatrolAI_new3 HorizontalScreenPatrolAI_new
#define HorizontalScreenPatrolAI_init3 HorizontalScreenPatrolAI_init
#ifndef HorizontalScreenPatrolAI_processKeyAI
#define HorizontalScreenPatrolAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef HorizontalScreenPatrolAI_setLastKey
#define HorizontalScreenPatrolAI_setLastKey BasicAI_setLastKey
#endif
#ifndef HorizontalScreenPatrolAI_getLastKey
#define HorizontalScreenPatrolAI_getLastKey BasicAI_getLastKey
#endif
#ifndef HorizontalScreenPatrolAI_getOwnerLayerInterface
#define HorizontalScreenPatrolAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef HorizontalScreenPatrolAI_getGameInput
#define HorizontalScreenPatrolAI_getGameInput BasicAI_getGameInput
#endif
#ifndef HorizontalScreenPatrolAI_getName
#define HorizontalScreenPatrolAI_getName BasicAI_getName
#endif
#ifndef HorizontalScreenPatrolAI_toString
#define HorizontalScreenPatrolAI_toString BasicAI_toString
#endif
#ifndef HorizontalScreenPatrolAI_getSourceId
#define HorizontalScreenPatrolAI_getSourceId BasicAI_getSourceId
#endif
#ifndef HorizontalScreenPatrolAI_getInstance
#define HorizontalScreenPatrolAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef HorizontalScreenPatrolAI_getId
#define HorizontalScreenPatrolAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HorizontalScreenPatrolAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HorizontalScreenPatrolAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_SCROLLER_HORIZONTALSCREENPATROLAI_H
