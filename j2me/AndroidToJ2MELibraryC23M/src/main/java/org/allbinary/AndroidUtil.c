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
// package org.allbinary

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/app/Activity.h"
#include "android/os/Build.h"

typedef struct AndroidUtil AndroidUtil;
struct AndroidUtil {
    char unused;
};

Activity* AndroidUtil_NULL_ACTIVITY;
static int32_t AndroidUtil_version;

AndroidUtil* AndroidUtil_new(void);
bool AndroidUtil_isMemoryRestrictive(void);
bool AndroidUtil_isAndroid(void);

// Static fields with runtime initializers: call this once at startup
void AndroidUtil_staticInit(void) {
    AndroidUtil_NULL_ACTIVITY = Activity_new();
    AndroidUtil_version = ((int32_t) strtol(Build_VERSION->SDK, nullptr, 10));
}

void AndroidUtil_init(AndroidUtil* this) {
}

AndroidUtil* AndroidUtil_new(void) {
    AndroidUtil* this = calloc(1, sizeof(AndroidUtil));
    AndroidUtil_init(this);
    return this;
}


bool AndroidUtil_isMemoryRestrictive(void) {
        if (AndroidUtil_version < 30) {
            return true;
        }
        return false;
}


bool AndroidUtil_isAndroid(void) {
        return true;
}

