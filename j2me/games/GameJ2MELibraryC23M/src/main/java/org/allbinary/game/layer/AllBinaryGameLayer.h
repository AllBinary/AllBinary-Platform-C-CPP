#ifndef ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYER_H
#define ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYER_H
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct SWTUtil SWTUtil;
typedef struct SWTBlackPaintable SWTBlackPaintable;
typedef struct GameLayerUtil GameLayerUtil;
typedef struct GL GL;
typedef struct Graphics Graphics;
typedef struct Rectangle Rectangle;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct BasicColorSetUtil BasicColorSetUtil;
typedef struct NullPaintable NullPaintable;
typedef struct Paintable Paintable;
typedef struct OpenGLSurfaceChangedInterface OpenGLSurfaceChangedInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
typedef struct ViewPositionBase ViewPositionBase;
typedef struct ViewPositionEvent ViewPositionEvent;
typedef struct ViewPositionEventListenerInterface ViewPositionEventListenerInterface;
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorSetUtil.h")
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#endif
#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif
#include "org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "org/allbinary/view/event/ViewPositionEventListenerInterface.h"

typedef struct AllBinaryGameLayer AllBinaryGameLayer;
struct AllBinaryGameLayer {
    AllBinaryLayer base;
    ViewPositionEventListenerInterface ViewPositionEventListenerInterface_interface;
    OpenGLSurfaceChangedInterface OpenGLSurfaceChangedInterface_interface;
    CommonStrings* commonStrings;
    BasicColorSetUtil* basicSetColorUtil;
    BasicColor* RED;
    Paintable* paintable;
    BasicArrayList* gameKeyEventList;
};


AllBinaryGameLayer* AllBinaryGameLayer_new(const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition);


void AllBinaryGameLayer_init(AllBinaryGameLayer* this, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition);

void AllBinaryGameLayer_set(AllBinaryGameLayer* this, GL* gl);

void AllBinaryGameLayer_move(AllBinaryGameLayer* this);

BasicArrayList* AllBinaryGameLayer_getGameKeyEventList(AllBinaryGameLayer* this);

void AllBinaryGameLayer_processInput(AllBinaryGameLayer* this, AllBinaryLayerManager* allBinaryLayerManager);

void AllBinaryGameLayer_processTick(AllBinaryGameLayer* this, AllBinaryLayerManager* allBinaryLayerManager);

void AllBinaryGameLayer_onEvent(AllBinaryGameLayer* this, AllBinaryEventObject* eventObject);

void AllBinaryGameLayer_onViewPositionChangeEvent(AllBinaryGameLayer* this);

void AllBinaryGameLayer_onChangeEvent(AllBinaryGameLayer* this, ViewPositionEvent* layerManagerEvent);

void AllBinaryGameLayer_paintFirst(AllBinaryGameLayer* this, Graphics* graphics);

void AllBinaryGameLayer_paintDebug(AllBinaryGameLayer* this, Graphics* graphics);

void AllBinaryGameLayer_setWidth(AllBinaryGameLayer* this, int32_t width);

