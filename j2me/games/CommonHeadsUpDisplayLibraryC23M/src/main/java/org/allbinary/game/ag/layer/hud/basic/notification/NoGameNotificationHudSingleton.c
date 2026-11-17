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
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct NoGameNotificationHudSingleton NoGameNotificationHudSingleton;
struct NoGameNotificationHudSingleton {
    LogUtil* logUtil;
    GameNotificationHud* gameNotificationHud;
};

static NoGameNotificationHudSingleton* NoGameNotificationHudSingleton_instance;

NoGameNotificationHudSingleton* NoGameNotificationHudSingleton_new(void);
NoGameNotificationHudSingleton* NoGameNotificationHudSingleton_getInstance(void);

void NoGameNotificationHudSingleton_init(NoGameNotificationHudSingleton* this);
GameNotificationHud* NoGameNotificationHudSingleton_getGameNotificationHud(NoGameNotificationHudSingleton* this);

// Static fields with runtime initializers: call this once at startup
void NoGameNotificationHudSingleton_staticInit(void) {
    NoGameNotificationHudSingleton_instance = NoGameNotificationHudSingleton_new();
}

static void NoGameNotificationHudSingleton_initFields(NoGameNotificationHudSingleton* this) {
    this->logUtil = LogUtil_getInstance();
    this->gameNotificationHud = GameNotificationHud_NULL_GAME_NOTIFICATION;
}


NoGameNotificationHudSingleton* NoGameNotificationHudSingleton_getInstance(void) {
        return NoGameNotificationHudSingleton_instance;
}


void NoGameNotificationHudSingleton_init(NoGameNotificationHudSingleton* this) {
    NoGameNotificationHudSingleton_initFields(this);
        JAVA_TRY {
            BasicHudFactory* basicHudFactory = BasicHudFactory_getInstance();
            this->gameNotificationHud = NoGameGameNotificationHud_new();
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

NoGameNotificationHudSingleton* NoGameNotificationHudSingleton_new(void) {
    NoGameNotificationHudSingleton* this = calloc(1, sizeof(NoGameNotificationHudSingleton));
    NoGameNotificationHudSingleton_init(this);
    return this;
}


GameNotificationHud* NoGameNotificationHudSingleton_getGameNotificationHud(NoGameNotificationHudSingleton* this) {
        return this->gameNotificationHud;
}

