/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.platform.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/NullImage.h"

typedef struct PlatformBitmapBase PlatformBitmapBase;
struct PlatformBitmapBase {
    char unused;
};


PlatformBitmapBase* PlatformBitmapBase_new(void);
Image* PlatformBitmapBase_getImage(PlatformBitmapBase* this);

void PlatformBitmapBase_init(PlatformBitmapBase* this) {
}

PlatformBitmapBase* PlatformBitmapBase_new(void) {
    PlatformBitmapBase* this = calloc(1, sizeof(PlatformBitmapBase));
    PlatformBitmapBase_init(this);
    return this;
}


Image* PlatformBitmapBase_getImage(PlatformBitmapBase* this) {
        return NullImage_NULL_IMAGE;
}

