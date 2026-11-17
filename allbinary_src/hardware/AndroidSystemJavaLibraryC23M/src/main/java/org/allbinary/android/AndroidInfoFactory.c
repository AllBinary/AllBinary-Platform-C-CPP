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
// package org.allbinary.android

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/os/Build.h"

typedef struct AndroidInfoFactory AndroidInfoFactory;
struct AndroidInfoFactory {
    int32_t version;
};

static AndroidInfoFactory* AndroidInfoFactory_instance;

AndroidInfoFactory* AndroidInfoFactory_new(void);
AndroidInfoFactory* AndroidInfoFactory_getInstance(void);
int32_t AndroidInfoFactory_getVersion(AndroidInfoFactory* this);

// Static fields with runtime initializers: call this once at startup
void AndroidInfoFactory_staticInit(void) {
    AndroidInfoFactory_instance = AndroidInfoFactory_new();
}

static void AndroidInfoFactory_initFields(AndroidInfoFactory* this) {
    this->version = ((int32_t) strtol(Build_VERSION->SDK, nullptr, 10));
}

void AndroidInfoFactory_init(AndroidInfoFactory* this) {
    AndroidInfoFactory_initFields(this);
}

AndroidInfoFactory* AndroidInfoFactory_new(void) {
    AndroidInfoFactory* this = calloc(1, sizeof(AndroidInfoFactory));
    AndroidInfoFactory_init(this);
    return this;
}


AndroidInfoFactory* AndroidInfoFactory_getInstance(void) {
        return AndroidInfoFactory_instance;
}


int32_t AndroidInfoFactory_getVersion(AndroidInfoFactory* this) {
        return this->version;
}

