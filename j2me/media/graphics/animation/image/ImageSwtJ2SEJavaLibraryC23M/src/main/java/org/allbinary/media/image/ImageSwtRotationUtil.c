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
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/eclipse/swt/SWT.h"
#include "org/eclipse/swt/graphics/GC.h"
#include "org/eclipse/swt/graphics/ImageData.h"

typedef struct ImageSwtRotationUtil ImageSwtRotationUtil;
struct ImageSwtRotationUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ImageUtil* imageUtil;
    GameFeatureFactory* gameFeatureFactory;
    Features* features;
    const char* NO_COPY;
};

static ImageSwtRotationUtil* ImageSwtRotationUtil_instance;

ImageSwtRotationUtil* ImageSwtRotationUtil_new(void);
ImageSwtRotationUtil* ImageSwtRotationUtil_getInstance(void);

void ImageSwtRotationUtil_init(ImageSwtRotationUtil* this);
Image* ImageSwtRotationUtil_getRotatedImage(ImageSwtRotationUtil* this, Image* bufferedImage, int32_t totalAngle);
static Image* ImageSwtRotationUtil_getRotatedImage2(ImageSwtRotationUtil* this, Image* bufferedImage, Image* newBufferedImage, GC* gc, float angle);
Image* ImageSwtRotationUtil_rotateImage(ImageSwtRotationUtil* this, Image* originalSwtImage, Image* newSwtImage, GC* gc, int32_t totalAngle);
Image* ImageSwtRotationUtil_getRotatedImageSWT(ImageSwtRotationUtil* this, Image* bufferedImage, Image* newSwtImage, GC* gc, int32_t totalAngle);
Image** ImageSwtRotationUtil_getRotatedImages(ImageSwtRotationUtil* this, Image* bufferedImage, int32_t numberOfFrames, int32_t totalAngle);
Image* ImageSwtRotationUtil_createSpriteImage(ImageSwtRotationUtil* this, Image** bufferedImageArray);

// Static fields with runtime initializers: call this once at startup
void ImageSwtRotationUtil_staticInit(void) {
    ImageSwtRotationUtil_instance = ImageSwtRotationUtil_new();
}

static void ImageSwtRotationUtil_initFields(ImageSwtRotationUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->imageUtil = ImageUtil_getInstance();
    this->gameFeatureFactory = GameFeatureFactory_getInstance();
    this->features = Features_getInstance();
    this->NO_COPY = "SWT should not copy images after initial loading as the alpha is not honored";
}


ImageSwtRotationUtil* ImageSwtRotationUtil_getInstance(void) {
        return ImageSwtRotationUtil_instance;
}


void ImageSwtRotationUtil_init(ImageSwtRotationUtil* this) {
    ImageSwtRotationUtil_initFields(this);
}

ImageSwtRotationUtil* ImageSwtRotationUtil_new(void) {
    ImageSwtRotationUtil* this = calloc(1, sizeof(ImageSwtRotationUtil));
    ImageSwtRotationUtil_init(this);
    return this;
}


Image* ImageSwtRotationUtil_getRotatedImage(ImageSwtRotationUtil* this, Image* bufferedImage, int32_t totalAngle) {
        if (!Features_isFeature(this->features, this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION)) {
            LogUtil_putF(this->logUtil, this->NO_COPY, this, this->commonStrings->CONSTRUCTOR);
            return bufferedImage;
        }
        return bufferedImage;
}


static Image* ImageSwtRotationUtil_getRotatedImage2(ImageSwtRotationUtil* this, Image* bufferedImage, Image* newBufferedImage, GC* gc, float angle) {
        if (!Features_isFeature(this->features, this->gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION)) {
            LogUtil_putF(this->logUtil, this->NO_COPY, this, this->commonStrings->CONSTRUCTOR);
            return bufferedImage;
        }
        return bufferedImage;
}


Image* ImageSwtRotationUtil_rotateImage(ImageSwtRotationUtil* this, Image* originalSwtImage, Image* newSwtImage, GC* gc, int32_t totalAngle) {
        return ImageSwtRotationUtil_getRotatedImage2(this, originalSwtImage, newSwtImage, gc, totalAngle);
}


Image* ImageSwtRotationUtil_getRotatedImageSWT(ImageSwtRotationUtil* this, Image* bufferedImage, Image* newSwtImage, GC* gc, int32_t totalAngle) {
        return ImageSwtRotationUtil_getRotatedImage2(this, bufferedImage, newSwtImage, gc, totalAngle);
}


Image** ImageSwtRotationUtil_getRotatedImages(ImageSwtRotationUtil* this, Image* bufferedImage, int32_t numberOfFrames, int32_t totalAngle) {
        Image** bufferedImageArray = ((Image**) java_array_new(sizeof(Image*), numberOfFrames));
        int32_t angle = 0;
        int32_t size = java_array_length(bufferedImageArray);
        for (int32_t index = 0; index < size; index++) {
            angle = (totalAngle / size) * index;
            bufferedImageArray[index] = ImageSwtRotationUtil_getRotatedImage(this, bufferedImage, angle);
        }
        return bufferedImageArray;
}


Image* ImageSwtRotationUtil_createSpriteImage(ImageSwtRotationUtil* this, Image** bufferedImageArray) {
        int32_t columns = 9;
        int32_t rows = 0;
        int32_t size = java_array_length(bufferedImageArray);
        if (size < columns) {
            columns = size;
        }
        rows = (size / columns);
        if (size % columns != 0) {
            rows++;
        }
        Image* firstBufferedImage = bufferedImageArray[0];
        ImageData* imageData = Image_getImageData(firstBufferedImage);
        Image* bufferedImage = ImageUtil_create(this->imageUtil, imageData->width * columns, imageData->height * rows);
        GC* gc = GC_new(bufferedImage);
        GC_setAntialias(gc, SWT_ON);
        GC_setInterpolation(gc, SWT_HIGH);
        int32_t columnIndex = 0;
        int32_t rowIndex = 0;
        Image* nextBufferedImage = nullptr;
        for (int32_t index = 0; index < size; index++) {
            if (index / 9 != 0 && index % 9 == 0) {
                rowIndex++;
                columnIndex = 0;
            }
            nextBufferedImage = bufferedImageArray[index];
            imageData = Image_getImageData(nextBufferedImage);
            GC_drawImage(gc, bufferedImage, 0, 0, Image_getBounds(bufferedImage)->width, Image_getBounds(bufferedImage)->height, imageData->width * columnIndex, imageData->height * rowIndex, imageData->width, imageData->height);
            columnIndex++;
        }
        GC_dispose(gc);
        return bufferedImage;
}

