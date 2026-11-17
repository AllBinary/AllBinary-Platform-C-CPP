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
#include "android/app/Notification/Builder.h"
#include "android/app/PendingIntent.h"
#include "android/content/Context.h"
#include "android/os/Parcelable.h"
#include "org/allbinary/content/NotificationBuilder.h"

typedef struct NotificationBuilderAPI23 NotificationBuilderAPI23;
struct NotificationBuilderAPI23 {
    NotificationBuilder base;
};


NotificationBuilderAPI23* NotificationBuilderAPI23_new(void);
Parcelable* NotificationBuilderAPI23_build(NotificationBuilderAPI23* this, Context* context, Command* command, const char* message, int32_t integer, PendingIntent* pendingIntent);

void NotificationBuilderAPI23_init(NotificationBuilderAPI23* this) {
    NotificationBuilder_init(&this->base);
}

NotificationBuilderAPI23* NotificationBuilderAPI23_new(void) {
    NotificationBuilderAPI23* this = calloc(1, sizeof(NotificationBuilderAPI23));
    NotificationBuilderAPI23_init(this);
    return this;
}


Parcelable* NotificationBuilderAPI23_build(NotificationBuilderAPI23* this, Context* context, Command* command, const char* message, int32_t integer, PendingIntent* pendingIntent) {
        Notification* notification = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(Builder_setSmallIcon(Builder_new(context), Integer_intValue(integer)), setTicker, message), setWhen, java_current_time_millis()), setContentTitle, Command_getLabel(command)), setContentText, message), setContentIntent, pendingIntent), build);
        return notification;
}

