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
// package org.allbinary.input.automation.module.actions.script.condition.processors.output

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/input/media/image/InputImageIOInterfaceFactory.h"
#include "org/allbinary/input/media/image/InputImageType.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/media/image/io/ImageIOInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ImageActionScriptOutputProcessor ImageActionScriptOutputProcessor;
struct ImageActionScriptOutputProcessor {
    LogUtil* logUtil;
};


ImageActionScriptOutputProcessor* ImageActionScriptOutputProcessor_new(void);

void ImageActionScriptOutputProcessor_init(ImageActionScriptOutputProcessor* this);
void ImageActionScriptOutputProcessor_process(ImageActionScriptOutputInterface* imageActionScriptOutputInterface, int64_t frame);

static void ImageActionScriptOutputProcessor_initFields(ImageActionScriptOutputProcessor* this) {
    this->logUtil = LogUtil_getInstance();
}


void ImageActionScriptOutputProcessor_init(ImageActionScriptOutputProcessor* this) {
    ImageActionScriptOutputProcessor_initFields(this);
}

ImageActionScriptOutputProcessor* ImageActionScriptOutputProcessor_new(void) {
    ImageActionScriptOutputProcessor* this = calloc(1, sizeof(ImageActionScriptOutputProcessor));
    ImageActionScriptOutputProcessor_init(this);
    return this;
}


// throws Exception
void ImageActionScriptOutputProcessor_process(ImageActionScriptOutputInterface* imageActionScriptOutputInterface, int64_t frame) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(logUtil, java_concat("Start - Processing at: ", ImageActionScriptOutputInterface_toString(imageActionScriptOutputInterface)), "ImageActionScriptOutputProcessor", commonStrings->PROCESS);
        ImageTypes* imageTypes = ImageActionScriptOutputInterface_getImageTypes(imageActionScriptOutputInterface);
        BasicArrayList* vector = ImageTypes_getVector(imageTypes);
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            InputImageType* imageType = ((InputImageType*) BasicArrayList_get(vector, index));
            ImageIOInterface* imageIOInterface = InputImageIOInterfaceFactory_getInstance(imageType);
            ImageIOInterface_save(imageIOInterface, frame);
        }
}

