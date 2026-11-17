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
#include "org/allbinary/string/CommonStrings.h"

typedef struct ImageArrayRotationUtil ImageArrayRotationUtil;
struct ImageArrayRotationUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* TOTAL_ANGLE;
};

static ImageArrayRotationUtil* ImageArrayRotationUtil_instance;

ImageArrayRotationUtil* ImageArrayRotationUtil_new(void);
ImageArrayRotationUtil* ImageArrayRotationUtil_getInstance(void);
void ImageArrayRotationUtil_process(ImageArrayRotationUtil* this, ImageProcessorInput* imageProcessorInput, const char* input, ImageProcessedVisitor* visitor);

// Static fields with runtime initializers: call this once at startup
void ImageArrayRotationUtil_staticInit(void) {
    ImageArrayRotationUtil_instance = ImageArrayRotationUtil_new();
}

static void ImageArrayRotationUtil_initFields(ImageArrayRotationUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->TOTAL_ANGLE = "totalAngle: ";
}

void ImageArrayRotationUtil_init(ImageArrayRotationUtil* this) {
    ImageArrayRotationUtil_initFields(this);
}

ImageArrayRotationUtil* ImageArrayRotationUtil_new(void) {
    ImageArrayRotationUtil* this = calloc(1, sizeof(ImageArrayRotationUtil));
    ImageArrayRotationUtil_init(this);
    return this;
}


ImageArrayRotationUtil* ImageArrayRotationUtil_getInstance(void) {
        return ImageArrayRotationUtil_instance;
}


// throws IOException
void ImageArrayRotationUtil_process(ImageArrayRotationUtil* this, ImageProcessorInput* imageProcessorInput, const char* input, ImageProcessedVisitor* visitor) {
        int32_t totalAngle = nullptr;
        if (input == this->commonStrings->UP) {
            totalAngle = java_string_of(-90);
        } else if (input == this->commonStrings->DOWN) {
            totalAngle = java_string_of(90);
        } else {
            totalAngle = java_string_of(input);
        }
        BufferedImage* generatedBufferedImage = nullptr;
        BufferedImage** bufferedImageArray = ImageProcessorInput_getBufferedImageArray(imageProcessorInput);
        for (int32_t index = 0; index < java_array_length(bufferedImageArray); index++) {
            LogUtil_putF(this->logUtil, java_concat(this->TOTAL_ANGLE, java_string_of(totalAngle)), this, this->commonStrings->RUN);
            generatedBufferedImage = ImageJ2SERotationUtil_getRotatedImage(ImageJ2SERotationUtil_getInstance(), bufferedImageArray[index], Integer_intValue(totalAngle));
            ImageProcessedVisitor_visit(visitor, generatedBufferedImage, input, index);
        }
}

