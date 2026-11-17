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

typedef struct NotificationUtil NotificationUtil;
struct NotificationUtil {
    char unused;
};

static NotificationUtil* NotificationUtil_SINGLETON;

NotificationUtil* NotificationUtil_new(void);
NotificationUtil* NotificationUtil_getInstance(void);
void NotificationUtil_notify(NotificationUtil* this, Command* command, const char* resource, const char* message);

// Static fields with runtime initializers: call this once at startup
void NotificationUtil_staticInit(void) {
    NotificationUtil_SINGLETON = NotificationUtil_new();
}

void NotificationUtil_init(NotificationUtil* this) {
}

NotificationUtil* NotificationUtil_new(void) {
    NotificationUtil* this = calloc(1, sizeof(NotificationUtil));
    NotificationUtil_init(this);
    return this;
}


NotificationUtil* NotificationUtil_getInstance(void) {
        return NotificationUtil_SINGLETON;
}


void NotificationUtil_notify(NotificationUtil* this, Command* command, const char* resource, const char* message) {
}

