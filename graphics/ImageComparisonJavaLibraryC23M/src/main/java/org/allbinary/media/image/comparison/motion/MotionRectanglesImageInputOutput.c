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
// package org.allbinary.media.image.comparison.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/input/automation/ImageOutputData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/number/LongUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/cache/AutomaticCacheInterface.h"
#include "org/allbinary/logic/util/cache/PoolInterface.h"
#include "org/allbinary/logic/visual/media/MediaDataFactory.h"
#include "org/allbinary/media/image/ImagePersistanceUtil.h"
#include "org/allbinary/media/image/cache/BufferedImageCacheable.h"
#include "org/allbinary/media/image/cache/BufferedImageInfo.h"
#include "org/allbinary/media/image/cache/BufferedImageInfoFactory.h"
#include "org/allbinary/media/image/cache/BufferedImagePoolSingleton.h"
#include "org/allbinary/media/image/comparison/ImageComparisonResult.h"
#include "org/allbinary/media/image/io/ImageIOInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct MotionRectanglesImageInputOutput MotionRectanglesImageInputOutput;
struct MotionRectanglesImageInputOutput {
    ImageIOInterface ImageIOInterface_interface;
    LogUtil* logUtil;
    int32_t NUMBER_OF_IMAGES;
};


MotionRectanglesImageInputOutput* MotionRectanglesImageInputOutput_new(void);

void MotionRectanglesImageInputOutput_init(MotionRectanglesImageInputOutput* this);
void MotionRectanglesImageInputOutput_save(MotionRectanglesImageInputOutput* this, int64_t frame);
void MotionRectanglesImageInputOutput_save(MotionRectanglesImageInputOutput* this, MotionRectangles* motionRectangles, int64_t frame);

static void MotionRectanglesImageInputOutput_initFields(MotionRectanglesImageInputOutput* this) {
    this->logUtil = LogUtil_getInstance();
    this->NUMBER_OF_IMAGES = 1;
}


void MotionRectanglesImageInputOutput_init(MotionRectanglesImageInputOutput* this) {
    MotionRectanglesImageInputOutput_initFields(this);
}

MotionRectanglesImageInputOutput* MotionRectanglesImageInputOutput_new(void) {
    MotionRectanglesImageInputOutput* this = calloc(1, sizeof(MotionRectanglesImageInputOutput));
    MotionRectanglesImageInputOutput_init(this);
    return this;
}


// throws Exception
void MotionRectanglesImageInputOutput_save(MotionRectanglesImageInputOutput* this, int64_t frame) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        MotionRectanglesResultsFrameCacheable* motionRectanglesResultsFrameCacheable = ((MotionRectanglesResultsFrameCacheable*) AutomaticCacheInterface_get((((AutomaticCacheInterface*) AllMotionRectanglesResultsCacheSingleton_getInstance())), frame));
        if (motionRectanglesResultsFrameCacheable != nullptr) {
            MotionRectangles* motionRectangles = MotionRectanglesResultsFrameCacheable_getMotionRectangles(motionRectanglesResultsFrameCacheable);
            MotionRectanglesImageInputOutput_save(this, motionRectangles, frame);
            motionRectanglesResultsFrameCacheable = ((MotionRectanglesResultsFrameCacheable*) AutomaticCacheInterface_get((((AutomaticCacheInterface*) ConsolidatedMotionRectanglesResultsCacheSingleton_getInstance())), frame));
            motionRectangles = MotionRectanglesResultsFrameCacheable_getMotionRectangles(motionRectanglesResultsFrameCacheable);
            MotionRectanglesImageInputOutput_save(this, motionRectangles, frame);
            motionRectanglesResultsFrameCacheable = ((MotionRectanglesResultsFrameCacheable*) AutomaticCacheInterface_get((((AutomaticCacheInterface*) ConstrainedMotionRectanglesResultsCacheSingleton_getInstance())), frame));
            motionRectangles = MotionRectanglesResultsFrameCacheable_getMotionRectangles(motionRectanglesResultsFrameCacheable);
            MotionRectanglesImageInputOutput_save(this, motionRectangles, frame);
        } else {
            LogUtil_putF(this->logUtil, java_concat("No Motion Rectangle Results for Frame: ", java_string_of(frame)), this, commonStrings->SAVE);
        }
}


