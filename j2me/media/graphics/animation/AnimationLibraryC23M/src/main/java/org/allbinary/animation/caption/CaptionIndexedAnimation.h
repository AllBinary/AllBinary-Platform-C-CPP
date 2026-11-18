#ifndef ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONINDEXEDANIMATION_H
#define ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONINDEXEDANIMATION_H
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
typedef struct Player Player;
typedef struct Animation Animation;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct AnimationEventHandler AnimationEventHandler;
typedef struct IndexedAnimation IndexedAnimation;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
typedef struct TimeDelayHelper TimeDelayHelper;
#if __has_include("javax/microedition/media/Player.h")
#include "javax/microedition/media/Player.h"
#endif
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#include "org/allbinary/animation/IndexedAnimation.h"
#if __has_include("org/allbinary/logic/util/event/AllBinaryEventObject.h")
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif

typedef struct CaptionIndexedAnimation CaptionIndexedAnimation;
struct CaptionIndexedAnimation {
    IndexedAnimation base;
    Animation* animationInterface;
    IndexedAnimation* movieIndexedAnimationInterface;
    int32_t captionDx;
    int32_t captionDy;
    int32_t dx;
    int32_t dy;
    int32_t time;
    AllBinaryEventObject* END_EVENT;
    TimeDelayHelper* timeDelayHelper;
    Player* player;
};


CaptionIndexedAnimation* CaptionIndexedAnimation_new(Animation* animationInterface, IndexedAnimation* movieIndexedAnimationInterface, Player* player, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehavior* animationBehavior);

void CaptionIndexedAnimation_init(CaptionIndexedAnimation* this, Animation* animationInterface, IndexedAnimation* movieIndexedAnimationInterface, Player* player, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehavior* animationBehavior);

void CaptionIndexedAnimation_nextFrame(CaptionIndexedAnimation* this);

bool CaptionIndexedAnimation_isLastFrame(CaptionIndexedAnimation* this);

void CaptionIndexedAnimation_previousFrame(CaptionIndexedAnimation* this);

void CaptionIndexedAnimation_setFrame(CaptionIndexedAnimation* this, int32_t index);

int32_t CaptionIndexedAnimation_getFrame(CaptionIndexedAnimation* this);

int32_t CaptionIndexedAnimation_getSize(CaptionIndexedAnimation* this);

void CaptionIndexedAnimation_setSequence(CaptionIndexedAnimation* this, int32_t* sequence);

int32_t* CaptionIndexedAnimation_getSequence(CaptionIndexedAnimation* this);

void CaptionIndexedAnimation_paintXY(CaptionIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void CaptionIndexedAnimation_paintThreedXYZ(CaptionIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);
#define CaptionIndexedAnimation_new9 CaptionIndexedAnimation_new
#define CaptionIndexedAnimation_init9 CaptionIndexedAnimation_init
#ifndef CaptionIndexedAnimation_getAnimationBehavior
#define CaptionIndexedAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef CaptionIndexedAnimation_reset
#define CaptionIndexedAnimation_reset IndexedAnimation_reset
#endif
#ifndef CaptionIndexedAnimation_getAnimationSize
#define CaptionIndexedAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef CaptionIndexedAnimation_setState
#define CaptionIndexedAnimation_setState IndexedAnimation_setState
#endif
#ifndef CaptionIndexedAnimation_getWidth
#define CaptionIndexedAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef CaptionIndexedAnimation_getHeight
#define CaptionIndexedAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef CaptionIndexedAnimation_setAlpha
#define CaptionIndexedAnimation_setAlpha Animation_setAlpha
#endif
#ifndef CaptionIndexedAnimation_isThreed
#define CaptionIndexedAnimation_isThreed Animation_isThreed
#endif
#ifndef CaptionIndexedAnimation_getBasicColorP
#define CaptionIndexedAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef CaptionIndexedAnimation_setBasicColorP
#define CaptionIndexedAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef CaptionIndexedAnimation_setBackgroundBasicColorP
#define CaptionIndexedAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef CaptionIndexedAnimation_getChangeBasicColor
#define CaptionIndexedAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef CaptionIndexedAnimation_changeBasicColor
#define CaptionIndexedAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef CaptionIndexedAnimation_getChangeColor
#define CaptionIndexedAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef CaptionIndexedAnimation_getColor
#define CaptionIndexedAnimation_getColor Animation_getColor
#endif
#ifndef CaptionIndexedAnimation_setScale
#define CaptionIndexedAnimation_setScale Animation_setScale
#endif
#ifndef CaptionIndexedAnimation_setMaxScale
#define CaptionIndexedAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef CaptionIndexedAnimation_set
#define CaptionIndexedAnimation_set Animation_set
#endif
#ifndef CaptionIndexedAnimation_setDx
#define CaptionIndexedAnimation_setDx Animation_setDx
#endif
#ifndef CaptionIndexedAnimation_getDx
#define CaptionIndexedAnimation_getDx Animation_getDx
#endif
#ifndef CaptionIndexedAnimation_setDy
#define CaptionIndexedAnimation_setDy Animation_setDy
#endif
#ifndef CaptionIndexedAnimation_getDy
#define CaptionIndexedAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CaptionIndexedAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CaptionIndexedAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONINDEXEDANIMATION_H
