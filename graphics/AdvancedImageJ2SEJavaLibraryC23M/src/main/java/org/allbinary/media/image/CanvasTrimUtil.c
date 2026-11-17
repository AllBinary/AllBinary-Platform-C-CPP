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
// #include "java/awt/image/BufferedImage.h"
// #include "java/io/IOException.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct CanvasTrimUtil CanvasTrimUtil;
struct CanvasTrimUtil {
    LogUtil* logUtil;
    StringUtil* stringUtil;
};

static CanvasTrimUtil* CanvasTrimUtil_instance;

CanvasTrimUtil* CanvasTrimUtil_new(void);
CanvasTrimUtil* CanvasTrimUtil_getInstance(void);
void CanvasTrimUtil_process(CanvasTrimUtil* this, ImageProcessorInput* imageProcessorInput, int32_t cutCanvasFromLeftReduction, int32_t cutCanvasFromTopReduction, int32_t cutCanvasFromRightReduction, int32_t cutCanvasFromBottomReduction, ImageProcessedVisitor* visitor);

// Static fields with runtime initializers: call this once at startup
void CanvasTrimUtil_staticInit(void) {
    CanvasTrimUtil_instance = CanvasTrimUtil_new();
}

static void CanvasTrimUtil_initFields(CanvasTrimUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->stringUtil = StringUtil_getInstance();
}

void CanvasTrimUtil_init(CanvasTrimUtil* this) {
    CanvasTrimUtil_initFields(this);
}

CanvasTrimUtil* CanvasTrimUtil_new(void) {
    CanvasTrimUtil* this = calloc(1, sizeof(CanvasTrimUtil));
    CanvasTrimUtil_init(this);
    return this;
}


CanvasTrimUtil* CanvasTrimUtil_getInstance(void) {
        return CanvasTrimUtil_instance;
}


// throws IOException
void CanvasTrimUtil_process(CanvasTrimUtil* this, ImageProcessorInput* imageProcessorInput, int32_t cutCanvasFromLeftReduction, int32_t cutCanvasFromTopReduction, int32_t cutCanvasFromRightReduction, int32_t cutCanvasFromBottomReduction, ImageProcessedVisitor* visitor) {
        BufferedImage** bufferedImageArray = ImageProcessorInput_getBufferedImageArray(imageProcessorInput);
        BufferedImage** subBufferedImageArray = ((BufferedImage**) java_array_new(sizeof(BufferedImage*), java_array_length(bufferedImageArray)));
        int32_t size = java_array_length(bufferedImageArray);
        BufferedImage* bufferedImage = nullptr;
        for (int32_t index = 0; index < size; index++) {
            bufferedImage = bufferedImageArray[index];
            subBufferedImageArray[index] = BufferedImage_getSubimage(bufferedImage, cutCanvasFromLeftReduction, cutCanvasFromTopReduction, BufferedImage_getWidth(bufferedImage) - cutCanvasFromLeftReduction - cutCanvasFromRightReduction, BufferedImage_getHeight(bufferedImage) - cutCanvasFromTopReduction - cutCanvasFromBottomReduction);
            ImageProcessedVisitor_visit(visitor, subBufferedImageArray[index], this->stringUtil->EMPTY_STRING, index);
        }
}

