#ifndef ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATION_H
#define ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATION_H
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
typedef struct Graphics Graphics;
typedef struct Animation Animation;
#include "org/allbinary/animation/Animation.h"

typedef struct CaptionAnimation CaptionAnimation;
struct CaptionAnimation {
    Animation base;
    Animation* animationInterface;
    Animation* overlayAnimationInterface;
    int32_t captionDx;
    int32_t captionDy;
    int32_t dx;
    int32_t dy;
};


CaptionAnimation* CaptionAnimation_new(Animation* animationInterface, Animation* overlayAnimationInterface, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy);

void CaptionAnimation_init(CaptionAnimation* this, Animation* animationInterface, Animation* overlayAnimationInterface, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy);

void CaptionAnimation_nextFrame(CaptionAnimation* this);

void CaptionAnimation_paintXY(CaptionAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void CaptionAnimation_paintThreedXYZ(CaptionAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);
#define CaptionAnimation_new6 CaptionAnimation_new
#define CaptionAnimation_init6 CaptionAnimation_init
#ifndef CaptionAnimation_setAlpha
#define CaptionAnimation_setAlpha Animation_setAlpha
#endif
#ifndef CaptionAnimation_isThreed
#define CaptionAnimation_isThreed Animation_isThreed
#endif
#ifndef CaptionAnimation_getBasicColorP
#define CaptionAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef CaptionAnimation_setBasicColorP
#define CaptionAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef CaptionAnimation_setBackgroundBasicColorP
#define CaptionAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef CaptionAnimation_getChangeBasicColor
#define CaptionAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef CaptionAnimation_changeBasicColor
#define CaptionAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef CaptionAnimation_getChangeColor
#define CaptionAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef CaptionAnimation_getColor
#define CaptionAnimation_getColor Animation_getColor
#endif
#ifndef CaptionAnimation_setScale
#define CaptionAnimation_setScale Animation_setScale
#endif
#ifndef CaptionAnimation_setMaxScale
#define CaptionAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef CaptionAnimation_set
#define CaptionAnimation_set Animation_set
#endif
#ifndef CaptionAnimation_setDx
#define CaptionAnimation_setDx Animation_setDx
#endif
#ifndef CaptionAnimation_getDx
#define CaptionAnimation_getDx Animation_getDx
#endif
#ifndef CaptionAnimation_setDy
#define CaptionAnimation_setDy Animation_setDy
#endif
#ifndef CaptionAnimation_getDy
#define CaptionAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CaptionAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CaptionAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATION_H
