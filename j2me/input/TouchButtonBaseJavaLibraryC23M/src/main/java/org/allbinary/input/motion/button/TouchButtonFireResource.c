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

typedef struct TouchButtonFireResource TouchButtonFireResource;
struct TouchButtonFireResource {
    TouchButtonResource base;
};

static TouchButtonResource* TouchButtonFireResource_instance;

TouchButtonFireResource* TouchButtonFireResource_new(void);
TouchButtonResource* TouchButtonFireResource_getInstance(void);

void TouchButtonFireResource_init(TouchButtonFireResource* this);

// Static fields with runtime initializers: call this once at startup
void TouchButtonFireResource_staticInit(void) {
    TouchButtonFireResource_instance = TouchButtonFireResource_new();
}


TouchButtonResource* TouchButtonFireResource_getInstance(void) {
        return TouchButtonFireResource_instance;
}


void TouchButtonFireResource_init(TouchButtonFireResource* this) {
        TouchButtonResource_init(&this->base, "/touch_button_fire_64_by_64.png", "/touch_button_fire_hint_64_by_64.png");
}

TouchButtonFireResource* TouchButtonFireResource_new(void) {
    TouchButtonFireResource* this = calloc(1, sizeof(TouchButtonFireResource));
    TouchButtonFireResource_init(this);
    return this;
}

