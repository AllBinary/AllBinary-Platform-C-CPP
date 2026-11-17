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
// package org.allbinary.animation.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/media/image/ImageScaleUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/animation/image/ScaleBaseProcessor.h"

typedef struct ScaleProcessor ScaleProcessor;
struct ScaleProcessor {
    ScaleBaseProcessor base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ImageScaleUtil* imageScaleUtil;
};

static ScaleProcessor* ScaleProcessor_instanceC;

ScaleProcessor* ScaleProcessor_new(void);
ScaleBaseProcessor* ScaleProcessor_getInstance(void);
void ScaleProcessor_update(ScaleProcessor* this, Image* originalImage, Image** originalImageArray, Image** ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY);

// Static fields with runtime initializers: call this once at startup
void ScaleProcessor_staticInit(void) {
    ScaleProcessor_instanceC = ScaleProcessor_new();
}

static void ScaleProcessor_initFields(ScaleProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->imageScaleUtil = ImageScaleUtil_getInstance();
}

void ScaleProcessor_init(ScaleProcessor* this) {
    ScaleBaseProcessor_init(&this->base);
    ScaleProcessor_initFields(this);
}

ScaleProcessor* ScaleProcessor_new(void) {
    ScaleProcessor* this = calloc(1, sizeof(ScaleProcessor));
    ScaleProcessor_init(this);
    return this;
}


ScaleBaseProcessor* ScaleProcessor_getInstance(void) {
        return ScaleProcessor_instanceC;
}


void ScaleProcessor_update(ScaleProcessor* this, Image* originalImage, Image** originalImageArray, Image** ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY) {
        JAVA_TRY {
            ImageScaleUtil_scale2(this->imageScaleUtil, originalImage, originalImageArray, ximageToShowArray, unused, scaleX, scaleY, maxScaleX, maxScaleY);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->UPDATE, e);
        } JAVA_END_TRY;
}

