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
// package org.allbinary.input.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct MotionRecognizer MotionRecognizer;
struct MotionRecognizer {
    char unused;
};


MotionRecognizer* MotionRecognizer_new(void);
void MotionRecognizer_processStartMotionEvent(MotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
void MotionRecognizer_processEndMotionEvent(MotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
void MotionRecognizer_processDraggedMotionEvent(MotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

void MotionRecognizer_init(MotionRecognizer* this) {
}

MotionRecognizer* MotionRecognizer_new(void) {
    MotionRecognizer* this = calloc(1, sizeof(MotionRecognizer));
    MotionRecognizer_init(this);
    return this;
}


// throws Exception
void MotionRecognizer_processStartMotionEvent(MotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
}


// throws Exception
void MotionRecognizer_processEndMotionEvent(MotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
}


// throws Exception
void MotionRecognizer_processDraggedMotionEvent(MotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
}