void AllBinaryGameLayer_setHeight(AllBinaryGameLayer* this, int32_t height);
#define AllBinaryGameLayer_new3 AllBinaryGameLayer_new
#define AllBinaryGameLayer_init3 AllBinaryGameLayer_init
#ifndef AllBinaryGameLayer_setPosition
#define AllBinaryGameLayer_setPosition AllBinaryLayer_setPosition
#endif
#ifndef AllBinaryGameLayer_moveDXYZ
#define AllBinaryGameLayer_moveDXYZ AllBinaryLayer_moveDXYZ
#endif
#ifndef AllBinaryGameLayer_getXP
#define AllBinaryGameLayer_getXP AllBinaryLayer_getXP
#endif
#ifndef AllBinaryGameLayer_getYP
#define AllBinaryGameLayer_getYP AllBinaryLayer_getYP
#endif
#ifndef AllBinaryGameLayer_getZP
#define AllBinaryGameLayer_getZP AllBinaryLayer_getZP
#endif
#ifndef AllBinaryGameLayer_getWidth
#define AllBinaryGameLayer_getWidth AllBinaryLayer_getWidth
#endif
#ifndef AllBinaryGameLayer_getHeight
#define AllBinaryGameLayer_getHeight AllBinaryLayer_getHeight
#endif
#ifndef AllBinaryGameLayer_setVisible
#define AllBinaryGameLayer_setVisible AllBinaryLayer_setVisible
#endif
#ifndef AllBinaryGameLayer_isVisible
#define AllBinaryGameLayer_isVisible AllBinaryLayer_isVisible
#endif
#ifndef AllBinaryGameLayer_paint
#define AllBinaryGameLayer_paint AllBinaryLayer_paint
#endif
#ifndef AllBinaryGameLayer_paintThreed
#define AllBinaryGameLayer_paintThreed AllBinaryLayer_paintThreed
#endif
#ifndef AllBinaryGameLayer_getX2
#define AllBinaryGameLayer_getX2 AllBinaryLayer_getX2
#endif
#ifndef AllBinaryGameLayer_getY2
#define AllBinaryGameLayer_getY2 AllBinaryLayer_getY2
#endif
#ifndef AllBinaryGameLayer_getZ2
#define AllBinaryGameLayer_getZ2 AllBinaryLayer_getZ2
#endif
#ifndef AllBinaryGameLayer_getName
#define AllBinaryGameLayer_getName AllBinaryLayer_getName
#endif
#ifndef AllBinaryGameLayer_setHalfWidth
#define AllBinaryGameLayer_setHalfWidth AllBinaryLayer_setHalfWidth
#endif
#ifndef AllBinaryGameLayer_getHalfWidth
#define AllBinaryGameLayer_getHalfWidth AllBinaryLayer_getHalfWidth
#endif
#ifndef AllBinaryGameLayer_setHalfHeight
#define AllBinaryGameLayer_setHalfHeight AllBinaryLayer_setHalfHeight
#endif
#ifndef AllBinaryGameLayer_getHalfHeight
#define AllBinaryGameLayer_getHalfHeight AllBinaryLayer_getHalfHeight
#endif
#ifndef AllBinaryGameLayer_getHalfDepth
#define AllBinaryGameLayer_getHalfDepth AllBinaryLayer_getHalfDepth
#endif
#ifndef AllBinaryGameLayer_getViewPosition
#define AllBinaryGameLayer_getViewPosition AllBinaryLayer_getViewPosition
#endif
#ifndef AllBinaryGameLayer_setViewPosition
#define AllBinaryGameLayer_setViewPosition AllBinaryLayer_setViewPosition
#endif
#ifndef AllBinaryGameLayer_getGroupInterface
#define AllBinaryGameLayer_getGroupInterface AllBinaryLayer_getGroupInterface
#endif
#ifndef AllBinaryGameLayer_implmentsTickableInterface
#define AllBinaryGameLayer_implmentsTickableInterface AllBinaryLayer_implmentsTickableInterface
#endif
#ifndef AllBinaryGameLayer_implmentsGameInputInterface
#define AllBinaryGameLayer_implmentsGameInputInterface AllBinaryLayer_implmentsGameInputInterface
#endif
#ifndef AllBinaryGameLayer_implmentsArtificialIntelligenceCompositeInterface
#define AllBinaryGameLayer_implmentsArtificialIntelligenceCompositeInterface AllBinaryLayer_implmentsArtificialIntelligenceCompositeInterface
#endif
#ifndef AllBinaryGameLayer_implmentsCollidableInterface
#define AllBinaryGameLayer_implmentsCollidableInterface AllBinaryLayer_implmentsCollidableInterface
#endif
#ifndef AllBinaryGameLayer_implementsThreedInterface
#define AllBinaryGameLayer_implementsThreedInterface AllBinaryLayer_implementsThreedInterface
#endif
#ifndef AllBinaryGameLayer_getType
#define AllBinaryGameLayer_getType AllBinaryLayer_getType
#endif
#ifndef AllBinaryGameLayer_getMultiPlayerType
#define AllBinaryGameLayer_getMultiPlayerType AllBinaryLayer_getMultiPlayerType
#endif
#ifndef AllBinaryGameLayer_toStringAppend
#define AllBinaryGameLayer_toStringAppend AllBinaryLayer_toStringAppend
#endif
#ifndef AllBinaryGameLayer_toString
#define AllBinaryGameLayer_toString AllBinaryLayer_toString
#endif
#ifndef AllBinaryGameLayer_setPosition
#define AllBinaryGameLayer_setPosition Layer_setPosition
#endif
#ifndef AllBinaryGameLayer_moveDXY
#define AllBinaryGameLayer_moveDXY Layer_moveDXY
#endif
#ifndef AllBinaryGameLayer_moveDXYZ
#define AllBinaryGameLayer_moveDXYZ Layer_moveDXYZ
#endif
#ifndef AllBinaryGameLayer_getXP
#define AllBinaryGameLayer_getXP Layer_getXP
#endif
#ifndef AllBinaryGameLayer_getYP
#define AllBinaryGameLayer_getYP Layer_getYP
#endif
#ifndef AllBinaryGameLayer_getZP
#define AllBinaryGameLayer_getZP Layer_getZP
#endif
#ifndef AllBinaryGameLayer_getWidth
#define AllBinaryGameLayer_getWidth Layer_getWidth
#endif
#ifndef AllBinaryGameLayer_getHeight
#define AllBinaryGameLayer_getHeight Layer_getHeight
#endif
#ifndef AllBinaryGameLayer_getDepth
#define AllBinaryGameLayer_getDepth Layer_getDepth
#endif
#ifndef AllBinaryGameLayer_setVisible
#define AllBinaryGameLayer_setVisible Layer_setVisible
#endif
#ifndef AllBinaryGameLayer_isVisible
#define AllBinaryGameLayer_isVisible Layer_isVisible
#endif
#ifndef AllBinaryGameLayer_paint
#define AllBinaryGameLayer_paint Layer_paint
#endif
#ifndef AllBinaryGameLayer_setLayerWidth
#define AllBinaryGameLayer_setLayerWidth Layer_setLayerWidth
#endif
#ifndef AllBinaryGameLayer_setLayerHeight
#define AllBinaryGameLayer_setLayerHeight Layer_setLayerHeight
#endif
#ifndef AllBinaryGameLayer_toStringAppend
#define AllBinaryGameLayer_toStringAppend Layer_toStringAppend
#endif
#ifndef AllBinaryGameLayer_setSize
#define AllBinaryGameLayer_setSize Layer_setSize
#endif
#ifndef AllBinaryGameLayer_getX
#define AllBinaryGameLayer_getX Layer_getX
#endif
#ifndef AllBinaryGameLayer_getY
#define AllBinaryGameLayer_getY Layer_getY
#endif
#ifndef AllBinaryGameLayer_setPosition
#define AllBinaryGameLayer_setPosition Layer_setPosition
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryGameLayer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryGameLayer_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYER_H
