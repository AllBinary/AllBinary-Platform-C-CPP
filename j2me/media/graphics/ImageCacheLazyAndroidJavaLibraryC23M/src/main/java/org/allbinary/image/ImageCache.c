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
// package org.allbinary.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/InputStream.h"
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/game/gd/resource/GDResources.h"
#include "org/allbinary/logic/ABSystemWrapper.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/system/Memory.h"
#include "org/allbinary/image/ImageCacheBase.h"

typedef struct ImageCache ImageCache;
struct ImageCache {
    ImageCacheBase base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ABSystemWrapper* systemWrapper;
    TsUtil* tsUtil;
};

ImageCache* ImageCache_NULL_IMAGE_CACHE;

ImageCache* ImageCache_new(void);

void ImageCache_init(ImageCache* this);
Image* ImageCache_get(ImageCache* this, const char* caller, int32_t width, int32_t height);
Image* ImageCache_get(ImageCache* this, Any* key);
int32_t ImageCache_getIndex(ImageCache* this, Any* key);
Image* ImageCache_createImage(ImageCache* this, Any* key, InputStream* inputStream);
bool ImageCache_isLazy(ImageCache* this);

// Static fields with runtime initializers: call this once at startup
void ImageCache_staticInit(void) {
    ImageCache_NULL_IMAGE_CACHE = ImageCache_new();
}

static void ImageCache_initFields(ImageCache* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->systemWrapper = ABSystemWrapper_getInstance();
    this->tsUtil = TsUtil_getInstance();
}


void ImageCache_init(ImageCache* this) {
    ImageCacheBase_init(&this->base);
    ImageCache_initFields(this);
}

ImageCache* ImageCache_new(void) {
    ImageCache* this = calloc(1, sizeof(ImageCache));
    ImageCache_init(this);
    return this;
}


// throws Exception
Image* ImageCache_get(ImageCache* this, const char* caller, int32_t width, int32_t height) {
        int32_t foundIndex = ImageCache_getIndexWH(this, width, height);
        Image* image = ImageCache_getFromAvailable(this, foundIndex, width, height);
        if (image == NullImage_NULL_IMAGE) {
            this->volume += width * height;
            if (this->volume > 32000) {
                TsUtil_gc(this->tsUtil);
                this->volume = 0;
            }
            image = ImageCache_createImage(this, caller, width, height);
            if (foundIndex == -1) {
                foundIndex = this->nextIndex;
                this->widths[this->nextIndex] = width;
                this->heights[this->nextIndex] = height;
                this->nextIndex++;
            }
            JAVA_CALL(this->listOfList[foundIndex], add, image);
        }
        return image;
}


// throws Exception
// Java overloaded method: C needs a different name
Image* ImageCache_get(ImageCache* this, Any* key) {
        ResourceUtil* resourceUtil = ResourceUtil_getInstance();
        int32_t resourceId = ResourceUtil_getResourceId(resourceUtil, ((const char*) key));
        Image* image = ImageCache_getImage(this, resourceId);
        if (image == NullImage_NULL_IMAGE) {
            InputStream* inputStream = nullptr;
            JAVA_TRY {
                LogUtil_putF(this->logUtil, Memory_getInfo(), this, this->commonStrings->GET);
                image = ImageCache_createImage(this, key, inputStream);
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->logUtil, "Exception: Trying Again After GC", this, this->commonStrings->GET, e);
                LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "InputStream: "), append, InputStream_toString(inputStream)), toString), this, this->commonStrings->GET);
                TsUtil_gc(this->tsUtil);
                TsUtil_gc(this->tsUtil);
                LogUtil_putF(this->logUtil, Memory_getInfo(), this, this->commonStrings->GET);
                java_sleep(100);
                image = ImageCache_createImage(this, key, inputStream);
            } JAVA_END_TRY;
            JAVA_CALL(this->hashtable, put, resourceId, image);
        }
        return image;
}


int32_t ImageCache_getIndex(ImageCache* this, Any* key) {
        GDResources* gdResources = GDResources_getInstance();
        const char** resourceStringArray = gdResources->resourceStringArray;
        int32_t size = java_array_length(resourceStringArray);
        for (int32_t index = 0; index < size; index++) {
            if (resourceStringArray[index] == key) {
                return index;
            }
        }
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "unable to find key: "), append, StringUtil_toString(StringUtil_getInstance(), key)), toString), this, this->commonStrings->RUN);
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
Image* ImageCache_createImage(ImageCache* this, Any* key, InputStream* inputStream) {
        return Image_createImageLater(((const char*) key), -1, -1);
}


bool ImageCache_isLazy(ImageCache* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

