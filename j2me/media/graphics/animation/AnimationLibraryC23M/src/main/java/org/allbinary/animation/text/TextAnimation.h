#ifndef ORG_ALLBINARY_ANIMATION_TEXT_TEXTANIMATION_H
#define ORG_ALLBINARY_ANIMATION_TEXT_TEXTANIMATION_H
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
typedef struct TextChangeListener TextChangeListener;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct IndexedAnimation IndexedAnimation;
typedef struct Anchor Anchor;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct SWTJOGLProcessor SWTJOGLProcessor;
typedef struct StringUtil StringUtil;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "org/allbinary/animation/IndexedAnimation.h"
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
// #include "org/allbinary/logic/string/StringMaker.h"
#if __has_include("org/allbinary/animation/text/TextChangeListener.h")
#include "org/allbinary/animation/text/TextChangeListener.h"
#endif

typedef struct TextAnimation TextAnimation;
struct TextAnimation {
    IndexedAnimation base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    const char** textArrayP;
    int32_t anchor;
    int32_t fontHeight;
    int32_t offsetY;
    TextChangeListener* textChangeListener;
};


TextAnimation* TextAnimation_new(const char* text, AnimationBehavior* animationBehavior);

void TextAnimation_init(TextAnimation* this, const char* text, AnimationBehavior* animationBehavior);

void TextAnimation_updateMeasurement(TextAnimation* this, Graphics* graphics);

void TextAnimation_nextFrame(TextAnimation* this);

void TextAnimation_paintXY(TextAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void TextAnimation_paintXYNoUpdate(TextAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void TextAnimation_setTextWithOnMeasure(TextAnimation* this, const char* text, TextChangeListener* textChangeListener);

void TextAnimation_setText(TextAnimation* this, const char* text);

const char** TextAnimation_getTextArray(TextAnimation* this);

int32_t TextAnimation_getFontHeight(TextAnimation* this);
#define TextAnimation_new2 TextAnimation_new
#define TextAnimation_init2 TextAnimation_init
#ifndef TextAnimation_getAnimationBehavior
#define TextAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef TextAnimation_reset
#define TextAnimation_reset IndexedAnimation_reset
#endif
#ifndef TextAnimation_setFrame
#define TextAnimation_setFrame IndexedAnimation_setFrame
#endif
#ifndef TextAnimation_getFrame
#define TextAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef TextAnimation_getAnimationSize
#define TextAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef TextAnimation_getSize
#define TextAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef TextAnimation_previousFrame
#define TextAnimation_previousFrame IndexedAnimation_previousFrame
#endif
#ifndef TextAnimation_isLastFrame
#define TextAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef TextAnimation_setSequence
#define TextAnimation_setSequence IndexedAnimation_setSequence
#endif
#ifndef TextAnimation_getSequence
#define TextAnimation_getSequence IndexedAnimation_getSequence
#endif
#ifndef TextAnimation_setState
#define TextAnimation_setState IndexedAnimation_setState
#endif
#ifndef TextAnimation_getWidth
#define TextAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef TextAnimation_getHeight
#define TextAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef TextAnimation_setAlpha
#define TextAnimation_setAlpha Animation_setAlpha
#endif
#ifndef TextAnimation_paintThreedXYZ
#define TextAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef TextAnimation_isThreed
#define TextAnimation_isThreed Animation_isThreed
#endif
#ifndef TextAnimation_getBasicColorP
#define TextAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef TextAnimation_setBasicColorP
#define TextAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef TextAnimation_setBackgroundBasicColorP
#define TextAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef TextAnimation_getChangeBasicColor
#define TextAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef TextAnimation_changeBasicColor
#define TextAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef TextAnimation_getChangeColor
#define TextAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef TextAnimation_getColor
#define TextAnimation_getColor Animation_getColor
#endif
#ifndef TextAnimation_setScale
#define TextAnimation_setScale Animation_setScale
#endif
#ifndef TextAnimation_setMaxScale
#define TextAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef TextAnimation_set
#define TextAnimation_set Animation_set
#endif
#ifndef TextAnimation_setDx
#define TextAnimation_setDx Animation_setDx
#endif
#ifndef TextAnimation_getDx
#define TextAnimation_getDx Animation_getDx
#endif
#ifndef TextAnimation_setDy
#define TextAnimation_setDy Animation_setDy
#endif
#ifndef TextAnimation_getDy
#define TextAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TextAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TextAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_TEXT_TEXTANIMATION_H
