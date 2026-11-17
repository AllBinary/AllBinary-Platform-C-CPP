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

typedef struct TouchButtonStrafeLeftResource TouchButtonStrafeLeftResource;
struct TouchButtonStrafeLeftResource {
    TouchButtonResource base;
};

static TouchButtonResource* TouchButtonStrafeLeftResource_instance;

TouchButtonStrafeLeftResource* TouchButtonStrafeLeftResource_new(void);
TouchButtonResource* TouchButtonStrafeLeftResource_getInstance(void);

void TouchButtonStrafeLeftResource_init(TouchButtonStrafeLeftResource* this);

// Static fields with runtime initializers: call this once at startup
void TouchButtonStrafeLeftResource_staticInit(void) {
    TouchButtonStrafeLeftResource_instance = TouchButtonStrafeLeftResource_new();
}


TouchButtonResource* TouchButtonStrafeLeftResource_getInstance(void) {
        return TouchButtonStrafeLeftResource_instance;
}


void TouchButtonStrafeLeftResource_init(TouchButtonStrafeLeftResource* this) {
        TouchButtonResource_init(&this->base, "/touch_button_strafe_left_arrow_64_by_64.png", "/touch_button_strafe_left_arrow_hint_64_by_64.png");
}

TouchButtonStrafeLeftResource* TouchButtonStrafeLeftResource_new(void) {
    TouchButtonStrafeLeftResource* this = calloc(1, sizeof(TouchButtonStrafeLeftResource));
    TouchButtonStrafeLeftResource_init(this);
    return this;
}

