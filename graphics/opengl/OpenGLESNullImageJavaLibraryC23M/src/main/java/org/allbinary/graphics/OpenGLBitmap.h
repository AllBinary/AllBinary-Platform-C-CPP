#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_H
// Generated Code Do Not Modify
// package org.allbinary.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct PlatformBitmapBase PlatformBitmapBase;
#include "org/allbinary/platform/graphics/PlatformBitmapBase.h"

typedef struct OpenGLBitmap OpenGLBitmap;
struct OpenGLBitmap {
    PlatformBitmapBase base;
    void* bitmap;
};


OpenGLBitmap* OpenGLBitmap_new(void* bitmap);

void OpenGLBitmap_init(OpenGLBitmap* this, void* bitmap);

void OpenGLBitmap_getPixels(OpenGLBitmap* this, int32_t* pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height);

void OpenGLBitmap_setPixels(OpenGLBitmap* this, int32_t* pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height);

void OpenGLBitmap_recycle(OpenGLBitmap* this);
#define OpenGLBitmap_new1 OpenGLBitmap_new
#define OpenGLBitmap_init1 OpenGLBitmap_init
#ifndef OpenGLBitmap_getImage
#define OpenGLBitmap_getImage PlatformBitmapBase_getImage
#endif
#ifndef OpenGLBitmap_getWidth
#define OpenGLBitmap_getWidth PlatformBitmapBase_getWidth
#endif
#ifndef OpenGLBitmap_getHeight
#define OpenGLBitmap_getHeight PlatformBitmapBase_getHeight
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLBitmap_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLBitmap_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLBITMAP_H
