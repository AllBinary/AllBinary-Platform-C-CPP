#ifndef ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATIONHELPERBASE_H
#define ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATIONHELPERBASE_H
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
typedef struct BasicColor BasicColor;
#include "org/allbinary/animation/Animation.h"

typedef struct CaptionAnimationHelperBase CaptionAnimationHelperBase;
struct CaptionAnimationHelperBase {
    Animation base;
};

extern CaptionAnimationHelperBase* CaptionAnimationHelperBase_INSTANCE;

CaptionAnimationHelperBase* CaptionAnimationHelperBase_new(void);
void CaptionAnimationHelperBase_init(CaptionAnimationHelperBase* this);

bool CaptionAnimationHelperBase_isShowing(CaptionAnimationHelperBase* this);

void CaptionAnimationHelperBase_tick(CaptionAnimationHelperBase* this);

void CaptionAnimationHelperBase_update(CaptionAnimationHelperBase* this, const char* message, BasicColor* basicColor);

void CaptionAnimationHelperBase_paintXY(CaptionAnimationHelperBase* this, Graphics* graphics, int32_t x, int32_t y);
#ifndef CaptionAnimationHelperBase_setAlpha
#define CaptionAnimationHelperBase_setAlpha Animation_setAlpha
#endif
#ifndef CaptionAnimationHelperBase_nextFrame
#define CaptionAnimationHelperBase_nextFrame Animation_nextFrame
#endif
#ifndef CaptionAnimationHelperBase_paintThreedXYZ
#define CaptionAnimationHelperBase_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef CaptionAnimationHelperBase_isThreed
#define CaptionAnimationHelperBase_isThreed Animation_isThreed
#endif
#ifndef CaptionAnimationHelperBase_getBasicColorP
#define CaptionAnimationHelperBase_getBasicColorP Animation_getBasicColorP
#endif
#ifndef CaptionAnimationHelperBase_setBasicColorP
#define CaptionAnimationHelperBase_setBasicColorP Animation_setBasicColorP
#endif
#ifndef CaptionAnimationHelperBase_setBackgroundBasicColorP
#define CaptionAnimationHelperBase_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef CaptionAnimationHelperBase_getChangeBasicColor
#define CaptionAnimationHelperBase_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef CaptionAnimationHelperBase_changeBasicColor
#define CaptionAnimationHelperBase_changeBasicColor Animation_changeBasicColor
#endif
#ifndef CaptionAnimationHelperBase_getChangeColor
#define CaptionAnimationHelperBase_getChangeColor Animation_getChangeColor
#endif
#ifndef CaptionAnimationHelperBase_getColor
#define CaptionAnimationHelperBase_getColor Animation_getColor
#endif
#ifndef CaptionAnimationHelperBase_setScale
#define CaptionAnimationHelperBase_setScale Animation_setScale
#endif
#ifndef CaptionAnimationHelperBase_setMaxScale
#define CaptionAnimationHelperBase_setMaxScale Animation_setMaxScale
#endif
#ifndef CaptionAnimationHelperBase_set
#define CaptionAnimationHelperBase_set Animation_set
#endif
#ifndef CaptionAnimationHelperBase_setDx
#define CaptionAnimationHelperBase_setDx Animation_setDx
#endif
#ifndef CaptionAnimationHelperBase_getDx
#define CaptionAnimationHelperBase_getDx Animation_getDx
#endif
#ifndef CaptionAnimationHelperBase_setDy
#define CaptionAnimationHelperBase_setDy Animation_setDy
#endif
#ifndef CaptionAnimationHelperBase_getDy
#define CaptionAnimationHelperBase_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CaptionAnimationHelperBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CaptionAnimationHelperBase_register(void);


#endif // ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATIONHELPERBASE_H
