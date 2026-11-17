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
// package org.allbinary.animation.text

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/TextField.h"
#include "org/allbinary/graphics/form/item/CustomTextBox.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/game/canvas/ABToGBUtil.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/ScaleProperties.h"

typedef struct CustomTextBoxIndexedAnimationFactory CustomTextBoxIndexedAnimationFactory;
struct CustomTextBoxIndexedAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    LogUtil* logUtil;
    ScaleProperties* scaleProperties;
    int32_t maxLength;
};


CustomTextBoxIndexedAnimationFactory* CustomTextBoxIndexedAnimationFactory_new(int32_t fontSize, int32_t maxLength);

void CustomTextBoxIndexedAnimationFactory_init(CustomTextBoxIndexedAnimationFactory* this, int32_t fontSize, int32_t maxLength);
Animation* CustomTextBoxIndexedAnimationFactory_getInstance(CustomTextBoxIndexedAnimationFactory* this, int32_t instanceId);
void CustomTextBoxIndexedAnimationFactory_setInitialScale(CustomTextBoxIndexedAnimationFactory* this, ScaleProperties* scaleProperties);

static void CustomTextBoxIndexedAnimationFactory_initFields(CustomTextBoxIndexedAnimationFactory* this) {
    this->logUtil = LogUtil_getInstance();
    
    
}


void CustomTextBoxIndexedAnimationFactory_init(CustomTextBoxIndexedAnimationFactory* this, int32_t fontSize, int32_t maxLength) {
    CustomTextBoxIndexedAnimationFactory_initFields(this);
        this->scaleProperties = ScaleProperties_new();
        this->scaleProperties->scaleHeight = fontSize;
        this->maxLength = maxLength;
}

CustomTextBoxIndexedAnimationFactory* CustomTextBoxIndexedAnimationFactory_new(int32_t fontSize, int32_t maxLength) {
    CustomTextBoxIndexedAnimationFactory* this = calloc(1, sizeof(CustomTextBoxIndexedAnimationFactory));
    CustomTextBoxIndexedAnimationFactory_init(this, fontSize, maxLength);
    return this;
}


// throws Exception
Animation* CustomTextBoxIndexedAnimationFactory_getInstance(CustomTextBoxIndexedAnimationFactory* this, int32_t instanceId) {
        ABToGBUtil* abToGBUtil = ABToGBUtil_getInstance();
        AllBinaryGameCanvas* abCanvas = ((AllBinaryGameCanvas*) abToGBUtil->abCanvas);
        Font* font = Font_getFont(Font_FACE_SYSTEM, Font_STYLE_PLAIN, this->scaleProperties->scaleHeight);
        CustomTextBox* customTextBox = CustomTextBox2_new(AllBinaryGameCanvas_getCustomCommandListener(abCanvas), StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING, this->maxLength, TextField_ANY, font, JAVA_CALL(AllBinaryGameCanvas_getLayerManager(abCanvas), getBackgroundBasicColor), JAVA_CALL(AllBinaryGameCanvas_getLayerManager(abCanvas), getForegroundBasicColor));
        return CustomTextBoxIndexedAnimation_new(customTextBox);
}


void CustomTextBoxIndexedAnimationFactory_setInitialScale(CustomTextBoxIndexedAnimationFactory* this, ScaleProperties* scaleProperties) {
        int32_t fontSize = this->scaleProperties->scaleHeight;
        this->scaleProperties = scaleProperties;
        if (this->scaleProperties->scaleHeight < 6) {
            this->scaleProperties->scaleHeight = fontSize;
        }
}

