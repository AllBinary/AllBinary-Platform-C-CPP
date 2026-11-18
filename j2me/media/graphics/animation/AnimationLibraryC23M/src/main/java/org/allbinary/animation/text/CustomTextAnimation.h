#ifndef ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATION_H
#define ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATION_H
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
// package org.allbinary.animation.text

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct TextAnimation TextAnimation;
typedef struct TextInterface TextInterface;
typedef struct TextChangeListener TextChangeListener;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct FontDebugFactory FontDebugFactory;
typedef struct StringUtil StringUtil;
#if __has_include("javax/microedition/lcdui/Font.h")
#include "javax/microedition/lcdui/Font.h"
#endif
#if __has_include("org/allbinary/graphics/font/FontDebugFactory.h")
#include "org/allbinary/graphics/font/FontDebugFactory.h"
#endif
#include "org/allbinary/animation/text/TextAnimation.h"
#include "org/allbinary/animation/text/TextInterface.h"

typedef struct CustomTextAnimation CustomTextAnimation;
struct CustomTextAnimation {
    TextAnimation base;
    TextInterface TextInterface_interface;
    FontDebugFactory* fontDebugFactory;
    int32_t fontSize;
    Font* font;
    const char* lastText;
    bool hasChanged;
    int32_t textWidth;
};


CustomTextAnimation* CustomTextAnimation_new(const char* text, int32_t fontSize, AnimationBehavior* animationBehavior);

void CustomTextAnimation_init(CustomTextAnimation* this, const char* text, int32_t fontSize, AnimationBehavior* animationBehavior);

void CustomTextAnimation_paintXY(CustomTextAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void CustomTextAnimation_setScale(CustomTextAnimation* this, float scaleX, float scaleY);

void CustomTextAnimation_setTextWithOnMeasure(CustomTextAnimation* this, const char* text, TextChangeListener* textChangeListener);

void CustomTextAnimation_setText(CustomTextAnimation* this, const char* text);

const char* CustomTextAnimation_getText(CustomTextAnimation* this);

int32_t CustomTextAnimation_getWidth(CustomTextAnimation* this);

int32_t CustomTextAnimation_getFontHeight(CustomTextAnimation* this);
#define CustomTextAnimation_new3 CustomTextAnimation_new
#define CustomTextAnimation_init3 CustomTextAnimation_init
#ifndef CustomTextAnimation_updateMeasurement
#define CustomTextAnimation_updateMeasurement TextAnimation_updateMeasurement
#endif
#ifndef CustomTextAnimation_nextFrame
#define CustomTextAnimation_nextFrame TextAnimation_nextFrame
#endif
#ifndef CustomTextAnimation_paintXYNoUpdate
#define CustomTextAnimation_paintXYNoUpdate TextAnimation_paintXYNoUpdate
#endif
#ifndef CustomTextAnimation_getTextArray
#define CustomTextAnimation_getTextArray TextAnimation_getTextArray
#endif
#ifndef CustomTextAnimation_getAnimationBehavior
#define CustomTextAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef CustomTextAnimation_reset
#define CustomTextAnimation_reset IndexedAnimation_reset
#endif
#ifndef CustomTextAnimation_setFrame
#define CustomTextAnimation_setFrame IndexedAnimation_setFrame
#endif
#ifndef CustomTextAnimation_getFrame
#define CustomTextAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef CustomTextAnimation_getAnimationSize
#define CustomTextAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef CustomTextAnimation_getSize
#define CustomTextAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef CustomTextAnimation_previousFrame
#define CustomTextAnimation_previousFrame IndexedAnimation_previousFrame
#endif
#ifndef CustomTextAnimation_isLastFrame
#define CustomTextAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef CustomTextAnimation_setSequence
#define CustomTextAnimation_setSequence IndexedAnimation_setSequence
#endif
#ifndef CustomTextAnimation_getSequence
#define CustomTextAnimation_getSequence IndexedAnimation_getSequence
#endif
#ifndef CustomTextAnimation_setState
#define CustomTextAnimation_setState IndexedAnimation_setState
#endif
#ifndef CustomTextAnimation_getHeight
#define CustomTextAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef CustomTextAnimation_setAlpha
#define CustomTextAnimation_setAlpha Animation_setAlpha
#endif
#ifndef CustomTextAnimation_nextFrame
#define CustomTextAnimation_nextFrame Animation_nextFrame
#endif
#ifndef CustomTextAnimation_paintThreedXYZ
#define CustomTextAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef CustomTextAnimation_isThreed
#define CustomTextAnimation_isThreed Animation_isThreed
#endif
#ifndef CustomTextAnimation_getBasicColorP
#define CustomTextAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef CustomTextAnimation_setBasicColorP
#define CustomTextAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef CustomTextAnimation_setBackgroundBasicColorP
#define CustomTextAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef CustomTextAnimation_getChangeBasicColor
#define CustomTextAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef CustomTextAnimation_changeBasicColor
#define CustomTextAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef CustomTextAnimation_getChangeColor
#define CustomTextAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef CustomTextAnimation_getColor
#define CustomTextAnimation_getColor Animation_getColor
#endif
#ifndef CustomTextAnimation_setMaxScale
#define CustomTextAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef CustomTextAnimation_set
#define CustomTextAnimation_set Animation_set
#endif
#ifndef CustomTextAnimation_setDx
#define CustomTextAnimation_setDx Animation_setDx
#endif
#ifndef CustomTextAnimation_getDx
#define CustomTextAnimation_getDx Animation_getDx
#endif
#ifndef CustomTextAnimation_setDy
#define CustomTextAnimation_setDy Animation_setDy
#endif
#ifndef CustomTextAnimation_getDy
#define CustomTextAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CustomTextAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CustomTextAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATION_H
