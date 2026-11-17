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
// package org.allbinary.content

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Command.h"
#include "android/app/Notification.h"
#include "android/app/NotificationManager.h"
#include "android/app/PendingIntent.h"
#include "android/content/Context.h"
#include "android/content/Intent.h"
#include "org/allbinary/android/AndroidInfoFactory.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct NotificationUtil NotificationUtil;
struct NotificationUtil {
    LogUtil* logUtil;
    NotificationManager* notificationManager;
    NotificationBuilder* notificationBuilder;
};

static NotificationUtil* NotificationUtil_SINGLETON;

NotificationUtil* NotificationUtil_new(void);
NotificationUtil* NotificationUtil_getInstance(void);

void NotificationUtil_init(NotificationUtil* this);
void NotificationUtil_notify(NotificationUtil* this, Command* command, const char* resource, const char* message);

// Static fields with runtime initializers: call this once at startup
void NotificationUtil_staticInit(void) {
    NotificationUtil_SINGLETON = NotificationUtil_new();
}

static void NotificationUtil_initFields(NotificationUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->notificationManager = ((NotificationManager*) JAVA_CALL(ResourceUtil_getContext(ResourceUtil_getInstance()), getSystemService, Context_NOTIFICATION_SERVICE));
    this->notificationBuilder = nullptr;
}


NotificationUtil* NotificationUtil_getInstance(void) {
        return NotificationUtil_SINGLETON;
}


void NotificationUtil_init(NotificationUtil* this) {
    NotificationUtil_initFields(this);
        int32_t SDK_VERSION = AndroidInfoFactory_getVersion(AndroidInfoFactory_getInstance());
        if (SDK_VERSION > 22) {
            this->notificationBuilder = NotificationBuilderAPI23_new();
        } else {
            this->notificationBuilder = NotificationBuilder_NULL_NOTIFICATION_BUILDER;
        }
}

NotificationUtil* NotificationUtil_new(void) {
    NotificationUtil* this = calloc(1, sizeof(NotificationUtil));
    NotificationUtil_init(this);
    return this;
}


void NotificationUtil_notify(NotificationUtil* this, Command* command, const char* resource, const char* message) {
        Context* context = ResourceUtil_getContext(ResourceUtil_getInstance());
        Intent* intent = CommandUriAction_getIntent(CommandUriAction_getInstance(), command);
        int32_t integer = ResourceUtil_getResourceId(ResourceUtil_getInstance(), resource);
        int32_t FLAG_IMMUTABLE = 1 << 26;
        int32_t SDK_VERSION = AndroidInfoFactory_getVersion(AndroidInfoFactory_getInstance());
        PendingIntent* pendingIntent = PendingIntent_getActivity(context, 0, intent, (SDK_VERSION > 22 ? FLAG_IMMUTABLE : 0));
        if (this->notificationBuilder == nullptr) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->NOT_IMPLEMENTED);
            return;
        }
        NotificationBuilder_build(this->notificationBuilder, context, command, message, integer, pendingIntent);
}

