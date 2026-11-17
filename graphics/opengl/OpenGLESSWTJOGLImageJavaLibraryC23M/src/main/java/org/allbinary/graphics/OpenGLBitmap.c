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
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/DisposalUtil.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBase.h"
#include "org/microemu/device/swt/SwtImmutableImage.h"
#include "org/microemu/device/swt/SwtMutableImage.h"

typedef struct OpenGLBitmap OpenGLBitmap;
struct OpenGLBitmap {
    PlatformBitmapBase base;
    Image* image;
};


OpenGLBitmap* OpenGLBitmap_new(Any* bitmap);

void OpenGLBitmap_init(OpenGLBitmap* this, Any* bitmap);
Image* OpenGLBitmap_getImage(OpenGLBitmap* this);
int32_t OpenGLBitmap_getDepth(OpenGLBitmap* this);
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
        this->image = ((Image*) bitmap);
}

OpenGLBitmap* OpenGLBitmap_new(Any* bitmap) {
    OpenGLBitmap* this = calloc(1, sizeof(OpenGLBitmap));
    OpenGLBitmap_init(this, bitmap);
    return this;
}


Image* OpenGLBitmap_getImage(OpenGLBitmap* this) {
        return this->image;
}


int32_t OpenGLBitmap_getDepth(OpenGLBitmap* this) {
        if (Image_isMutable(this->image)) {
            SwtMutableImage* mutableImage = ((SwtMutableImage*) this->image);
            return SwtMutableImage_getDepth(mutableImage);
        } else {
            SwtImmutableImage* immutableImage = ((SwtImmutableImage*) this->image);
            return SwtImmutableImage_getDepth(immutableImage);
        }
}


void OpenGLBitmap_getPixels(OpenGLBitmap* this, int32_t* pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height) {
        if (Image_isMutable(this->image)) {
            SwtMutableImage* mutableImage = ((SwtMutableImage*) this->image);
            SwtMutableImage_getRGB(mutableImage, pixels, offset, stride, x, y, width, height);
        } else {
            SwtImmutableImage* immutableImage = ((SwtImmutableImage*) this->image);
            SwtImmutableImage_getRGB(immutableImage, pixels, offset, stride, x, y, width, height);
        }
}


void OpenGLBitmap_setPixels(OpenGLBitmap* this, int32_t* pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height) {
        Image_setRGB2(this->image, pixels, offset, height, x, y, width, height);
}


int32_t OpenGLBitmap_getWidth(OpenGLBitmap* this) {
        return Image_getWidth(this->image);
}


int32_t OpenGLBitmap_getHeight(OpenGLBitmap* this) {
        return Image_getHeight(this->image);
}


void OpenGLBitmap_recycle(OpenGLBitmap* this) {
        DisposalUtil_disposeImage(DisposalUtil_getInstance(), this->image);
}

