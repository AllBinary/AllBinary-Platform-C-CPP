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

typedef struct TouchButtonStrafeRightResource TouchButtonStrafeRightResource;
struct TouchButtonStrafeRightResource {
    TouchButtonResource base;
};

static TouchButtonResource* TouchButtonStrafeRightResource_instance;

TouchButtonStrafeRightResource* TouchButtonStrafeRightResource_new(void);
TouchButtonResource* TouchButtonStrafeRightResource_getInstance(void);

void TouchButtonStrafeRightResource_init(TouchButtonStrafeRightResource* this);

// Static fields with runtime initializers: call this once at startup
void TouchButtonStrafeRightResource_staticInit(void) {
    TouchButtonStrafeRightResource_instance = TouchButtonStrafeRightResource_new();
}


TouchButtonResource* TouchButtonStrafeRightResource_getInstance(void) {
        return TouchButtonStrafeRightResource_instance;
}


void TouchButtonStrafeRightResource_init(TouchButtonStrafeRightResource* this) {
        TouchButtonResource_init(&this->base, "/touch_button_strafe_right_arrow_64_by_64.png", "/touch_button_strafe_right_arrow_hint_64_by_64.png");
}

TouchButtonStrafeRightResource* TouchButtonStrafeRightResource_new(void) {
    TouchButtonStrafeRightResource* this = calloc(1, sizeof(TouchButtonStrafeRightResource));
    TouchButtonStrafeRightResource_init(this);
    return this;
}

