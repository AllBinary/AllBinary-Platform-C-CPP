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
// package org.allbinary.android.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/init/Init.h"

typedef struct TouchButtonAndroidResources TouchButtonAndroidResources;
struct TouchButtonAndroidResources {
    Init base;
};


TouchButtonAndroidResources* TouchButtonAndroidResources_new(void);
void TouchButtonAndroidResources_init(TouchButtonAndroidResources* this);

void TouchButtonAndroidResources_init(TouchButtonAndroidResources* this) {
    Init_init(&this->base);
}

TouchButtonAndroidResources* TouchButtonAndroidResources_new(void) {
    TouchButtonAndroidResources* this = calloc(1, sizeof(TouchButtonAndroidResources));
    TouchButtonAndroidResources_init(this);
    return this;
}


void TouchButtonAndroidResources_init(TouchButtonAndroidResources* this) {
}

