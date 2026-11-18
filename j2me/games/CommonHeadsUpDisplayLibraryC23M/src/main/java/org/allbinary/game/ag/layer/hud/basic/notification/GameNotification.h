#ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATION_H
#define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATION_H
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
// package org.allbinary.game.ag.layer.hud.basic.notification

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameNotificationEvent GameNotificationEvent;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct NullUtil NullUtil;
typedef struct BooleanFactory BooleanFactory;
typedef struct StringUtil StringUtil;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/game/layer/hud/event/GameNotificationEvent.h")
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "java/lang/Integer.h"

typedef struct GameNotification GameNotification;
struct GameNotification {
    BasicArrayList* stringList;
    BasicArrayList* timeList;
    BasicArrayList* colorList;
};

extern GameNotificationEvent* GameNotification_NULL_GAME_NOTIFICATION_EVENT;

GameNotification* GameNotification_new(void);
void GameNotification_init(GameNotification* this);

void GameNotification_add(GameNotification* this, const char* string, int32_t seconds, BasicColor* basicColor);

void GameNotification_clear(GameNotification* this);

int32_t GameNotification_getSize(GameNotification* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameNotification_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameNotification_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATION_H
