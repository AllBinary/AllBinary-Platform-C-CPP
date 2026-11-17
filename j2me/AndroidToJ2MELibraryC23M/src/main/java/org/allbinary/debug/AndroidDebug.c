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
#include "android/os/Debug.h"
#include "org/allbinary/debug/DebugInterface.h"

typedef struct AndroidDebug AndroidDebug;
struct AndroidDebug {
    DebugInterface DebugInterface_interface;
    int64_t startTime;
    bool running;
    int32_t bufferSize;
};


AndroidDebug* AndroidDebug_new(void);
void AndroidDebug_start(AndroidDebug* this);
void AndroidDebug_stop(AndroidDebug* this);
int64_t AndroidDebug_getMaxTime(AndroidDebug* this);
static void AndroidDebug_setStartTime(AndroidDebug* this, int64_t startTime);
int64_t AndroidDebug_getStartTime(AndroidDebug* this);
static void AndroidDebug_setRunning(AndroidDebug* this, bool running);
bool AndroidDebug_isRunning(AndroidDebug* this);

static void AndroidDebug_initFields(AndroidDebug* this) {
    this->startTime = Long_MAX_VALUE;
    this->running = false;
    this->bufferSize = 32 * 1024 * 1024;
}

void AndroidDebug_init(AndroidDebug* this) {
    AndroidDebug_initFields(this);
}

AndroidDebug* AndroidDebug_new(void) {
    AndroidDebug* this = calloc(1, sizeof(AndroidDebug));
    AndroidDebug_init(this);
    return this;
}


void AndroidDebug_start(AndroidDebug* this) {
        AndroidDebug_setStartTime(this, java_current_time_millis());
        Debug_startMethodTracing("trace", this->bufferSize);
        AndroidDebug_setRunning(this, true);
}


void AndroidDebug_stop(AndroidDebug* this) {
        this->startTime = Long_MAX_VALUE;
        Debug_stopMethodTracing();
        AndroidDebug_setRunning(this, false);
}


int64_t AndroidDebug_getMaxTime(AndroidDebug* this) {
        return 120000LL;
}


static void AndroidDebug_setStartTime(AndroidDebug* this, int64_t startTime) {
        this->startTime = startTime;
}


int64_t AndroidDebug_getStartTime(AndroidDebug* this) {
        return this->startTime;
}


static void AndroidDebug_setRunning(AndroidDebug* this, bool running) {
        this->running = running;
}


bool AndroidDebug_isRunning(AndroidDebug* this) {
        return this->running;
}

