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
#include "android/graphics/Bitmap.h"
#include "android/graphics/Canvas.h"
#include "android/graphics/Matrix.h"
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/image/ImageCache.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/microemu/android/device/AndroidImageInterface.h"

typedef struct ImageScaleUtil ImageScaleUtil;
struct ImageScaleUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    int32_t anchor;
    BasicArrayList* imageBasicArrayList;
    BasicArrayList* scaledImageBasicArrayList;
    BasicArrayList* scaleXBasicArrayList;
    BasicArrayList* scaleYBasicArrayList;
};

static ImageScaleUtil* ImageScaleUtil_instance;

ImageScaleUtil* ImageScaleUtil_new(void);
ImageScaleUtil* ImageScaleUtil_getInstance(void);

void ImageScaleUtil_init(ImageScaleUtil* this);
Image* ImageScaleUtil_createImage2(ImageScaleUtil* this, ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached);
Image* ImageScaleUtil_createImage3(ImageScaleUtil* this, ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable);
Image* ImageScaleUtil_createImage(ImageScaleUtil* this, ImageCache* imageCache, Image* originalImage, float scaleX, float scaleY, bool cached);
static Image* ImageScaleUtil_getScaledImage(ImageScaleUtil* this, ImageCache* imageCache, Image* originalImage, float scaleX, float scaleY, int32_t width, int32_t height, bool cached);
static void ImageScaleUtil_scale(ImageScaleUtil* this, Image* image, Matrix* matrix, float scaleX, float scaleY);

// Static fields with runtime initializers: call this once at startup
void ImageScaleUtil_staticInit(void) {
    ImageScaleUtil_instance = ImageScaleUtil_new();
}

static void ImageScaleUtil_initFields(ImageScaleUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->anchor = Anchor_TOP_LEFT;
    this->imageBasicArrayList = BasicArrayListD_new();
    this->scaledImageBasicArrayList = BasicArrayListD_new();
    this->scaleXBasicArrayList = BasicArrayListD_new();
    this->scaleYBasicArrayList = BasicArrayListD_new();
}


ImageScaleUtil* ImageScaleUtil_getInstance(void) {
        return ImageScaleUtil_instance;
}


void ImageScaleUtil_init(ImageScaleUtil* this) {
    ImageScaleUtil_initFields(this);
}

ImageScaleUtil* ImageScaleUtil_new(void) {
    ImageScaleUtil* this = calloc(1, sizeof(ImageScaleUtil));
    ImageScaleUtil_init(this);
    return this;
}


// throws Exception
Image* ImageScaleUtil_createImage2(ImageScaleUtil* this, ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached) {
        return ImageScaleUtil_createImage3(this, imageCache, originalImage, scaleNominatorX, scaleDenominatorX, scaleNominatorY, scaleDenominatorY, cached, true);
}


// throws Exception
Image* ImageScaleUtil_createImage3(ImageScaleUtil* this, ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable) {
        float scaleX = scaleNominatorX / scaleDenominatorX;
        float scaleY = scaleNominatorY / scaleDenominatorY;
        return ImageScaleUtil_createImage(this, imageCache, originalImage, scaleX, scaleY, cached);
}


// throws Exception
Image* ImageScaleUtil_createImage(ImageScaleUtil* this, ImageCache* imageCache, Image* originalImage, float scaleX, float scaleY, bool cached) {
        AndroidImageInterface* originalAndroidImage = ((AndroidImageInterface*) originalImage);
        Bitmap* originalBitmap = AndroidImageInterface_getBitmap(originalAndroidImage);
        int32_t width = ((int32_t) (Bitmap_getWidth(originalBitmap) * scaleX));
        int32_t height = ((int32_t) (Bitmap_getHeight(originalBitmap) * scaleY));
        int32_t index = BasicArrayList_indexOf(this->imageBasicArrayList, originalImage);
        bool alreadyAvailable = false;
        if (index >= 0) {
            float scaleX2Float = ((float) BasicArrayList_get(this->scaleXBasicArrayList, index));
            float scaleX2 = Float_floatValue(scaleX2Float);
            float scaleY2Float = ((float) BasicArrayList_get(this->scaleYBasicArrayList, index));
            float scaleY2 = Float_floatValue(scaleY2Float);
            if (scaleX2 == scaleX && scaleY2 == scaleY) {
                alreadyAvailable = true;
            }
        }
        if (alreadyAvailable) {
            return ((Image*) BasicArrayList_get(this->scaledImageBasicArrayList, index));
        } else {
            Image* scaledImage = ImageScaleUtil_getScaledImage(this, imageCache, originalImage, scaleX, scaleY, width, height, cached);
            BasicArrayList_add(this->imageBasicArrayList, originalImage);
            BasicArrayList_add(this->scaledImageBasicArrayList, scaledImage);
            BasicArrayList_add(this->scaleXBasicArrayList, scaleX);
            BasicArrayList_add(this->scaleYBasicArrayList, scaleY);
            return scaledImage;
        }
}


// throws Exception
static Image* ImageScaleUtil_getScaledImage(ImageScaleUtil* this, ImageCache* imageCache, Image* originalImage, float scaleX, float scaleY, int32_t width, int32_t height, bool cached) {
        Image* image = NullImage_NULL_IMAGE;
        if (cached) {
            image = ImageCache_get(imageCache, java_class_of(this), width, height);
        } else {
            image = ImageCache_get(imageCache, this->commonStrings->CREATE_IMAGE, width, height);
        }
        if (Image_isMutable(image)) {
            Matrix* matrix = Matrix_new();
            ImageScaleUtil_scale(this, image, matrix, scaleX, scaleY);
            JAVA_CALL(Image_getGraphics(image), drawImage, originalImage, 0, 0, this->anchor);
            return image;
        } else {
            java_throw(java_exception_new("Exception", "Not Mutable"));
        }
}


static void ImageScaleUtil_scale(ImageScaleUtil* this, Image* image, Matrix* matrix, float scaleX, float scaleY) {
        Matrix_setScale(matrix, scaleX, scaleY);
        Canvas* canvas = AndroidImageInterface_getCanvas((((AndroidImageInterface*) image)));
        Canvas_concat(canvas, matrix);
}

