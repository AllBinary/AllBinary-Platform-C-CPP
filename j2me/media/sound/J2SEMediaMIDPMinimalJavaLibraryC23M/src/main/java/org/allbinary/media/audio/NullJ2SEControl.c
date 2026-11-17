/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.media.audio

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/sound/sampled/Control.h"

typedef struct NullJ2SEControl NullJ2SEControl;
struct NullJ2SEControl {
    Control base;
};


NullJ2SEControl* NullJ2SEControl_new(Type* type);

void NullJ2SEControl_init(NullJ2SEControl* this, Type* type);


void NullJ2SEControl_init(NullJ2SEControl* this, Type* type) {
        Control_init(&this->base, type);
}

NullJ2SEControl* NullJ2SEControl_new(Type* type) {
    NullJ2SEControl* this = calloc(1, sizeof(NullJ2SEControl));
    NullJ2SEControl_init(this, type);
    return this;
}

