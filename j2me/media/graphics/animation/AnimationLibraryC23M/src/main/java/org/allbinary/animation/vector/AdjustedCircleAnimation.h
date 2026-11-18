#ifndef ORG_ALLBINARY_ANIMATION_VECTOR_ADJUSTEDCIRCLEANIMATION_H
#define ORG_ALLBINARY_ANIMATION_VECTOR_ADJUSTEDCIRCLEANIMATION_H
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
// package org.allbinary.animation.vector

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CircleAnimation CircleAnimation;
typedef struct Graphics Graphics;
typedef struct AndroidUtil AndroidUtil;
typedef struct BasicColor BasicColor;
#include "org/allbinary/animation/vector/CircleAnimation.h"

typedef struct AdjustedCircleAnimation AdjustedCircleAnimation;
struct AdjustedCircleAnimation {
    CircleAnimation base;
    int32_t xAdjustment;
    int32_t yAdjustment;
};


AdjustedCircleAnimation* AdjustedCircleAnimation_new(int32_t width, int32_t height, BasicColor* basicColor);

AdjustedCircleAnimation* AdjustedCircleAnimation_createAnimation(int32_t width, int32_t height, int32_t xAdjustment, int32_t yAdjustment, BasicColor* basicColor);

AdjustedCircleAnimation* AdjustedCircleAnimation_createW(int32_t width, int32_t height, int32_t innerWidth, BasicColor* basicColor);

void AdjustedCircleAnimation_init(AdjustedCircleAnimation* this, int32_t width, int32_t height, BasicColor* basicColor);



void AdjustedCircleAnimation_paintXY(AdjustedCircleAnimation* this, Graphics* graphics, int32_t x, int32_t y);
#define AdjustedCircleAnimation_new3 AdjustedCircleAnimation_new
#define AdjustedCircleAnimation_init3 AdjustedCircleAnimation_init
#ifndef AdjustedCircleAnimation_nextFrame
#define AdjustedCircleAnimation_nextFrame CircleAnimation_nextFrame
#endif
#ifndef AdjustedCircleAnimation_getBasicColorP
#define AdjustedCircleAnimation_getBasicColorP CircleAnimation_getBasicColorP
#endif
#ifndef AdjustedCircleAnimation_setBasicColorP
#define AdjustedCircleAnimation_setBasicColorP CircleAnimation_setBasicColorP
#endif
#ifndef AdjustedCircleAnimation_setAlpha
#define AdjustedCircleAnimation_setAlpha Animation_setAlpha
#endif
#ifndef AdjustedCircleAnimation_nextFrame
#define AdjustedCircleAnimation_nextFrame Animation_nextFrame
#endif
#ifndef AdjustedCircleAnimation_paintThreedXYZ
#define AdjustedCircleAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef AdjustedCircleAnimation_isThreed
#define AdjustedCircleAnimation_isThreed Animation_isThreed
#endif
#ifndef AdjustedCircleAnimation_getBasicColorP
#define AdjustedCircleAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef AdjustedCircleAnimation_setBasicColorP
#define AdjustedCircleAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef AdjustedCircleAnimation_setBackgroundBasicColorP
#define AdjustedCircleAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef AdjustedCircleAnimation_getChangeBasicColor
#define AdjustedCircleAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef AdjustedCircleAnimation_changeBasicColor
#define AdjustedCircleAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef AdjustedCircleAnimation_getChangeColor
#define AdjustedCircleAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef AdjustedCircleAnimation_getColor
#define AdjustedCircleAnimation_getColor Animation_getColor
#endif
#ifndef AdjustedCircleAnimation_setScale
#define AdjustedCircleAnimation_setScale Animation_setScale
#endif
#ifndef AdjustedCircleAnimation_setMaxScale
#define AdjustedCircleAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef AdjustedCircleAnimation_set
#define AdjustedCircleAnimation_set Animation_set
#endif
#ifndef AdjustedCircleAnimation_setDx
#define AdjustedCircleAnimation_setDx Animation_setDx
#endif
#ifndef AdjustedCircleAnimation_getDx
#define AdjustedCircleAnimation_getDx Animation_getDx
#endif
#ifndef AdjustedCircleAnimation_setDy
#define AdjustedCircleAnimation_setDy Animation_setDy
#endif
#ifndef AdjustedCircleAnimation_getDy
#define AdjustedCircleAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AdjustedCircleAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AdjustedCircleAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_VECTOR_ADJUSTEDCIRCLEANIMATION_H
