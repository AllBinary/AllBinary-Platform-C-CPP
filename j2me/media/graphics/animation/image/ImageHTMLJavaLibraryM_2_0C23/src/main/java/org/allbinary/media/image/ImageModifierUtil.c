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
#include "playn/core/Callback.h"
#include "playn/core/Canvas.h"
#include "playn/core/CoreImage.h"
#include "playn/core/ImageImpl.h"
#include "playn/html/HTMLPlaynUtil.h"

typedef struct ImageModifierUtil ImageModifierUtil;
struct ImageModifierUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ResourceCallbackStrings* resourceCallbackStrings;
    HTMLPlaynUtil* playnUtil;
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
void ImageModifierUtil_copy(ImageModifierUtil* this, Image** imageArray, int32_t index, Image* image, CoreImage* image3);
void ImageModifierUtil_reset(ImageModifierUtil* this);

static void ImageModifierUtil_initFields(ImageModifierUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->resourceCallbackStrings = ResourceCallbackStrings_getInstance();
    this->playnUtil = HTMLPlaynUtil_getInstance();
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
        ImageImpl* canvasImage = ((ImageImpl*) PlaynImage_getImage(htmlImage));
        CoreImage* originalPlaynImage = ((CoreImage*) PlaynImage_getImage((((PlaynImage*) originalImage))));
        Canvas* canvas = HTMLPlaynUtil_getCanvas(this->playnUtil, canvasImage);
        Canvas_clear(canvas);
        Canvas_setAlpha(canvas, alpha);
        Canvas_draw(canvas, originalPlaynImage, 0, 0);
}


void ImageModifierUtil_setAlpha3(ImageModifierUtil* this, Image* image, float alpha) {
        float alphaF = alpha;
        float alphaFloat = alphaF / 255.0f;
        PlaynImage* htmlImage = ((PlaynImage*) image);
        ImageImpl* canvasImage = ((ImageImpl*) PlaynImage_getImage(htmlImage));
        Canvas* canvas = HTMLPlaynUtil_getCanvas(this->playnUtil, canvasImage);
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
        CoreImage* image3 = ((CoreImage*) PlaynImage_getImage((((PlaynImage*) image))));
        if (image3 != nullptr) {
            if (CoreImage_isReady(image3) || CoreImage_width(image3) + CoreImage_height(image3) <= 0 || Image_getName(image) == this->resourceCallbackStrings->FROM_DATA) {
                ImageModifierUtil_copy(this, imageArray, index, image, image3);
            } else {
                Callback* callback = ImageCopyCallback_new(this, imageArray, index, image, image3);
                CoreImage_addCallback(image3, callback);
            }
        } else {
            LogUtil_putF(this->logUtil, this->resourceCallbackStrings->NULL + Image_isMutable(image), this, this->resourceCallbackStrings->HANDLE_IMAGE);
        }
}


void ImageModifierUtil_copy(ImageModifierUtil* this, Image** imageArray, int32_t index, Image* image, CoreImage* image3) {
        JAVA_TRY {
            Image* image2 = Image_createImageWH(((int32_t) CoreImage_width(image3)), ((int32_t) CoreImage_height(image3)));
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

typedef struct ImageCopyCallback ImageCopyCallback;
struct ImageCopyCallback {
    Callback Callback_interface;
    ImageModifierUtil* imageModifierUtil;
    Image** imageArray;
    int32_t index;
    Image* image;
    CoreImage* image3;
};


ImageCopyCallback* ImageCopyCallback_new(ImageModifierUtil* imageModifierUtil, Image** imageArray, int32_t index, Image* image, CoreImage* image3);
    
    void ImageModifierUtil_init(ImageModifierUtil* this, ImageModifierUtil* imageModifierUtil, Image** imageArray, int32_t index, Image* image, CoreImage* image3);
    void ImageModifierUtil_onSuccess(ImageModifierUtil* this, Any* resource);
    void ImageModifierUtil_onFailure(ImageModifierUtil* this, JavaException* e);

static void ImageCopyCallback_initFields(ImageCopyCallback* this) {
        
        
        
        
        
}
    

    void ImageModifierUtil_init(ImageModifierUtil* this, ImageModifierUtil* imageModifierUtil, Image** imageArray, int32_t index, Image* image, CoreImage* image3) {
        ImageModifierUtil_initFields(this);
            this->imageModifierUtil = imageModifierUtil;
            this->imageArray = imageArray;
            this->index = index;
            this->image = image;
            this->image3 = image3;
    }

    ImageModifierUtil* ImageModifierUtil_new(ImageModifierUtil* imageModifierUtil, Image** imageArray, int32_t index, Image* image, CoreImage* image3) {
        ImageModifierUtil* this = calloc(1, sizeof(ImageModifierUtil));
        ImageModifierUtil_init(this, imageModifierUtil, imageArray, index, image, image3);
        return this;
    }
    

    void ImageModifierUtil_onSuccess(ImageModifierUtil* this, Any* resource) {
            LogUtil* logUtil = LogUtil_getInstance();
            ResourceCallbackStrings* resourceCallbackStrings = this->imageModifierUtil->resourceCallbackStrings;
            LogUtil_putF(logUtil, java_concat(java_string_of(resourceCallbackStrings->DONE), Image_getName(this->image)), this, resourceCallbackStrings->HANDLE_IMAGE);
            ImageModifierUtil_copy(this->imageModifierUtil, this->imageArray, this->index, this->image, this->image3);
    }
    

    void ImageModifierUtil_onFailure(ImageModifierUtil* this, JavaException* e) {
            LogUtil* logUtil = LogUtil_getInstance();
            ResourceCallbackStrings* resourceCallbackStrings = this->imageModifierUtil->resourceCallbackStrings;
            LogUtil_put(logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->imageModifierUtil->commonStrings->EXCEPTION_LABEL), append, resourceCallbackStrings->ERROR), append, Image_getName(this->image)), toString), this, resourceCallbackStrings->HANDLE_IMAGE, e);
    }

