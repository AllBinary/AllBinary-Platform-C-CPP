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
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct GameNotification GameNotification;
struct GameNotification {
    BasicArrayList* stringList;
    BasicArrayList* timeList;
    BasicArrayList* colorList;
};

GameNotificationEvent* GameNotification_NULL_GAME_NOTIFICATION_EVENT;

GameNotification* GameNotification_new(void);
void GameNotification_add(GameNotification* this, const char* string, int32_t seconds, BasicColor* basicColor);
void GameNotification_clear(GameNotification* this);
int32_t GameNotification_getSize(GameNotification* this);

// Static fields with runtime initializers: call this once at startup
void GameNotification_staticInit(void) {
    GameNotification_NULL_GAME_NOTIFICATION_EVENT = GameNotificationEvent_new(NullUtil_getInstance()->NULL_OBJECT, StringUtil_getInstance()->EMPTY_STRING, 0, BasicColorFactory_getInstance()->RED, BooleanFactory_getInstance()->FALSE);
}

static void GameNotification_initFields(GameNotification* this) {
    this->stringList = BasicArrayListD_new();
    this->timeList = BasicArrayListD_new();
    this->colorList = BasicArrayListD_new();
}

void GameNotification_init(GameNotification* this) {
    GameNotification_initFields(this);
}

GameNotification* GameNotification_new(void) {
    GameNotification* this = calloc(1, sizeof(GameNotification));
    GameNotification_init(this);
    return this;
}


void GameNotification_add(GameNotification* this, const char* string, int32_t seconds, BasicColor* basicColor) {
        if (!BasicArrayList_contains(this->stringList, string)) {
            BasicArrayList_add(this->stringList, string);
            BasicArrayList_add(this->timeList, seconds);
            BasicArrayList_add(this->colorList, basicColor);
        }
}


void GameNotification_clear(GameNotification* this) {
        BasicArrayList_clear(this->stringList);
        BasicArrayList_clear(this->timeList);
        BasicArrayList_clear(this->colorList);
}


int32_t GameNotification_getSize(GameNotification* this) {
        return BasicArrayList_size(this->stringList);
}

