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

typedef struct TouchButtonReverseResource TouchButtonReverseResource;
struct TouchButtonReverseResource {
    TouchButtonResource base;
};

static TouchButtonResource* TouchButtonReverseResource_instance;

TouchButtonReverseResource* TouchButtonReverseResource_new(void);
TouchButtonResource* TouchButtonReverseResource_getInstance(void);

void TouchButtonReverseResource_init(TouchButtonReverseResource* this);

// Static fields with runtime initializers: call this once at startup
void TouchButtonReverseResource_staticInit(void) {
    TouchButtonReverseResource_instance = TouchButtonReverseResource_new();
}


TouchButtonResource* TouchButtonReverseResource_getInstance(void) {
        return TouchButtonReverseResource_instance;
}


void TouchButtonReverseResource_init(TouchButtonReverseResource* this) {
        TouchButtonResource_init(&this->base, "/touch_button_reverse_64_by_64.png", "/touch_button_reverse_hint_64_by_64.png");
}

TouchButtonReverseResource* TouchButtonReverseResource_new(void) {
    TouchButtonReverseResource* this = calloc(1, sizeof(TouchButtonReverseResource));
    TouchButtonReverseResource_init(this);
    return this;
}

