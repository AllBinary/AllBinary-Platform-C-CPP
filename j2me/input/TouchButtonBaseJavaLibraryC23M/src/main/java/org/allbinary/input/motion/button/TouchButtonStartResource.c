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

typedef struct TouchButtonStartResource TouchButtonStartResource;
struct TouchButtonStartResource {
    TouchButtonResource base;
};

static TouchButtonResource* TouchButtonStartResource_instance;

TouchButtonStartResource* TouchButtonStartResource_new(void);
TouchButtonResource* TouchButtonStartResource_getInstance(void);

void TouchButtonStartResource_init(TouchButtonStartResource* this);

// Static fields with runtime initializers: call this once at startup
void TouchButtonStartResource_staticInit(void) {
    TouchButtonStartResource_instance = TouchButtonStartResource_new();
}


TouchButtonResource* TouchButtonStartResource_getInstance(void) {
        return TouchButtonStartResource_instance;
}


void TouchButtonStartResource_init(TouchButtonStartResource* this) {
        TouchButtonResource_init(&this->base, "/touch_button_start_64_by_64.png", "/touch_button_start_hint_64_by_64.png");
}

TouchButtonStartResource* TouchButtonStartResource_new(void) {
    TouchButtonStartResource* this = calloc(1, sizeof(TouchButtonStartResource));
    TouchButtonStartResource_init(this);
    return this;
}

