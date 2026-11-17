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
#include "org/allbinary/input/motion/button/TouchButtonRecognizer.h"
#include "org/allbinary/input/motion/MotionRecognizer.h"

typedef struct OnlyTouchButtonRecognizer OnlyTouchButtonRecognizer;
struct OnlyTouchButtonRecognizer {
    MotionRecognizer base;
    TouchButtonRecognizer* touchButtonRecognizer;
    bool touchButtonProcessing;
};


OnlyTouchButtonRecognizer* OnlyTouchButtonRecognizer_new(void);

void OnlyTouchButtonRecognizer_init(OnlyTouchButtonRecognizer* this);
void OnlyTouchButtonRecognizer_processStartMotionEvent(OnlyTouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
void OnlyTouchButtonRecognizer_processEndMotionEvent(OnlyTouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
void OnlyTouchButtonRecognizer_processDraggedMotionEvent(OnlyTouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

static void OnlyTouchButtonRecognizer_initFields(OnlyTouchButtonRecognizer* this) {
    
    this->touchButtonProcessing = false;
}


void OnlyTouchButtonRecognizer_init(OnlyTouchButtonRecognizer* this) {
    MotionRecognizer_init(&this->base);
    OnlyTouchButtonRecognizer_initFields(this);
        this->touchButtonRecognizer = TouchButtonRecognizer_new();
}

OnlyTouchButtonRecognizer* OnlyTouchButtonRecognizer_new(void) {
    OnlyTouchButtonRecognizer* this = calloc(1, sizeof(OnlyTouchButtonRecognizer));
    OnlyTouchButtonRecognizer_init(this);
    return this;
}


// throws Exception
void OnlyTouchButtonRecognizer_processStartMotionEvent(OnlyTouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        if (TouchButtonRecognizer_pressTouchButtonInput(this->touchButtonRecognizer, x, y, deviceId)) {
            this->touchButtonProcessing = true;
        }
}


// throws Exception
void OnlyTouchButtonRecognizer_processEndMotionEvent(OnlyTouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        if (this->touchButtonProcessing) {
            this->touchButtonProcessing = false;
        }
        if (TouchButtonRecognizer_releaseTouchButtonInput(this->touchButtonRecognizer, x, y, deviceId)) {
            return;
        }
}


// throws Exception
void OnlyTouchButtonRecognizer_processDraggedMotionEvent(OnlyTouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        if (this->touchButtonProcessing) {
            TouchButtonRecognizer_pressTouchButtonInput(this->touchButtonRecognizer, x, y, deviceId);
        }
}

