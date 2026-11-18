#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENT_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENT_H
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
// package org.allbinary.game.configuration.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ResourceLoadingLevel ResourceLoadingLevel;
typedef struct ResourceLoadingLevelFactory ResourceLoadingLevelFactory;
typedef struct AllBinaryEventObject AllBinaryEventObject;
#if __has_include("org/allbinary/game/resource/ResourceLoadingLevel.h")
#include "org/allbinary/game/resource/ResourceLoadingLevel.h"
#endif
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct GameInitializedEvent GameInitializedEvent;
struct GameInitializedEvent {
    AllBinaryEventObject base;
    ResourceLoadingLevel* resourceLoadingLevel;
    int32_t level;
};


GameInitializedEvent* GameInitializedEvent_new(void* anyType);

void GameInitializedEvent_init(GameInitializedEvent* this, void* anyType);

void GameInitializedEvent_setLevel(GameInitializedEvent* this, int32_t level);

int32_t GameInitializedEvent_getLevel(GameInitializedEvent* this);

void GameInitializedEvent_setResourceLoadingLevel(GameInitializedEvent* this, ResourceLoadingLevel* resourceLoadingLevel);

ResourceLoadingLevel* GameInitializedEvent_getResourceLoadingLevel(GameInitializedEvent* this);
#define GameInitializedEvent_new1 GameInitializedEvent_new
#define GameInitializedEvent_init1 GameInitializedEvent_init
#ifndef GameInitializedEvent_getSource
#define GameInitializedEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef GameInitializedEvent_setSource
#define GameInitializedEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameInitializedEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameInitializedEvent_register(void);

#if __has_include("org/allbinary/game/resource/ResourceLoadingLevel.h")
#include "org/allbinary/game/resource/ResourceLoadingLevel.h"
#endif

#endif // ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENT_H
