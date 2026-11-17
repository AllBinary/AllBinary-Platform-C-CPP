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
#include "org/allbinary/image/GameFeatureImageCacheFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/HashtableUtil.h"
#include "org/microemu/device/playn/PlaynImage.h"
#include "org/allbinary/media/image/ImageCompleteUtil.h"

typedef struct ImageWaitCompleteUtil ImageWaitCompleteUtil;
struct ImageWaitCompleteUtil {
    ImageCompleteUtil base;
    LogUtil* logUtil;
    TimeDelayHelper* timeDelayHelper;
    TimeDelayHelper* allTimeDelayHelper;
};


ImageWaitCompleteUtil* ImageWaitCompleteUtil_new(void);

void ImageWaitCompleteUtil_init(ImageWaitCompleteUtil* this);
void ImageWaitCompleteUtil_waitForImage(ImageWaitCompleteUtil* this, Image* image, const char* name);
void ImageWaitCompleteUtil_handleTimeout(ImageWaitCompleteUtil* this, const char* name);
static void ImageWaitCompleteUtil_waitForATime(ImageWaitCompleteUtil* this, Image* image, const char* name, TimeDelayHelper* timeDelayHelper);
void ImageWaitCompleteUtil_waitForAll(ImageWaitCompleteUtil* this);

static void ImageWaitCompleteUtil_initFields(ImageWaitCompleteUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->timeDelayHelper = TimeDelayHelper_new(18000);
    this->allTimeDelayHelper = TimeDelayHelper_new(120000);
}


void ImageWaitCompleteUtil_init(ImageWaitCompleteUtil* this) {
    ImageCompleteUtil_init(&this->base);
    ImageWaitCompleteUtil_initFields(this);
}

ImageWaitCompleteUtil* ImageWaitCompleteUtil_new(void) {
    ImageWaitCompleteUtil* this = calloc(1, sizeof(ImageWaitCompleteUtil));
    ImageWaitCompleteUtil_init(this);
    return this;
}


// throws Exception
void ImageWaitCompleteUtil_waitForImage(ImageWaitCompleteUtil* this, Image* image, const char* name) {
        TimeDelayHelper_setStartTimeTNT(this->timeDelayHelper);
        ImageWaitCompleteUtil_waitForATime(this, image, name, this->timeDelayHelper);
}


// throws Exception
void ImageWaitCompleteUtil_handleTimeout(ImageWaitCompleteUtil* this, const char* name) {
        if (TimeDelayHelper_isTimeTNT(this->timeDelayHelper)) {
            java_throw(java_exception_new("Exception", java_concat("isReady: Timeout Waiting or GameHtmlHasLoadedResourcesProcessor does not have this Image: ", name)));
        }
}


// throws Exception
static void ImageWaitCompleteUtil_waitForATime(ImageWaitCompleteUtil* this, Image* image, const char* name, TimeDelayHelper* timeDelayHelper) {
        PlaynImage* playnImage = ((PlaynImage*) image);
        Image* playnCoreImage = ((Image*) PlaynImage_getImage(playnImage));
        while (!Image_isReady(playnCoreImage) || Image_width(playnCoreImage) + Image_height(playnCoreImage) <= 0) {
            if (TimeDelayHelper_isTimeTNT(timeDelayHelper)) {
                java_throw(java_exception_new("Exception", java_concat("waitFor: Timeout Waiting or GameHtmlHasLoadedResourcesProcessor does not have this Image: ", name)));
            }
        }
        if (!Image_isReady(image)) {
            Image_init(image, Image_getImage(image));
        }
}


// throws Exception
void ImageWaitCompleteUtil_waitForAll(ImageWaitCompleteUtil* this) {
        TimeDelayHelper_setStartTimeTNT(this->allTimeDelayHelper);
        ABHashtable* hashtable = GameFeatureImageCacheFactory_getHashtableP(GameFeatureImageCacheFactory_getInstance());
        Any** objectArray = HashtableUtil_getKeysAsArray(HashtableUtil_getInstance(), hashtable);
        int32_t size = java_array_length(objectArray);
        PreLogUtil_put(java_concat("Image Total: ", java_string_of(size)), this, "waitForAll");
        for (int32_t index = 0; index < size; index++) {
            ImageWaitCompleteUtil_waitForATime(this, ((Image*) ABHashtable_get(hashtable, objectArray[index])), ((const char*) objectArray[index]), this->allTimeDelayHelper);
        }
}

