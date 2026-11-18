#ifndef ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENT_H
#define ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENT_H
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
// package org.allbinary.game.layer.hud.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct StringUtil StringUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "java/lang/Integer.h"
#include "java/lang/Boolean.h"

typedef struct GameNotificationEvent GameNotificationEvent;
struct GameNotificationEvent {
    AllBinaryEventObject base;
    const char* string;
    int32_t seconds;
    BasicColor* basicColor;
    bool removeable;
};


GameNotificationEvent* GameNotificationEvent_new(void* anyType, const char* string, int32_t seconds, BasicColor* basicColor, bool permanent);

void GameNotificationEvent_init(GameNotificationEvent* this, void* anyType, const char* string, int32_t seconds, BasicColor* basicColor, bool permanent);

const char* GameNotificationEvent_getString(GameNotificationEvent* this);

int32_t GameNotificationEvent_getSeconds(GameNotificationEvent* this);

BasicColor* GameNotificationEvent_getBasicColorP(GameNotificationEvent* this);

bool GameNotificationEvent_getPermanent(GameNotificationEvent* this);

void GameNotificationEvent_setString(GameNotificationEvent* this, const char* string);

void GameNotificationEvent_setBasicColorP(GameNotificationEvent* this, BasicColor* basicColor);
#define GameNotificationEvent_new5 GameNotificationEvent_new
#define GameNotificationEvent_init5 GameNotificationEvent_init
#ifndef GameNotificationEvent_getSource
#define GameNotificationEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef GameNotificationEvent_setSource
#define GameNotificationEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameNotificationEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameNotificationEvent_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENT_H
