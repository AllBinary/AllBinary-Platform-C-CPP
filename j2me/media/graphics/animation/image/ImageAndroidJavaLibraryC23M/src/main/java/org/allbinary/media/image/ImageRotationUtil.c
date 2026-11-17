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
// package org.allbinary.media.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/graphics/Anchor.h"
#include "android/graphics/Bitmap.h"
#include "android/graphics/Canvas.h"
#include "android/graphics/Matrix.h"
#include "org/microemu/android/device/AndroidImageInterface.h"

typedef struct ImageRotationUtil ImageRotationUtil;
struct ImageRotationUtil {
    Matrix* matrix;
    int32_t anchor;
};

static ImageRotationUtil* ImageRotationUtil_instance;

ImageRotationUtil* ImageRotationUtil_new(void);
ImageRotationUtil* ImageRotationUtil_getInstance(void);

void ImageRotationUtil_init(ImageRotationUtil* this);
Image* ImageRotationUtil_createRotatedImage(ImageRotationUtil* this, Image* originalImage, int32_t rotationInDegrees);

// Static fields with runtime initializers: call this once at startup
void ImageRotationUtil_staticInit(void) {
    ImageRotationUtil_instance = ImageRotationUtil_new();
}

static void ImageRotationUtil_initFields(ImageRotationUtil* this) {
    this->matrix = Matrix_new();
    this->anchor = Anchor_TOP_LEFT;
}


ImageRotationUtil* ImageRotationUtil_getInstance(void) {
        return ImageRotationUtil_instance;
}


void ImageRotationUtil_init(ImageRotationUtil* this) {
    ImageRotationUtil_initFields(this);
}

ImageRotationUtil* ImageRotationUtil_new(void) {
    ImageRotationUtil* this = calloc(1, sizeof(ImageRotationUtil));
    ImageRotationUtil_init(this);
    return this;
}


// throws Exception
Image* ImageRotationUtil_createRotatedImage(ImageRotationUtil* this, Image* originalImage, int32_t rotationInDegrees) {
        Image* image = ImageCreationUtil_createImageWH(ImageCreationUtil_getInstance(), Image_getWidth(originalImage), Image_getHeight(originalImage));
        if (Image_isMutable(image)) {
            Bitmap* bitmap = AndroidImageInterface_getBitmap((((AndroidImageInterface*) image)));
            int32_t width = Bitmap_getWidth(bitmap);
            int32_t height = Bitmap_getHeight(bitmap);
            Matrix_setRotate(this->matrix, ((float) rotationInDegrees), ((float) (width >> 1)), ((float) (height >> 1)));
            Canvas* canvas = AndroidImageInterface_getCanvas((((AndroidImageInterface*) image)));
            Canvas_concat(canvas, this->matrix);
            JAVA_CALL(Image_getGraphics(image), drawImage, originalImage, 0, 0, this->anchor);
            return image;
        } else {
            java_throw(java_exception_new("Exception", "Not Mutable"));
        }
}

