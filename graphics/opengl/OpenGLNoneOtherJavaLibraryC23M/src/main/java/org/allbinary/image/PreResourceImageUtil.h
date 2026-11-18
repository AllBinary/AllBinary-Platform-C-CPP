#ifndef ORG_ALLBINARY_IMAGE_PRERESOURCEIMAGEUTIL_H
#define ORG_ALLBINARY_IMAGE_PRERESOURCEIMAGEUTIL_H
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
typedef struct GL GL;
typedef struct Graphics Graphics;
typedef struct Image Image;

typedef struct PreResourceImageUtil PreResourceImageUtil;
struct PreResourceImageUtil {
    char unused;
};


PreResourceImageUtil* PreResourceImageUtil_new(void);
void PreResourceImageUtil_init(PreResourceImageUtil* this);

PreResourceImageUtil* PreResourceImageUtil_getInstance(void);

Image* PreResourceImageUtil_encapsulate(PreResourceImageUtil* this, Image* image);

void PreResourceImageUtil_updateGL(PreResourceImageUtil* this, GL* gl, Image* image);

void PreResourceImageUtil_update(PreResourceImageUtil* this, Graphics* graphics, Image* image);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PreResourceImageUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PreResourceImageUtil_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

#endif // ORG_ALLBINARY_IMAGE_PRERESOURCEIMAGEUTIL_H
