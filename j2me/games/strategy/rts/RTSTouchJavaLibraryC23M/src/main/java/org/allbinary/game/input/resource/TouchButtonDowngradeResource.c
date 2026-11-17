/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2007 AllBinary 
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
// package org.allbinary.game.input.resource

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/motion/button/TouchButtonBlankResource.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"

typedef struct TouchButtonDowngradeResource TouchButtonDowngradeResource;
struct TouchButtonDowngradeResource {
    TouchButtonResource base;
};

static TouchButtonResource* TouchButtonDowngradeResource_instance;

TouchButtonDowngradeResource* TouchButtonDowngradeResource_new(void);
TouchButtonResource* TouchButtonDowngradeResource_getInstance(void);

void TouchButtonDowngradeResource_init(TouchButtonDowngradeResource* this);

// Static fields with runtime initializers: call this once at startup
void TouchButtonDowngradeResource_staticInit(void) {
    TouchButtonDowngradeResource_instance = TouchButtonDowngradeResource_new();
}


TouchButtonResource* TouchButtonDowngradeResource_getInstance(void) {
        return TouchButtonDowngradeResource_instance;
}


void TouchButtonDowngradeResource_init(TouchButtonDowngradeResource* this) {
        TouchButtonResource_init(&this->base, "/touch_button_downgrade_64_by_64.png", "/touch_button_downgrade_hint_64_by_64.png");
}

TouchButtonDowngradeResource* TouchButtonDowngradeResource_new(void) {
    TouchButtonDowngradeResource* this = calloc(1, sizeof(TouchButtonDowngradeResource));
    TouchButtonDowngradeResource_init(this);
    return this;
}

