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
#include "org/allbinary/input/motion/button/TouchButtonResource.h"

typedef struct TouchButtonUpgradeResource TouchButtonUpgradeResource;
struct TouchButtonUpgradeResource {
    TouchButtonResource base;
};

static TouchButtonResource* TouchButtonUpgradeResource_instance;

TouchButtonUpgradeResource* TouchButtonUpgradeResource_new(void);
TouchButtonResource* TouchButtonUpgradeResource_getInstance(void);

void TouchButtonUpgradeResource_init(TouchButtonUpgradeResource* this);

// Static fields with runtime initializers: call this once at startup
void TouchButtonUpgradeResource_staticInit(void) {
    TouchButtonUpgradeResource_instance = TouchButtonUpgradeResource_new();
}


TouchButtonResource* TouchButtonUpgradeResource_getInstance(void) {
        return TouchButtonUpgradeResource_instance;
}


void TouchButtonUpgradeResource_init(TouchButtonUpgradeResource* this) {
        TouchButtonResource_init(&this->base, "/touch_button_upgrade_64_by_64.png", "/touch_button_upgrade_hint_64_by_64.png");
}

TouchButtonUpgradeResource* TouchButtonUpgradeResource_new(void) {
    TouchButtonUpgradeResource* this = calloc(1, sizeof(TouchButtonUpgradeResource));
    TouchButtonUpgradeResource_init(this);
    return this;
}

