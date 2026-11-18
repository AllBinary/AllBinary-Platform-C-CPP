#ifndef ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATION_H
#define ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATION_H
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
typedef struct TextInterface TextInterface;
typedef struct TextChangeListener TextChangeListener;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct IndexedAnimation IndexedAnimation;
typedef struct RawKeyEventListener RawKeyEventListener;
typedef struct BasicColor BasicColor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct CustomTextBox CustomTextBox;
typedef struct StringUtil StringUtil;
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/game/input/event/RawKeyEventListener.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#if __has_include("org/allbinary/graphics/form/item/CustomTextBox.h")
#include "org/allbinary/graphics/form/item/CustomTextBox.h"
#endif
#include "org/allbinary/animation/text/TextInterface.h"
#if __has_include("org/allbinary/animation/text/TextChangeListener.h")
#include "org/allbinary/animation/text/TextChangeListener.h"
#endif

typedef struct CustomTextBoxIndexedAnimation CustomTextBoxIndexedAnimation;
struct CustomTextBoxIndexedAnimation {
    IndexedAnimation base;
    RawKeyEventListener RawKeyEventListener_interface;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    TextInterface TextInterface_interface;
    CustomTextBox* customTextBox;
    const char* lastText;
    bool hasChanged;
    TextChangeListener* textChangeListener;
};


CustomTextBoxIndexedAnimation* CustomTextBoxIndexedAnimation_new(CustomTextBox* customTextBox);

void CustomTextBoxIndexedAnimation_init(CustomTextBoxIndexedAnimation* this, CustomTextBox* customTextBox);

void CustomTextBoxIndexedAnimation_setBasicColorP(CustomTextBoxIndexedAnimation* this, BasicColor* basicColor);

void CustomTextBoxIndexedAnimation_setBackgroundBasicColorP(CustomTextBoxIndexedAnimation* this, BasicColor* basicColor);

void CustomTextBoxIndexedAnimation_setTextWithOnMeasure(CustomTextBoxIndexedAnimation* this, const char* text, TextChangeListener* textChangeListener);

void CustomTextBoxIndexedAnimation_updateMeasurement(CustomTextBoxIndexedAnimation* this, Graphics* graphics);

void CustomTextBoxIndexedAnimation_setText(CustomTextBoxIndexedAnimation* this, const char* text);

const char* CustomTextBoxIndexedAnimation_getText(CustomTextBoxIndexedAnimation* this);

void CustomTextBoxIndexedAnimation_onEventRaw(CustomTextBoxIndexedAnimation* this, int32_t keyCode, int32_t deviceId, bool repeated);

int32_t CustomTextBoxIndexedAnimation_getFontHeight(CustomTextBoxIndexedAnimation* this);

void CustomTextBoxIndexedAnimation_paintXY(CustomTextBoxIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void CustomTextBoxIndexedAnimation_paintThreedXYZ(CustomTextBoxIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);

int32_t CustomTextBoxIndexedAnimation_getWidth(CustomTextBoxIndexedAnimation* this);
#define CustomTextBoxIndexedAnimation_new1 CustomTextBoxIndexedAnimation_new
#define CustomTextBoxIndexedAnimation_init1 CustomTextBoxIndexedAnimation_init
#ifndef CustomTextBoxIndexedAnimation_getAnimationBehavior
#define CustomTextBoxIndexedAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef CustomTextBoxIndexedAnimation_reset
#define CustomTextBoxIndexedAnimation_reset IndexedAnimation_reset
#endif
#ifndef CustomTextBoxIndexedAnimation_setFrame
#define CustomTextBoxIndexedAnimation_setFrame IndexedAnimation_setFrame
#endif
#ifndef CustomTextBoxIndexedAnimation_getFrame
#define CustomTextBoxIndexedAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef CustomTextBoxIndexedAnimation_getAnimationSize
#define CustomTextBoxIndexedAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef CustomTextBoxIndexedAnimation_getSize
#define CustomTextBoxIndexedAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef CustomTextBoxIndexedAnimation_previousFrame
#define CustomTextBoxIndexedAnimation_previousFrame IndexedAnimation_previousFrame
#endif
#ifndef CustomTextBoxIndexedAnimation_isLastFrame
#define CustomTextBoxIndexedAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef CustomTextBoxIndexedAnimation_setSequence
#define CustomTextBoxIndexedAnimation_setSequence IndexedAnimation_setSequence
#endif
#ifndef CustomTextBoxIndexedAnimation_getSequence
#define CustomTextBoxIndexedAnimation_getSequence IndexedAnimation_getSequence
#endif
#ifndef CustomTextBoxIndexedAnimation_setState
#define CustomTextBoxIndexedAnimation_setState IndexedAnimation_setState
#endif
#ifndef CustomTextBoxIndexedAnimation_getHeight
#define CustomTextBoxIndexedAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef CustomTextBoxIndexedAnimation_setAlpha
#define CustomTextBoxIndexedAnimation_setAlpha Animation_setAlpha
#endif
#ifndef CustomTextBoxIndexedAnimation_nextFrame
#define CustomTextBoxIndexedAnimation_nextFrame Animation_nextFrame
#endif
#ifndef CustomTextBoxIndexedAnimation_isThreed
#define CustomTextBoxIndexedAnimation_isThreed Animation_isThreed
#endif
#ifndef CustomTextBoxIndexedAnimation_getBasicColorP
#define CustomTextBoxIndexedAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef CustomTextBoxIndexedAnimation_getChangeBasicColor
#define CustomTextBoxIndexedAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef CustomTextBoxIndexedAnimation_changeBasicColor
#define CustomTextBoxIndexedAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef CustomTextBoxIndexedAnimation_getChangeColor
#define CustomTextBoxIndexedAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef CustomTextBoxIndexedAnimation_getColor
#define CustomTextBoxIndexedAnimation_getColor Animation_getColor
#endif
#ifndef CustomTextBoxIndexedAnimation_setScale
#define CustomTextBoxIndexedAnimation_setScale Animation_setScale
#endif
#ifndef CustomTextBoxIndexedAnimation_setMaxScale
#define CustomTextBoxIndexedAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef CustomTextBoxIndexedAnimation_set
#define CustomTextBoxIndexedAnimation_set Animation_set
#endif
#ifndef CustomTextBoxIndexedAnimation_setDx
#define CustomTextBoxIndexedAnimation_setDx Animation_setDx
#endif
#ifndef CustomTextBoxIndexedAnimation_getDx
#define CustomTextBoxIndexedAnimation_getDx Animation_getDx
#endif
#ifndef CustomTextBoxIndexedAnimation_setDy
#define CustomTextBoxIndexedAnimation_setDy Animation_setDy
#endif
#ifndef CustomTextBoxIndexedAnimation_getDy
#define CustomTextBoxIndexedAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CustomTextBoxIndexedAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CustomTextBoxIndexedAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATION_H
