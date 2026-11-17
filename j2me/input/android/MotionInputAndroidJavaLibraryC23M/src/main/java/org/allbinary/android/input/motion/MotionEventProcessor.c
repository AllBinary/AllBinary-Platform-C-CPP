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
#include "android/view/MotionEvent.h"

typedef struct MotionEventProcessor MotionEventProcessor;
struct MotionEventProcessor {
    char unused;
};


MotionEventProcessor* MotionEventProcessor_new(void);

void MotionEventProcessor_init(MotionEventProcessor* this);
void MotionEventProcessor_process(MotionEventProcessor* this, MotionEvent* motionEvent);


void MotionEventProcessor_init(MotionEventProcessor* this) {
}

MotionEventProcessor* MotionEventProcessor_new(void) {
    MotionEventProcessor* this = calloc(1, sizeof(MotionEventProcessor));
    MotionEventProcessor_init(this);
    return this;
}


// throws Exception
void MotionEventProcessor_process(MotionEventProcessor* this, MotionEvent* motionEvent) {
}

