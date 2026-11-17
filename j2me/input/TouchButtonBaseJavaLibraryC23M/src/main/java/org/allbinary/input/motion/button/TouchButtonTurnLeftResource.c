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

typedef struct TouchButtonTurnLeftResource TouchButtonTurnLeftResource;
struct TouchButtonTurnLeftResource {
    TouchButtonResource base;
};

static TouchButtonResource* TouchButtonTurnLeftResource_instance;

TouchButtonTurnLeftResource* TouchButtonTurnLeftResource_new(void);
TouchButtonResource* TouchButtonTurnLeftResource_getInstance(void);

void TouchButtonTurnLeftResource_init(TouchButtonTurnLeftResource* this);

// Static fields with runtime initializers: call this once at startup
void TouchButtonTurnLeftResource_staticInit(void) {
    TouchButtonTurnLeftResource_instance = TouchButtonTurnLeftResource_new();
}


TouchButtonResource* TouchButtonTurnLeftResource_getInstance(void) {
        return TouchButtonTurnLeftResource_instance;
}


void TouchButtonTurnLeftResource_init(TouchButtonTurnLeftResource* this) {
        TouchButtonResource_init(&this->base, "/touch_button_turn_left_arrow_64_by_64.png", "/touch_button_turn_left_arrow_hint_64_by_64.png");
}

TouchButtonTurnLeftResource* TouchButtonTurnLeftResource_new(void) {
    TouchButtonTurnLeftResource* this = calloc(1, sizeof(TouchButtonTurnLeftResource));
    TouchButtonTurnLeftResource_init(this);
    return this;
}

