#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_TOPTOBOTTOMIMAGEANIMATION_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_TOPTOBOTTOMIMAGEANIMATION_H
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

typedef struct TopToBottomImageAnimation TopToBottomImageAnimation;
struct TopToBottomImageAnimation {
    ImageSegmentAnimation base;
    int32_t currentHeight;
    int32_t anchor;
};


TopToBottomImageAnimation* TopToBottomImageAnimation_new(Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior);

void TopToBottomImageAnimation_init(TopToBottomImageAnimation* this, Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior);

void TopToBottomImageAnimation_nextFrame(TopToBottomImageAnimation* this);

void TopToBottomImageAnimation_previousFrame(TopToBottomImageAnimation* this);

void TopToBottomImageAnimation_setFrame(TopToBottomImageAnimation* this, int32_t index);


void TopToBottomImageAnimation_paintXY(TopToBottomImageAnimation* this, Graphics* graphics, int32_t x, int32_t y);
#define TopToBottomImageAnimation_new3 TopToBottomImageAnimation_new
#define TopToBottomImageAnimation_init3 TopToBottomImageAnimation_init
#ifndef TopToBottomImageAnimation_getFrame
#define TopToBottomImageAnimation_getFrame ImageSegmentAnimation_getFrame
#endif
#ifndef TopToBottomImageAnimation_getSize
#define TopToBottomImageAnimation_getSize ImageSegmentAnimation_getSize
#endif
#ifndef TopToBottomImageAnimation_setSequence
#define TopToBottomImageAnimation_setSequence ImageSegmentAnimation_setSequence
#endif
#ifndef TopToBottomImageAnimation_getSequence
#define TopToBottomImageAnimation_getSequence ImageSegmentAnimation_getSequence
#endif
#ifndef TopToBottomImageAnimation_getStartX
#define TopToBottomImageAnimation_getStartX ImageSegmentAnimation_getStartX
#endif
#ifndef TopToBottomImageAnimation_setStartX
#define TopToBottomImageAnimation_setStartX ImageSegmentAnimation_setStartX
#endif
#ifndef TopToBottomImageAnimation_getStartY
#define TopToBottomImageAnimation_getStartY ImageSegmentAnimation_getStartY
#endif
#ifndef TopToBottomImageAnimation_setStartY
#define TopToBottomImageAnimation_setStartY ImageSegmentAnimation_setStartY
#endif
#ifndef TopToBottomImageAnimation_getDrawWidth
#define TopToBottomImageAnimation_getDrawWidth ImageSegmentAnimation_getDrawWidth
#endif
#ifndef TopToBottomImageAnimation_setDrawWidth
#define TopToBottomImageAnimation_setDrawWidth ImageSegmentAnimation_setDrawWidth
#endif
#ifndef TopToBottomImageAnimation_getDrawHeight
#define TopToBottomImageAnimation_getDrawHeight ImageSegmentAnimation_getDrawHeight
#endif
#ifndef TopToBottomImageAnimation_setDrawHeight
#define TopToBottomImageAnimation_setDrawHeight ImageSegmentAnimation_setDrawHeight
#endif
#ifndef TopToBottomImageAnimation_getAnimationSize
#define TopToBottomImageAnimation_getAnimationSize ImageAnimation_getAnimationSize
#endif
#ifndef TopToBottomImageAnimation_getFrame
#define TopToBottomImageAnimation_getFrame ImageAnimation_getFrame
#endif
#ifndef TopToBottomImageAnimation_getSize
#define TopToBottomImageAnimation_getSize ImageAnimation_getSize
#endif
#ifndef TopToBottomImageAnimation_setSequence
#define TopToBottomImageAnimation_setSequence ImageAnimation_setSequence
#endif
#ifndef TopToBottomImageAnimation_getSequence
#define TopToBottomImageAnimation_getSequence ImageAnimation_getSequence
#endif
#ifndef TopToBottomImageAnimation_getImage
#define TopToBottomImageAnimation_getImage ImageAnimation_getImage
#endif
#ifndef TopToBottomImageAnimation_close
#define TopToBottomImageAnimation_close ImageAnimation_close
#endif
#ifndef TopToBottomImageAnimation_finalize
#define TopToBottomImageAnimation_finalize ImageAnimation_finalize
#endif
#ifndef TopToBottomImageAnimation_getAnimationBehavior
#define TopToBottomImageAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef TopToBottomImageAnimation_reset
#define TopToBottomImageAnimation_reset IndexedAnimation_reset
#endif
#ifndef TopToBottomImageAnimation_getFrame
#define TopToBottomImageAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef TopToBottomImageAnimation_getAnimationSize
#define TopToBottomImageAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef TopToBottomImageAnimation_getSize
#define TopToBottomImageAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef TopToBottomImageAnimation_isLastFrame
#define TopToBottomImageAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef TopToBottomImageAnimation_setSequence
#define TopToBottomImageAnimation_setSequence IndexedAnimation_setSequence
#endif
#ifndef TopToBottomImageAnimation_getSequence
#define TopToBottomImageAnimation_getSequence IndexedAnimation_getSequence
#endif
#ifndef TopToBottomImageAnimation_setState
#define TopToBottomImageAnimation_setState IndexedAnimation_setState
#endif
#ifndef TopToBottomImageAnimation_getWidth
#define TopToBottomImageAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef TopToBottomImageAnimation_getHeight
#define TopToBottomImageAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef TopToBottomImageAnimation_setAlpha
#define TopToBottomImageAnimation_setAlpha Animation_setAlpha
#endif
#ifndef TopToBottomImageAnimation_paintThreedXYZ
#define TopToBottomImageAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef TopToBottomImageAnimation_isThreed
#define TopToBottomImageAnimation_isThreed Animation_isThreed
#endif
#ifndef TopToBottomImageAnimation_getBasicColorP
#define TopToBottomImageAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef TopToBottomImageAnimation_setBasicColorP
#define TopToBottomImageAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef TopToBottomImageAnimation_setBackgroundBasicColorP
#define TopToBottomImageAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef TopToBottomImageAnimation_getChangeBasicColor
#define TopToBottomImageAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef TopToBottomImageAnimation_changeBasicColor
#define TopToBottomImageAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef TopToBottomImageAnimation_getChangeColor
#define TopToBottomImageAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef TopToBottomImageAnimation_getColor
#define TopToBottomImageAnimation_getColor Animation_getColor
#endif
#ifndef TopToBottomImageAnimation_setScale
#define TopToBottomImageAnimation_setScale Animation_setScale
#endif
#ifndef TopToBottomImageAnimation_setMaxScale
#define TopToBottomImageAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef TopToBottomImageAnimation_set
#define TopToBottomImageAnimation_set Animation_set
#endif
#ifndef TopToBottomImageAnimation_setDx
#define TopToBottomImageAnimation_setDx Animation_setDx
#endif
#ifndef TopToBottomImageAnimation_getDx
#define TopToBottomImageAnimation_getDx Animation_getDx
#endif
#ifndef TopToBottomImageAnimation_setDy
#define TopToBottomImageAnimation_setDy Animation_setDy
#endif
#ifndef TopToBottomImageAnimation_getDy
#define TopToBottomImageAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TopToBottomImageAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TopToBottomImageAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_IMAGE_TOPTOBOTTOMIMAGEANIMATION_H
