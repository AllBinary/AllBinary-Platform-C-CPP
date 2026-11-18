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

//OpenGLESNullImageJ2MEJavaLibrary
typedef struct OpenGLESImage OpenGLESImage;
struct OpenGLESImage {
    OpenGLSurfaceChangedInterface OpenGLSurfaceChangedInterface_interface;
    CommonStrings* commonStrings;
    PlatformTextureBaseFactory* textureFactory;
    PlatformBitmapBase* openGLBitmap;
    OpenGLESImageProperties* openGLESImageProperties;
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
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLESImage_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLESImage_register(void);


#endif // ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGE_H
