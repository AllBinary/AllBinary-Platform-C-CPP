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
// package org.allbinary.media.image.analysis

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/graphics/color/ColorCacheFactory.h"
#include "org/allbinary/graphics/color/ColorCacheable.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ImageAnalysis ImageAnalysis;
struct ImageAnalysis {
    LogUtil* logUtil;
};

static ImageAnalysis* ImageAnalysis_instance;

ImageAnalysis* ImageAnalysis_new(void);
ImageAnalysis* ImageAnalysis_getInstance(void);

void ImageAnalysis_init(ImageAnalysis* this);
ImageAnalysisResults** ImageAnalysis_process(ImageAnalysis* this, BufferedImage** bufferedImageArray, ColorRangeInterface* colorRangeInterface);
ImageAnalysisResults* ImageAnalysis_process(BufferedImage* bufferedImage, ColorRangeInterface* colorRangeInterface);
static void ImageAnalysis_processColorRangeResults(ImageAnalysisResults* imageAnalysisResults, ColorRangeInterface* colorRangeInterface, Color* color);
static void ImageAnalysis_processImageColorResults(ImageColorResults* imageColorResults, ColorRangeInterface* colorRangeInterface, Color* color);

// Static fields with runtime initializers: call this once at startup
void ImageAnalysis_staticInit(void) {
    ImageAnalysis_instance = ImageAnalysis_new();
}

static void ImageAnalysis_initFields(ImageAnalysis* this) {
    this->logUtil = LogUtil_getInstance();
}


ImageAnalysis* ImageAnalysis_getInstance(void) {
        return ImageAnalysis_instance;
}


void ImageAnalysis_init(ImageAnalysis* this) {
    ImageAnalysis_initFields(this);
}

ImageAnalysis* ImageAnalysis_new(void) {
    ImageAnalysis* this = calloc(1, sizeof(ImageAnalysis));
    ImageAnalysis_init(this);
    return this;
}


// throws Exception
ImageAnalysisResults** ImageAnalysis_process(ImageAnalysis* this, BufferedImage** bufferedImageArray, ColorRangeInterface* colorRangeInterface) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, java_concat(java_string_of(CommonLabels_getInstance()->START), ColorRangeInterface_toString(colorRangeInterface)), this, commonStrings->PROCESS);
        ImageAnalysisResults** imageAnalysisResultsArray = ((ImageAnalysisResults**) java_array_new(sizeof(ImageAnalysisResults*), java_array_length(bufferedImageArray)));
        for (int32_t index = 0; index < java_array_length(bufferedImageArray); index++) {
            imageAnalysisResultsArray[index] = ImageAnalysis_process(bufferedImageArray[index], colorRangeInterface);
        }
        return imageAnalysisResultsArray;
}


// throws Exception
// Java overloaded method: C needs a different name
ImageAnalysisResults* ImageAnalysis_process(BufferedImage* bufferedImage, ColorRangeInterface* colorRangeInterface) {
        ImageAnalysisResults* imageAnalysisResults = ImageAnalysisResults_new();
        int64_t redTotal = 0LL;
        int64_t greenTotal = 0LL;
        int64_t blueTotal = 0LL;
        for (int32_t indexY = 0; indexY < BufferedImage_getHeight(bufferedImage); indexY++) {
            for (int32_t indexX = 0; indexX < BufferedImage_getWidth(bufferedImage); indexX++) {
                int32_t keyInteger = java_string_of(BufferedImage_getRGB(bufferedImage, indexX, indexY));
                ColorCacheable* colorCacheable = ((ColorCacheable*) ColorCacheFactory_get(ColorCacheFactory_getInstance(), keyInteger));
                Color* color = ColorCacheable_getColor(colorCacheable);
                ImageAnalysis_processColorRangeResults(imageAnalysisResults, colorRangeInterface, color);
                ImageAnalysis_processImageColorResults(ImageAnalysisResults_getImageColorResults(imageAnalysisResults), colorRangeInterface, color);
                redTotal += Color_getRed(color);
                greenTotal += Color_getGreen(color);
                blueTotal += Color_getBlue(color);
            }
        }
        int64_t totalPixels = JAVA_CALL(ImageAnalysisResults_getImageColorRangeResults(imageAnalysisResults), getTotalPixelsChecked);
        ColorAverage* colorAverage = JAVA_CALL(ImageAnalysisResults_getImageColorResults(imageAnalysisResults), getColorAverage);
        ColorAverage_setAvgRed(colorAverage, ((float) redTotal) / ((float) totalPixels));
        ColorAverage_setAvgGreen(colorAverage, ((float) greenTotal) / ((float) totalPixels));
        ColorAverage_setAvgBlue(colorAverage, ((float) blueTotal) / ((float) totalPixels));
        return imageAnalysisResults;
}


static void ImageAnalysis_processColorRangeResults(ImageAnalysisResults* imageAnalysisResults, ColorRangeInterface* colorRangeInterface, Color* color) {
        if (ColorRangeInterface_isInRange(colorRangeInterface, color)) {
            JAVA_CALL(ImageAnalysisResults_getImageColorRangeResults(imageAnalysisResults), addMatchingPixelsChecked);
        } else {
        }
        JAVA_CALL(ImageAnalysisResults_getImageColorRangeResults(imageAnalysisResults), addTotalPixelsChecked);
}


static void ImageAnalysis_processImageColorResults(ImageColorResults* imageColorResults, ColorRangeInterface* colorRangeInterface, Color* color) {
        if (Color_getRed(color) < JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), getMinRed)) {
            JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), setMinRed, Color_getRed(color));
        }
        if (Color_getGreen(color) < JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), getMinGreen)) {
            JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), setMinGreen, Color_getGreen(color));
        }
        if (Color_getBlue(color) < JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), getMinBlue)) {
            JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), setMinBlue, Color_getBlue(color));
        }
        if (Color_getRed(color) > JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), getMaxRed)) {
            JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), setMaxRed, Color_getRed(color));
        }
        if (Color_getGreen(color) > JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), getMaxGreen)) {
            JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), setMaxGreen, Color_getGreen(color));
        }
        if (Color_getBlue(color) > JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), getMaxBlue)) {
            JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), setMaxBlue, Color_getBlue(color));
        }
}

