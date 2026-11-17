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

typedef struct TouchButtonGenericActionResource TouchButtonGenericActionResource;
struct TouchButtonGenericActionResource {
    TouchButtonResource base;
};

static TouchButtonResource* TouchButtonGenericActionResource_instance;

TouchButtonGenericActionResource* TouchButtonGenericActionResource_new(void);
TouchButtonResource* TouchButtonGenericActionResource_getInstance(void);

void TouchButtonGenericActionResource_init(TouchButtonGenericActionResource* this);

// Static fields with runtime initializers: call this once at startup
void TouchButtonGenericActionResource_staticInit(void) {
    TouchButtonGenericActionResource_instance = TouchButtonGenericActionResource_new();
}


TouchButtonResource* TouchButtonGenericActionResource_getInstance(void) {
        return TouchButtonGenericActionResource_instance;
}


void TouchButtonGenericActionResource_init(TouchButtonGenericActionResource* this) {
        TouchButtonResource_init(&this->base, "/touch_button_generic_action_64_by_64.png", "/touch_button_generic_action_hint_64_by_64.png");
}

TouchButtonGenericActionResource* TouchButtonGenericActionResource_new(void) {
    TouchButtonGenericActionResource* this = calloc(1, sizeof(TouchButtonGenericActionResource));
    TouchButtonGenericActionResource_init(this);
    return this;
}

