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
// #include "java/awt/image/BufferedImage.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/microemu/device/j2se/J2SEImmutableImage.h"
#include "org/microemu/device/j2se/J2SEMutableImage.h"

typedef struct ImageRotationUtil ImageRotationUtil;
struct ImageRotationUtil {
    ImageJ2SERotationUtil* imageJ2SERotationUtil;
};

static ImageRotationUtil* ImageRotationUtil_instance;

ImageRotationUtil* ImageRotationUtil_new(void);
ImageRotationUtil* ImageRotationUtil_getInstance(void);

void ImageRotationUtil_init(ImageRotationUtil* this);
void ImageRotationUtil_rotateImage(ImageRotationUtil* this, Image* originalImage, Image* image, int32_t totalAngle);
Image* ImageRotationUtil_createRotatedImage(ImageRotationUtil* this, Image* originalImage, int32_t rotationInDegrees);

// Static fields with runtime initializers: call this once at startup
void ImageRotationUtil_staticInit(void) {
    ImageRotationUtil_instance = ImageRotationUtil_new();
}

static void ImageRotationUtil_initFields(ImageRotationUtil* this) {
    this->imageJ2SERotationUtil = ImageJ2SERotationUtil_getInstance();
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


void ImageRotationUtil_rotateImage(ImageRotationUtil* this, Image* originalImage, Image* image, int32_t totalAngle) {
        if (Image_isMutable(image)) {
            J2SEMutableImage* j2seImage = ((J2SEMutableImage*) image);
            BufferedImage* newBufferedImage = ((BufferedImage*) J2SEMutableImage_getImage(j2seImage));
            Image* originalAwtImage = nullptr;
            if (Image_isMutable(originalImage)) {
                J2SEMutableImage* originalJ2SEImage = ((J2SEMutableImage*) originalImage);
                originalAwtImage = ((Image*) J2SEImmutableImage_getImage(originalJ2SEImage));
            } else {
                J2SEImmutableImage* originalJ2SEImage = ((J2SEImmutableImage*) originalImage);
                originalAwtImage = ((Image*) J2SEImmutableImage_getImage(originalJ2SEImage));
            }
            ImageJ2SERotationUtil_rotateImage(this->imageJ2SERotationUtil, originalAwtImage, newBufferedImage, totalAngle);
        } else {
            PreLogUtil_putOE("Not Mutable", this, "getRotatedImage", java_exception_new("Exception", ""));
        }
}


// throws Exception
Image* ImageRotationUtil_createRotatedImage(ImageRotationUtil* this, Image* originalImage, int32_t rotationInDegrees) {
        Image* image = ImageCreationUtil_createImageWH(ImageCreationUtil_getInstance(), Image_getWidth(originalImage), Image_getHeight(originalImage));
        if (Image_isMutable(image)) {
            Image* originalAwtImage = nullptr;
            if (Image_isMutable(originalImage)) {
                J2SEMutableImage* originalJ2SEImage = ((J2SEMutableImage*) originalImage);
                originalAwtImage = ((Image*) J2SEImmutableImage_getImage(originalJ2SEImage));
            } else {
                J2SEImmutableImage* originalJ2SEImage = ((J2SEImmutableImage*) originalImage);
                originalAwtImage = ((Image*) J2SEImmutableImage_getImage(originalJ2SEImage));
            }
            J2SEMutableImage* j2seImage = ((J2SEMutableImage*) image);
            BufferedImage* newBufferedImage = ((BufferedImage*) J2SEMutableImage_getImage(j2seImage));
            BufferedImage* bufferedImage = ImageJ2SERotationUtil_createRotatedImage(this->imageJ2SERotationUtil, originalAwtImage, newBufferedImage, rotationInDegrees);
            return image;
        } else {
            java_throw(java_exception_new("Exception", "Not Mutable"));
        }
}

