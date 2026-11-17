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
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/image/ImageCache.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ImageScaleUtil ImageScaleUtil;
struct ImageScaleUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ImageCopyUtil* imageCopyUtil;
    GameFeatureFactory* gameFeatureFactory;
    Features* features;
    const char* NO_COPY;
};

static ImageScaleUtil* ImageScaleUtil_instance;

ImageScaleUtil* ImageScaleUtil_new(void);
ImageScaleUtil* ImageScaleUtil_getInstance(void);

void ImageScaleUtil_init(ImageScaleUtil* this);
Image* ImageScaleUtil_createImage2(ImageScaleUtil* this, ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached);
Image* ImageScaleUtil_createImage3(ImageScaleUtil* this, ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable);
void ImageScaleUtil_scale2(ImageScaleUtil* this, Image* originalImage, Image** originalImageArray, Image** ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY);
void ImageScaleUtil_scale(ImageScaleUtil* this, Image* originalImage, Image** originalImageArray, Image** ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY, bool mutable);

// Static fields with runtime initializers: call this once at startup
void ImageScaleUtil_staticInit(void) {
    ImageScaleUtil_instance = ImageScaleUtil_new();
}

static void ImageScaleUtil_initFields(ImageScaleUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->imageCopyUtil = ImageCopyUtil_getInstance();
    this->gameFeatureFactory = GameFeatureFactory_getInstance();
    this->features = Features_getInstance();
    this->NO_COPY = "SWT should not copy images after initial loading as the alpha is not honored";
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
        if (!Features_isFeature(this->features, this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION)) {
            LogUtil_putF(this->logUtil, this->NO_COPY, this, this->commonStrings->CONSTRUCTOR);
            return originalImage;
        }
        int32_t width = Image_getWidth(originalImage);
        int32_t height = Image_getHeight(originalImage);
        float scaleX = scaleNominatorX / scaleDenominatorX;
        float scaleY = scaleNominatorY / scaleDenominatorY;
        Image* scaledImage = ImageCopyUtil_createImageWH(this->imageCopyUtil, originalImage, ((int32_t) (scaleX * ((float) width))), ((int32_t) (scaleY * ((float) height))), mutable);
        return scaledImage;
}


// throws Exception
void ImageScaleUtil_scale2(ImageScaleUtil* this, Image* originalImage, Image** originalImageArray, Image** ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY) {
        ImageScaleUtil_scale(this, originalImage, originalImageArray, ximageToShowArray, unused, scaleX, scaleY, maxScaleX, maxScaleY, true);
}


// throws Exception
void ImageScaleUtil_scale(ImageScaleUtil* this, Image* originalImage, Image** originalImageArray, Image** ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY, bool mutable) {
        int32_t width = Image_getWidth(originalImage);
        int32_t height = Image_getHeight(originalImage);
        Image* scaledImage = ImageCopyUtil_createImageWH(this->imageCopyUtil, originalImage, ((int32_t) (scaleX * ((float) width))), ((int32_t) (scaleY * ((float) height))), mutable);
        originalImageArray[0] = scaledImage;
}

