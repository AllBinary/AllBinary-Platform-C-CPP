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
#include "org/allbinary/image/GameFeatureImageCacheFactory.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/HashtableUtil.h"
#include "org/microemu/device/playn/PlaynImage.h"

typedef struct ImageCompleteUtil ImageCompleteUtil;
struct ImageCompleteUtil {
    TimeDelayHelper* timeDelayHelper;
    TimeDelayHelper* allTimeDelayHelper;
};

static ImageCompleteUtil* ImageCompleteUtil_instance;

ImageCompleteUtil* ImageCompleteUtil_new(void);
ImageCompleteUtil* ImageCompleteUtil_getInstance(void);
void ImageCompleteUtil_waitForImage(ImageCompleteUtil* this, Image* image, const char* name);
bool ImageCompleteUtil_isReady(ImageCompleteUtil* this, Image* image, const char* name, TimeDelayHelper* timeDelayHelper);
static void ImageCompleteUtil_waitForATime(ImageCompleteUtil* this, Image* image, const char* name, TimeDelayHelper* timeDelayHelper);
void ImageCompleteUtil_waitForAll(ImageCompleteUtil* this);

// Static fields with runtime initializers: call this once at startup
void ImageCompleteUtil_staticInit(void) {
    ImageCompleteUtil_instance = ImageCompleteUtil_new();
}

static void ImageCompleteUtil_initFields(ImageCompleteUtil* this) {
    this->timeDelayHelper = TimeDelayHelper_new(18000);
    this->allTimeDelayHelper = TimeDelayHelper_new(120000);
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
        TimeDelayHelper_setStartTime(this->timeDelayHelper);
        ImageCompleteUtil_waitForATime(this, image, name, this->timeDelayHelper);
}


// throws Exception
bool ImageCompleteUtil_isReady(ImageCompleteUtil* this, Image* image, const char* name, TimeDelayHelper* timeDelayHelper) {
        PlaynImage* playnImage = ((PlaynImage*) image);
        if (!JAVA_CALL(PlaynImage_getImage(playnImage), isReady) && JAVA_CALL(PlaynImage_getImage(playnImage), width) + JAVA_CALL(PlaynImage_getImage(playnImage), height) == 0) {
            if (TimeDelayHelper_isTime(timeDelayHelper)) {
                java_throw(java_exception_new("Exception", java_concat("isReady: Timeout Waiting or GameHtmlHasLoadedResourcesProcessor does not have this Image: ", name)));
            }
            return false;
        }
        return true;
}


// throws Exception
static void ImageCompleteUtil_waitForATime(ImageCompleteUtil* this, Image* image, const char* name, TimeDelayHelper* timeDelayHelper) {
        PlaynImage* playnImage = ((PlaynImage*) image);
        while (!JAVA_CALL(PlaynImage_getImage(playnImage), isReady) && JAVA_CALL(PlaynImage_getImage(playnImage), width) + JAVA_CALL(PlaynImage_getImage(playnImage), height) == 0) {
            if (TimeDelayHelper_isTime(timeDelayHelper)) {
                java_throw(java_exception_new("Exception", java_concat("waitFor: Timeout Waiting or GameHtmlHasLoadedResourcesProcessor does not have this Image: ", name)));
            }
        }
}


// throws Exception
void ImageCompleteUtil_waitForAll(ImageCompleteUtil* this) {
        TimeDelayHelper_setStartTime(this->allTimeDelayHelper);
        Hashtable* hashtable = GameFeatureImageCacheFactory_getHashtable(GameFeatureImageCacheFactory_getInstance());
        Any** objectArray = HashtableUtil_getKeysAsArray(HashtableUtil_getInstance(), hashtable);
        int32_t size = java_array_length(objectArray);
        PreLogUtil_put(java_concat("Total: ", java_string_of(size)), this, "waitForAll");
        for (int32_t index = 0; index < size; index++) {
            ImageCompleteUtil_waitForATime(this, ((Image*) Hashtable_get(hashtable, objectArray[index])), ((const char*) objectArray[index]), this->allTimeDelayHelper);
        }
}

