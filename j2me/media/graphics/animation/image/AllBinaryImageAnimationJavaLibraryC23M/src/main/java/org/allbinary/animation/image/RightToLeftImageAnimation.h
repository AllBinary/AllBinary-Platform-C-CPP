#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_RIGHTTOLEFTIMAGEANIMATION_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_RIGHTTOLEFTIMAGEANIMATION_H
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
// package org.allbinary.animation.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ImageSegmentAnimation ImageSegmentAnimation;
typedef struct Graphics Graphics;
typedef struct Image Image;
typedef struct Sprite Sprite;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct Anchor Anchor;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
#include "org/allbinary/animation/image/ImageSegmentAnimation.h"

typedef struct RightToLeftImageAnimation RightToLeftImageAnimation;
struct RightToLeftImageAnimation {
    ImageSegmentAnimation base;
    int32_t startWidth;
    int32_t currentWidth;
    int32_t anchor;
};


RightToLeftImageAnimation* RightToLeftImageAnimation_new(Image* image, AnimationBehavior* animationBehavior);

void RightToLeftImageAnimation_init(RightToLeftImageAnimation* this, Image* image, AnimationBehavior* animationBehavior);

void RightToLeftImageAnimation_nextFrame(RightToLeftImageAnimation* this);

void RightToLeftImageAnimation_previousFrame(RightToLeftImageAnimation* this);

void RightToLeftImageAnimation_setFrame(RightToLeftImageAnimation* this, int32_t index);


