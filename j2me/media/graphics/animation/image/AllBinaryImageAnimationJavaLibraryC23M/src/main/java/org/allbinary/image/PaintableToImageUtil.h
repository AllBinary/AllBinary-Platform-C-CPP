#ifndef ORG_ALLBINARY_IMAGE_PAINTABLETOIMAGEUTIL_H
#define ORG_ALLBINARY_IMAGE_PAINTABLETOIMAGEUTIL_H
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
// package org.allbinary.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameFeatureImageCacheFactory GameFeatureImageCacheFactory;
typedef struct Graphics Graphics;
typedef struct Image Image;
typedef struct PaintableInterface PaintableInterface;

typedef struct PaintableToImageUtil PaintableToImageUtil;
struct PaintableToImageUtil {
    char unused;
};


PaintableToImageUtil* PaintableToImageUtil_new(void);
void PaintableToImageUtil_init(PaintableToImageUtil* this);

Image* PaintableToImageUtil_getImage(PaintableInterface* paintableInterface, int32_t width, int32_t height);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PaintableToImageUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PaintableToImageUtil_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

#endif // ORG_ALLBINARY_IMAGE_PAINTABLETOIMAGEUTIL_H
