#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_BOTTOMTOTOPIMAGEANIMATION_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_BOTTOMTOTOPIMAGEANIMATION_H
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

typedef struct BottomToTopImageAnimation BottomToTopImageAnimation;
struct BottomToTopImageAnimation {
    ImageSegmentAnimation base;
    int32_t startHeight;
    int32_t currentHeight;
    int32_t anchor;
};


BottomToTopImageAnimation* BottomToTopImageAnimation_new(Image* image, AnimationBehavior* animationBehavior);

void BottomToTopImageAnimation_init(BottomToTopImageAnimation* this, Image* image, AnimationBehavior* animationBehavior);

void BottomToTopImageAnimation_nextFrame(BottomToTopImageAnimation* this);

void BottomToTopImageAnimation_previousFrame(BottomToTopImageAnimation* this);

void BottomToTopImageAnimation_setFrame(BottomToTopImageAnimation* this, int32_t index);


void BottomToTopImageAnimation_paintXY(BottomToTopImageAnimation* this, Graphics* graphics, int32_t x, int32_t y);
#define BottomToTopImageAnimation_new2 BottomToTopImageAnimation_new
#define BottomToTopImageAnimation_init2 BottomToTopImageAnimation_init
#ifndef BottomToTopImageAnimation_getFrame
#define BottomToTopImageAnimation_getFrame ImageSegmentAnimation_getFrame
#endif
#ifndef BottomToTopImageAnimation_getSize
#define BottomToTopImageAnimation_getSize ImageSegmentAnimation_getSize
#endif
#ifndef BottomToTopImageAnimation_setSequence
#define BottomToTopImageAnimation_setSequence ImageSegmentAnimation_setSequence
#endif
#ifndef BottomToTopImageAnimation_getSequence
#define BottomToTopImageAnimation_getSequence ImageSegmentAnimation_getSequence
#endif
#ifndef BottomToTopImageAnimation_getStartX
#define BottomToTopImageAnimation_getStartX ImageSegmentAnimation_getStartX
#endif
#ifndef BottomToTopImageAnimation_setStartX
#define BottomToTopImageAnimation_setStartX ImageSegmentAnimation_setStartX
#endif
#ifndef BottomToTopImageAnimation_getStartY
#define BottomToTopImageAnimation_getStartY ImageSegmentAnimation_getStartY
#endif
#ifndef BottomToTopImageAnimation_setStartY
#define BottomToTopImageAnimation_setStartY ImageSegmentAnimation_setStartY
#endif
#ifndef BottomToTopImageAnimation_getDrawWidth
#define BottomToTopImageAnimation_getDrawWidth ImageSegmentAnimation_getDrawWidth
#endif
#ifndef BottomToTopImageAnimation_setDrawWidth
#define BottomToTopImageAnimation_setDrawWidth ImageSegmentAnimation_setDrawWidth
#endif
#ifndef BottomToTopImageAnimation_getDrawHeight
#define BottomToTopImageAnimation_getDrawHeight ImageSegmentAnimation_getDrawHeight
#endif
#ifndef BottomToTopImageAnimation_setDrawHeight
#define BottomToTopImageAnimation_setDrawHeight ImageSegmentAnimation_setDrawHeight
#endif
#ifndef BottomToTopImageAnimation_getAnimationSize
#define BottomToTopImageAnimation_getAnimationSize ImageAnimation_getAnimationSize
#endif
#ifndef BottomToTopImageAnimation_getFrame
#define BottomToTopImageAnimation_getFrame ImageAnimation_getFrame
#endif
#ifndef BottomToTopImageAnimation_getSize
#define BottomToTopImageAnimation_getSize ImageAnimation_getSize
#endif
#ifndef BottomToTopImageAnimation_setSequence
#define BottomToTopImageAnimation_setSequence ImageAnimation_setSequence
#endif
#ifndef BottomToTopImageAnimation_getSequence
#define BottomToTopImageAnimation_getSequence ImageAnimation_getSequence
#endif
#ifndef BottomToTopImageAnimation_getImage
#define BottomToTopImageAnimation_getImage ImageAnimation_getImage
#endif
#ifndef BottomToTopImageAnimation_close
#define BottomToTopImageAnimation_close ImageAnimation_close
#endif
#ifndef BottomToTopImageAnimation_finalize
#define BottomToTopImageAnimation_finalize ImageAnimation_finalize
#endif
#ifndef BottomToTopImageAnimation_getAnimationBehavior
#define BottomToTopImageAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef BottomToTopImageAnimation_reset
#define BottomToTopImageAnimation_reset IndexedAnimation_reset
#endif
#ifndef BottomToTopImageAnimation_getFrame
#define BottomToTopImageAnimation_getFrame IndexedAnimation_getFrame
#endif
#ifndef BottomToTopImageAnimation_getAnimationSize
#define BottomToTopImageAnimation_getAnimationSize IndexedAnimation_getAnimationSize
#endif
#ifndef BottomToTopImageAnimation_getSize
#define BottomToTopImageAnimation_getSize IndexedAnimation_getSize
#endif
#ifndef BottomToTopImageAnimation_isLastFrame
#define BottomToTopImageAnimation_isLastFrame IndexedAnimation_isLastFrame
#endif
#ifndef BottomToTopImageAnimation_setSequence
#define BottomToTopImageAnimation_setSequence IndexedAnimation_setSequence
#endif
#ifndef BottomToTopImageAnimation_getSequence
#define BottomToTopImageAnimation_getSequence IndexedAnimation_getSequence
#endif
#ifndef BottomToTopImageAnimation_setState
#define BottomToTopImageAnimation_setState IndexedAnimation_setState
#endif
#ifndef BottomToTopImageAnimation_getWidth
#define BottomToTopImageAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef BottomToTopImageAnimation_getHeight
#define BottomToTopImageAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef BottomToTopImageAnimation_setAlpha
#define BottomToTopImageAnimation_setAlpha Animation_setAlpha
#endif
#ifndef BottomToTopImageAnimation_paintThreedXYZ
#define BottomToTopImageAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef BottomToTopImageAnimation_isThreed
#define BottomToTopImageAnimation_isThreed Animation_isThreed
#endif
#ifndef BottomToTopImageAnimation_getBasicColorP
#define BottomToTopImageAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef BottomToTopImageAnimation_setBasicColorP
#define BottomToTopImageAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef BottomToTopImageAnimation_setBackgroundBasicColorP
#define BottomToTopImageAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef BottomToTopImageAnimation_getChangeBasicColor
#define BottomToTopImageAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef BottomToTopImageAnimation_changeBasicColor
#define BottomToTopImageAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef BottomToTopImageAnimation_getChangeColor
#define BottomToTopImageAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef BottomToTopImageAnimation_getColor
#define BottomToTopImageAnimation_getColor Animation_getColor
#endif
#ifndef BottomToTopImageAnimation_setScale
#define BottomToTopImageAnimation_setScale Animation_setScale
#endif
#ifndef BottomToTopImageAnimation_setMaxScale
#define BottomToTopImageAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef BottomToTopImageAnimation_set
#define BottomToTopImageAnimation_set Animation_set
#endif
#ifndef BottomToTopImageAnimation_setDx
#define BottomToTopImageAnimation_setDx Animation_setDx
#endif
#ifndef BottomToTopImageAnimation_getDx
#define BottomToTopImageAnimation_getDx Animation_getDx
#endif
#ifndef BottomToTopImageAnimation_setDy
#define BottomToTopImageAnimation_setDy Animation_setDy
#endif
#ifndef BottomToTopImageAnimation_getDy
#define BottomToTopImageAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BottomToTopImageAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BottomToTopImageAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_IMAGE_BOTTOMTOTOPIMAGEANIMATION_H
