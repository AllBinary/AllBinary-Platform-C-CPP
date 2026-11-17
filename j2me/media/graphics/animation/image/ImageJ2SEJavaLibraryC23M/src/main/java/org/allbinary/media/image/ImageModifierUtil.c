/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// #include "java/awt/image/ColorModel.h"
// #include "java/awt/image/WritableRaster.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ImageModifierUtil ImageModifierUtil;
struct ImageModifierUtil {
    ImageUtil* imageUtil;
    int32_t* colorArray;
};

static ImageModifierUtil* ImageModifierUtil_instance;

ImageModifierUtil* ImageModifierUtil_new(void);
ImageModifierUtil* ImageModifierUtil_getInstanceOrCreate(void);
void ImageModifierUtil_setBasicColorP(ImageModifierUtil* this, BasicColor* basicColor);
void ImageModifierUtil_setColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);
void ImageModifierUtil_changeColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);
void ImageModifierUtil_setAlpha(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, int32_t alphaInt);
Image** ImageModifierUtil_getImageArray(ImageModifierUtil* this, Image** originalImageArray);
void ImageModifierUtil_handleImage(ImageModifierUtil* this, Image** imageArray, int32_t index, Image* image);
void ImageModifierUtil_reset(ImageModifierUtil* this);

// Static fields with runtime initializers: call this once at startup
void ImageModifierUtil_staticInit(void) {
    ImageModifierUtil_instance = ImageModifierUtil_new();
}

static void ImageModifierUtil_initFields(ImageModifierUtil* this) {
    this->imageUtil = ImageUtil_getInstance();
    this->colorArray = ((int32_t*) java_array_new(sizeof(int32_t), 1));
}

void ImageModifierUtil_init(ImageModifierUtil* this) {
    ImageModifierUtil_initFields(this);
}

ImageModifierUtil* ImageModifierUtil_new(void) {
    ImageModifierUtil* this = calloc(1, sizeof(ImageModifierUtil));
    ImageModifierUtil_init(this);
    return this;
}


ImageModifierUtil* ImageModifierUtil_getInstanceOrCreate(void) {
        return ImageModifierUtil_instance;
}


void ImageModifierUtil_setBasicColorP(ImageModifierUtil* this, BasicColor* basicColor) {
}


void ImageModifierUtil_setColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor) {
        BufferedImage* newBufferedImage = ImageUtil_getBufferedImage(this->imageUtil, image);
        int16_t r = basicColor->red;
        int16_t g = basicColor->green;
        int16_t b = basicColor->blue;
        int32_t width = Image_getWidth(image);
        int32_t height = Image_getHeight(image);
        ColorModel* colorModel = nullptr;
        Any* dataElements = nullptr;
        int32_t ax = 0;
        int32_t rx = 0;
        int32_t gx = 0;
        int32_t bx = 0;
        for (int32_t index = 0; index < width; index++) {
            for (int32_t index2 = 0; index2 < height; index2++) {
                colorModel = BufferedImage_getColorModel(newBufferedImage);
                dataElements = JAVA_CALL(BufferedImage_getRaster(newBufferedImage), getDataElements, index, index2, nullptr);
                ax = ColorModel_getAlpha(colorModel, dataElements);
                rx = ColorModel_getRed(colorModel, dataElements);
                gx = ColorModel_getGreen(colorModel, dataElements);
                bx = ColorModel_getBlue(colorModel, dataElements);
                if (rx != 0 || gx != 0 || bx != 0) {
                    BufferedImage_setRGB(newBufferedImage, index, index2, (ax << 24) | (r << 16) | (g << 8) | ((int32_t) (b)));
                }
            }
        }
}


void ImageModifierUtil_changeColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor) {
        BufferedImage* newBufferedImage = ImageUtil_getBufferedImage(this->imageUtil, image);
        float MAX = 255.0f;
        float r = (((float) basicColor->red)) / MAX;
        float g = (((float) basicColor->green)) / MAX;
        float b = (((float) basicColor->blue)) / MAX;
        int32_t width = Image_getWidth(image);
        int32_t height = Image_getHeight(image);
        ColorModel* colorModel = nullptr;
        Any* dataElements = nullptr;
        int32_t ax = 0;
        int32_t rx = 0;
        int32_t gx = 0;
        int32_t bx = 0;
        for (int32_t index = 0; index < width; index++) {
            for (int32_t index2 = 0; index2 < height; index2++) {
                colorModel = BufferedImage_getColorModel(newBufferedImage);
                dataElements = JAVA_CALL(BufferedImage_getRaster(newBufferedImage), getDataElements, index, index2, nullptr);
                ax = ColorModel_getAlpha(colorModel, dataElements);
                rx = ColorModel_getRed(colorModel, dataElements);
                gx = ColorModel_getGreen(colorModel, dataElements);
                bx = ColorModel_getBlue(colorModel, dataElements);
                rx = ((int32_t) (rx * r));
                gx = ((int32_t) (gx * g));
                bx = ((int32_t) (bx * b));
                BufferedImage_setRGB(newBufferedImage, index, index2, (ax << 24) | (rx << 16) | (gx << 8) | (bx));
            }
        }
}


void ImageModifierUtil_setAlpha(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, int32_t alphaInt) {
        int8_t alpha = ((int8_t) alphaInt);
        BufferedImage* newBufferedImage = ImageUtil_getBufferedImage(this->imageUtil, image);
        int32_t width = Image_getWidth(image);
        int32_t height = Image_getHeight(image);
        WritableRaster* raster = BufferedImage_getAlphaRaster(newBufferedImage);
        for (int32_t index = 0; index < width; index++) {
            for (int32_t index2 = 0; index2 < height; index2++) {
                WritableRaster_getPixel(raster, index, index2, this->colorArray);
                this->colorArray[0] = ((int32_t) alpha) & this->colorArray[0];
                WritableRaster_setPixel(raster, index, index2, this->colorArray);
            }
        }
}


Image** ImageModifierUtil_getImageArray(ImageModifierUtil* this, Image** originalImageArray) {
        JAVA_TRY {
            Image** newImageArray = ((Image**) java_array_new(sizeof(Image*), java_array_length(originalImageArray)));
            int32_t size = java_array_length(newImageArray);
            Image* originalImage = nullptr;
            for (int32_t index = 0; index < size; index++) {
                originalImage = originalImageArray[index];
                Image* image = ImageCreationUtil_createImageWH(ImageCreationUtil_getInstance(), Image_getWidth(originalImage), Image_getHeight(originalImage));
                JAVA_CALL(Image_getGraphics(image), drawImage, originalImage, 0, 0, Anchor_TOP_LEFT);
                newImageArray[index] = image;
            }
            return newImageArray;
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_putOE(commonStrings->EXCEPTION, this, "getImageArray", e);
            return originalImageArray;
        } JAVA_END_TRY;
}


void ImageModifierUtil_handleImage(ImageModifierUtil* this, Image** imageArray, int32_t index, Image* image) {
}


void ImageModifierUtil_reset(ImageModifierUtil* this) {
}

