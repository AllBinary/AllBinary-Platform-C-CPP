/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2023 AllBinary
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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/microemu/device/playn/PlaynImmutableImage.h"
#include "org/microemu/device/playn/PlaynMutableImage.h"
#include "playn/core/CanvasImage.h"
#include "playn/core/CanvasSurface.h"

typedef struct ImageJ2MEScaleUtil ImageJ2MEScaleUtil;
struct ImageJ2MEScaleUtil {
    LogUtil* logUtil;
};

static ImageJ2MEScaleUtil* ImageJ2MEScaleUtil_instance;

ImageJ2MEScaleUtil* ImageJ2MEScaleUtil_new(void);
ImageJ2MEScaleUtil* ImageJ2MEScaleUtil_getInstance(void);

void ImageJ2MEScaleUtil_init(ImageJ2MEScaleUtil* this);
Image** ImageJ2MEScaleUtil_scaleArray(ImageJ2MEScaleUtil* this, Image** images, int32_t width, int32_t height);
Image* ImageJ2MEScaleUtil_scale(ImageJ2MEScaleUtil* this, Image* image, int32_t width, int32_t height);

// Static fields with runtime initializers: call this once at startup
void ImageJ2MEScaleUtil_staticInit(void) {
    ImageJ2MEScaleUtil_instance = ImageJ2MEScaleUtil_new();
}

static void ImageJ2MEScaleUtil_initFields(ImageJ2MEScaleUtil* this) {
    this->logUtil = LogUtil_getInstance();
}


ImageJ2MEScaleUtil* ImageJ2MEScaleUtil_getInstance(void) {
        return ImageJ2MEScaleUtil_instance;
}


void ImageJ2MEScaleUtil_init(ImageJ2MEScaleUtil* this) {
    ImageJ2MEScaleUtil_initFields(this);
}

ImageJ2MEScaleUtil* ImageJ2MEScaleUtil_new(void) {
    ImageJ2MEScaleUtil* this = calloc(1, sizeof(ImageJ2MEScaleUtil));
    ImageJ2MEScaleUtil_init(this);
    return this;
}


// throws Exception
Image** ImageJ2MEScaleUtil_scaleArray(ImageJ2MEScaleUtil* this, Image** images, int32_t width, int32_t height) {
        Image** scaledImages = ((Image**) java_array_new(sizeof(Image*), java_array_length(images)));
        for (int32_t index = java_array_length(images); --index >= 0; ) {
            scaledImages[index] = ImageJ2MEScaleUtil_scale(this, images[index], width, height);
        }
        return scaledImages;
}


// throws Exception
Image* ImageJ2MEScaleUtil_scale(ImageJ2MEScaleUtil* this, Image* image, int32_t width, int32_t height) {
        Image* originalPlayNImage = nullptr;
        if (Image_isMutable(image)) {
            PlaynMutableImage* originalHTMLImage = ((PlaynMutableImage*) image);
            originalPlayNImage = ((Image*) PlaynImmutableImage_getImage(originalHTMLImage));
        } else {
            PlaynImmutableImage* originalHTMLImage = ((PlaynImmutableImage*) image);
            originalPlayNImage = ((Image*) PlaynImmutableImage_getImage(originalHTMLImage));
        }
        Image* scaledImage = Image_createImage(width, height);
        PlaynMutableImage* htmlImage = ((PlaynMutableImage*) scaledImage);
        CanvasImage* canvasImage = ((CanvasImage*) PlaynMutableImage_getImage(htmlImage));
        CanvasSurface* canvasSurface = PlaynMutableImage_getCanvasSurface(htmlImage, canvasImage);
        CanvasSurface_drawImage(canvasSurface, originalPlayNImage, 0, 0, Image_getWidth(scaledImage), Image_getHeight(scaledImage), 0, 0, Image_getWidth(image), Image_getHeight(image));
        return scaledImage;
}

