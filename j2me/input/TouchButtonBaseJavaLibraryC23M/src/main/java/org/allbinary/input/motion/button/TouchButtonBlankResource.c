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

typedef struct TouchButtonBlankResource TouchButtonBlankResource;
struct TouchButtonBlankResource {
    TouchButtonResource base;
};

static TouchButtonResource* TouchButtonBlankResource_instance;

TouchButtonBlankResource* TouchButtonBlankResource_new(void);
TouchButtonResource* TouchButtonBlankResource_getInstance(void);

void TouchButtonBlankResource_init(TouchButtonBlankResource* this);

// Static fields with runtime initializers: call this once at startup
void TouchButtonBlankResource_staticInit(void) {
    TouchButtonBlankResource_instance = TouchButtonBlankResource_new();
}


TouchButtonResource* TouchButtonBlankResource_getInstance(void) {
        return TouchButtonBlankResource_instance;
}


void TouchButtonBlankResource_init(TouchButtonBlankResource* this) {
        TouchButtonResource_init(&this->base, "/touch_button_64_by_64.png", "/touch_button_hint_64_by_64.png");
}

TouchButtonBlankResource* TouchButtonBlankResource_new(void) {
    TouchButtonBlankResource* this = calloc(1, sizeof(TouchButtonBlankResource));
    TouchButtonBlankResource_init(this);
    return this;
}

