/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2009 AllBinary
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
// package org.allbinary.android.input.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/android/input/motion/MotionEventProcessor.h"

typedef struct NoMotionEventProcessor NoMotionEventProcessor;
struct NoMotionEventProcessor {
    MotionEventProcessor base;
};

MotionEventProcessor* NoMotionEventProcessor_SINGLETON;

NoMotionEventProcessor* NoMotionEventProcessor_new(void);
MotionEventProcessor* NoMotionEventProcessor_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void NoMotionEventProcessor_staticInit(void) {
    NoMotionEventProcessor_SINGLETON = MotionEventProcessor_new();
}

void NoMotionEventProcessor_init(NoMotionEventProcessor* this) {
    MotionEventProcessor_init(&this->base);
}

NoMotionEventProcessor* NoMotionEventProcessor_new(void) {
    NoMotionEventProcessor* this = calloc(1, sizeof(NoMotionEventProcessor));
    NoMotionEventProcessor_init(this);
    return this;
}


MotionEventProcessor* NoMotionEventProcessor_getInstance(void) {
        return NoMotionEventProcessor_SINGLETON;
}

