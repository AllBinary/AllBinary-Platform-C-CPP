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
#include "org/eclipse/swt/SWT.h"
#include "org/eclipse/swt/widgets/Canvas.h"
#include "org/eclipse/swt/widgets/Composite.h"
#include "org/eclipse/swt/graphics/GC.h"
#include "org/eclipse/swt/graphics/ImageData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/eclipse/swt/events/PaintEvent.h"
#include "org/eclipse/swt/events/PaintListener.h"
#include "org/eclipse/swt/graphics/Transform.h"
#include "org/eclipse/swt/widgets/Display.h"
#include "org/microemu/app/BareMain.h"

typedef struct ImageUtil ImageUtil;
struct ImageUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CommonSeps* commonSeps;
    const char* IIOIMAGE_POOL_NAME;
    const char* CREATE_BUFFERED_IMAGE;
};

static ImageUtil* ImageUtil_instance;

ImageUtil* ImageUtil_new(void);
ImageUtil* ImageUtil_getInstance(void);

void ImageUtil_init(ImageUtil* this);
Image* ImageUtil_create(ImageUtil* this, int32_t width, int32_t height);
Image** ImageUtil_createBufferedImage(ImageUtil* this, Image** bufferedImageArray, int32_t percent, bool scale);
Image** ImageUtil_createBufferedImage2(ImageUtil* this, Image** bufferedImageArray, float percent, bool scale);
Image** ImageUtil_createBufferedImage3(ImageUtil* this, Image** bufferedImageArray, int32_t width, int32_t height, bool scale);
Image* ImageUtil_createBufferedImage4(ImageUtil* this, Image* bufferedImage, int32_t newWidth, int32_t newHeight);
Image* ImageUtil_createBufferedImage5(ImageUtil* this, Image* bufferedImage, int32_t newWidth, int32_t newHeight, bool scale);
Image* ImageUtil_createBufferedImage6(ImageUtil* this, Image* bufferedImage, int32_t newWidth, int32_t newHeight, bool scale, bool allowTranslate);
Canvas* ImageUtil_drawTransformedImage(ImageUtil* this, Image* image, Composite* parent, int32_t dx, int32_t dy, int32_t width, int32_t height);
const char* ImageUtil_toString(ImageUtil* this, Image* bufferedImage);

// Static fields with runtime initializers: call this once at startup
void ImageUtil_staticInit(void) {
    ImageUtil_instance = ImageUtil_new();
}

static void ImageUtil_initFields(ImageUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->IIOIMAGE_POOL_NAME = "IIOIMAGE_POOL_NAME";
    this->CREATE_BUFFERED_IMAGE = "createBufferedImage";
}


ImageUtil* ImageUtil_getInstance(void) {
        return ImageUtil_instance;
}


