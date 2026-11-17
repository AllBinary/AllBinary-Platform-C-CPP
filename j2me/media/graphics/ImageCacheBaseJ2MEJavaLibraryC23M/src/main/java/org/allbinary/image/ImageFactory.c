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
// #include "java/io/InputStream.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/MIDPUtil.h"

//ImageCacheBaseJavaLibrary - J2ME
typedef struct ImageFactory ImageFactory;
struct ImageFactory {
    char unused;
};

static ImageFactory* ImageFactory_instance;

ImageFactory* ImageFactory_new(void);
ImageFactory* ImageFactory_getInstance(void);
Image* ImageFactory_createImageUrl(ImageFactory* this, const char* url);
Image* ImageFactory_createImage(ImageFactory* this, const char* caller, int32_t width, int32_t height);
Image* ImageFactory_createImageFromInputStream(ImageFactory* this, Any* key, InputStream* inputStream);
Image* ImageFactory_createImageFromInputStream(ImageFactory* this, InputStream* inputStream);

// Static fields with runtime initializers: call this once at startup
void ImageFactory_staticInit(void) {
    ImageFactory_instance = ImageFactory_new();
}

void ImageFactory_init(ImageFactory* this) {
}

ImageFactory* ImageFactory_new(void) {
    ImageFactory* this = calloc(1, sizeof(ImageFactory));
    ImageFactory_init(this);
    return this;
}


ImageFactory* ImageFactory_getInstance(void) {
        return ImageFactory_instance;
}


// throws Exception
Image* ImageFactory_createImageUrl(ImageFactory* this, const char* url) {
        return Image_createImage(url);
}


// throws Exception
Image* ImageFactory_createImage(ImageFactory* this, const char* caller, int32_t width, int32_t height) {
        return MIDPUtil_createImageWH(MIDPUtil_getInstance(), width, height);
}


// throws Exception
Image* ImageFactory_createImageFromInputStream(ImageFactory* this, Any* key, InputStream* inputStream) {
        Image* image = MIDPUtil_createImageFromInputStream(MIDPUtil_getInstance(), inputStream);
        return image;
}


// throws Exception
// Java overloaded method: C needs a different name
Image* ImageFactory_createImageFromInputStream(ImageFactory* this, InputStream* inputStream) {
        return MIDPUtil_createImageFromInputStream(MIDPUtil_getInstance(), inputStream);
}

