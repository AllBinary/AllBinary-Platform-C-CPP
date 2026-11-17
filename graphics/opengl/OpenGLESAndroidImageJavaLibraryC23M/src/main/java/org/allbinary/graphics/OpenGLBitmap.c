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
#include "android/graphics/Bitmap.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBase.h"

typedef struct OpenGLBitmap OpenGLBitmap;
struct OpenGLBitmap {
    PlatformBitmapBase base;
    Bitmap* bitmap;
};


OpenGLBitmap* OpenGLBitmap_new(Any* bitmap);

void OpenGLBitmap_init(OpenGLBitmap* this, Any* bitmap);
void OpenGLBitmap_getPixels(OpenGLBitmap* this, int32_t* pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height);
void OpenGLBitmap_setPixels(OpenGLBitmap* this, int32_t* pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height);
int32_t OpenGLBitmap_getWidth(OpenGLBitmap* this);
int32_t OpenGLBitmap_getHeight(OpenGLBitmap* this);
void OpenGLBitmap_recycle(OpenGLBitmap* this);

static void OpenGLBitmap_initFields(OpenGLBitmap* this) {
    
}


void OpenGLBitmap_init(OpenGLBitmap* this, Any* bitmap) {
    PlatformBitmapBase_init(&this->base);
    OpenGLBitmap_initFields(this);
        this->bitmap = ((Bitmap*) bitmap);
}

OpenGLBitmap* OpenGLBitmap_new(Any* bitmap) {
    OpenGLBitmap* this = calloc(1, sizeof(OpenGLBitmap));
    OpenGLBitmap_init(this, bitmap);
    return this;
}


void OpenGLBitmap_getPixels(OpenGLBitmap* this, int32_t* pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height) {
        Bitmap_getPixels(this->bitmap, pixels, offset, stride, x, y, width, height);
}


void OpenGLBitmap_setPixels(OpenGLBitmap* this, int32_t* pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height) {
        Bitmap_setPixels(this->bitmap, pixels, offset, stride, x, y, width, height);
}


int32_t OpenGLBitmap_getWidth(OpenGLBitmap* this) {
        return Bitmap_getWidth(this->bitmap);
}


int32_t OpenGLBitmap_getHeight(OpenGLBitmap* this) {
        return Bitmap_getHeight(this->bitmap);
}


void OpenGLBitmap_recycle(OpenGLBitmap* this) {
        Bitmap_recycle(this->bitmap);
}

