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
// package org.allbinary.image.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBase.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h"
#include "org/allbinary/platform/opengles/PlatformTextureBaseFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h"

//OpenGLESNullImageJavaLibrary
typedef struct OpenGLESImage OpenGLESImage;
struct OpenGLESImage {
    Image base;
    OpenGLSurfaceChangedInterface OpenGLSurfaceChangedInterface_interface;
    CommonStrings* commonStrings;
    PlatformTextureBaseFactory* textureFactory;
    PlatformBitmapBase* openGLBitmap;
    OpenGLESImageProperties* openGLESImageProperties;
    OpenGLESImageProcessor* imageProcessor;
    OpenGLESImageTranslate* openGLESImageTranslate;
};

OpenGLESImage* OpenGLESImage_NULL_OPENGL_IMAGE;
BasicArrayList* OpenGLESImage_texture2dList;
constexpr int32_t OpenGLESImage_TYPE = 4;

OpenGLESImage* OpenGLESImage_new(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);

void OpenGLESImage_init(OpenGLESImage* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);
void OpenGLESImage_set(OpenGLESImage* this, GL* gl);
bool OpenGLESImage_initTexture(OpenGLESImage* this, GL10* gl);
void OpenGLESImage_drawRegion(OpenGLESImage* this, GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z);
void OpenGLESImage_draw(OpenGLESImage* this, GL10* gl, int32_t x, int32_t y, int32_t z);
int32_t OpenGLESImage_getType(OpenGLESImage* this);

// Static fields with runtime initializers: call this once at startup
void OpenGLESImage_staticInit(void) {
    OpenGLESImage_NULL_OPENGL_IMAGE = OpenGLESImage_new(NullImage_NULL_IMAGE, PlatformBitmapBaseFactory_NULL_PLATFORM_BITMAP_BASE_FACTORY, PlatformTextureBaseFactory_NULL_PLATFORM_TEXTURE_BASE_FACTORY);
    OpenGLESImage_texture2dList = BasicArrayListD_new();
}

static void OpenGLESImage_initFields(OpenGLESImage* this) {
    this->commonStrings = CommonStrings_getInstance();
    
    
    this->openGLESImageProperties = OpenGLESImageProperties_new();
    this->imageProcessor = OpenGLESImageProcessor_getInstance();
    this->openGLESImageTranslate = OpenGLESImageTranslate_getInstance();
}


void OpenGLESImage_init(OpenGLESImage* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) {
    Image_init(&this->base);
    OpenGLESImage_initFields(this);
        this->openGLBitmap = PlatformBitmapBaseFactory_createBitmap(bitmapFactory, image);
        this->textureFactory = textureFactory;
}

OpenGLESImage* OpenGLESImage_new(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) {
    OpenGLESImage* this = calloc(1, sizeof(OpenGLESImage));
    OpenGLESImage_init(this, image, bitmapFactory, textureFactory);
    return this;
}


// throws Exception
void OpenGLESImage_set(OpenGLESImage* this, GL* gl) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


bool OpenGLESImage_initTexture(OpenGLESImage* this, GL10* gl) {
        return false;
}


void OpenGLESImage_drawRegion(OpenGLESImage* this, GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z) {
}


void OpenGLESImage_draw(OpenGLESImage* this, GL10* gl, int32_t x, int32_t y, int32_t z) {
}


int32_t OpenGLESImage_getType(OpenGLESImage* this) {
        return OpenGLESImage_TYPE;
}

