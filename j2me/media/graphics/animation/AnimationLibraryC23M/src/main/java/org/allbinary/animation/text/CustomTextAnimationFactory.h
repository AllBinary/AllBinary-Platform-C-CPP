#ifndef ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATIONFACTORY_H
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
typedef struct CustomTextAnimation CustomTextAnimation;
typedef struct AdjustCustomTextAnimation AdjustCustomTextAnimation;
typedef struct Font Font;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct LogUtil LogUtil;
typedef struct ScaleProperties ScaleProperties;
#if __has_include("javax/microedition/lcdui/Font.h")
#include "javax/microedition/lcdui/Font.h"
#endif
#if __has_include("org/allbinary/animation/AnimationBehaviorFactory.h")
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#endif
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/media/ScaleProperties.h")
#include "org/allbinary/media/ScaleProperties.h"
#endif

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
#define CustomTextAnimationFactory_new3 CustomTextAnimationFactory_new
#define CustomTextAnimationFactory_init3 CustomTextAnimationFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CustomTextAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CustomTextAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATIONFACTORY_H
