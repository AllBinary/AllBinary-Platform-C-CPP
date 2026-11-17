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
#include "org/microemu/device/playn/PlaynImmutableImage.h"
#include "org/microemu/device/playn/PlaynMutableImage.h"
#include "playn/core/CanvasImage.h"
#include "playn/core/CanvasSurface.h"

typedef struct ImageRotationUtil ImageRotationUtil;
struct ImageRotationUtil {
    char unused;
};

static ImageRotationUtil* ImageRotationUtil_instance;

ImageRotationUtil* ImageRotationUtil_new(void);
ImageRotationUtil* ImageRotationUtil_getInstance(void);

void ImageRotationUtil_init(ImageRotationUtil* this);
Image* ImageRotationUtil_rotateImage(ImageRotationUtil* this, Image* originalImage, Image* image, int32_t totalAngle);
Image* ImageRotationUtil_rotateImageCanvasSurfaceClear(ImageRotationUtil* this, Image* originalImage, Image* image, CanvasSurface* canvasSurface, int32_t totalAngle);
Image* ImageRotationUtil_rotateImageCanvasSurface(ImageRotationUtil* this, Image* originalImage, Image* image, CanvasSurface* canvasSurface, int32_t totalAngle);
void ImageRotationUtil_drawImage(ImageRotationUtil* this, Image* originalImage, Image* image, CanvasSurface* canvasSurface);
Image* ImageRotationUtil_createRotatedImage(ImageRotationUtil* this, Image* originalImage, int32_t rotationInDegrees);

// Static fields with runtime initializers: call this once at startup
void ImageRotationUtil_staticInit(void) {
    ImageRotationUtil_instance = ImageRotationUtil_new();
}


ImageRotationUtil* ImageRotationUtil_getInstance(void) {
        return ImageRotationUtil_instance;
}


void ImageRotationUtil_init(ImageRotationUtil* this) {
}

ImageRotationUtil* ImageRotationUtil_new(void) {
    ImageRotationUtil* this = calloc(1, sizeof(ImageRotationUtil));
    ImageRotationUtil_init(this);
    return this;
}


Image* ImageRotationUtil_rotateImage(ImageRotationUtil* this, Image* originalImage, Image* image, int32_t totalAngle) {
        if (Image_isMutable(image)) {
            PlaynMutableImage* htmlImage = ((PlaynMutableImage*) image);
            CanvasImage* canvasImage = ((CanvasImage*) PlaynMutableImage_getImage(htmlImage));
            CanvasSurface* canvasSurface = PlaynMutableImage_getCanvasSurface(htmlImage, canvasImage);
            CanvasSurface_translate(canvasSurface, Image_getWidth(originalImage) / 2, Image_getHeight(originalImage) / 2);
            Image* image2 = ImageRotationUtil_rotateImageCanvasSurface(this, originalImage, image, canvasSurface, totalAngle);
            ImageRotationUtil_drawImage(this, originalImage, image, canvasSurface);
            return image2;
        } else {
            return nullptr;
        }
}


Image* ImageRotationUtil_rotateImageCanvasSurfaceClear(ImageRotationUtil* this, Image* originalImage, Image* image, CanvasSurface* canvasSurface, int32_t totalAngle) {
        if (Image_isMutable(image)) {
            CanvasSurface_translate(canvasSurface, -Image_getWidth(originalImage) / 2, -Image_getHeight(originalImage) / 2);
            CanvasSurface_clear(canvasSurface);
            CanvasSurface_translate(canvasSurface, Image_getWidth(originalImage) / 2, Image_getHeight(originalImage) / 2);
            return ImageRotationUtil_rotateImageCanvasSurface(this, originalImage, image, canvasSurface, totalAngle);
        } else {
            return nullptr;
        }
}


Image* ImageRotationUtil_rotateImageCanvasSurface(ImageRotationUtil* this, Image* originalImage, Image* image, CanvasSurface* canvasSurface, int32_t totalAngle) {
        if (Image_isMutable(image)) {
            CanvasSurface_rotate(canvasSurface, ((float) ((totalAngle) * 3.14159265358979323846 / 180.0)));
            return image;
        } else {
            return nullptr;
        }
}


void ImageRotationUtil_drawImage(ImageRotationUtil* this, Image* originalImage, Image* image, CanvasSurface* canvasSurface) {
        Image* originalPlayNImage = nullptr;
        if (Image_isMutable(originalImage)) {
            PlaynMutableImage* originalHTMLImage = ((PlaynMutableImage*) originalImage);
            originalPlayNImage = ((Image*) PlaynImmutableImage_getImage(originalHTMLImage));
        } else {
            PlaynImmutableImage* originalHTMLImage = ((PlaynImmutableImage*) originalImage);
            originalPlayNImage = ((Image*) PlaynImmutableImage_getImage(originalHTMLImage));
        }
        CanvasSurface_drawImage(canvasSurface, originalPlayNImage, -Image_getWidth(originalImage) / 2, -Image_getHeight(originalImage) / 2);
}


// throws Exception
Image* ImageRotationUtil_createRotatedImage(ImageRotationUtil* this, Image* originalImage, int32_t rotationInDegrees) {
        Image* image = ImageCreationUtil_createImageWH(ImageCreationUtil_getInstance(), Image_getWidth(originalImage), Image_getHeight(originalImage));
        Image* rotatedImage = ImageRotationUtil_rotateImage(this, originalImage, image, rotationInDegrees);
        if (rotatedImage == nullptr) {
            java_throw(java_exception_new("Exception", "Not Mutable"));
        }
        return rotatedImage;
}

