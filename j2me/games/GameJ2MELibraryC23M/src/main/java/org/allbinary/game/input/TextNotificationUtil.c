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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/media/audio/ErrorSound.h"
#include "org/allbinary/media/audio/PrimaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/SelectSound.h"

typedef struct TextNotificationUtil TextNotificationUtil;
struct TextNotificationUtil {
    int32_t TWO;
    bool FALSE;
    GameNotificationEventHandler* gameNotificationEventHandler;
};

static TextNotificationUtil* TextNotificationUtil_instance;

TextNotificationUtil* TextNotificationUtil_new(void);
TextNotificationUtil* TextNotificationUtil_getInstance(void);
void TextNotificationUtil_fireError(TextNotificationUtil* this, const char* message);
void TextNotificationUtil_fireNew(TextNotificationUtil* this, const char* message);
void TextNotificationUtil_fireSuccess(TextNotificationUtil* this, const char* message);
void TextNotificationUtil_fire(TextNotificationUtil* this, const char* message);

// Static fields with runtime initializers: call this once at startup
void TextNotificationUtil_staticInit(void) {
    TextNotificationUtil_instance = TextNotificationUtil_new();
}

static void TextNotificationUtil_initFields(TextNotificationUtil* this) {
    this->TWO = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 2);
    this->FALSE = BooleanFactory_getInstance()->FALSE;
    this->gameNotificationEventHandler = GameNotificationEventHandler_getInstance();
}

void TextNotificationUtil_init(TextNotificationUtil* this) {
    TextNotificationUtil_initFields(this);
}

TextNotificationUtil* TextNotificationUtil_new(void) {
    TextNotificationUtil* this = calloc(1, sizeof(TextNotificationUtil));
    TextNotificationUtil_init(this);
    return this;
}


TextNotificationUtil* TextNotificationUtil_getInstance(void) {
        return TextNotificationUtil_instance;
}


// throws Exception
void TextNotificationUtil_fireError(TextNotificationUtil* this, const char* message) {
        PrimaryPlayerQueueFactory_add(PrimaryPlayerQueueFactory_getInstance(), ErrorSound_getInstance());
        TextNotificationUtil_fire(this, message);
}


// throws Exception
void TextNotificationUtil_fireNew(TextNotificationUtil* this, const char* message) {
        PrimaryPlayerQueueFactory_add(PrimaryPlayerQueueFactory_getInstance(), SelectSound_getInstance());
        TextNotificationUtil_fire(this, message);
}


// throws Exception
void TextNotificationUtil_fireSuccess(TextNotificationUtil* this, const char* message) {
        PrimaryPlayerQueueFactory_add(PrimaryPlayerQueueFactory_getInstance(), SelectSound_getInstance());
        TextNotificationUtil_fire(this, message);
}


// throws Exception
void TextNotificationUtil_fire(TextNotificationUtil* this, const char* message) {
        GameNotificationEvent* gameNotificationEvent = GameNotificationEvent_new(this, message, this->TWO, BasicColorFactory_getInstance()->RED, this->FALSE);
        GameNotificationEventHandler_fireEvent(this->gameNotificationEventHandler, gameNotificationEvent);
}

