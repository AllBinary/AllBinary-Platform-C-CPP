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
// package org.allbinary.media.image.comparison

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/input/automation/ImageOutputData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/number/LongUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/cache/AutomaticCacheInterface.h"
#include "org/allbinary/logic/visual/media/MediaDataFactory.h"
#include "org/allbinary/media/image/ImagePersistanceUtil.h"
#include "org/allbinary/media/image/cache/BufferedImageCacheable.h"
#include "org/allbinary/media/image/io/ImageIOInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ComparisonImageInputOutput ComparisonImageInputOutput;
struct ComparisonImageInputOutput {
    ImageIOInterface ImageIOInterface_interface;
    LogUtil* logUtil;
};

static const char* ComparisonImageInputOutput_ROOT_NAME = "_Changed_";

ComparisonImageInputOutput* ComparisonImageInputOutput_new(void);

void ComparisonImageInputOutput_init(ComparisonImageInputOutput* this);
void ComparisonImageInputOutput_save(ComparisonImageInputOutput* this, int64_t frame);
void ComparisonImageInputOutput_save(ComparisonImageInputOutput* this, ImageComparisonResult* imageComparisonResult, int64_t frame);

static void ComparisonImageInputOutput_initFields(ComparisonImageInputOutput* this) {
    this->logUtil = LogUtil_getInstance();
}


void ComparisonImageInputOutput_init(ComparisonImageInputOutput* this) {
    ComparisonImageInputOutput_initFields(this);
}

ComparisonImageInputOutput* ComparisonImageInputOutput_new(void) {
    ComparisonImageInputOutput* this = calloc(1, sizeof(ComparisonImageInputOutput));
    ComparisonImageInputOutput_init(this);
    return this;
}


// throws Exception
void ComparisonImageInputOutput_save(ComparisonImageInputOutput* this, int64_t frame) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        if (frame > 0) {
            ImageComparisonResultFrameCacheable* imageComparisonResultFrameCacheable = ((ImageComparisonResultFrameCacheable*) AutomaticCacheInterface_get((((AutomaticCacheInterface*) ImageComparisonResultCacheSingleton_getInstance())), frame));
            if (imageComparisonResultFrameCacheable != nullptr) {
                ImageComparisonResult* imageComparisonResult = ImageComparisonResultFrameCacheable_getImageComparisonResult(imageComparisonResultFrameCacheable);
                ComparisonImageInputOutput_save(this, imageComparisonResult, ImageComparisonResultFrameCacheable_getFrame(imageComparisonResultFrameCacheable));
            } else {
                LogUtil_putF(this->logUtil, java_concat("Comparison Results Not Available for Output: ", java_string_of(frame)), this, commonStrings->SAVE);
            }
        } else {
            LogUtil_putF(this->logUtil, java_concat("No Comparison Results: for first frame: ", java_string_of(frame)), this, commonStrings->SAVE);
        }
}


// throws Exception
// Java overloaded method: C needs a different name
void ComparisonImageInputOutput_save(ComparisonImageInputOutput* this, ImageComparisonResult* imageComparisonResult, int64_t frame) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        StringMaker* filePathStringBuffer = StringMaker_new();
        StringMaker_append(filePathStringBuffer, ImageOutputData_SAVE_PATH);
        StringMaker_append(filePathStringBuffer, LongUtil_fillIn(Long_toString(frame)));
        StringMaker_append(filePathStringBuffer, ComparisonImageInputOutput_ROOT_NAME);
        StringMaker* filePathStringBuffer1 = StringMaker_new();
        StringMaker_append(filePathStringBuffer1, StringMaker_toString(filePathStringBuffer));
        StringMaker_append(filePathStringBuffer1, "_1");
        StringMaker_append(filePathStringBuffer1, JAVA_CALL(MediaDataFactory_getInstance()->JPG, getExtension));
        const char* filePath1 = StringMaker_toString(filePathStringBuffer1);
        StringMaker* filePathStringBuffer2 = StringMaker_new();
        StringMaker_append(filePathStringBuffer2, StringMaker_toString(filePathStringBuffer));
        StringMaker_append(filePathStringBuffer2, "_2");
        StringMaker_append(filePathStringBuffer2, JAVA_CALL(MediaDataFactory_getInstance()->JPG, getExtension));
        const char* filePath2 = StringMaker_toString(filePathStringBuffer2);
        BufferedImageCacheable** bufferedImageCacheables = ChangedPixelsUtil_generateBufferedImageChacheables(imageComparisonResult);
        LogUtil_putF(this->logUtil, java_concat("Comparison Image File Path 1: ", filePath1), this, commonStrings->SAVE);
        LogUtil_putF(this->logUtil, java_concat("Comparison Image File Path 2: ", filePath2), this, commonStrings->SAVE);
        BufferedImage** bufferedImageArray = ((BufferedImage**) java_array_new(sizeof(BufferedImage*), 2));
        bufferedImageArray[0] = JAVA_CALL(bufferedImageCacheables[0], getBufferedImage);
        bufferedImageArray[1] = JAVA_CALL(bufferedImageCacheables[1], getBufferedImage);
        ImagePersistanceUtil* imagePersistanceUtil = ImagePersistanceUtil_getInstance();
        ImagePersistanceUtil_saveWithImageIO(imagePersistanceUtil, filePath1, bufferedImageArray[0]);
        ImagePersistanceUtil_saveWithImageIO(imagePersistanceUtil, filePath2, bufferedImageArray[1]);
}

