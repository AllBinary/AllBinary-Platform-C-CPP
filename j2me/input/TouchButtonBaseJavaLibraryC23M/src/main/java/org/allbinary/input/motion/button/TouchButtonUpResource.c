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

typedef struct TouchButtonUpResource TouchButtonUpResource;
struct TouchButtonUpResource {
    TouchButtonResource base;
};

static TouchButtonResource* TouchButtonUpResource_instance;

TouchButtonUpResource* TouchButtonUpResource_new(void);
TouchButtonResource* TouchButtonUpResource_getInstance(void);

void TouchButtonUpResource_init(TouchButtonUpResource* this);

// Static fields with runtime initializers: call this once at startup
void TouchButtonUpResource_staticInit(void) {
    TouchButtonUpResource_instance = TouchButtonUpResource_new();
}


TouchButtonResource* TouchButtonUpResource_getInstance(void) {
        return TouchButtonUpResource_instance;
}


void TouchButtonUpResource_init(TouchButtonUpResource* this) {
        TouchButtonResource_init(&this->base, "/touch_button_up_arrow_64_by_64.png", "/touch_button_up_arrow_hint_64_by_64.png");
}

TouchButtonUpResource* TouchButtonUpResource_new(void) {
    TouchButtonUpResource* this = calloc(1, sizeof(TouchButtonUpResource));
    TouchButtonUpResource_init(this);
    return this;
}

