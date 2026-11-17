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
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/media/ScaleProperties.h"

typedef struct CustomTextAnimationFactory CustomTextAnimationFactory;
struct CustomTextAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    LogUtil* logUtil;
    AnimationBehaviorFactory* animationBehaviorFactory;
    BasicColor* basicColor;
    const char* text;
    int32_t initScaleHeight;
    int32_t dx;
    int32_t dy;
    Font* font;
    ScaleProperties* scaleProperties;
};


CustomTextAnimationFactory* CustomTextAnimationFactory_new(const char* text, int32_t fontSize, AnimationBehaviorFactory* animationBehaviorFactory);
CustomTextAnimationFactory* CustomTextAnimationFactory_createDXY(const char* text, int32_t fontSize, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

void CustomTextAnimationFactory_init(CustomTextAnimationFactory* this, const char* text, int32_t fontSize, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* CustomTextAnimationFactory_getInstance(CustomTextAnimationFactory* this, int32_t instanceId);
void CustomTextAnimationFactory_setInitialScale(CustomTextAnimationFactory* this, ScaleProperties* scaleProperties);
int32_t CustomTextAnimationFactory_getWidth(CustomTextAnimationFactory* this);
int32_t CustomTextAnimationFactory_getHeight(CustomTextAnimationFactory* this);

static void CustomTextAnimationFactory_initFields(CustomTextAnimationFactory* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->basicColor = BasicColorFactory_getInstance()->BLACK;
    
    
    this->dx = 0;
    this->dy = 0;
    
    
}


CustomTextAnimationFactory* CustomTextAnimationFactory_createDXY(const char* text, int32_t fontSize, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
        CustomTextAnimationFactory* customTextAnimationFactory = CustomTextAnimationFactory_new(text, fontSize, animationBehaviorFactory);
        customTextAnimationFactory->dx = dx;
        customTextAnimationFactory->dy = dy;
        return customTextAnimationFactory;
}


void CustomTextAnimationFactory_init(CustomTextAnimationFactory* this, const char* text, int32_t fontSize, AnimationBehaviorFactory* animationBehaviorFactory) {
    CustomTextAnimationFactory_initFields(this);
        this->scaleProperties = ScaleProperties_new();
        this->text = text;
        this->scaleProperties->scaleHeight = fontSize - (fontSize / 4);
        this->initScaleHeight = this->scaleProperties->scaleHeight;
        this->animationBehaviorFactory = animationBehaviorFactory;
        this->font = Font_getFont(Font_FACE_SYSTEM, Font_STYLE_PLAIN, this->initScaleHeight);
}

CustomTextAnimationFactory* CustomTextAnimationFactory_new(const char* text, int32_t fontSize, AnimationBehaviorFactory* animationBehaviorFactory) {
    CustomTextAnimationFactory* this = calloc(1, sizeof(CustomTextAnimationFactory));
    CustomTextAnimationFactory_init(this, text, fontSize, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* CustomTextAnimationFactory_getInstance(CustomTextAnimationFactory* this, int32_t instanceId) {
        CustomTextAnimation* customTextAnimation = nullptr;
        if (this->dx != 0 || this->dy != 0) {
            customTextAnimation = AdjustCustomTextAnimation_new(this->text, this->scaleProperties->scaleHeight, this->dx, this->dy, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        } else {
            customTextAnimation = CustomTextAnimation_new(this->text, this->scaleProperties->scaleHeight, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        }
        CustomTextAnimation_setBasicColorP(customTextAnimation, this->basicColor);
        return customTextAnimation;
}


void CustomTextAnimationFactory_setInitialScale(CustomTextAnimationFactory* this, ScaleProperties* scaleProperties) {
}


int32_t CustomTextAnimationFactory_getWidth(CustomTextAnimationFactory* this) {
        return Font_stringWidth(this->font, this->text);
}


int32_t CustomTextAnimationFactory_getHeight(CustomTextAnimationFactory* this) {
        return Font_getHeight(this->font);
}

