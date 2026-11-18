#ifndef ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASE_H
#define ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASE_H
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
typedef struct Image Image;
typedef struct NullImage NullImage;

typedef struct PlatformBitmapBase PlatformBitmapBase;
struct PlatformBitmapBase {
    char unused;
};


PlatformBitmapBase* PlatformBitmapBase_new(void);
void PlatformBitmapBase_init(PlatformBitmapBase* this);

Image* PlatformBitmapBase_getImage(PlatformBitmapBase* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PlatformBitmapBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PlatformBitmapBase_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

#endif // ORG_ALLBINARY_PLATFORM_GRAPHICS_PLATFORMBITMAPBASE_H
