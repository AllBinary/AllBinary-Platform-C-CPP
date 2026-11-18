#ifndef ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATIONHELPER_H
#define ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATIONHELPER_H
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
// package org.allbinary.animation.caption

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CaptionAnimationHelperBase CaptionAnimationHelperBase;
typedef struct CaptionAnimation CaptionAnimation;
typedef struct Graphics Graphics;
typedef struct Animation Animation;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct NullAnimationFactory NullAnimationFactory;
typedef struct TextAnimation TextAnimation;
typedef struct BasicColor BasicColor;
typedef struct StringUtil StringUtil;
typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
typedef struct TimeDelayHelper TimeDelayHelper;
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/animation/text/TextAnimation.h")
#include "org/allbinary/animation/text/TextAnimation.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#include "org/allbinary/animation/caption/CaptionAnimationHelperBase.h"

typedef struct CaptionAnimationHelper CaptionAnimationHelper;
struct CaptionAnimationHelper {
    CaptionAnimationHelperBase base;
    TimeDelayHelper* timeHelper;
    TextAnimation* textAnimation;
    Animation* captionAnimation;
    Animation* animation;
};


CaptionAnimationHelper* CaptionAnimationHelper_new(Animation* captionAnimation, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy);

void CaptionAnimationHelper_init(CaptionAnimationHelper* this, Animation* captionAnimation, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy);

bool CaptionAnimationHelper_isShowing(CaptionAnimationHelper* this);

void CaptionAnimationHelper_tick(CaptionAnimationHelper* this);

void CaptionAnimationHelper_update(CaptionAnimationHelper* this, const char* message, BasicColor* basicColor);

void CaptionAnimationHelper_paintXY(CaptionAnimationHelper* this, Graphics* graphics, int32_t x, int32_t y);
#define CaptionAnimationHelper_new5 CaptionAnimationHelper_new
#define CaptionAnimationHelper_init5 CaptionAnimationHelper_init
#ifndef CaptionAnimationHelper_setAlpha
#define CaptionAnimationHelper_setAlpha Animation_setAlpha
#endif
#ifndef CaptionAnimationHelper_nextFrame
#define CaptionAnimationHelper_nextFrame Animation_nextFrame
#endif
#ifndef CaptionAnimationHelper_paintThreedXYZ
#define CaptionAnimationHelper_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef CaptionAnimationHelper_isThreed
#define CaptionAnimationHelper_isThreed Animation_isThreed
#endif
#ifndef CaptionAnimationHelper_getBasicColorP
#define CaptionAnimationHelper_getBasicColorP Animation_getBasicColorP
#endif
#ifndef CaptionAnimationHelper_setBasicColorP
#define CaptionAnimationHelper_setBasicColorP Animation_setBasicColorP
#endif
#ifndef CaptionAnimationHelper_setBackgroundBasicColorP
#define CaptionAnimationHelper_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef CaptionAnimationHelper_getChangeBasicColor
#define CaptionAnimationHelper_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef CaptionAnimationHelper_changeBasicColor
#define CaptionAnimationHelper_changeBasicColor Animation_changeBasicColor
#endif
#ifndef CaptionAnimationHelper_getChangeColor
#define CaptionAnimationHelper_getChangeColor Animation_getChangeColor
#endif
#ifndef CaptionAnimationHelper_getColor
#define CaptionAnimationHelper_getColor Animation_getColor
#endif
#ifndef CaptionAnimationHelper_setScale
#define CaptionAnimationHelper_setScale Animation_setScale
#endif
#ifndef CaptionAnimationHelper_setMaxScale
#define CaptionAnimationHelper_setMaxScale Animation_setMaxScale
#endif
#ifndef CaptionAnimationHelper_set
#define CaptionAnimationHelper_set Animation_set
#endif
#ifndef CaptionAnimationHelper_setDx
#define CaptionAnimationHelper_setDx Animation_setDx
#endif
#ifndef CaptionAnimationHelper_getDx
#define CaptionAnimationHelper_getDx Animation_getDx
#endif
#ifndef CaptionAnimationHelper_setDy
#define CaptionAnimationHelper_setDy Animation_setDy
#endif
#ifndef CaptionAnimationHelper_getDy
#define CaptionAnimationHelper_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CaptionAnimationHelper_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CaptionAnimationHelper_register(void);


#endif // ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATIONHELPER_H
