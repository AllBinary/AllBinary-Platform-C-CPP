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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"

typedef struct TouchButtonTurnRightResource TouchButtonTurnRightResource;
struct TouchButtonTurnRightResource {
    TouchButtonResource base;
};

static TouchButtonResource* TouchButtonTurnRightResource_instance;

TouchButtonTurnRightResource* TouchButtonTurnRightResource_new(void);
TouchButtonResource* TouchButtonTurnRightResource_getInstance(void);

void TouchButtonTurnRightResource_init(TouchButtonTurnRightResource* this);

// Static fields with runtime initializers: call this once at startup
void TouchButtonTurnRightResource_staticInit(void) {
    TouchButtonTurnRightResource_instance = TouchButtonTurnRightResource_new();
}


TouchButtonResource* TouchButtonTurnRightResource_getInstance(void) {
        return TouchButtonTurnRightResource_instance;
}


void TouchButtonTurnRightResource_init(TouchButtonTurnRightResource* this) {
        TouchButtonResource_init(&this->base, "/touch_button_turn_right_arrow_64_by_64.png", "/touch_button_turn_right_arrow_hint_64_by_64.png");
}

TouchButtonTurnRightResource* TouchButtonTurnRightResource_new(void) {
    TouchButtonTurnRightResource* this = calloc(1, sizeof(TouchButtonTurnRightResource));
    TouchButtonTurnRightResource_init(this);
    return this;
}

