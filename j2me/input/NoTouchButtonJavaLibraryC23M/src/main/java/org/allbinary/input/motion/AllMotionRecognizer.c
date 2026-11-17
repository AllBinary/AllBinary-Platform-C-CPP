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

typedef struct AllMotionRecognizer AllMotionRecognizer;
struct AllMotionRecognizer {
    int32_t id;
};

static int32_t AllMotionRecognizer_index = 0;

AllMotionRecognizer* AllMotionRecognizer_new(void);

void AllMotionRecognizer_init(AllMotionRecognizer* this);
void AllMotionRecognizer_processStartMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
void AllMotionRecognizer_processEndMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
void AllMotionRecognizer_processDraggedMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
void AllMotionRecognizer_processMovedMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
void AllMotionRecognizer_processScrolledMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
int32_t AllMotionRecognizer_getId(AllMotionRecognizer* this);

static void AllMotionRecognizer_initFields(AllMotionRecognizer* this) {
    
}


void AllMotionRecognizer_init(AllMotionRecognizer* this) {
    AllMotionRecognizer_initFields(this);
        this->id = AllMotionRecognizer_index++;
}

AllMotionRecognizer* AllMotionRecognizer_new(void) {
    AllMotionRecognizer* this = calloc(1, sizeof(AllMotionRecognizer));
    AllMotionRecognizer_init(this);
    return this;
}


// throws Exception
void AllMotionRecognizer_processStartMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
}


// throws Exception
void AllMotionRecognizer_processEndMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
}


// throws Exception
void AllMotionRecognizer_processDraggedMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
}


// throws Exception
void AllMotionRecognizer_processMovedMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
}


// throws Exception
void AllMotionRecognizer_processScrolledMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
}


int32_t AllMotionRecognizer_getId(AllMotionRecognizer* this) {
        return this->id;
}

