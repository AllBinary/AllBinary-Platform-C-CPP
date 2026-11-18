#ifndef ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATIONFACTORY_H
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
typedef struct CustomTextBox2 CustomTextBox2;
typedef struct CustomTextBoxIndexedAnimation CustomTextBoxIndexedAnimation;
typedef struct Font Font;
typedef struct TextField TextField;
typedef struct CustomTextBox CustomTextBox;
typedef struct Animation Animation;
typedef struct AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface;
typedef struct ABToGBUtil ABToGBUtil;
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct LogUtil LogUtil;
typedef struct StringUtil StringUtil;
typedef struct ScaleProperties ScaleProperties;
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
// #include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/media/ScaleProperties.h")
#include "org/allbinary/media/ScaleProperties.h"
#endif

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
#define CustomTextBoxIndexedAnimationFactory_new2 CustomTextBoxIndexedAnimationFactory_new
#define CustomTextBoxIndexedAnimationFactory_init2 CustomTextBoxIndexedAnimationFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CustomTextBoxIndexedAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CustomTextBoxIndexedAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATIONFACTORY_H
