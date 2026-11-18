#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATION_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATION_H
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
// package org.allbinary.animation.image.sprite

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Graphics Graphics;
typedef struct Image Image;
typedef struct Sprite Sprite;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct IndexedAnimation IndexedAnimation;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct ColorCompositeInterface ColorCompositeInterface;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonLabels CommonLabels;
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif
#if __has_include("javax/microedition/lcdui/game/Sprite.h")
#include "javax/microedition/lcdui/game/Sprite.h"
#endif
#include "org/allbinary/animation/IndexedAnimation.h"
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#include "org/allbinary/graphics/color/ColorCompositeInterface.h"

typedef struct SpriteIndexedAnimation SpriteIndexedAnimation;
struct SpriteIndexedAnimation {
    IndexedAnimation base;
    ColorCompositeInterface ColorCompositeInterface_interface;
    Sprite* sprite;
    Image* image;
    BasicColor** basicColorArray;
};


SpriteIndexedAnimation* SpriteIndexedAnimation_new(Sprite* sprite, Image* image, BasicColor** basicColorArray, AnimationBehavior* animationBehavior);

void SpriteIndexedAnimation_init(SpriteIndexedAnimation* this, Sprite* sprite, Image* image, BasicColor** basicColorArray, AnimationBehavior* animationBehavior);

int32_t SpriteIndexedAnimation_getAnimationSize(SpriteIndexedAnimation* this);

void SpriteIndexedAnimation_setBasicColorP(SpriteIndexedAnimation* this, BasicColor* basicColor);

BasicColor* SpriteIndexedAnimation_getBasicColorP(SpriteIndexedAnimation* this);

void SpriteIndexedAnimation_paintFrame(SpriteIndexedAnimation* this, Graphics* graphics, int32_t frame, int32_t x, int32_t y);

void SpriteIndexedAnimation_paintXY(SpriteIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y);

void SpriteIndexedAnimation_paint(SpriteIndexedAnimation* this, Graphics* graphics);

void SpriteIndexedAnimation_nextFrame(SpriteIndexedAnimation* this);

void SpriteIndexedAnimation_previousFrame(SpriteIndexedAnimation* this);

int32_t SpriteIndexedAnimation_getSize(SpriteIndexedAnimation* this);

void SpriteIndexedAnimation_setFrame(SpriteIndexedAnimation* this, int32_t frame);

int32_t SpriteIndexedAnimation_getFrame(SpriteIndexedAnimation* this);

bool SpriteIndexedAnimation_isLastFrame(SpriteIndexedAnimation* this);

int32_t SpriteIndexedAnimation_getLastFrame(SpriteIndexedAnimation* this);

void SpriteIndexedAnimation_setSequence(SpriteIndexedAnimation* this, int32_t* sequence);

int32_t* SpriteIndexedAnimation_getSequence(SpriteIndexedAnimation* this);

void SpriteIndexedAnimation_close(SpriteIndexedAnimation* this);

void SpriteIndexedAnimation_finalize(SpriteIndexedAnimation* this);
#define SpriteIndexedAnimation_new4 SpriteIndexedAnimation_new
#define SpriteIndexedAnimation_init4 SpriteIndexedAnimation_init
#ifndef SpriteIndexedAnimation_getAnimationBehavior
#define SpriteIndexedAnimation_getAnimationBehavior IndexedAnimation_getAnimationBehavior
#endif
#ifndef SpriteIndexedAnimation_reset
#define SpriteIndexedAnimation_reset IndexedAnimation_reset
#endif
#ifndef SpriteIndexedAnimation_setState
#define SpriteIndexedAnimation_setState IndexedAnimation_setState
#endif
#ifndef SpriteIndexedAnimation_getWidth
#define SpriteIndexedAnimation_getWidth IndexedAnimation_getWidth
#endif
#ifndef SpriteIndexedAnimation_getHeight
#define SpriteIndexedAnimation_getHeight IndexedAnimation_getHeight
#endif
#ifndef SpriteIndexedAnimation_setAlpha
#define SpriteIndexedAnimation_setAlpha Animation_setAlpha
#endif
#ifndef SpriteIndexedAnimation_paintThreedXYZ
#define SpriteIndexedAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef SpriteIndexedAnimation_isThreed
#define SpriteIndexedAnimation_isThreed Animation_isThreed
#endif
#ifndef SpriteIndexedAnimation_setBackgroundBasicColorP
#define SpriteIndexedAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef SpriteIndexedAnimation_getChangeBasicColor
#define SpriteIndexedAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef SpriteIndexedAnimation_changeBasicColor
#define SpriteIndexedAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef SpriteIndexedAnimation_getChangeColor
#define SpriteIndexedAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef SpriteIndexedAnimation_getColor
#define SpriteIndexedAnimation_getColor Animation_getColor
#endif
#ifndef SpriteIndexedAnimation_setScale
#define SpriteIndexedAnimation_setScale Animation_setScale
#endif
#ifndef SpriteIndexedAnimation_setMaxScale
#define SpriteIndexedAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef SpriteIndexedAnimation_set
#define SpriteIndexedAnimation_set Animation_set
#endif
#ifndef SpriteIndexedAnimation_setDx
#define SpriteIndexedAnimation_setDx Animation_setDx
#endif
#ifndef SpriteIndexedAnimation_getDx
#define SpriteIndexedAnimation_getDx Animation_getDx
#endif
#ifndef SpriteIndexedAnimation_setDy
#define SpriteIndexedAnimation_setDy Animation_setDy
#endif
#ifndef SpriteIndexedAnimation_getDy
#define SpriteIndexedAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpriteIndexedAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpriteIndexedAnimation_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATION_H
