#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_LEFTTORIGHTIMAGEANIMATION_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_LEFTTORIGHTIMAGEANIMATION_H
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
#include "org/allbinary/animation/image/ImageSegmentAnimation.h"

typedef struct LeftToRightImageAnimation LeftToRightImageAnimation;
struct LeftToRightImageAnimation {
    ImageSegmentAnimation base;
    int32_t currentWidth;
    int32_t anchor;
};


LeftToRightImageAnimation* LeftToRightImageAnimation_new(Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior);

void LeftToRightImageAnimation_init(LeftToRightImageAnimation* this, Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior);

void LeftToRightImageAnimation_nextFrame(LeftToRightImageAnimation* this);

void LeftToRightImageAnimation_previousFrame(LeftToRightImageAnimation* this);

void LeftToRightImageAnimation_setFrame(LeftToRightImageAnimation* this, int32_t index);


void LeftToRightImageAnimation_paintXY(LeftToRightImageAnimation* this, Graphics* graphics, int32_t x, int32_t y);
#define LeftToRightImageAnimation_new3 LeftToRightImageAnimation_new
#define LeftToRightImageAnimation_init3 LeftToRightImageAnimation_init
#ifndef LeftToRightImageAnimation_getFrame
#define LeftToRightImageAnimation_getFrame ImageSegmentAnimation_getFrame
#endif
#ifndef LeftToRightImageAnimation_getSize
#define LeftToRightImageAnimation_getSize ImageSegmentAnimation_getSize
#endif
#ifndef LeftToRightImageAnimation_setSequence
#define LeftToRightImageAnimation_setSequence ImageSegmentAnimation_setSequence
#endif
#ifndef LeftToRightImageAnimation_getSequence
#define LeftToRightImageAnimation_getSequence ImageSegmentAnimation_getSequence
#endif
#ifndef LeftToRightImageAnimation_getStartX
#define LeftToRightImageAnimation_getStartX ImageSegmentAnimation_getStartX
#endif
#ifndef LeftToRightImageAnimation_setStartX
#define LeftToRightImageAnimation_setStartX ImageSegmentAnimation_setStartX
#endif
#ifndef LeftToRightImageAnimation_getStartY
#define LeftToRightImageAnimation_getStartY ImageSegmentAnimation_getStartY
#endif
#ifndef LeftToRightImageAnimation_setStartY
#define LeftToRightImageAnimation_setStartY ImageSegmentAnimation_setStartY
#endif
#ifndef LeftToRightImageAnimation_getDrawWidth
#define LeftToRightImageAnimation_getDrawWidth ImageSegmentAnimation_getDrawWidth
#endif
#ifndef LeftToRightImageAnimation_setDrawWidth
#define LeftToRightImageAnimation_setDrawWidth ImageSegmentAnimation_setDrawWidth
#endif
#ifndef LeftToRightImageAnimation_getDrawHeight
#define LeftToRightImageAnimation_getDrawHeight ImageSegmentAnimation_getDrawHeight
#endif
#ifndef LeftToRightImageAnimation_setDrawHeight
#define LeftToRightImageAnimation_setDrawHeight ImageSegmentAnimation_setDrawHeight
#endif
#ifndef LeftToRightImageAnimation_getAnimationSize
#define LeftToRightImageAnimation_getAnimationSize ImageAnimation_getAnimationSize
#endif
#ifndef LeftToRightImageAnimation_getFrame
#define LeftToRightImageAnimation_getFrame ImageAnimation_getFrame
#endif
#ifndef LeftToRightImageAnimation_getSize
#define LeftToRightImageAnimation_getSize ImageAnimation_getSize
#endif
#ifndef LeftToRightImageAnimation_setSequence
#define LeftToRightImageAnimation_setSequence ImageAnimation_setSequence
#endif
#ifndef LeftToRightImageAnimation_getSequence
#define LeftToRightImageAnimation_getSequence ImageAnimation_getSequence
#endif
#ifndef LeftToRightImageAnimation_getImage
#define LeftToRightImageAnimation_getImage ImageAnimation_getImage
#endif
#ifndef LeftToRightImageAnimation_close
#define LeftToRightImageAnimation_close ImageAnimation_close
#endif
#ifndef LeftToRightImageAnimation_finalize
#define LeftToRightImageAnimation_finalize ImageAnimation_finalize
#endif
#ifndef LeftToRightImageAnimation_getAnimationBehavior
#define LeftToRightImageAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef LeftToRightImageAnimation_reset
#define LeftToRightImageAnimation_reset IndexedAnimation_reset
#endif
#ifndef LeftToRightImageAnimation_getFrame
#define LeftToRightImageAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef LeftToRightImageAnimation_getAnimationSize
#define LeftToRightImageAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef LeftToRightImageAnimation_getSize
#define LeftToRightImageAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef LeftToRightImageAnimation_isLastFrame
#define LeftToRightImageAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef LeftToRightImageAnimation_setSequence
#define LeftToRightImageAnimation_setSequence IndexedAnimation_setSequence
#endif
#ifndef LeftToRightImageAnimation_getSequence
#define LeftToRightImageAnimation_getSequence IndexedAnimation_getSequence
#endif
#ifndef LeftToRightImageAnimation_setState
#define LeftToRightImageAnimation_setState IndexedAnimation_setState
#endif
#ifndef LeftToRightImageAnimation_getWidth
#define LeftToRightImageAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef LeftToRightImageAnimation_getHeight
#define LeftToRightImageAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef LeftToRightImageAnimation_setAlpha
#define LeftToRightImageAnimation_setAlpha Animation_setAlpha
#endif
#ifndef LeftToRightImageAnimation_paintThreedXYZ
#define LeftToRightImageAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef LeftToRightImageAnimation_isThreed
#define LeftToRightImageAnimation_isThreed Animation_isThreed
#endif
#ifndef LeftToRightImageAnimation_getBasicColorP
#define LeftToRightImageAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef LeftToRightImageAnimation_setBasicColorP
#define LeftToRightImageAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef LeftToRightImageAnimation_setBackgroundBasicColorP
#define LeftToRightImageAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef LeftToRightImageAnimation_getChangeBasicColor
#define LeftToRightImageAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef LeftToRightImageAnimation_changeBasicColor
#define LeftToRightImageAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef LeftToRightImageAnimation_getChangeColor
#define LeftToRightImageAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef LeftToRightImageAnimation_getColor
#define LeftToRightImageAnimation_getColor Animation_getColor
#endif
#ifndef LeftToRightImageAnimation_setScale
#define LeftToRightImageAnimation_setScale Animation_setScale
#endif
#ifndef LeftToRightImageAnimation_setMaxScale
#define LeftToRightImageAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef LeftToRightImageAnimation_set
#define LeftToRightImageAnimation_set Animation_set
#endif
#ifndef LeftToRightImageAnimation_setDx
#define LeftToRightImageAnimation_setDx Animation_setDx
#endif
#ifndef LeftToRightImageAnimation_getDx
#define LeftToRightImageAnimation_getDx Animation_getDx
#endif
#ifndef LeftToRightImageAnimation_setDy
#define LeftToRightImageAnimation_setDy Animation_setDy
#endif
#ifndef LeftToRightImageAnimation_getDy
#define LeftToRightImageAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LeftToRightImageAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LeftToRightImageAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_IMAGE_LEFTTORIGHTIMAGEANIMATION_H
