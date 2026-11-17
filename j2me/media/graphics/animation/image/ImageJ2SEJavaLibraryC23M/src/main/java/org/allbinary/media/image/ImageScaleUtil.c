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
// #include "java/awt/Graphics2D.h"
// #include "java/awt/geom/AffineTransform.h"
// #include "java/awt/image/BufferedImage.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/image/ImageCache.h"

typedef struct ImageScaleUtil ImageScaleUtil;
struct ImageScaleUtil {
    ImageUtil* imageUtil;
    ImageJ2SEUtil* imageJ2SEUtil;
    ImageCreationUtil* imageCreationUtil;
};

static ImageScaleUtil* ImageScaleUtil_instance;

ImageScaleUtil* ImageScaleUtil_new(void);
ImageScaleUtil* ImageScaleUtil_getInstance(void);

void ImageScaleUtil_init(ImageScaleUtil* this);
Image* ImageScaleUtil_createImage2(ImageScaleUtil* this, ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached);
Image* ImageScaleUtil_createImage3(ImageScaleUtil* this, ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable);
void ImageScaleUtil_scale2(ImageScaleUtil* this, Image* originalImage, Image** originalImageArray, Image** ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY);
void ImageScaleUtil_scale(ImageScaleUtil* this, Image* originalImage, Image* newMaxSizeImage, float scaleX, float scaleY, bool clear);

// Static fields with runtime initializers: call this once at startup
void ImageScaleUtil_staticInit(void) {
    ImageScaleUtil_instance = ImageScaleUtil_new();
}

static void ImageScaleUtil_initFields(ImageScaleUtil* this) {
    this->imageUtil = ImageUtil_getInstance();
    this->imageJ2SEUtil = ImageJ2SEUtil_getInstance();
    this->imageCreationUtil = ImageCreationUtil_getInstance();
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
        int32_t width = Image_getWidth(originalImage);
        int32_t height = Image_getHeight(originalImage);
        float scaleX = scaleNominatorX / scaleDenominatorX;
        float scaleY = scaleNominatorY / scaleDenominatorY;
        Image* image = nullptr;
        if (cached) {
            image = ImageCache_get(imageCache, java_class_of(this), ((int32_t) (((float) width) * scaleX)), ((int32_t) (((float) height) * scaleY)));
        } else {
            image = ImageCache_get(imageCache, "createImage", ((int32_t) (((float) width) * scaleX)), ((int32_t) (((float) height) * scaleY)));
        }
        ImageScaleUtil_scale(this, originalImage, image, scaleX, scaleY, true);
        return image;
}


// throws Exception
void ImageScaleUtil_scale2(ImageScaleUtil* this, Image* originalImage, Image** originalImageArray, Image** ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY) {
        if (maxScaleX * Image_getWidth(originalImage) > JAVA_CALL(originalImageArray[0], getWidth) || maxScaleY * Image_getHeight(originalImage) > JAVA_CALL(originalImageArray[0], getHeight)) {
            originalImageArray[0] = ImageCreationUtil_createImage(this->imageCreationUtil, Image_getWidth(originalImage), Image_getHeight(originalImage), maxScaleX, maxScaleY);
        }
        ImageScaleUtil_scale(this, originalImage, originalImageArray[0], scaleX, scaleY, false);
}


void ImageScaleUtil_scale(ImageScaleUtil* this, Image* originalImage, Image* newMaxSizeImage, float scaleX, float scaleY, bool clear) {
        BufferedImage* bufferedImage = ImageUtil_getBufferedImage(this->imageUtil, originalImage);
        BufferedImage* newBufferedImage = ImageUtil_getBufferedImage(this->imageUtil, newMaxSizeImage);
        AffineTransform* at = AffineTransform_getScaleInstance(scaleX, scaleY);
        Graphics2D* g = BufferedImage_createGraphics(newBufferedImage);
        if (clear) {
            Graphics2D_setBackground(g, this->imageJ2SEUtil->TRANSPARENT_COLOR);
            Graphics2D_clearRect(g, 0, 0, BufferedImage_getWidth(newBufferedImage), BufferedImage_getHeight(newBufferedImage));
        }
        Graphics2D_drawRenderedImage(g, bufferedImage, at);
        Graphics2D_dispose(g);
}

