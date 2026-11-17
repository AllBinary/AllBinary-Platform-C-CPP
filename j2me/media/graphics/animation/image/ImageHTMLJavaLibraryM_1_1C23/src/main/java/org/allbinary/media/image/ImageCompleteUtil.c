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
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/microemu/device/playn/PlaynImage.h"

typedef struct ImageCompleteUtil ImageCompleteUtil;
struct ImageCompleteUtil {
    const char* ISREADY;
    const char* COMPLETE;
};

static ImageCompleteUtil* ImageCompleteUtil_instance;

ImageCompleteUtil* ImageCompleteUtil_new(void);
ImageCompleteUtil* ImageCompleteUtil_getInstance(void);
void ImageCompleteUtil_waitForImage(ImageCompleteUtil* this, Image* image, const char* name);
bool ImageCompleteUtil_isReady(ImageCompleteUtil* this, Image* image, const char* name, TimeDelayHelper* timeDelayHelper);
void ImageCompleteUtil_handleTimeout(ImageCompleteUtil* this, const char* name);
void ImageCompleteUtil_waitForAll(ImageCompleteUtil* this);

// Static fields with runtime initializers: call this once at startup
void ImageCompleteUtil_staticInit(void) {
    ImageCompleteUtil_instance = ImageCompleteUtil_new();
}

static void ImageCompleteUtil_initFields(ImageCompleteUtil* this) {
    this->ISREADY = "isReady";
    this->COMPLETE = "Image loading complete for: ";
}

void ImageCompleteUtil_init(ImageCompleteUtil* this) {
    ImageCompleteUtil_initFields(this);
}

ImageCompleteUtil* ImageCompleteUtil_new(void) {
    ImageCompleteUtil* this = calloc(1, sizeof(ImageCompleteUtil));
    ImageCompleteUtil_init(this);
    return this;
}


ImageCompleteUtil* ImageCompleteUtil_getInstance(void) {
        return ImageCompleteUtil_instance;
}


// throws Exception
void ImageCompleteUtil_waitForImage(ImageCompleteUtil* this, Image* image, const char* name) {
}


// throws Exception
bool ImageCompleteUtil_isReady(ImageCompleteUtil* this, Image* image, const char* name, TimeDelayHelper* timeDelayHelper) {
        PlaynImage* playnImage = ((PlaynImage*) image);
        Image* playnCoreImage = ((Image*) PlaynImage_getImage(playnImage));
        if (!Image_isReady(playnCoreImage) || Image_width(playnCoreImage) + Image_height(playnCoreImage) <= 0) {
            ImageCompleteUtil_handleTimeout(this, name);
            return false;
        }
        if (!Image_isReady(image)) {
            Image_init(image, Image_getImage(image));
            if (!Image_isReady(image)) {
                PreLogUtil_put(java_concat("Waiting for Not Ready Image: ", Image_getName(image)), this, this->ISREADY);
            }
        }
        CommonStrings* commonStrings = CommonStrings_getInstance();
        PreLogUtil_put(java_concat(this->COMPLETE, Image_getName(image)), this, commonStrings->SUCCESS);
        return true;
}


// throws Exception
void ImageCompleteUtil_handleTimeout(ImageCompleteUtil* this, const char* name) {
}


// throws Exception
void ImageCompleteUtil_waitForAll(ImageCompleteUtil* this) {
}

