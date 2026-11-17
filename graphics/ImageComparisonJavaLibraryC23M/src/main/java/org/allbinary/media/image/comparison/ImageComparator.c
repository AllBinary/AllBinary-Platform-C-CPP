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
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/color/ColorCacheFactory.h"
#include "org/allbinary/graphics/color/ColorCacheable.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/cache/AutomaticCacheInterface.h"
#include "org/allbinary/media/image/comparison/pixel/PixelDeltaFactory.h"

typedef struct ImageComparator ImageComparator;
struct ImageComparator {
    ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface;
};


ImageComparator* ImageComparator_new(ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface);

void ImageComparator_init(ImageComparator* this, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface);
static void ImageComparator_process(ImageComparator* this, ImageComparisonResult* imageComparisonInfo, GPoint* point);
ImageComparisonResult* ImageComparator_compare(ImageComparator* this, BufferedImage* bufferedImage1, BufferedImage* bufferedImage2, int64_t frameOne, int64_t frameTwo, int32_t tolerance);
ImageComparisonResult* ImageComparator_compare(ImageComparator* this, BufferedImage* bufferedImage1, BufferedImage* bufferedImage2, int64_t frameOne, int64_t frameTwo, int32_t tolerance, const char* name);

static void ImageComparator_initFields(ImageComparator* this) {
    
}


void ImageComparator_init(ImageComparator* this, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface) {
    ImageComparator_initFields(this);
        this->imageComparatorConstraintsInterface = imageComparatorConstraintsInterface;
}

ImageComparator* ImageComparator_new(ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface) {
    ImageComparator* this = calloc(1, sizeof(ImageComparator));
    ImageComparator_init(this, imageComparatorConstraintsInterface);
    return this;
}


// throws Exception
static void ImageComparator_process(ImageComparator* this, ImageComparisonResult* imageComparisonInfo, GPoint* point) {
        bool isCollsionWithAvoidRectangles = ImageComparatorConstraintsInterface_isCollisionWithAvoidRectangles(this->imageComparatorConstraintsInterface, point);
        if (!isCollsionWithAvoidRectangles) {
            int32_t rgb1 = JAVA_CALL(ImageComparisonResult_getBufferedImages(imageComparisonInfo)[0], getRGB, GPoint_getX(point), GPoint_getY(point));
            int32_t rgb2 = JAVA_CALL(ImageComparisonResult_getBufferedImages(imageComparisonInfo)[1], getRGB, GPoint_getX(point), GPoint_getY(point));
            AutomaticCacheInterface* automaticCacheInterface = ColorCacheFactory_getInstance();
            int32_t colorInteger = java_string_of(rgb1);
            ColorCacheable* colorCacheable = ((ColorCacheable*) AutomaticCacheInterface_get(automaticCacheInterface, colorInteger));
            Color* color = ColorCacheable_getColor(colorCacheable);
            int32_t colorInteger2 = java_string_of(rgb2);
            ColorCacheable* colorCacheable2 = ((ColorCacheable*) AutomaticCacheInterface_get(automaticCacheInterface, colorInteger));
            Color* color2 = ColorCacheable_getColor(colorCacheable);
            if (ImageComparatorConstraintsInterface_isColorAllowed(this->imageComparatorConstraintsInterface, 0, point, color) || ImageComparatorConstraintsInterface_isColorAllowed(this->imageComparatorConstraintsInterface, 1, point, color2)) {
                if (((rgb1 - rgb2) < 0 ? -(rgb1 - rgb2) : (rgb1 - rgb2)) <= ImageComparisonResult_getTolerance(imageComparisonInfo)) {
                    imageComparisonInfo->pixelsThatMatch++;
                } else {
                    ImageComparisonResult_add(imageComparisonInfo, PixelDeltaFactory_getInstance(GPoint_getX(point), GPoint_getY(point), rgb1, rgb2));
                }
            }
        } else {
            imageComparisonInfo->pixelsIgnored++;
        }
}


// throws Exception
ImageComparisonResult* ImageComparator_compare(ImageComparator* this, BufferedImage* bufferedImage1, BufferedImage* bufferedImage2, int64_t frameOne, int64_t frameTwo, int32_t tolerance) {
        return ImageComparator_compare(this, bufferedImage1, bufferedImage2, frameOne, frameTwo, tolerance, StringUtil_getInstance()->EMPTY_STRING);
}


// throws Exception
// Java overloaded method: C needs a different name
ImageComparisonResult* ImageComparator_compare(ImageComparator* this, BufferedImage* bufferedImage1, BufferedImage* bufferedImage2, int64_t frameOne, int64_t frameTwo, int32_t tolerance, const char* name) {
        if (bufferedImage1 == nullptr || bufferedImage2 == nullptr) {
            java_throw(java_exception_new("Exception", "Input images must not be null."));
        }
        ImageComparisonResult* imageComparisonInfo = ImageComparisonResult_new(name, bufferedImage1, bufferedImage2, frameOne, frameTwo, tolerance);
        for (int32_t indexY = 0; indexY < imageComparisonInfo->imageHeight; indexY++) {
            for (int32_t indexX = 0; indexX < imageComparisonInfo->imageWidth; indexX++) {
                ImageComparator_process(this, imageComparisonInfo, PointFactory_createXY(PointFactory_getInstance(), indexX, indexY));
                if (JAVA_CALL(ImageComparisonResult_getNonMatchingPixelVector(imageComparisonInfo), size) > ImageComparatorConstraintsInterface_getMaxNonMatchingPixelDeltas(this->imageComparatorConstraintsInterface)) {
                    break;
                }
            }
        }
        return imageComparisonInfo;
}

