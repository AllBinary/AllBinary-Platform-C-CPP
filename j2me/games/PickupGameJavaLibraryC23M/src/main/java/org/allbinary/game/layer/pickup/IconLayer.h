#ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_ICONLAYER_H
#define ORG_ALLBINARY_GAME_LAYER_PICKUP_ICONLAYER_H
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
// package org.allbinary.game.layer.pickup

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
typedef struct NullAnimationFactory NullAnimationFactory;
typedef struct PointFactory PointFactory;
typedef struct Rectangle Rectangle;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct StringUtil StringUtil;
typedef struct ViewPosition ViewPosition;
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct IconLayer IconLayer;
struct IconLayer {
    AllBinaryLayer base;
    Animation* animationInterface;
};

extern IconLayer* IconLayer_NULL_ICON_LAYER;

IconLayer* IconLayer_new(Animation* animationInterface, int32_t width, int32_t height);

void IconLayer_init(IconLayer* this, Animation* animationInterface, int32_t width, int32_t height);

void IconLayer_paint(IconLayer* this, Graphics* graphics);

void IconLayer_paintThreed(IconLayer* this, Graphics* graphics);

Animation* IconLayer_getAnimationInterface(IconLayer* this);
#define IconLayer_new3 IconLayer_new
#define IconLayer_init3 IconLayer_init
#ifndef IconLayer_setPosition
#define IconLayer_setPosition AllBinaryLayer_setPosition
#endif
#ifndef IconLayer_moveDXYZ
#define IconLayer_moveDXYZ AllBinaryLayer_moveDXYZ
#endif
#ifndef IconLayer_getXP
#define IconLayer_getXP AllBinaryLayer_getXP
#endif
#ifndef IconLayer_getYP
#define IconLayer_getYP AllBinaryLayer_getYP
#endif
#ifndef IconLayer_getZP
#define IconLayer_getZP AllBinaryLayer_getZP
#endif
#ifndef IconLayer_getWidth
#define IconLayer_getWidth AllBinaryLayer_getWidth
#endif
#ifndef IconLayer_getHeight
#define IconLayer_getHeight AllBinaryLayer_getHeight
#endif
#ifndef IconLayer_setVisible
#define IconLayer_setVisible AllBinaryLayer_setVisible
#endif
#ifndef IconLayer_isVisible
#define IconLayer_isVisible AllBinaryLayer_isVisible
#endif
#ifndef IconLayer_onChangeEvent
#define IconLayer_onChangeEvent AllBinaryLayer_onChangeEvent
#endif
#ifndef IconLayer_getX2
#define IconLayer_getX2 AllBinaryLayer_getX2
#endif
#ifndef IconLayer_getY2
#define IconLayer_getY2 AllBinaryLayer_getY2
#endif
#ifndef IconLayer_getZ2
#define IconLayer_getZ2 AllBinaryLayer_getZ2
#endif
#ifndef IconLayer_getName
#define IconLayer_getName AllBinaryLayer_getName
#endif
#ifndef IconLayer_setHalfWidth
#define IconLayer_setHalfWidth AllBinaryLayer_setHalfWidth
#endif
#ifndef IconLayer_getHalfWidth
#define IconLayer_getHalfWidth AllBinaryLayer_getHalfWidth
#endif
#ifndef IconLayer_setHalfHeight
#define IconLayer_setHalfHeight AllBinaryLayer_setHalfHeight
#endif
#ifndef IconLayer_getHalfHeight
#define IconLayer_getHalfHeight AllBinaryLayer_getHalfHeight
#endif
#ifndef IconLayer_getHalfDepth
#define IconLayer_getHalfDepth AllBinaryLayer_getHalfDepth
#endif
#ifndef IconLayer_getViewPosition
#define IconLayer_getViewPosition AllBinaryLayer_getViewPosition
#endif
#ifndef IconLayer_setViewPosition
#define IconLayer_setViewPosition AllBinaryLayer_setViewPosition
#endif
#ifndef IconLayer_getGroupInterface
#define IconLayer_getGroupInterface AllBinaryLayer_getGroupInterface
#endif
#ifndef IconLayer_implmentsTickableInterface
#define IconLayer_implmentsTickableInterface AllBinaryLayer_implmentsTickableInterface
#endif
#ifndef IconLayer_implmentsGameInputInterface
#define IconLayer_implmentsGameInputInterface AllBinaryLayer_implmentsGameInputInterface
#endif
#ifndef IconLayer_implmentsArtificialIntelligenceCompositeInterface
#define IconLayer_implmentsArtificialIntelligenceCompositeInterface AllBinaryLayer_implmentsArtificialIntelligenceCompositeInterface
#endif
#ifndef IconLayer_implmentsCollidableInterface
#define IconLayer_implmentsCollidableInterface AllBinaryLayer_implmentsCollidableInterface
#endif
#ifndef IconLayer_implementsThreedInterface
#define IconLayer_implementsThreedInterface AllBinaryLayer_implementsThreedInterface
#endif
#ifndef IconLayer_getType
#define IconLayer_getType AllBinaryLayer_getType
#endif
#ifndef IconLayer_getMultiPlayerType
#define IconLayer_getMultiPlayerType AllBinaryLayer_getMultiPlayerType
#endif
#ifndef IconLayer_toStringAppend
#define IconLayer_toStringAppend AllBinaryLayer_toStringAppend
#endif
#ifndef IconLayer_toString
#define IconLayer_toString AllBinaryLayer_toString
#endif
#ifndef IconLayer_setPosition
#define IconLayer_setPosition Layer_setPosition
#endif
#ifndef IconLayer_moveDXY
#define IconLayer_moveDXY Layer_moveDXY
#endif
#ifndef IconLayer_moveDXYZ
#define IconLayer_moveDXYZ Layer_moveDXYZ
#endif
#ifndef IconLayer_getXP
#define IconLayer_getXP Layer_getXP
#endif
#ifndef IconLayer_getYP
#define IconLayer_getYP Layer_getYP
#endif
#ifndef IconLayer_getZP
#define IconLayer_getZP Layer_getZP
#endif
#ifndef IconLayer_getWidth
#define IconLayer_getWidth Layer_getWidth
#endif
#ifndef IconLayer_getHeight
#define IconLayer_getHeight Layer_getHeight
#endif
#ifndef IconLayer_getDepth
#define IconLayer_getDepth Layer_getDepth
#endif
#ifndef IconLayer_setVisible
#define IconLayer_setVisible Layer_setVisible
#endif
#ifndef IconLayer_isVisible
#define IconLayer_isVisible Layer_isVisible
#endif
#ifndef IconLayer_setLayerWidth
#define IconLayer_setLayerWidth Layer_setLayerWidth
#endif
#ifndef IconLayer_setLayerHeight
#define IconLayer_setLayerHeight Layer_setLayerHeight
#endif
#ifndef IconLayer_toStringAppend
#define IconLayer_toStringAppend Layer_toStringAppend
#endif
#ifndef IconLayer_setSize
#define IconLayer_setSize Layer_setSize
#endif
#ifndef IconLayer_getX
#define IconLayer_getX Layer_getX
#endif
#ifndef IconLayer_getY
#define IconLayer_getY Layer_getY
#endif
#ifndef IconLayer_move
#define IconLayer_move Layer_move
#endif
#ifndef IconLayer_setPosition
#define IconLayer_setPosition Layer_setPosition
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void IconLayer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void IconLayer_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_PICKUP_ICONLAYER_H
