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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct GameNotificationEvent GameNotificationEvent;
struct GameNotificationEvent {
    AllBinaryEventObject base;
    const char* string;
    int32_t seconds;
    BasicColor* basicColor;
    bool removeable;
};


GameNotificationEvent* GameNotificationEvent_new(Any* anyType, const char* string, int32_t seconds, BasicColor* basicColor, bool permanent);

void GameNotificationEvent_init(GameNotificationEvent* this, Any* anyType, const char* string, int32_t seconds, BasicColor* basicColor, bool permanent);
const char* GameNotificationEvent_getString(GameNotificationEvent* this);
int32_t GameNotificationEvent_getSeconds(GameNotificationEvent* this);
BasicColor* GameNotificationEvent_getBasicColorP(GameNotificationEvent* this);
bool GameNotificationEvent_getPermanent(GameNotificationEvent* this);
void GameNotificationEvent_setString(GameNotificationEvent* this, const char* string);
void GameNotificationEvent_setBasicColorP(GameNotificationEvent* this, BasicColor* basicColor);

static void GameNotificationEvent_initFields(GameNotificationEvent* this) {
    this->string = StringUtil_getInstance()->EMPTY_STRING;
    
    this->basicColor = BasicColorFactory_getInstance()->BLACK;
    
}


void GameNotificationEvent_init(GameNotificationEvent* this, Any* anyType, const char* string, int32_t seconds, BasicColor* basicColor, bool permanent) {
        AllBinaryEventObject_init(&this->base, anyType);
        GameNotificationEvent_initFields(this);
        GameNotificationEvent_setString(this, string);
        this->seconds = seconds;
        GameNotificationEvent_setBasicColorP(this, basicColor);
        this->removeable = permanent;
}

GameNotificationEvent* GameNotificationEvent_new(Any* anyType, const char* string, int32_t seconds, BasicColor* basicColor, bool permanent) {
    GameNotificationEvent* this = calloc(1, sizeof(GameNotificationEvent));
    GameNotificationEvent_init(this, anyType, string, seconds, basicColor, permanent);
    return this;
}


const char* GameNotificationEvent_getString(GameNotificationEvent* this) {
        return this->string;
}


int32_t GameNotificationEvent_getSeconds(GameNotificationEvent* this) {
        return this->seconds;
}


BasicColor* GameNotificationEvent_getBasicColorP(GameNotificationEvent* this) {
        return this->basicColor;
}


bool GameNotificationEvent_getPermanent(GameNotificationEvent* this) {
        return this->removeable;
}


void GameNotificationEvent_setString(GameNotificationEvent* this, const char* string) {
        this->string = string;
}


void GameNotificationEvent_setBasicColorP(GameNotificationEvent* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}

