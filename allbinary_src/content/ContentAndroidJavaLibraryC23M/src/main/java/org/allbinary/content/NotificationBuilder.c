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
#include "org/allbinary/android/NullParcelable.h"
// #include "javax/microedition/lcdui/Command.h"
#include "android/app/PendingIntent.h"
#include "android/content/Context.h"
#include "android/os/Parcelable.h"

typedef struct NotificationBuilder NotificationBuilder;
struct NotificationBuilder {
    char unused;
};

NotificationBuilder* NotificationBuilder_NULL_NOTIFICATION_BUILDER;

NotificationBuilder* NotificationBuilder_new(void);
Parcelable* NotificationBuilder_build(NotificationBuilder* this, Context* context, Command* command, const char* message, int32_t integer, PendingIntent* pendingIntent);

// Static fields with runtime initializers: call this once at startup
void NotificationBuilder_staticInit(void) {
    NotificationBuilder_NULL_NOTIFICATION_BUILDER = NotificationBuilder_new();
}

void NotificationBuilder_init(NotificationBuilder* this) {
}

NotificationBuilder* NotificationBuilder_new(void) {
    NotificationBuilder* this = calloc(1, sizeof(NotificationBuilder));
    NotificationBuilder_init(this);
    return this;
}


Parcelable* NotificationBuilder_build(NotificationBuilder* this, Context* context, Command* command, const char* message, int32_t integer, PendingIntent* pendingIntent) {
        return NullParcelable_NULL_PARCELABLE;
}

