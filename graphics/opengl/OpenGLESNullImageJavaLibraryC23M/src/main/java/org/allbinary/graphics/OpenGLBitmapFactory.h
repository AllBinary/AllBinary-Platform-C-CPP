#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLBITMAPFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLBITMAPFACTORY_H
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
typedef struct OpenGLBitmapConfig OpenGLBitmapConfig;
typedef struct OpenGLBitmap OpenGLBitmap;
typedef struct Image Image;
typedef struct NullUtil NullUtil;
typedef struct PlatformBitmapBase PlatformBitmapBase;
typedef struct PlatformBitmapBaseFactory PlatformBitmapBaseFactory;
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h"
#if __has_include("org/allbinary/graphics/OpenGLBitmapConfig.h")
#include "org/allbinary/graphics/OpenGLBitmapConfig.h"
#endif

typedef struct OpenGLBitmapFactory OpenGLBitmapFactory;
struct OpenGLBitmapFactory {
    PlatformBitmapBaseFactory base;
    OpenGLBitmapConfig* ARGB_8888;
};


OpenGLBitmapFactory* OpenGLBitmapFactory_new(void);
void OpenGLBitmapFactory_init(OpenGLBitmapFactory* this);

OpenGLBitmapFactory* OpenGLBitmapFactory_getInstance(void);

OpenGLBitmap* OpenGLBitmapFactory_createBitmap4(OpenGLBitmapFactory* this, int32_t width, int32_t height, OpenGLBitmapConfig* config);

OpenGLBitmap* OpenGLBitmapFactory_decodeStream(OpenGLBitmapFactory* this, InputStream* inputStream);

PlatformBitmapBase* OpenGLBitmapFactory_createBitmap2(OpenGLBitmapFactory* this, Image* image);
#define OpenGLBitmapFactory_createBitmap(...) JAVA_OVERLOADED(OpenGLBitmapFactory_createBitmap, __VA_ARGS__)
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLBitmapFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLBitmapFactory_register(void);

#if __has_include("org/allbinary/platform/graphics/PlatformBitmapBase.h")
#include "org/allbinary/platform/graphics/PlatformBitmapBase.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_OPENGLBITMAPFACTORY_H
