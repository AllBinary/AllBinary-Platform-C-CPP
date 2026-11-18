#ifndef JAVAX_MICROEDITION_LCDUI_NULLIMAGE_H
#define JAVAX_MICROEDITION_LCDUI_NULLIMAGE_H
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
// package javax.microedition.lcdui

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Image Image;
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

typedef struct NullImage NullImage;
struct NullImage {
    char unused;
};

extern Image** NullImage_NULL_IMAGE_ARRAY;
extern Image* NullImage_NULL_IMAGE;

NullImage* NullImage_new(void);
void NullImage_init(NullImage* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullImage_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullImage_register(void);


#endif // JAVAX_MICROEDITION_LCDUI_NULLIMAGE_H
