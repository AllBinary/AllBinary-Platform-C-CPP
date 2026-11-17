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
// package org.allbinary.input.motion.gesture

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"

typedef struct MotionGestureInput MotionGestureInput;
struct MotionGestureInput {
    Input base;
};


MotionGestureInput* MotionGestureInput_new(int32_t id, const char* name);

void MotionGestureInput_init(MotionGestureInput* this, int32_t id, const char* name);


void MotionGestureInput_init(MotionGestureInput* this, int32_t id, const char* name) {
        Input_init(&this->base, id, name);
        InputFactory* inputFactory = InputFactory_getInstance();
        InputFactory_add(inputFactory, MotionGestureInput_getId(this), this);
}

MotionGestureInput* MotionGestureInput_new(int32_t id, const char* name) {
    MotionGestureInput* this = calloc(1, sizeof(MotionGestureInput));
    MotionGestureInput_init(this, id, name);
    return this;
}

