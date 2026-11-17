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
// #include "java/io/InputStream.h"
// #include "javax/microedition/lcdui/Image.h"
#include "android/graphics/Bitmap.h"
#include "android/graphics/BitmapFactory.h"
// #include "java/io/IOException.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBase.h"
#include "org/microemu/android/device/AndroidImageInterface.h"

typedef struct OpenGLBitmapFactory OpenGLBitmapFactory;
struct OpenGLBitmapFactory {
    PlatformBitmapBaseFactory base;
    OpenGLBitmapConfig* ARGB_8888;
};

static OpenGLBitmapFactory* OpenGLBitmapFactory_instance;

OpenGLBitmapFactory* OpenGLBitmapFactory_new(void);
OpenGLBitmapFactory* OpenGLBitmapFactory_getInstance(void);
OpenGLBitmap* OpenGLBitmapFactory_createBitmap(OpenGLBitmapFactory* this, int32_t width, int32_t height, OpenGLBitmapConfig* config);
OpenGLBitmap* OpenGLBitmapFactory_decodeStream(OpenGLBitmapFactory* this, InputStream* inputStream);
PlatformBitmapBase* OpenGLBitmapFactory_createBitmap(OpenGLBitmapFactory* this, Image* image);

// Static fields with runtime initializers: call this once at startup
void OpenGLBitmapFactory_staticInit(void) {
    OpenGLBitmapFactory_instance = OpenGLBitmapFactory_new();
}

static void OpenGLBitmapFactory_initFields(OpenGLBitmapFactory* this) {
    this->ARGB_8888 = OpenGLBitmapConfig_new(Bitmap_Config->ARGB_8888);
}

void OpenGLBitmapFactory_init(OpenGLBitmapFactory* this) {
    PlatformBitmapBaseFactory_init(&this->base);
    OpenGLBitmapFactory_initFields(this);
}

OpenGLBitmapFactory* OpenGLBitmapFactory_new(void) {
    OpenGLBitmapFactory* this = calloc(1, sizeof(OpenGLBitmapFactory));
    OpenGLBitmapFactory_init(this);
    return this;
}


OpenGLBitmapFactory* OpenGLBitmapFactory_getInstance(void) {
        return OpenGLBitmapFactory_instance;
}


OpenGLBitmap* OpenGLBitmapFactory_createBitmap(OpenGLBitmapFactory* this, int32_t width, int32_t height, OpenGLBitmapConfig* config) {
        return OpenGLBitmap_new(Bitmap_createBitmap(width, height, config->bitmapConfig));
}


// throws IOException
OpenGLBitmap* OpenGLBitmapFactory_decodeStream(OpenGLBitmapFactory* this, InputStream* inputStream) {
        return OpenGLBitmap_new(BitmapFactory_decodeStream(inputStream));
}


// Java overloaded method: C needs a different name
PlatformBitmapBase* OpenGLBitmapFactory_createBitmap(OpenGLBitmapFactory* this, Image* image) {
        return OpenGLBitmap_new(AndroidImageInterface_getBitmap((((AndroidImageInterface*) image))));
}