void RightToLeftImageAnimation_paintXY(RightToLeftImageAnimation* this, Graphics* graphics, int32_t x, int32_t y);
#define RightToLeftImageAnimation_new2 RightToLeftImageAnimation_new
#define RightToLeftImageAnimation_init2 RightToLeftImageAnimation_init
#ifndef RightToLeftImageAnimation_getFrame
#define RightToLeftImageAnimation_getFrame ImageSegmentAnimation_getFrame
#endif
#ifndef RightToLeftImageAnimation_getSize
#define RightToLeftImageAnimation_getSize ImageSegmentAnimation_getSize
#endif
#ifndef RightToLeftImageAnimation_setSequence
#define RightToLeftImageAnimation_setSequence ImageSegmentAnimation_setSequence
#endif
#ifndef RightToLeftImageAnimation_getSequence
#define RightToLeftImageAnimation_getSequence ImageSegmentAnimation_getSequence
#endif
#ifndef RightToLeftImageAnimation_getStartX
#define RightToLeftImageAnimation_getStartX ImageSegmentAnimation_getStartX
#endif
#ifndef RightToLeftImageAnimation_setStartX
#define RightToLeftImageAnimation_setStartX ImageSegmentAnimation_setStartX
#endif
#ifndef RightToLeftImageAnimation_getStartY
#define RightToLeftImageAnimation_getStartY ImageSegmentAnimation_getStartY
#endif
#ifndef RightToLeftImageAnimation_setStartY
#define RightToLeftImageAnimation_setStartY ImageSegmentAnimation_setStartY
#endif
#ifndef RightToLeftImageAnimation_getDrawWidth
#define RightToLeftImageAnimation_getDrawWidth ImageSegmentAnimation_getDrawWidth
#endif
#ifndef RightToLeftImageAnimation_setDrawWidth
#define RightToLeftImageAnimation_setDrawWidth ImageSegmentAnimation_setDrawWidth
#endif
#ifndef RightToLeftImageAnimation_getDrawHeight
#define RightToLeftImageAnimation_getDrawHeight ImageSegmentAnimation_getDrawHeight
#endif
#ifndef RightToLeftImageAnimation_setDrawHeight
#define RightToLeftImageAnimation_setDrawHeight ImageSegmentAnimation_setDrawHeight
#endif
#ifndef RightToLeftImageAnimation_getAnimationSize
#define RightToLeftImageAnimation_getAnimationSize ImageAnimation_getAnimationSize
#endif
#ifndef RightToLeftImageAnimation_getFrame
#define RightToLeftImageAnimation_getFrame ImageAnimation_getFrame
#endif
#ifndef RightToLeftImageAnimation_getSize
#define RightToLeftImageAnimation_getSize ImageAnimation_getSize
#endif
#ifndef RightToLeftImageAnimation_setSequence
#define RightToLeftImageAnimation_setSequence ImageAnimation_setSequence
#endif
#ifndef RightToLeftImageAnimation_getSequence
#define RightToLeftImageAnimation_getSequence ImageAnimation_getSequence
#endif
#ifndef RightToLeftImageAnimation_getImage
#define RightToLeftImageAnimation_getImage ImageAnimation_getImage
#endif
#ifndef RightToLeftImageAnimation_close
#define RightToLeftImageAnimation_close ImageAnimation_close
#endif
#ifndef RightToLeftImageAnimation_finalize
#define RightToLeftImageAnimation_finalize ImageAnimation_finalize
#endif
#ifndef RightToLeftImageAnimation_getAnimationBehavior
#define RightToLeftImageAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef RightToLeftImageAnimation_reset
#define RightToLeftImageAnimation_reset IndexedAnimation_reset
#endif
#ifndef RightToLeftImageAnimation_getFrame
#define RightToLeftImageAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef RightToLeftImageAnimation_getAnimationSize
#define RightToLeftImageAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef RightToLeftImageAnimation_getSize
#define RightToLeftImageAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef RightToLeftImageAnimation_isLastFrame
#define RightToLeftImageAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef RightToLeftImageAnimation_setSequence
#define RightToLeftImageAnimation_setSequence IndexedAnimation_setSequence
#endif
#ifndef RightToLeftImageAnimation_getSequence
#define RightToLeftImageAnimation_getSequence IndexedAnimation_getSequence
#endif
#ifndef RightToLeftImageAnimation_setState
#define RightToLeftImageAnimation_setState IndexedAnimation_setState
#endif
#ifndef RightToLeftImageAnimation_getWidth
#define RightToLeftImageAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef RightToLeftImageAnimation_getHeight
#define RightToLeftImageAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef RightToLeftImageAnimation_setAlpha
#define RightToLeftImageAnimation_setAlpha Animation_setAlpha
#endif
#ifndef RightToLeftImageAnimation_paintThreedXYZ
#define RightToLeftImageAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef RightToLeftImageAnimation_isThreed
#define RightToLeftImageAnimation_isThreed Animation_isThreed
#endif
#ifndef RightToLeftImageAnimation_getBasicColorP
#define RightToLeftImageAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef RightToLeftImageAnimation_setBasicColorP
#define RightToLeftImageAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef RightToLeftImageAnimation_setBackgroundBasicColorP
#define RightToLeftImageAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef RightToLeftImageAnimation_getChangeBasicColor
#define RightToLeftImageAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef RightToLeftImageAnimation_changeBasicColor
#define RightToLeftImageAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef RightToLeftImageAnimation_getChangeColor
#define RightToLeftImageAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef RightToLeftImageAnimation_getColor
#define RightToLeftImageAnimation_getColor Animation_getColor
#endif
#ifndef RightToLeftImageAnimation_setScale
#define RightToLeftImageAnimation_setScale Animation_setScale
#endif
#ifndef RightToLeftImageAnimation_setMaxScale
#define RightToLeftImageAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef RightToLeftImageAnimation_set
#define RightToLeftImageAnimation_set Animation_set
#endif
#ifndef RightToLeftImageAnimation_setDx
#define RightToLeftImageAnimation_setDx Animation_setDx
#endif
#ifndef RightToLeftImageAnimation_getDx
#define RightToLeftImageAnimation_getDx Animation_getDx
#endif
#ifndef RightToLeftImageAnimation_setDy
#define RightToLeftImageAnimation_setDy Animation_setDy
#endif
#ifndef RightToLeftImageAnimation_getDy
#define RightToLeftImageAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RightToLeftImageAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RightToLeftImageAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_IMAGE_RIGHTTOLEFTIMAGEANIMATION_H
