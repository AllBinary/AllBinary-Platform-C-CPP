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
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/microemu/device/playn/PlaynImage.h"
#include "org/microemu/device/ResourceCallbackStrings.h"
#include "playn/core/Canvas.h"
#include "playn/core/CanvasImage.h"
#include "playn/core/util/Callback.h"

typedef struct ImageModifierUtil ImageModifierUtil;
struct ImageModifierUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ResourceCallbackStrings* resourceCallbackStrings;
    bool* alphaArray;
};


ImageModifierUtil* ImageModifierUtil_new(void);
ImageModifierUtil* ImageModifierUtil_getInstanceOrCreate(void);
void ImageModifierUtil_setColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);
void ImageModifierUtil_changeColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);
void ImageModifierUtil_setAlpha(ImageModifierUtil* this, Image* originalImage, Image* image, int32_t imageIndex, int32_t alpha);
void ImageModifierUtil_setAlphaF(ImageModifierUtil* this, Image* originalImage, Image* image, int32_t imageIndex, float alpha);
void ImageModifierUtil_setAlpha2(ImageModifierUtil* this, Image* originalImage, Image* image, int32_t imageIndex, float alpha);
void ImageModifierUtil_setAlpha3(ImageModifierUtil* this, Image* image, float alpha);
Image** ImageModifierUtil_getImageArray(ImageModifierUtil* this, Image** originalImageArray);
void ImageModifierUtil_handleImage(ImageModifierUtil* this, Image** imageArray, int32_t index, Image* image);
void ImageModifierUtil_copy(ImageModifierUtil* this, Image** imageArray, int32_t index, Image* image, Image* image3);
void ImageModifierUtil_reset(ImageModifierUtil* this);

static void ImageModifierUtil_initFields(ImageModifierUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->resourceCallbackStrings = ResourceCallbackStrings_getInstance();
    this->alphaArray = nullptr;
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
        return ImageModifierUtil_new();
}


void ImageModifierUtil_setColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor) {
}


void ImageModifierUtil_changeColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor) {
}


void ImageModifierUtil_setAlpha(ImageModifierUtil* this, Image* originalImage, Image* image, int32_t imageIndex, int32_t alpha) {
        float alphaF = ((float) alpha);
        float alphaFloat = alphaF / 255.0f;
        ImageModifierUtil_setAlphaF(this, originalImage, image, imageIndex, alphaFloat);
}


void ImageModifierUtil_setAlphaF(ImageModifierUtil* this, Image* originalImage, Image* image, int32_t imageIndex, float alpha) {
        if (this->alphaArray[imageIndex]) {
            this->alphaArray[imageIndex] = false;
            ImageModifierUtil_setAlpha2(this, originalImage, image, imageIndex, alpha);
        }
}


void ImageModifierUtil_setAlpha2(ImageModifierUtil* this, Image* originalImage, Image* image, int32_t imageIndex, float alpha) {
        PlaynImage* htmlImage = ((PlaynImage*) image);
        CanvasImage* canvasImage = ((CanvasImage*) PlaynImage_getImage(htmlImage));
        Image* originalPlaynImage = ((Image*) PlaynImage_getImage((((PlaynImage*) originalImage))));
        Canvas* canvas = CanvasImage_canvas(canvasImage);
        Canvas_clear(canvas);
        Canvas_setAlpha(canvas, alpha);
        Canvas_drawImage(canvas, originalPlaynImage, 0, 0);
}


void ImageModifierUtil_setAlpha3(ImageModifierUtil* this, Image* image, float alpha) {
        float alphaF = alpha;
        float alphaFloat = alphaF / 255.0f;
        PlaynImage* htmlImage = ((PlaynImage*) image);
        CanvasImage* canvasImage = ((CanvasImage*) PlaynImage_getImage(htmlImage));
        Canvas* canvas = CanvasImage_canvas(canvasImage);
        Canvas_setAlpha(canvas, alphaFloat);
}


Image** ImageModifierUtil_getImageArray(ImageModifierUtil* this, Image** originalImageArray) {
        int32_t size = java_array_length(originalImageArray);
        this->alphaArray = ((bool*) java_array_new(sizeof(bool), size));
        Image** imageArray = ((Image**) java_array_new(sizeof(Image*), size));
        for (int32_t index = 0; index < size; index++) {
            imageArray[index] = originalImageArray[index];
            ImageModifierUtil_handleImage(this, imageArray, index, originalImageArray[index]);
        }
        return imageArray;
}


void ImageModifierUtil_handleImage(ImageModifierUtil* this, Image** imageArray, int32_t index, Image* image) {
        Image* image3 = ((Image*) PlaynImage_getImage((((PlaynImage*) image))));
        if (image3 != nullptr) {
            if (Image_isReady(image3) || Image_width(image3) + Image_height(image3) <= 0 || Image_getName(image) == this->resourceCallbackStrings->FROM_DATA) {
                ImageModifierUtil_copy(this, imageArray, index, image, image3);
            } else {
                Callback* callback = Callback_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
                    

                void ImageModifierUtil_onSuccess(ImageModifierUtil* this, Any* resource) {
                        LogUtil* logUtil = LogUtil_getInstance();
                        LogUtil_putF(logUtil, java_concat(java_string_of(this->resourceCallbackStrings->DONE), Image_getName(image)), this, this->resourceCallbackStrings->HANDLE_IMAGE);
                        ImageModifierUtil_copy(this, imageArray, index, image, image3);
                }
                    

                void ImageModifierUtil_onFailure(ImageModifierUtil* this, JavaException* e) {
                        LogUtil* logUtil = LogUtil_getInstance();
                        LogUtil_putF(logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->EXCEPTION_LABEL), append, this->resourceCallbackStrings->ERROR), append, Image_getName(image)), toString), this, this->resourceCallbackStrings->HANDLE_IMAGE);
                }
#endif
;
                Image_addCallback(image3, callback);
            }
        } else {
            LogUtil_putF(this->logUtil, this->resourceCallbackStrings->NULL + Image_isMutable(image), this, this->resourceCallbackStrings->HANDLE_IMAGE);
        }
}


void ImageModifierUtil_copy(ImageModifierUtil* this, Image** imageArray, int32_t index, Image* image, Image* image3) {
        JAVA_TRY {
            Image* image2 = Image_createImage(Image_width(image3), Image_height(image3));
            Graphics* graphics = Image_getGraphics(image2);
            Graphics_drawImage(graphics, image, 0, 0, Anchor_TOP_LEFT);
            imageArray[index] = image2;
        } JAVA_CATCH(Exception, e) {
            LogUtil_putF(this->logUtil, this->commonStrings->EXCEPTION_LABEL + this->resourceCallbackStrings->DONE, this, this->resourceCallbackStrings->HANDLE_IMAGE);
        } JAVA_END_TRY;
}


void ImageModifierUtil_reset(ImageModifierUtil* this) {
        int32_t size = java_array_length(this->alphaArray);
        for (int32_t index = 0; index < size; index++) {
            this->alphaArray[index] = true;
        }
}