// throws Exception
// Java overloaded method: C needs a different name
void MotionRectanglesImageInputOutput_save(MotionRectanglesImageInputOutput* this, MotionRectangles* motionRectangles, int64_t frame) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        StringMaker* filePathStringBuffer = StringMaker_new();
        StringMaker_append(filePathStringBuffer, ImageOutputData_SAVE_PATH);
        StringMaker_append(filePathStringBuffer, LongUtil_fillIn(Long_toString(frame)));
        StringMaker_append(filePathStringBuffer, "_");
        StringMaker_append(filePathStringBuffer, MotionRectangles_getName(motionRectangles));
        StringMaker* filePathStringBuffer1 = StringMaker_new();
        StringMaker_append(filePathStringBuffer1, StringMaker_toString(filePathStringBuffer));
        StringMaker_append(filePathStringBuffer1, "_1");
        StringMaker_append(filePathStringBuffer1, JAVA_CALL(MediaDataFactory_getInstance()->JPG, getExtension));
        StringMaker* filePathStringBuffer2 = StringMaker_new();
        StringMaker_append(filePathStringBuffer2, StringMaker_toString(filePathStringBuffer));
        StringMaker_append(filePathStringBuffer2, "_2");
        StringMaker_append(filePathStringBuffer2, JAVA_CALL(MediaDataFactory_getInstance()->JPG, getExtension));
        StringMaker* filePathStringBuffer3 = StringMaker_new();
        StringMaker_append(filePathStringBuffer3, StringMaker_toString(filePathStringBuffer));
        StringMaker_append(filePathStringBuffer3, JAVA_CALL(MediaDataFactory_getInstance()->JPG, getExtension));
        LogUtil_putF(this->logUtil, java_concat("Motion Image File Path 1: ", StringMaker_toString(filePathStringBuffer1)), this, commonStrings->SAVE);
        LogUtil_putF(this->logUtil, java_concat("Motion Image File Path 2: ", StringMaker_toString(filePathStringBuffer2)), this, commonStrings->SAVE);
        LogUtil_putF(this->logUtil, java_concat("Motion Image File Path 2: ", StringMaker_toString(filePathStringBuffer3)), this, commonStrings->SAVE);
        BufferedImageCacheable** bufferedImageCacheables = ((BufferedImageCacheable**) java_array_new(sizeof(BufferedImageCacheable*), this->NUMBER_OF_IMAGES));
        ImageComparisonResult* imageComparisonInfo = MotionRectangles_getImageComparisonResult(motionRectangles);
        BufferedImage* originalBufferedImage = ImageComparisonResult_getBufferedImages(imageComparisonInfo)[0];
        BufferedImageInfo* bufferedImageInfo = BufferedImageInfoFactory_getInstance(imageComparisonInfo->imageWidth, imageComparisonInfo->imageHeight, BufferedImage_getType(originalBufferedImage));
        PoolInterface* poolInterface = BufferedImagePoolSingleton_getInstance();
        for (int32_t index = 0; index < this->NUMBER_OF_IMAGES; index++) {
            bufferedImageCacheables[index] = ((BufferedImageCacheable*) PoolInterface_remove(poolInterface, bufferedImageInfo));
        }
        JAVA_CALL(JAVA_CALL(bufferedImageCacheables[0], getBufferedImage), setData, JAVA_CALL(ImageComparisonResult_getBufferedImages(imageComparisonInfo)[1], getData));
        if (this->NUMBER_OF_IMAGES > 1) {
            JAVA_CALL(JAVA_CALL(bufferedImageCacheables[1], getBufferedImage), setData, JAVA_CALL(ImageComparisonResult_getBufferedImages(imageComparisonInfo)[1], getData));
        }
        Graphics** bufferedImageGraphicsArray = nullptr;
        bufferedImageGraphicsArray = ((Graphics**) java_array_new(sizeof(Graphics*), this->NUMBER_OF_IMAGES));
        for (int32_t index = 0; index < this->NUMBER_OF_IMAGES; index++) {
            bufferedImageGraphicsArray[index] = JAVA_CALL(JAVA_CALL(bufferedImageCacheables[index], getBufferedImage), getGraphics);
        }
        BasicArrayList* rectangelList = MotionRectangles_getVector(motionRectangles);
        int32_t size = BasicArrayList_size(rectangelList);
        for (int32_t index2 = 0; index2 < size; index2++) {
            MotionRectangle* motionRectangle = ((MotionRectangle*) BasicArrayList_get(rectangelList, index2));
            Rectangle* rectangle = MotionRectangle_getRectangle(motionRectangle);
            for (int32_t index = 0; index < this->NUMBER_OF_IMAGES; index++) {
                JAVA_CALL(bufferedImageGraphicsArray[index], setColor, Color_ORANGE);
                JAVA_CALL(bufferedImageGraphicsArray[index], drawRect, rectangle->x, rectangle->y, rectangle->width, rectangle->height);
            }
        }
        ImagePersistanceUtil* imagePersistanceUtil = ImagePersistanceUtil_getInstance();
        if (this->NUMBER_OF_IMAGES > 1) {
            ImagePersistanceUtil_saveWithImageIO(imagePersistanceUtil, StringMaker_toString(filePathStringBuffer1), JAVA_CALL(bufferedImageCacheables[1], getBufferedImage));
        }
        ImagePersistanceUtil_saveWithImageIO(imagePersistanceUtil, StringMaker_toString(filePathStringBuffer2), JAVA_CALL(bufferedImageCacheables[0], getBufferedImage));
        if (this->NUMBER_OF_IMAGES > 2) {
            ImagePersistanceUtil_saveWithImageIO(imagePersistanceUtil, StringMaker_toString(filePathStringBuffer3), JAVA_CALL(bufferedImageCacheables[2], getBufferedImage));
        }
}

