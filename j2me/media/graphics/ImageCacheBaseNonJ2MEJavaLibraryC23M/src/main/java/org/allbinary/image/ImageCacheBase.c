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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct ImageCacheBase ImageCacheBase;
struct ImageCacheBase {
    LogUtil* logUtil;
    ImageFactory* imageFactory;
    ABHashtable* hashtable;
    int32_t SIZE;
    int32_t* widths;
    int32_t* heights;
    BasicArrayList** listOfList;
    BasicArrayList** availableListOfList;
    int32_t volume;
    int32_t nextIndex;
};


ImageCacheBase* ImageCacheBase_new(void);

void ImageCacheBase_init(ImageCacheBase* this);
Image* ImageCacheBase_getImage(ImageCacheBase* this, Any* resourceId);
void ImageCacheBase_releaseAll(ImageCacheBase* this);
int32_t ImageCacheBase_getIndexWH(ImageCacheBase* this, int32_t width, int32_t height);
Image* ImageCacheBase_getFromAvailable(ImageCacheBase* this, int32_t foundIndex, int32_t width, int32_t height);
Image* ImageCacheBase_get(ImageCacheBase* this, const char* caller, int32_t width, int32_t height);
Image* ImageCacheBase_getWithKey(ImageCacheBase* this, Any* key);
Image* ImageCacheBase_createImage(ImageCacheBase* this, const char* caller, int32_t width, int32_t height);
Image* ImageCacheBase_createImageFromInputStream(ImageCacheBase* this, Any* key, InputStream* inputStream);
const char* ImageCacheBase_toString(ImageCacheBase* this);
ABHashtable* ImageCacheBase_getHashtableP(ImageCacheBase* this);
void ImageCacheBase_init(ImageCacheBase* this, Image* image);
void ImageCacheBase_initProgress(ImageCacheBase* this);

static void ImageCacheBase_initFields(ImageCacheBase* this) {
    this->logUtil = LogUtil_getInstance();
    this->imageFactory = ImageFactory_getInstance();
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
    this->SIZE = 128;
    this->widths = ((int32_t*) java_array_new(sizeof(int32_t), this->SIZE));
    this->heights = ((int32_t*) java_array_new(sizeof(int32_t), this->SIZE));
    this->listOfList = ((BasicArrayList**) java_array_new(sizeof(BasicArrayList*), this->SIZE));
    this->availableListOfList = ((BasicArrayList**) java_array_new(sizeof(BasicArrayList*), this->SIZE));
    this->volume = 0;
    this->nextIndex = 0;
}


void ImageCacheBase_init(ImageCacheBase* this) {
    ImageCacheBase_initFields(this);
        for (int32_t index = java_array_length(this->listOfList) - 1; index >= 0; index--) {
            this->listOfList[index] = BasicArrayListD_new();
        }
        for (int32_t index = java_array_length(this->availableListOfList) - 1; index >= 0; index--) {
            this->availableListOfList[index] = BasicArrayListD_new();
        }
}

ImageCacheBase* ImageCacheBase_new(void) {
    ImageCacheBase* this = calloc(1, sizeof(ImageCacheBase));
    ImageCacheBase_init(this);
    return this;
}


Image* ImageCacheBase_getImage(ImageCacheBase* this, Any* resourceId) {
        Any* imageCanBeNull = ABHashtable_get(this->hashtable, resourceId);
        if (imageCanBeNull == nullptr) {
            return NullImage_NULL_IMAGE;
        }
        return ((Image*) imageCanBeNull);
}


void ImageCacheBase_releaseAll(ImageCacheBase* this) {
        for (int32_t index = java_array_length(this->listOfList) - 1; index >= 0; index--) {
            JAVA_CALL(this->availableListOfList[index], clear);
            JAVA_CALL(this->availableListOfList[index], addAllList, this->listOfList[index]);
        }
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "ImageCache: "), append, ImageCacheBase_toString(this)), toString), this, "releaseAll");
}


int32_t ImageCacheBase_getIndexWH(ImageCacheBase* this, int32_t width, int32_t height) {
        int32_t foundIndex = -1;
        int32_t size = java_array_length(this->widths);
        for (int32_t index = 0; index < size; index++) {
            if (this->widths[index] == width && this->heights[index] == height) {
                foundIndex = index;
                return foundIndex;
            }
        }
        return foundIndex;
}


Image* ImageCacheBase_getFromAvailable(ImageCacheBase* this, int32_t foundIndex, int32_t width, int32_t height) {
        if (foundIndex != -1) {
            if (JAVA_CALL(this->availableListOfList[foundIndex], size) > 0) {
                BasicArrayList* list = this->availableListOfList[foundIndex];
                return ((Image*) BasicArrayList_removeAt(list, BasicArrayList_size(list) - 1));
            }
        }
        return NullImage_NULL_IMAGE;
}


// throws Exception
Image* ImageCacheBase_get(ImageCacheBase* this, const char* caller, int32_t width, int32_t height) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
Image* ImageCacheBase_getWithKey(ImageCacheBase* this, Any* key) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
Image* ImageCacheBase_createImage(ImageCacheBase* this, const char* caller, int32_t width, int32_t height) {
        return ImageFactory_createImage(this->imageFactory, caller, width, height);
}


// throws Exception
Image* ImageCacheBase_createImageFromInputStream(ImageCacheBase* this, Any* key, InputStream* inputStream) {
        return ImageFactory_createImageFromInputStream(this->imageFactory, key, inputStream);
}


const char* ImageCacheBase_toString(ImageCacheBase* this) {
        StringMaker* stringBuffer = StringMaker_new();
        for (int32_t index = this->nextIndex - 1; index >= 0; index--) {
            int32_t width = this->widths[index];
            int32_t height = this->heights[index];
            int32_t total = JAVA_CALL(this->listOfList[index], size);
            int32_t totalAvailable = JAVA_CALL(this->availableListOfList[index], size);
            StringMaker_append(stringBuffer, " w: ");
            StringMaker_appendint(stringBuffer, width);
            StringMaker_append(stringBuffer, " h: ");
            StringMaker_appendint(stringBuffer, height);
            StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
            StringMaker_append(stringBuffer, CommonLabels_getInstance()->TOTAL_LABEL);
            StringMaker_appendint(stringBuffer, total);
            StringMaker_append(stringBuffer, " available: ");
            StringMaker_appendint(stringBuffer, totalAvailable);
        }
        return StringMaker_toString(stringBuffer);
}


ABHashtable* ImageCacheBase_getHashtableP(ImageCacheBase* this) {
        return this->hashtable;
}


void ImageCacheBase_init(ImageCacheBase* this, Image* image) {
}


void ImageCacheBase_initProgress(ImageCacheBase* this) {
}

