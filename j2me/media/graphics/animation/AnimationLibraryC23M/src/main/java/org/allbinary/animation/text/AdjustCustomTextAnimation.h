#ifndef ORG_ALLBINARY_ANIMATION_TEXT_ADJUSTCUSTOMTEXTANIMATION_H
#define ORG_ALLBINARY_ANIMATION_TEXT_ADJUSTCUSTOMTEXTANIMATION_H
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
typedef struct Graphics Graphics;
typedef struct AnimationBehavior AnimationBehavior;
#include "org/allbinary/animation/text/CustomTextAnimation.h"

typedef struct AdjustCustomTextAnimation AdjustCustomTextAnimation;
struct AdjustCustomTextAnimation {
    CustomTextAnimation base;
    int32_t dx;
    int32_t dy;
};


AdjustCustomTextAnimation* AdjustCustomTextAnimation_new(const char* text, int32_t fontSize, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AdjustCustomTextAnimation_init(AdjustCustomTextAnimation* this, const char* text, int32_t fontSize, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

int32_t AdjustCustomTextAnimation_getDx(AdjustCustomTextAnimation* this);

void AdjustCustomTextAnimation_setDx(AdjustCustomTextAnimation* this, int32_t dx);

int32_t AdjustCustomTextAnimation_getDy(AdjustCustomTextAnimation* this);

void AdjustCustomTextAnimation_setDy(AdjustCustomTextAnimation* this, int32_t dy);

void AdjustCustomTextAnimation_paintXY(AdjustCustomTextAnimation* this, Graphics* graphics, int32_t x, int32_t y);
#define AdjustCustomTextAnimation_new5 AdjustCustomTextAnimation_new
#define AdjustCustomTextAnimation_init5 AdjustCustomTextAnimation_init
#ifndef AdjustCustomTextAnimation_setScale
#define AdjustCustomTextAnimation_setScale CustomTextAnimation_setScale
#endif
#ifndef AdjustCustomTextAnimation_setTextWithOnMeasure
#define AdjustCustomTextAnimation_setTextWithOnMeasure CustomTextAnimation_setTextWithOnMeasure
#endif
#ifndef AdjustCustomTextAnimation_setText
#define AdjustCustomTextAnimation_setText CustomTextAnimation_setText
#endif
#ifndef AdjustCustomTextAnimation_getText
#define AdjustCustomTextAnimation_getText CustomTextAnimation_getText
#endif
#ifndef AdjustCustomTextAnimation_getWidth
#define AdjustCustomTextAnimation_getWidth CustomTextAnimation_getWidth
#endif
#ifndef AdjustCustomTextAnimation_getFontHeight
#define AdjustCustomTextAnimation_getFontHeight CustomTextAnimation_getFontHeight
#endif
#ifndef AdjustCustomTextAnimation_updateMeasurement
#define AdjustCustomTextAnimation_updateMeasurement TextAnimation_updateMeasurement
#endif
#ifndef AdjustCustomTextAnimation_nextFrame
#define AdjustCustomTextAnimation_nextFrame TextAnimation_nextFrame
#endif
#ifndef AdjustCustomTextAnimation_paintXYNoUpdate
#define AdjustCustomTextAnimation_paintXYNoUpdate TextAnimation_paintXYNoUpdate
#endif
#ifndef AdjustCustomTextAnimation_setTextWithOnMeasure
#define AdjustCustomTextAnimation_setTextWithOnMeasure TextAnimation_setTextWithOnMeasure
#endif
#ifndef AdjustCustomTextAnimation_setText
#define AdjustCustomTextAnimation_setText TextAnimation_setText
#endif
#ifndef AdjustCustomTextAnimation_getTextArray
#define AdjustCustomTextAnimation_getTextArray TextAnimation_getTextArray
#endif
#ifndef AdjustCustomTextAnimation_getFontHeight
#define AdjustCustomTextAnimation_getFontHeight TextAnimation_getFontHeight
#endif
#ifndef AdjustCustomTextAnimation_getAnimationBehavior
#define AdjustCustomTextAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef AdjustCustomTextAnimation_reset
#define AdjustCustomTextAnimation_reset IndexedAnimation_reset
#endif
#ifndef AdjustCustomTextAnimation_setFrame
#define AdjustCustomTextAnimation_setFrame IndexedAnimation_setFrame
#endif
#ifndef AdjustCustomTextAnimation_getFrame
#define AdjustCustomTextAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef AdjustCustomTextAnimation_getAnimationSize
#define AdjustCustomTextAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef AdjustCustomTextAnimation_getSize
#define AdjustCustomTextAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef AdjustCustomTextAnimation_previousFrame
#define AdjustCustomTextAnimation_previousFrame IndexedAnimation_previousFrame
#endif
#ifndef AdjustCustomTextAnimation_isLastFrame
#define AdjustCustomTextAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef AdjustCustomTextAnimation_setSequence
#define AdjustCustomTextAnimation_setSequence IndexedAnimation_setSequence
#endif
#ifndef AdjustCustomTextAnimation_getSequence
#define AdjustCustomTextAnimation_getSequence IndexedAnimation_getSequence
#endif
#ifndef AdjustCustomTextAnimation_setState
#define AdjustCustomTextAnimation_setState IndexedAnimation_setState
#endif
#ifndef AdjustCustomTextAnimation_getWidth
#define AdjustCustomTextAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef AdjustCustomTextAnimation_getHeight
#define AdjustCustomTextAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef AdjustCustomTextAnimation_setAlpha
#define AdjustCustomTextAnimation_setAlpha Animation_setAlpha
#endif
#ifndef AdjustCustomTextAnimation_nextFrame
#define AdjustCustomTextAnimation_nextFrame Animation_nextFrame
#endif
#ifndef AdjustCustomTextAnimation_paintThreedXYZ
#define AdjustCustomTextAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef AdjustCustomTextAnimation_isThreed
#define AdjustCustomTextAnimation_isThreed Animation_isThreed
#endif
#ifndef AdjustCustomTextAnimation_getBasicColorP
#define AdjustCustomTextAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef AdjustCustomTextAnimation_setBasicColorP
#define AdjustCustomTextAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef AdjustCustomTextAnimation_setBackgroundBasicColorP
#define AdjustCustomTextAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef AdjustCustomTextAnimation_getChangeBasicColor
#define AdjustCustomTextAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef AdjustCustomTextAnimation_changeBasicColor
#define AdjustCustomTextAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef AdjustCustomTextAnimation_getChangeColor
#define AdjustCustomTextAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef AdjustCustomTextAnimation_getColor
#define AdjustCustomTextAnimation_getColor Animation_getColor
#endif
#ifndef AdjustCustomTextAnimation_setScale
#define AdjustCustomTextAnimation_setScale Animation_setScale
#endif
#ifndef AdjustCustomTextAnimation_setMaxScale
#define AdjustCustomTextAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef AdjustCustomTextAnimation_set
#define AdjustCustomTextAnimation_set Animation_set
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AdjustCustomTextAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AdjustCustomTextAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_TEXT_ADJUSTCUSTOMTEXTANIMATION_H
