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
// package org.allbinary.input.media.image.capture

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
#include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/media/image/cache/BufferedImageFrameCacheable.h"
#include "org/allbinary/media/image/io/ImageIOInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct CapturedImageInputOutput CapturedImageInputOutput;
struct CapturedImageInputOutput {
    ImageIOInterface ImageIOInterface_interface;
    LogUtil* logUtil;
};


CapturedImageInputOutput* CapturedImageInputOutput_new(void);
void CapturedImageInputOutput_save(CapturedImageInputOutput* this, int64_t frame);
void CapturedImageInputOutput_save(CapturedImageInputOutput* this, BufferedImage* bufferedImage, int64_t frame);

static void CapturedImageInputOutput_initFields(CapturedImageInputOutput* this) {
    this->logUtil = LogUtil_getInstance();
}

void CapturedImageInputOutput_init(CapturedImageInputOutput* this) {
    CapturedImageInputOutput_initFields(this);
}

CapturedImageInputOutput* CapturedImageInputOutput_new(void) {
    CapturedImageInputOutput* this = calloc(1, sizeof(CapturedImageInputOutput));
    CapturedImageInputOutput_init(this);
    return this;
}


// throws Exception
void CapturedImageInputOutput_save(CapturedImageInputOutput* this, int64_t frame) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        BufferedImageFrameCacheable* capturedBufferedImageCacheable = (((BufferedImageFrameCacheable*) AutomaticCacheInterface_get((((AutomaticCacheInterface*) CapturedBufferedImagesCacheSingleton_getInstance())), frame)));
        LogUtil_putF(this->logUtil, (java_concat("Saving: ", BufferedImageFrameCacheable_toString(capturedBufferedImageCacheable))), this, commonStrings->SAVE);
        CapturedImageInputOutput_save(this, BufferedImageFrameCacheable_getBufferedImage(capturedBufferedImageCacheable), frame);
}


// Java overloaded method: C needs a different name
void CapturedImageInputOutput_save(CapturedImageInputOutput* this, BufferedImage* bufferedImage, int64_t frame) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        ImageUtil* imageUtil = ImageUtil_getInstance();
        StringMaker* filePathStringBuffer = StringMaker_new();
        StringMaker_append(filePathStringBuffer, ImageOutputData_SAVE_PATH);
        StringMaker_append(filePathStringBuffer, LongUtil_fillIn(Long_toString(frame)));
        StringMaker_append(filePathStringBuffer, JAVA_CALL(MediaDataFactory_getInstance()->JPG, getExtension));
        const char* filePath = StringMaker_toString(filePathStringBuffer);
        LogUtil_putF(this->logUtil, (java_concat(java_concat("Image File Path: ", filePath), ImageUtil_toString(imageUtil, bufferedImage))), this, commonStrings->SAVE);
        ImagePersistanceUtil* imagePersistanceUtil = ImagePersistanceUtil_getInstance();
        ImagePersistanceUtil_saveWithImageIO(imagePersistanceUtil, filePath, bufferedImage);
}

