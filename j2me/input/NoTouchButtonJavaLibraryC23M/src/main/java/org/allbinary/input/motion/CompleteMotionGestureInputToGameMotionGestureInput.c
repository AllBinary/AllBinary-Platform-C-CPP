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
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct CompleteMotionGestureInputToGameMotionGestureInput CompleteMotionGestureInputToGameMotionGestureInput;
struct CompleteMotionGestureInputToGameMotionGestureInput {
    CommonStrings* commonStrings;
};

static CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_instance;

CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_new(void);
CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_getInstance(void);
void CompleteMotionGestureInputToGameMotionGestureInput_init(CompleteMotionGestureInputToGameMotionGestureInput* this);

// Static fields with runtime initializers: call this once at startup
void CompleteMotionGestureInputToGameMotionGestureInput_staticInit(void) {
    CompleteMotionGestureInputToGameMotionGestureInput_instance = CompleteMotionGestureInputToGameMotionGestureInput_new();
}

static void CompleteMotionGestureInputToGameMotionGestureInput_initFields(CompleteMotionGestureInputToGameMotionGestureInput* this) {
    this->commonStrings = CommonStrings_getInstance();
}

void CompleteMotionGestureInputToGameMotionGestureInput_init(CompleteMotionGestureInputToGameMotionGestureInput* this) {
    CompleteMotionGestureInputToGameMotionGestureInput_initFields(this);
}

CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_new(void) {
    CompleteMotionGestureInputToGameMotionGestureInput* this = calloc(1, sizeof(CompleteMotionGestureInputToGameMotionGestureInput));
    CompleteMotionGestureInputToGameMotionGestureInput_init(this);
    return this;
}


CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_getInstance(void) {
        return CompleteMotionGestureInputToGameMotionGestureInput_instance;
}


void CompleteMotionGestureInputToGameMotionGestureInput_init(CompleteMotionGestureInputToGameMotionGestureInput* this) {
        PreLogUtil_put("No Touch Button = No Compound Motion Gestures", this, this->commonStrings->INIT);
}

