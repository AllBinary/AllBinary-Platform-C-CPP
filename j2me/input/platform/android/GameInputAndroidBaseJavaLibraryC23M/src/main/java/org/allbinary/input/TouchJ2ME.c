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
// package org.allbinary.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

//TouchAndroid
typedef struct TouchJ2ME TouchJ2ME;
struct TouchJ2ME {
    char unused;
};


TouchJ2ME* TouchJ2ME_new(void);

void TouchJ2ME_init(TouchJ2ME* this);
void TouchJ2ME_pointerDragged(TouchJ2ME* this, int32_t x, int32_t y);
void TouchJ2ME_pointerPressed(TouchJ2ME* this, int32_t x, int32_t y);
void TouchJ2ME_pointerReleased(TouchJ2ME* this, int32_t x, int32_t y);


void TouchJ2ME_init(TouchJ2ME* this) {
}

TouchJ2ME* TouchJ2ME_new(void) {
    TouchJ2ME* this = calloc(1, sizeof(TouchJ2ME));
    TouchJ2ME_init(this);
    return this;
}


void TouchJ2ME_pointerDragged(TouchJ2ME* this, int32_t x, int32_t y) {
}


void TouchJ2ME_pointerPressed(TouchJ2ME* this, int32_t x, int32_t y) {
}


void TouchJ2ME_pointerReleased(TouchJ2ME* this, int32_t x, int32_t y) {
}

