#ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGE_H
#define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGE_H
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
typedef struct OpenGLSurfaceChangedInterface OpenGLSurfaceChangedInterface;
typedef struct OpenGLESImageProperties OpenGLESImageProperties;
typedef struct OpenGLESImageProcessor OpenGLESImageProcessor;
typedef struct OpenGLESImageTranslate OpenGLESImageTranslate;
typedef struct GL GL;
typedef struct GL10 GL10;
typedef struct Image Image;
typedef struct NullImage NullImage;
typedef struct PlatformBitmapBase PlatformBitmapBase;
typedef struct PlatformBitmapBaseFactory PlatformBitmapBaseFactory;
typedef struct PlatformTextureBaseFactory PlatformTextureBaseFactory;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "javax/microedition/lcdui/Image.h"
#if __has_include("org/allbinary/platform/graphics/PlatformBitmapBase.h")
#include "org/allbinary/platform/graphics/PlatformBitmapBase.h"
#endif
#if __has_include("org/allbinary/platform/opengles/PlatformTextureBaseFactory.h")
#include "org/allbinary/platform/opengles/PlatformTextureBaseFactory.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h"
#if __has_include("org/allbinary/image/opengles/OpenGLESImageProperties.h")
#include "org/allbinary/image/opengles/OpenGLESImageProperties.h"
#endif
#if __has_include("org/allbinary/image/opengles/OpenGLESImageProcessor.h")
#include "org/allbinary/image/opengles/OpenGLESImageProcessor.h"
#endif
#if __has_include("org/allbinary/image/opengles/OpenGLESImageTranslate.h")
#include "org/allbinary/image/opengles/OpenGLESImageTranslate.h"
#endif

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

extern OpenGLESImage* OpenGLESImage_NULL_OPENGL_IMAGE;
extern BasicArrayList* OpenGLESImage_texture2dList;
static constexpr int32_t OpenGLESImage_TYPE = 4;

OpenGLESImage* OpenGLESImage_new(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);

void OpenGLESImage_init(OpenGLESImage* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);

void OpenGLESImage_set(OpenGLESImage* this, GL* gl);

bool OpenGLESImage_initTexture(OpenGLESImage* this, GL10* gl);

void OpenGLESImage_drawRegion(OpenGLESImage* this, GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z);

void OpenGLESImage_draw(OpenGLESImage* this, GL10* gl, int32_t x, int32_t y, int32_t z);

int32_t OpenGLESImage_getType(OpenGLESImage* this);
#define OpenGLESImage_new3 OpenGLESImage_new
#define OpenGLESImage_init3 OpenGLESImage_init
#ifndef OpenGLESImage_createImageWH
#define OpenGLESImage_createImageWH Image_createImageWH
#endif
#ifndef OpenGLESImage_createImage
#define OpenGLESImage_createImage Image_createImage
#endif
#ifndef OpenGLESImage_createImageFromImage
#define OpenGLESImage_createImageFromImage Image_createImageFromImage
#endif
#ifndef OpenGLESImage_createImageFromByteArray
#define OpenGLESImage_createImageFromByteArray Image_createImageFromByteArray
#endif
#ifndef OpenGLESImage_getGraphics
#define OpenGLESImage_getGraphics Image_getGraphics
#endif
#ifndef OpenGLESImage_getHeight
#define OpenGLESImage_getHeight Image_getHeight
#endif
#ifndef OpenGLESImage_getWidth
#define OpenGLESImage_getWidth Image_getWidth
#endif
#ifndef OpenGLESImage_isMutable
#define OpenGLESImage_isMutable Image_isMutable
#endif
#ifndef OpenGLESImage_getImage
#define OpenGLESImage_getImage Image_getImage
#endif
#ifndef OpenGLESImage_getName
#define OpenGLESImage_getName Image_getName
#endif
#ifndef OpenGLESImage_setName
#define OpenGLESImage_setName Image_setName
#endif
#ifndef OpenGLESImage_getRGB
#define OpenGLESImage_getRGB Image_getRGB
#endif
#ifndef OpenGLESImage_createImageFromInputStream
#define OpenGLESImage_createImageFromInputStream Image_createImageFromInputStream
#endif
#ifndef OpenGLESImage_createImage
#define OpenGLESImage_createImage Image_createImage
#endif
#ifndef OpenGLESImage_createRGBImage
#define OpenGLESImage_createRGBImage Image_createRGBImage
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLESImage_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLESImage_register(void);


#endif // ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGE_H
