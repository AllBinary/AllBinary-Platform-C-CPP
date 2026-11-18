#ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_NOGAMENOTIFICATIONHUDSINGLETON_H
#define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_NOGAMENOTIFICATIONHUDSINGLETON_H
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
typedef struct GameNotificationHud GameNotificationHud;
typedef struct NoGameGameNotificationHud NoGameGameNotificationHud;
typedef struct BasicHudFactory BasicHudFactory;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
// #include "org/allbinary/graphics/color/BasicColorFactory.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h")
#include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h"
#endif

typedef struct NoGameNotificationHudSingleton NoGameNotificationHudSingleton;
struct NoGameNotificationHudSingleton {
    LogUtil* logUtil;
    GameNotificationHud* gameNotificationHud;
};


NoGameNotificationHudSingleton* NoGameNotificationHudSingleton_new(void);

NoGameNotificationHudSingleton* NoGameNotificationHudSingleton_getInstance(void);

void NoGameNotificationHudSingleton_init(NoGameNotificationHudSingleton* this);

GameNotificationHud* NoGameNotificationHudSingleton_getGameNotificationHud(NoGameNotificationHudSingleton* this);
#define NoGameNotificationHudSingleton_new0 NoGameNotificationHudSingleton_new
#define NoGameNotificationHudSingleton_init0 NoGameNotificationHudSingleton_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoGameNotificationHudSingleton_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoGameNotificationHudSingleton_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_NOGAMENOTIFICATIONHUDSINGLETON_H
