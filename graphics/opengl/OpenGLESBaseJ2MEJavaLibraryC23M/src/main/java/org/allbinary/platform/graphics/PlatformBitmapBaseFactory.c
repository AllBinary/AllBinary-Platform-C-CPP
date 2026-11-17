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

typedef struct PlatformBitmapBaseFactory PlatformBitmapBaseFactory;
struct PlatformBitmapBaseFactory {
    char unused;
};

PlatformBitmapBaseFactory* PlatformBitmapBaseFactory_NULL_PLATFORM_BITMAP_BASE_FACTORY;

PlatformBitmapBaseFactory* PlatformBitmapBaseFactory_new(void);
PlatformBitmapBase* PlatformBitmapBaseFactory_createBitmap(PlatformBitmapBaseFactory* this, Image* image);

// Static fields with runtime initializers: call this once at startup
void PlatformBitmapBaseFactory_staticInit(void) {
    PlatformBitmapBaseFactory_NULL_PLATFORM_BITMAP_BASE_FACTORY = PlatformBitmapBaseFactory_new();
}

void PlatformBitmapBaseFactory_init(PlatformBitmapBaseFactory* this) {
}

PlatformBitmapBaseFactory* PlatformBitmapBaseFactory_new(void) {
    PlatformBitmapBaseFactory* this = calloc(1, sizeof(PlatformBitmapBaseFactory));
    PlatformBitmapBaseFactory_init(this);
    return this;
}


PlatformBitmapBase* PlatformBitmapBaseFactory_createBitmap(PlatformBitmapBaseFactory* this, Image* image) {
        java_throw(java_exception_new("RuntimeException", ""));
}

