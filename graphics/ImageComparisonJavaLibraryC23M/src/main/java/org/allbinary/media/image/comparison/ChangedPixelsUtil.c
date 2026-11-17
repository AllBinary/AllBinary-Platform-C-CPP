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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/util/cache/PoolInterface.h"
#include "org/allbinary/media/image/cache/BufferedImageCacheable.h"
#include "org/allbinary/media/image/cache/BufferedImageInfo.h"
#include "org/allbinary/media/image/cache/BufferedImageInfoFactory.h"
#include "org/allbinary/media/image/cache/BufferedImagePoolSingleton.h"
#include "org/allbinary/media/image/comparison/pixel/PixelDelta.h"

typedef struct ChangedPixelsUtil ChangedPixelsUtil;
struct ChangedPixelsUtil {
    char unused;
};

static constexpr int32_t ChangedPixelsUtil_START_X = 0;
static constexpr int32_t ChangedPixelsUtil_START_Y = 0;
static constexpr int32_t ChangedPixelsUtil_OFFSET = 0;
static constexpr int32_t ChangedPixelsUtil_SCAN_SIZE = 0;
static int32_t* ChangedPixelsUtil_CLEAR_INT_ARRAY;

ChangedPixelsUtil* ChangedPixelsUtil_new(void);

void ChangedPixelsUtil_init(ChangedPixelsUtil* this);
BufferedImageCacheable** ChangedPixelsUtil_generateBufferedImageChacheables(ImageComparisonResult* imageComparisonInfo);

// Static fields with runtime initializers: call this once at startup
void ChangedPixelsUtil_staticInit(void) {
    ChangedPixelsUtil_CLEAR_INT_ARRAY = ((int32_t*) java_array_new(sizeof(int32_t), 1800 * 1600));
}


void ChangedPixelsUtil_init(ChangedPixelsUtil* this) {
}

ChangedPixelsUtil* ChangedPixelsUtil_new(void) {
    ChangedPixelsUtil* this = calloc(1, sizeof(ChangedPixelsUtil));
    ChangedPixelsUtil_init(this);
    return this;
}


// throws Exception
BufferedImageCacheable** ChangedPixelsUtil_generateBufferedImageChacheables(ImageComparisonResult* imageComparisonInfo) {
        BufferedImageCacheable** bufferedImageCacheables = nullptr;
        BufferedImage* originalBufferedImage = ImageComparisonResult_getBufferedImages(imageComparisonInfo)[0];
        bufferedImageCacheables = ((BufferedImageCacheable**) java_array_new(sizeof(BufferedImageCacheable*), 2));
        BufferedImageInfo* bufferedImageInfo = BufferedImageInfoFactory_getInstance(imageComparisonInfo->imageWidth, imageComparisonInfo->imageHeight, BufferedImage_getType(originalBufferedImage));
        PoolInterface* poolInterface = BufferedImagePoolSingleton_getInstance();
        for (int32_t index = 0; index < java_array_length(bufferedImageCacheables); index++) {
            BufferedImageCacheable* bufferedImageCacheable = ((BufferedImageCacheable*) PoolInterface_remove(poolInterface, bufferedImageInfo));
            bufferedImageCacheables[index] = bufferedImageCacheable;
            JAVA_CALL(JAVA_CALL(bufferedImageCacheables[index], getBufferedImage), setRGB, ChangedPixelsUtil_START_X, ChangedPixelsUtil_START_Y, BufferedImageInfo_getWidth(bufferedImageInfo), BufferedImageInfo_getHeight(bufferedImageInfo), ChangedPixelsUtil_CLEAR_INT_ARRAY, ChangedPixelsUtil_OFFSET, ChangedPixelsUtil_SCAN_SIZE);
        }
        BasicArrayList* vector = ImageComparisonResult_getNonMatchingPixelVector(imageComparisonInfo);
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            PixelDelta* pixelDelta = ((PixelDelta*) BasicArrayList_get(vector, index));
            if (PixelDelta_getColorDelta(pixelDelta) == nullptr) {
                fputs(java_string_of("ColorDelta"), stdout);
                exit(0);
            }
            JAVA_CALL(JAVA_CALL(bufferedImageCacheables[0], getBufferedImage), setRGB, JAVA_CALL(PixelDelta_getPoint(pixelDelta), getX), JAVA_CALL(PixelDelta_getPoint(pixelDelta), getY), JAVA_CALL(PixelDelta_getColorDelta(pixelDelta), getRgb1));
            JAVA_CALL(JAVA_CALL(bufferedImageCacheables[1], getBufferedImage), setRGB, JAVA_CALL(PixelDelta_getPoint(pixelDelta), getX), JAVA_CALL(PixelDelta_getPoint(pixelDelta), getY), JAVA_CALL(PixelDelta_getColorDelta(pixelDelta), getRgb2));
        }
        return bufferedImageCacheables;
}

