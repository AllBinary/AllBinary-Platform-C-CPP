#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEFEATUREEVENT_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEFEATUREEVENT_H
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
typedef struct AllBinaryEventObject AllBinaryEventObject;
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct GameFeatureEvent GameFeatureEvent;
struct GameFeatureEvent {
    AllBinaryEventObject base;
    const char* whatChanged;
};


GameFeatureEvent* GameFeatureEvent_new(void* anyType, const char* whatChanged);

void GameFeatureEvent_init(GameFeatureEvent* this, void* anyType, const char* whatChanged);

const char* GameFeatureEvent_getWhatChanged(GameFeatureEvent* this);

void* GameFeatureEvent_getGameOption(GameFeatureEvent* this);
#define GameFeatureEvent_new2 GameFeatureEvent_new
#define GameFeatureEvent_init2 GameFeatureEvent_init
#ifndef GameFeatureEvent_getSource
#define GameFeatureEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef GameFeatureEvent_setSource
#define GameFeatureEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameFeatureEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameFeatureEvent_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEFEATUREEVENT_H
