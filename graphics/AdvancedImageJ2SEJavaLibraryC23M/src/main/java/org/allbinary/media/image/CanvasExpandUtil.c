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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct CanvasExpandUtil CanvasExpandUtil;
struct CanvasExpandUtil {
    LogUtil* logUtil;
    StringUtil* stringUtil;
};

static CanvasExpandUtil* CanvasExpandUtil_instance;

CanvasExpandUtil* CanvasExpandUtil_new(void);
CanvasExpandUtil* CanvasExpandUtil_getInstance(void);
void CanvasExpandUtil_process(CanvasExpandUtil* this, ImageProcessorInput* imageProcessorInput, int32_t increaseX, int32_t increaseY, ImageProcessedVisitor* visitor);

// Static fields with runtime initializers: call this once at startup
void CanvasExpandUtil_staticInit(void) {
    CanvasExpandUtil_instance = CanvasExpandUtil_new();
}

static void CanvasExpandUtil_initFields(CanvasExpandUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->stringUtil = StringUtil_getInstance();
}

void CanvasExpandUtil_init(CanvasExpandUtil* this) {
    CanvasExpandUtil_initFields(this);
}

CanvasExpandUtil* CanvasExpandUtil_new(void) {
    CanvasExpandUtil* this = calloc(1, sizeof(CanvasExpandUtil));
    CanvasExpandUtil_init(this);
    return this;
}


CanvasExpandUtil* CanvasExpandUtil_getInstance(void) {
        return CanvasExpandUtil_instance;
}


// throws Exception
void CanvasExpandUtil_process(CanvasExpandUtil* this, ImageProcessorInput* imageProcessorInput, int32_t increaseX, int32_t increaseY, ImageProcessedVisitor* visitor) {
        ImageUtil* imageUtil = ImageUtil_getInstance();
        BufferedImage** bufferedImageArray = ImageProcessorInput_getBufferedImageArray(imageProcessorInput);
        BufferedImage** subBufferedImageArray = ((BufferedImage**) java_array_new(sizeof(BufferedImage*), java_array_length(bufferedImageArray)));
        int32_t size = java_array_length(bufferedImageArray);
        BufferedImage* bufferedImage = nullptr;
        for (int32_t index = 0; index < size; index++) {
            bufferedImage = bufferedImageArray[index];
            subBufferedImageArray[index] = ImageUtil_createBufferedImage(imageUtil, bufferedImage, BufferedImage_getWidth(bufferedImage) + increaseX, BufferedImage_getHeight(bufferedImage) + increaseY, false);
            ImageProcessedVisitor_visit(visitor, subBufferedImageArray[index], this->stringUtil->EMPTY_STRING, index);
        }
}

