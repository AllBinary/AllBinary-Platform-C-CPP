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
// #include "javax/microedition/media/Control.h"

typedef struct NullControl NullControl;
struct NullControl {
    Control Control_interface;
};


NullControl* NullControl_new(void);

void NullControl_init(NullControl* this) {
}

NullControl* NullControl_new(void) {
    NullControl* this = calloc(1, sizeof(NullControl));
    NullControl_init(this);
    return this;
}

