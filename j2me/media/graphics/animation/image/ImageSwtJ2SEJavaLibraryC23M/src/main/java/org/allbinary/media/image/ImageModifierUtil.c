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
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/image/opengles/ModifierOpenGLESImageProcessor.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/eclipse/swt/graphics/ImageData.h"
#include "org/microemu/device/swt/SwtImmutableImage.h"
#include "org/microemu/device/swt/SwtMutableImage.h"

typedef struct ImageModifierUtil ImageModifierUtil;
struct ImageModifierUtil {
    LogUtil* logUtil;
    ImageCopyUtil* imageCopyUtil;
    Features* features;
};

static ImageModifierUtil* ImageModifierUtil_instance;

ImageModifierUtil* ImageModifierUtil_new(void);
ImageModifierUtil* ImageModifierUtil_getInstanceOrCreate(void);
void ImageModifierUtil_setBasicColorP(ImageModifierUtil* this, BasicColor* basicColor);
void ImageModifierUtil_setColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);
void ImageModifierUtil_changeColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);
void ImageModifierUtil_setAlpha(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, int32_t alphaInt);
void ImageModifierUtil_setAlphaSWT(ImageModifierUtil* this, Image* image, int32_t alphaInt);
Image** ImageModifierUtil_getImageArray(ImageModifierUtil* this, Image** originalImageArray);
void ImageModifierUtil_handleImage(ImageModifierUtil* this, Image** imageArray, int32_t index, Image* image);
void ImageModifierUtil_reset(ImageModifierUtil* this);

// Static fields with runtime initializers: call this once at startup
void ImageModifierUtil_staticInit(void) {
    ImageModifierUtil_instance = ImageModifierUtil_new();
}

static void ImageModifierUtil_initFields(ImageModifierUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->imageCopyUtil = ImageCopyUtil_getInstance();
    this->features = Features_getInstance();
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
        Image* newBufferedImage = nullptr;
        if (Image_isMutable(image)) {
            SwtMutableImage* swtImage = ((SwtMutableImage*) image);
            newBufferedImage = ((Image*) SwtImmutableImage_getImage(swtImage));
        } else {
            SwtImmutableImage* swtImage = ((SwtImmutableImage*) image);
            newBufferedImage = ((Image*) SwtImmutableImage_getImage(swtImage));
        }
        int16_t r = basicColor->red;
        int16_t g = basicColor->green;
        int16_t b = basicColor->blue;
        int32_t width = Image_getWidth(image);
        int32_t height = Image_getHeight(image);
        ImageData* imageData = Image_getImageData(newBufferedImage);
        if (imageData->depth == 24) {
            int32_t rx = 0;
            int32_t gx = 0;
            int32_t bx = 0;
            int32_t index3 = 0;
            for (int32_t index = 0; index < width; index++) {
                for (int32_t index2 = 0; index2 < height; index2++) {
                    index3 = (index2 * imageData->bytesPerLine) + (index * 4);
                    rx = (imageData->data[index3] & 0xFF) << 16;
                    gx = (imageData->data[index3 + 1] & 0xFF) << 8;
                    bx = (imageData->data[index3 + 2] & 0xFF);
                    if (rx != 0 || gx != 0 || bx != 0) {
                        imageData->data[index3] = ((int8_t) r);
                        imageData->data[index3 + 1] = ((int8_t) g);
                        imageData->data[index3 + 2] = ((int8_t) b);
                    }
                }
            }
        }
}


void ImageModifierUtil_changeColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor) {
        if (Features_isFeature(this->features, OpenGLFeatureFactory_getInstance()->OPENGL)) {
            if (Image_getType(image) >= OpenGLESImage_TYPE) {
                OpenGLESImage* openGLESImage = (((OpenGLESImage*) image));
                openGLESImage->imageProcessor = ModifierOpenGLESImageProcessor_getInstance();
                openGLESImage->openGLESImageProperties->redf = BasicColor_getRedComponent(basicColor);
                openGLESImage->openGLESImageProperties->greenf = BasicColor_getGreenComponent(basicColor);
                openGLESImage->openGLESImageProperties->bluef = BasicColor_getBlueComponent(basicColor);
                return;
            }
        }
        Image* newBufferedImage = nullptr;
        if (Image_isMutable(image)) {
            SwtMutableImage* swtImage = ((SwtMutableImage*) image);
            newBufferedImage = ((Image*) SwtImmutableImage_getImage(swtImage));
        } else {
            SwtImmutableImage* swtImage = ((SwtImmutableImage*) image);
            newBufferedImage = ((Image*) SwtImmutableImage_getImage(swtImage));
        }
        float MAX = 255.0f;
        float r = (((float) basicColor->red)) / MAX;
        float g = (((float) basicColor->green)) / MAX;
        float b = (((float) basicColor->blue)) / MAX;
        int32_t rx = 0;
        int32_t gx = 0;
        int32_t bx = 0;
        ImageData* imageData = Image_getImageData(newBufferedImage);
        if (imageData->depth == 24) {
            int32_t size = java_array_length(imageData->data);
            for (int32_t index = 0; index < size; index += 4) {
                rx = (imageData->data[index] & 0xFF) << 16;
                gx = (imageData->data[index + 1] & 0xFF) << 8;
                bx = (imageData->data[index + 2] & 0xFF);
                rx = ((int32_t) (rx * r));
                gx = ((int32_t) (gx * g));
                bx = ((int32_t) (bx * b));
                imageData->data[index] = ((int8_t) rx);
                imageData->data[index + 1] = ((int8_t) gx);
                imageData->data[index + 2] = ((int8_t) bx);
            }
        }
}


void ImageModifierUtil_setAlpha(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, int32_t alphaInt) {
        if (Features_isFeature(this->features, OpenGLFeatureFactory_getInstance()->OPENGL)) {
            if (Image_getType(image) >= OpenGLESImage_TYPE) {
                OpenGLESImage* openGLESImage = (((OpenGLESImage*) image));
                openGLESImage->imageProcessor = ModifierOpenGLESImageProcessor_getInstance();
                openGLESImage->openGLESImageProperties->alphaf = (((float) alphaInt)) / 255.0f;
                return;
            }
        }
        ImageModifierUtil_setAlphaSWT(this, image, alphaInt);
}


void ImageModifierUtil_setAlphaSWT(ImageModifierUtil* this, Image* image, int32_t alphaInt) {
        int8_t alpha = ((int8_t) alphaInt);
        Image* newBufferedImage = nullptr;
        if (Image_isMutable(image)) {
            SwtMutableImage* swtImage = ((SwtMutableImage*) image);
            newBufferedImage = ((Image*) SwtImmutableImage_getImage(swtImage));
        } else {
            SwtImmutableImage* swtImage = ((SwtImmutableImage*) image);
            newBufferedImage = ((Image*) SwtImmutableImage_getImage(swtImage));
        }
        Image_getImageData(newBufferedImage)->alpha = alpha;
}


Image** ImageModifierUtil_getImageArray(ImageModifierUtil* this, Image** originalImageArray) {
        JAVA_TRY {
            Image** newImageArray = ((Image**) java_array_new(sizeof(Image*), java_array_length(originalImageArray)));
            int32_t size = java_array_length(newImageArray);
            Image* originalImage = nullptr;
            for (int32_t index = 0; index < size; index++) {
                originalImage = originalImageArray[index];
                Image* image = ImageCopyUtil_createImage(this->imageCopyUtil, originalImage);
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