void ImageUtil_init(ImageUtil* this) {
    ImageUtil_initFields(this);
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

ImageUtil* ImageUtil_new(void) {
    ImageUtil* this = calloc(1, sizeof(ImageUtil));
    ImageUtil_init(this);
    return this;
}


Image* ImageUtil_create(ImageUtil* this, int32_t width, int32_t height) {
        Display* display = JAVA_CALL(BareMain_shell, getDisplay);
        return Image_new(display, width, height);
}


// throws Exception
Image** ImageUtil_createBufferedImage(ImageUtil* this, Image** bufferedImageArray, int32_t percent, bool scale) {
        int32_t size = java_array_length(bufferedImageArray);
        Image** scaledBufferedImageArray = ((Image**) java_array_new(sizeof(Image*), size));
        Image* bufferedImage = nullptr;
        ImageData* imageData = nullptr;
        for (int32_t index = 0; index < size; index++) {
            bufferedImage = bufferedImageArray[index];
            imageData = Image_getImageData(bufferedImage);
            int32_t newWidth = ((int32_t) (imageData->width * percent / 100));
            int32_t newHeight = ((int32_t) (imageData->height * percent / 100));
            scaledBufferedImageArray[index] = ImageUtil_createBufferedImage5(this, bufferedImage, newWidth, newHeight, scale);
        }
        return scaledBufferedImageArray;
}


// throws Exception
Image** ImageUtil_createBufferedImage2(ImageUtil* this, Image** bufferedImageArray, float percent, bool scale) {
        int32_t size = java_array_length(bufferedImageArray);
        Image** scaledBufferedImageArray = ((Image**) java_array_new(sizeof(Image*), size));
        Image* bufferedImage = nullptr;
        ImageData* imageData = nullptr;
        for (int32_t index = 0; index < size; index++) {
            bufferedImage = bufferedImageArray[index];
            imageData = Image_getImageData(bufferedImage);
            int32_t newWidth = ((int32_t) (imageData->width * percent));
            int32_t newHeight = ((int32_t) (imageData->height * percent));
            scaledBufferedImageArray[index] = ImageUtil_createBufferedImage5(this, bufferedImage, newWidth, newHeight, scale);
        }
        return scaledBufferedImageArray;
}


// throws Exception
Image** ImageUtil_createBufferedImage3(ImageUtil* this, Image** bufferedImageArray, int32_t width, int32_t height, bool scale) {
        int32_t size = java_array_length(bufferedImageArray);
        Image** scaledBufferedImageArray = ((Image**) java_array_new(sizeof(Image*), size));
        for (int32_t index = 0; index < size; index++) {
            scaledBufferedImageArray[index] = ImageUtil_createBufferedImage5(this, bufferedImageArray[index], width, height, scale);
        }
        return scaledBufferedImageArray;
}


// throws Exception
Image* ImageUtil_createBufferedImage4(ImageUtil* this, Image* bufferedImage, int32_t newWidth, int32_t newHeight) {
        return ImageUtil_createBufferedImage5(this, bufferedImage, newWidth, newHeight, true);
}


// throws Exception
Image* ImageUtil_createBufferedImage5(ImageUtil* this, Image* bufferedImage, int32_t newWidth, int32_t newHeight, bool scale) {
        return ImageUtil_createBufferedImage6(this, bufferedImage, newWidth, newHeight, scale, false);
}


// throws Exception
Image* ImageUtil_createBufferedImage6(ImageUtil* this, Image* bufferedImage, int32_t newWidth, int32_t newHeight, bool scale, bool allowTranslate) {
        ImageData* imageData = Image_getImageData(bufferedImage);
        float width = imageData->width;
        float height = imageData->height;
        float d_newWidth = ((float) newWidth);
        float d_newHeight = ((float) newHeight);
        float widthRatio = d_newWidth / width;
        float heightRatio = d_newHeight / height;
        float ratioX = 1.0f;
        float ratioY = 1.0f;
        if (scale) {
            ratioX = widthRatio;
            ratioY = heightRatio;
        }
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_appendfloat(StringMaker_new(), width), append, this->commonSeps->FORWARD_SLASH), appendfloat, height), append, this->commonSeps->COLON), appendint, newWidth), append, this->commonSeps->FORWARD_SLASH), appendint, newHeight), append, this->commonSeps->COLON), appendfloat, widthRatio), append, this->commonSeps->FORWARD_SLASH), appendfloat, heightRatio), toString), this, this->CREATE_BUFFERED_IMAGE);
        float dx = 0.0f;
        float dy = 0.0f;
        if (!scale && allowTranslate) {
            dx = (((float) newWidth) - width) / 2.0f;
            dy = (((float) newHeight) - height) / 2.0f;
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Translate dx: "), appendfloat, dx), append, " dy: "), appendfloat, dy), toString), this, this->CREATE_BUFFERED_IMAGE);
        }
        Image* newBufferedImage = Image_new(JAVA_CALL(BareMain_shell, getDisplay), newWidth, newHeight);
        GC* gc = GC_new(newBufferedImage);
        Transform* affineTransform = Transform_new(GC_getDevice(gc));
        Transform_scale(affineTransform, ratioX, ratioY);
        Transform_translate(affineTransform, dx, dy);
        GC_setTransform(gc, affineTransform);
        GC_setAntialias(gc, SWT_ON);
        GC_setInterpolation(gc, SWT_HIGH);
        GC_drawImage(gc, bufferedImage, 0, 0, Image_getBounds(bufferedImage)->width, Image_getBounds(bufferedImage)->height, 0, 0, newWidth, newHeight);
        GC_dispose(gc);
        return newBufferedImage;
}


Canvas* ImageUtil_drawTransformedImage(ImageUtil* this, Image* image, Composite* parent, int32_t dx, int32_t dy, int32_t width, int32_t height) {
        Canvas* imageCanvas = Canvas_new(parent, SWT_NONE);
        Canvas_addPaintListener(imageCanvas, PaintListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageUtil_paintControl(ImageUtil* this, PaintEvent* event) {
                GC* gc = event->gc;
                Transform* affineTransform = Transform_new(GC_getDevice(gc));
                Transform_translate(affineTransform, dx, dy);
                GC_setAntialias(gc, SWT_ON);
                GC_setInterpolation(gc, SWT_HIGH);
                GC_drawImage(gc, image, 0, 0, Image_getBounds(image)->width, Image_getBounds(image)->height, 0, 0, width, height);
        }
#endif
);
        return imageCanvas;
}


const char* ImageUtil_toString(ImageUtil* this, Image* bufferedImage) {
        CommonLabels* commonLabels = CommonLabels_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        ImageData* imageData = Image_getImageData(bufferedImage);
        StringMaker_append(stringBuffer, " org.eclipse.swt.graphics.Image: ");
        StringMaker_append(stringBuffer, commonLabels->WIDTH_LABEL);
        StringMaker_appendint(stringBuffer, ((int32_t) imageData->width));
        StringMaker_append(stringBuffer, commonLabels->HEIGHT_LABEL);
        StringMaker_appendint(stringBuffer, ((int32_t) imageData->height));
        StringMaker_append(stringBuffer, " Type: ");
        StringMaker_appendint(stringBuffer, ((int32_t) imageData->type));
        return StringMaker_toString(stringBuffer);
}

