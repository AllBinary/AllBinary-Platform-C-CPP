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
// #include "javax/microedition/lcdui/OpenGLESPostLoadPlatformImage.h"
// #include "javax/microedition/lcdui/PostLoadImageProcessor.h"
#include "org/allbinary/graphics/GraphicsStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBase.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h"
#include "org/allbinary/platform/opengles/PlatformTextureBaseFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h"

//OpenGLESSWTJOGLImageJavaLibrary
typedef struct OpenGLESImage OpenGLESImage;
struct OpenGLESImage {
    Image base;
    OpenGLSurfaceChangedInterface OpenGLSurfaceChangedInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    PlatformTextureBaseFactory* textureFactory;
    PlatformBitmapBase* openGLBitmap;
    OpenGLESImageProcessor* imageProcessor;
    OpenGLESImageTranslate* openGLESImageTranslate;
    OpenGLESImageProperties* openGLESImageProperties;
};

OpenGLESImage* OpenGLESImage_NULL_OPENGL_IMAGE;
BasicArrayList* OpenGLESImage_texture2dList;
constexpr int32_t OpenGLESImage_TYPE = 4;

OpenGLESImage* OpenGLESImage_new(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);

void OpenGLESImage_init(OpenGLESImage* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);
int32_t OpenGLESImage_getHeight(OpenGLESImage* this);
int32_t OpenGLESImage_getWidth(OpenGLESImage* this);
void OpenGLESImage_set(OpenGLESImage* this, GL* gl);
bool OpenGLESImage_initTexture(OpenGLESImage* this, GL10* gl);
void OpenGLESImage_drawRegion(OpenGLESImage* this, GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z);
void OpenGLESImage_draw(OpenGLESImage* this, GL10* gl, int32_t x, int32_t y, int32_t z);
int32_t OpenGLESImage_getType(OpenGLESImage* this);
const char* OpenGLESImage_toString(OpenGLESImage* this);

// Static fields with runtime initializers: call this once at startup
void OpenGLESImage_staticInit(void) {
    OpenGLESImage_NULL_OPENGL_IMAGE = OpenGLESImage_new(NullImage_NULL_IMAGE, PlatformBitmapBaseFactory_NULL_PLATFORM_BITMAP_BASE_FACTORY, PlatformTextureBaseFactory_NULL_PLATFORM_TEXTURE_BASE_FACTORY);
    OpenGLESImage_texture2dList = BasicArrayListD_new();
}

static void OpenGLESImage_initFields(OpenGLESImage* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    this->imageProcessor = OpenGLESImageProcessor_getInstance();
    this->openGLESImageTranslate = OpenGLESImageTranslate_getInstance();
    this->openGLESImageProperties = OpenGLESImageProperties_new();
}


void OpenGLESImage_init(OpenGLESImage* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) {
        Image_init(&this->base, Image_getName(image), PostLoadImageProcessor_NULL_POST_LOAD_IMAGE_PROCESSOR);
        OpenGLESImage_initFields(this);
        this->openGLBitmap = PlatformBitmapBaseFactory_createBitmap(bitmapFactory, image);
        this->textureFactory = textureFactory;
        OpenGLImageCacheFactory_init(OpenGLImageCacheFactory_getInstance(), this);
        this->platformImage = OpenGLESPostLoadPlatformImage_getInstance();
}

OpenGLESImage* OpenGLESImage_new(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) {
    OpenGLESImage* this = calloc(1, sizeof(OpenGLESImage));
    OpenGLESImage_init(this, image, bitmapFactory, textureFactory);
    return this;
}


int32_t OpenGLESImage_getHeight(OpenGLESImage* this) {
        return ((int32_t) (PlatformBitmapBase_getHeight(this->openGLBitmap) * this->openGLESImageProperties->scaleY2));
}


int32_t OpenGLESImage_getWidth(OpenGLESImage* this) {
        return ((int32_t) (PlatformBitmapBase_getWidth(this->openGLBitmap) * this->openGLESImageProperties->scaleX2));
}


// throws Exception
void OpenGLESImage_set(OpenGLESImage* this, GL* gl) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


bool OpenGLESImage_initTexture(OpenGLESImage* this, GL10* gl) {
        if (!JAVA_CALL(OpenGLESImage_texture2dList, contains, this)) {
            JAVA_CALL(OpenGLESImage_texture2dList, add, this);
            int32_t* textures = ((int32_t*) java_array_new(sizeof(int32_t), 1));
            GL_glEnable(gl, Image_GL10->GL_TEXTURE_2D);
            if (this->openGLESImageProperties->textureID != -1) {
                textures[0] = this->openGLESImageProperties->textureID;
                GL_glDeleteTextures(gl, 1, textures, 0);
            }
            GL_glGenTextures(gl, 1, textures, 0);
            this->openGLESImageProperties->textureID = textures[0];
            GL_glBindTexture(gl, Image_GL10->GL_TEXTURE_2D, this->openGLESImageProperties->textureID);
            GL_glTexParameterf(gl, Image_GL10->GL_TEXTURE_2D, Image_GL10->GL_TEXTURE_MIN_FILTER, Image_GL10->GL_NEAREST);
            GL_glTexParameterf(gl, Image_GL10->GL_TEXTURE_2D, Image_GL10->GL_TEXTURE_WRAP_S, Image_GL10->GL_CLAMP_TO_EDGE);
            GL_glTexParameterf(gl, Image_GL10->GL_TEXTURE_2D, Image_GL10->GL_TEXTURE_WRAP_T, Image_GL10->GL_CLAMP_TO_EDGE);
            return true;
        }
        return false;
}


void OpenGLESImage_drawRegion(OpenGLESImage* this, GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z) {
}


void OpenGLESImage_draw(OpenGLESImage* this, GL10* gl, int32_t x, int32_t y, int32_t z) {
}


int32_t OpenGLESImage_getType(OpenGLESImage* this) {
        return OpenGLESImage_TYPE;
}


const char* OpenGLESImage_toString(OpenGLESImage* this) {
        GraphicsStrings* graphicsStrings = GraphicsStrings_getInstance();
        return JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), OpenGLESImage_getName(this)), append, Image_toString((&this->base))), append, graphicsStrings->OPACITY), appendfloat, ((float) this->openGLESImageProperties->alphaf)), toString);
}

