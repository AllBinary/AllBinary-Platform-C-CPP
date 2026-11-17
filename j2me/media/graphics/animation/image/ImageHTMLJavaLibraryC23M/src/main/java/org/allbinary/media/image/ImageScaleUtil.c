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
#include "org/allbinary/image/ImageCache.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/microemu/device/playn/PlaynImmutableImage.h"
#include "org/microemu/device/playn/PlaynMutableImage.h"
#include "playn/core/CanvasImage.h"
#include "playn/core/CanvasSurface.h"

typedef struct ImageScaleUtil ImageScaleUtil;
struct ImageScaleUtil {
    char unused;
};

static ImageScaleUtil* ImageScaleUtil_instance;

ImageScaleUtil* ImageScaleUtil_new(void);
ImageScaleUtil* ImageScaleUtil_getInstance(void);

void ImageScaleUtil_init(ImageScaleUtil* this);
Image* ImageScaleUtil_createImage2(ImageScaleUtil* this, ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached);
Image* ImageScaleUtil_createImage3(ImageScaleUtil* this, ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable);
Image* ImageScaleUtil_createImage(ImageScaleUtil* this, ImageCache* imageCache, Image* originalImage, float scaleX, float scaleY, bool cached);
Image* ImageScaleUtil_createImageInternal(ImageScaleUtil* this, Image* originalImage, float scaleX, float scaleY);

// Static fields with runtime initializers: call this once at startup
void ImageScaleUtil_staticInit(void) {
    ImageScaleUtil_instance = ImageScaleUtil_new();
}


ImageScaleUtil* ImageScaleUtil_getInstance(void) {
        return ImageScaleUtil_instance;
}


void ImageScaleUtil_init(ImageScaleUtil* this) {
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
        return ImageScaleUtil_createImageInternal(this, originalImage, scaleX, scaleY);
}


// throws Exception
Image* ImageScaleUtil_createImageInternal(ImageScaleUtil* this, Image* originalImage, float scaleX, float scaleY) {
        Image* image = ImageCreationUtil_getInstance(ImageCreationUtil_getInstance(), ((int32_t) (Image_getWidth(originalImage) * scaleX)), ((int32_t) (Image_getHeight(originalImage) * scaleY)));
        if (Image_isMutable(image)) {
            Image* originalPlayNImage = nullptr;
            if (Image_isMutable(originalImage)) {
                PlaynMutableImage* originalHTMLImage = ((PlaynMutableImage*) originalImage);
                originalPlayNImage = ((Image*) PlaynImmutableImage_getImage(originalHTMLImage));
            } else {
                PlaynImmutableImage* originalHTMLImage = ((PlaynImmutableImage*) originalImage);
                originalPlayNImage = ((Image*) PlaynImmutableImage_getImage(originalHTMLImage));
            }
            PlaynMutableImage* htmlImage = ((PlaynMutableImage*) image);
            CanvasImage* canvasImage = ((CanvasImage*) PlaynMutableImage_getImage(htmlImage));
            CanvasSurface* canvasSurface = PlaynMutableImage_getCanvasSurface(htmlImage, canvasImage);
            CanvasSurface_drawImage(canvasSurface, originalPlayNImage, 0, 0, Image_getWidth(image), Image_getHeight(image), 0, 0, Image_width(originalPlayNImage), Image_height(originalPlayNImage));
            return image;
        } else {
            java_throw(java_exception_new("Exception", "Not Mutable"));
        }
}

