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

typedef struct TouchButtonDownResource TouchButtonDownResource;
struct TouchButtonDownResource {
    TouchButtonResource base;
};

static TouchButtonResource* TouchButtonDownResource_instance;

TouchButtonDownResource* TouchButtonDownResource_new(void);
TouchButtonResource* TouchButtonDownResource_getInstance(void);

void TouchButtonDownResource_init(TouchButtonDownResource* this);

// Static fields with runtime initializers: call this once at startup
void TouchButtonDownResource_staticInit(void) {
    TouchButtonDownResource_instance = TouchButtonDownResource_new();
}


TouchButtonResource* TouchButtonDownResource_getInstance(void) {
        return TouchButtonDownResource_instance;
}


void TouchButtonDownResource_init(TouchButtonDownResource* this) {
        TouchButtonResource_init(&this->base, "/touch_button_down_arrow_64_by_64.png", "/touch_button_down_arrow_hint_64_by_64.png");
}

TouchButtonDownResource* TouchButtonDownResource_new(void) {
    TouchButtonDownResource* this = calloc(1, sizeof(TouchButtonDownResource));
    TouchButtonDownResource_init(this);
    return this;
}

