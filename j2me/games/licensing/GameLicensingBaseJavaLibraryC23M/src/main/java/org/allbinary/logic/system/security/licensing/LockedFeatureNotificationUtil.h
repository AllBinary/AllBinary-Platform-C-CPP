#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDFEATURENOTIFICATIONUTIL_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDFEATURENOTIFICATIONUTIL_H
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
typedef struct LicenseStrings LicenseStrings;
typedef struct GameNotificationEvent GameNotificationEvent;
typedef struct GameNotificationEventHandler GameNotificationEventHandler;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct BooleanFactory BooleanFactory;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct ErrorSound ErrorSound;
typedef struct PrimaryPlayerQueueFactory PrimaryPlayerQueueFactory;
#if __has_include("org/allbinary/game/layer/hud/event/GameNotificationEvent.h")
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
#endif

typedef struct LockedFeatureNotificationUtil LockedFeatureNotificationUtil;
struct LockedFeatureNotificationUtil {
    GameNotificationEvent* gameNotificationEvent;
};


LockedFeatureNotificationUtil* LockedFeatureNotificationUtil_new(void);
void LockedFeatureNotificationUtil_init(LockedFeatureNotificationUtil* this);

LockedFeatureNotificationUtil* LockedFeatureNotificationUtil_getInstance(void);

void LockedFeatureNotificationUtil_fire(LockedFeatureNotificationUtil* this);

void LockedFeatureNotificationUtil_fireWithColor(LockedFeatureNotificationUtil* this, BasicColor* basicColor);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LockedFeatureNotificationUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LockedFeatureNotificationUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDFEATURENOTIFICATIONUTIL_H
