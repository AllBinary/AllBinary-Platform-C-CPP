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
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/graphics/hud/BasicHud.h"
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationListenerInterface.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"

typedef struct GameNotificationHud GameNotificationHud;
struct GameNotificationHud {
    BasicHud base;
    GameNotificationListenerInterface GameNotificationListenerInterface_interface;
    const char* METHOD_NAME;
    GameNotificationEvent* lastGameNotificationEvent;
};

GameNotificationHud* GameNotificationHud_NULL_GAME_NOTIFICATION;

GameNotificationHud* GameNotificationHud_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

void GameNotificationHud_init(GameNotificationHud* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);
void GameNotificationHud_onEvent(GameNotificationHud* this, AllBinaryEventObject* eventObject);
void GameNotificationHud_onGameNotificationEvent(GameNotificationHud* this, GameNotificationEvent* gameNotificationEvent);
void GameNotificationHud_add(GameNotificationHud* this, const char* string, int32_t seconds, BasicColor* basicColor, bool permanent);
void GameNotificationHud_processTick(GameNotificationHud* this);
void GameNotificationHud_paint(GameNotificationHud* this, Graphics* graphics);
void GameNotificationHud_clear(GameNotificationHud* this);

// Static fields with runtime initializers: call this once at startup
void GameNotificationHud_staticInit(void) {
    GameNotificationHud_NULL_GAME_NOTIFICATION = GameNotificationHud_new(BasicHudFactory_getInstance()->TOPCENTER, BasicHudFactory_getInstance()->HORIZONTAL, 0, BasicColorFactory_getInstance()->RED);
}

static void GameNotificationHud_initFields(GameNotificationHud* this) {
    this->METHOD_NAME = "onGameNotificationEvent";
    this->lastGameNotificationEvent = GameNotification_NULL_GAME_NOTIFICATION_EVENT;
}


void GameNotificationHud_init(GameNotificationHud* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
        BasicHud_init(&this->base, location, direction, bufferZone, basicColor);
        GameNotificationHud_initFields(this);
}

GameNotificationHud* GameNotificationHud_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    GameNotificationHud* this = calloc(1, sizeof(GameNotificationHud));
    GameNotificationHud_init(this, location, direction, bufferZone, basicColor);
    return this;
}


void GameNotificationHud_onEvent(GameNotificationHud* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


// throws Exception
void GameNotificationHud_onGameNotificationEvent(GameNotificationHud* this, GameNotificationEvent* gameNotificationEvent) {
        if (this->lastGameNotificationEvent != gameNotificationEvent) {
            this->lastGameNotificationEvent = gameNotificationEvent;
            JAVA_CALL(this->logUtil, putF, GameNotificationEvent_getString(gameNotificationEvent), this, this->METHOD_NAME);
        }
        GameNotificationHud_add(this, GameNotificationEvent_getString(gameNotificationEvent), GameNotificationEvent_getSeconds(gameNotificationEvent), GameNotificationEvent_getBasicColorP(gameNotificationEvent), GameNotificationEvent_getPermanent(gameNotificationEvent));
}


void GameNotificationHud_add(GameNotificationHud* this, const char* string, int32_t seconds, BasicColor* basicColor, bool permanent) {
}


// throws Exception
void GameNotificationHud_processTick(GameNotificationHud* this) {
}


void GameNotificationHud_paint(GameNotificationHud* this, Graphics* graphics) {
}


void GameNotificationHud_clear(GameNotificationHud* this) {
}

