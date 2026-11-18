#ifndef ORG_ALLBINARY_IMAGE_IMAGEFACTORY_H
#define ORG_ALLBINARY_IMAGE_IMAGEFACTORY_H
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
// package org.allbinary.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Image Image;
typedef struct MIDPUtil MIDPUtil;
#include "java/io/InputStream.h"

//ImageCacheBaseJavaLibrary - J2ME
typedef struct ImageFactory ImageFactory;
struct ImageFactory {
    char unused;
};


ImageFactory* ImageFactory_new(void);
void ImageFactory_init(ImageFactory* this);

ImageFactory* ImageFactory_getInstance(void);

Image* ImageFactory_createImageUrl(ImageFactory* this, const char* url);

Image* ImageFactory_createImage(ImageFactory* this, const char* caller, int32_t width, int32_t height);

Image* ImageFactory_createImageFromInputStream3(ImageFactory* this, void* key, InputStream* inputStream);

Image* ImageFactory_createImageFromInputStream2(ImageFactory* this, InputStream* inputStream);
#define ImageFactory_createImageFromInputStream(...) JAVA_OVERLOADED(ImageFactory_createImageFromInputStream, __VA_ARGS__)
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageFactory_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

#endif // ORG_ALLBINARY_IMAGE_IMAGEFACTORY_H
