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
// package org.allbinary.logic.system.security.licensing

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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/media/audio/ErrorSound.h"
#include "org/allbinary/media/audio/PrimaryPlayerQueueFactory.h"

typedef struct LockedFeatureNotificationUtil LockedFeatureNotificationUtil;
struct LockedFeatureNotificationUtil {
    GameNotificationEvent* gameNotificationEvent;
};

static LockedFeatureNotificationUtil* LockedFeatureNotificationUtil_instance;

LockedFeatureNotificationUtil* LockedFeatureNotificationUtil_new(void);
LockedFeatureNotificationUtil* LockedFeatureNotificationUtil_getInstance(void);
void LockedFeatureNotificationUtil_fire(LockedFeatureNotificationUtil* this);
void LockedFeatureNotificationUtil_fireWithColor(LockedFeatureNotificationUtil* this, BasicColor* basicColor);

// Static fields with runtime initializers: call this once at startup
void LockedFeatureNotificationUtil_staticInit(void) {
    LockedFeatureNotificationUtil_instance = LockedFeatureNotificationUtil_new();
}

static void LockedFeatureNotificationUtil_initFields(LockedFeatureNotificationUtil* this) {
    this->gameNotificationEvent = GameNotificationEvent_new(this, LicenseStrings_getInstance()->LOCKED, SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 3), BasicColorFactory_getInstance()->RED, BooleanFactory_getInstance()->FALSE);
}

void LockedFeatureNotificationUtil_init(LockedFeatureNotificationUtil* this) {
    LockedFeatureNotificationUtil_initFields(this);
}

LockedFeatureNotificationUtil* LockedFeatureNotificationUtil_new(void) {
    LockedFeatureNotificationUtil* this = calloc(1, sizeof(LockedFeatureNotificationUtil));
    LockedFeatureNotificationUtil_init(this);
    return this;
}


LockedFeatureNotificationUtil* LockedFeatureNotificationUtil_getInstance(void) {
        return LockedFeatureNotificationUtil_instance;
}


// throws Exception
void LockedFeatureNotificationUtil_fire(LockedFeatureNotificationUtil* this) {
        PrimaryPlayerQueueFactory_add(PrimaryPlayerQueueFactory_getInstance(), ErrorSound_getInstance());
        GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->gameNotificationEvent);
}


// throws Exception
void LockedFeatureNotificationUtil_fireWithColor(LockedFeatureNotificationUtil* this, BasicColor* basicColor) {
        PrimaryPlayerQueueFactory_add(PrimaryPlayerQueueFactory_getInstance(), ErrorSound_getInstance());
        GameNotificationEvent_setBasicColorP(this->gameNotificationEvent, basicColor);
        GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->gameNotificationEvent);
}

