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
// package org.allbinary.debug

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/debug/DebugInterface.h"

typedef struct NoDebug NoDebug;
struct NoDebug {
    DebugInterface DebugInterface_interface;
};

static DebugInterface* NoDebug_SINGLETON;

NoDebug* NoDebug_new(void);
DebugInterface* NoDebug_getInstance(void);
void NoDebug_start(NoDebug* this);
void NoDebug_stop(NoDebug* this);
int64_t NoDebug_getMaxTime(NoDebug* this);
int64_t NoDebug_getStartTime(NoDebug* this);
bool NoDebug_isRunning(NoDebug* this);

// Static fields with runtime initializers: call this once at startup
void NoDebug_staticInit(void) {
    NoDebug_SINGLETON = NoDebug_new();
}

void NoDebug_init(NoDebug* this) {
}

NoDebug* NoDebug_new(void) {
    NoDebug* this = calloc(1, sizeof(NoDebug));
    NoDebug_init(this);
    return this;
}


DebugInterface* NoDebug_getInstance(void) {
        return NoDebug_SINGLETON;
}


void NoDebug_start(NoDebug* this) {
}


void NoDebug_stop(NoDebug* this) {
}


int64_t NoDebug_getMaxTime(NoDebug* this) {
        return 10000LL;
}


int64_t NoDebug_getStartTime(NoDebug* this) {
        return 0LL;
}


bool NoDebug_isRunning(NoDebug* this) {
        return false;
}

