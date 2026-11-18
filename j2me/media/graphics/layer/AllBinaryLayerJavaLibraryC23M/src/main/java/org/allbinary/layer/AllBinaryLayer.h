#ifndef ORG_ALLBINARY_LAYER_ALLBINARYLAYER_H
#define ORG_ALLBINARY_LAYER_ALLBINARYLAYER_H
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
// package org.allbinary.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Layer Layer;
typedef struct LayerInterface LayerInterface;
typedef struct Graphics Graphics;
typedef struct BasicGroupFactory BasicGroupFactory;
typedef struct Group Group;
typedef struct GPoint GPoint;
typedef struct Rectangle Rectangle;
typedef struct RectangleFactory RectangleFactory;
typedef struct OpenGLFeatureUtil OpenGLFeatureUtil;
typedef struct TsUtil TsUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct PositionStrings PositionStrings;
typedef struct CommonLabels CommonLabels;
typedef struct CommonSeps CommonSeps;
typedef struct ViewPositionBase ViewPositionBase;
typedef struct ViewPositionEvent ViewPositionEvent;
#if __has_include("org/allbinary/view/ViewPositionBase.h")
#include "org/allbinary/view/ViewPositionBase.h"
#endif
#if __has_include("org/allbinary/view/event/ViewPositionEvent.h")
#include "org/allbinary/view/event/ViewPositionEvent.h"
#endif
#include "java/lang/Integer.h"
#include "org/allbinary/layer/Layer.h"
#include "org/allbinary/layer/LayerInterface.h"

typedef struct AllBinaryLayer AllBinaryLayer;
struct AllBinaryLayer {
    Layer base;
    LayerInterface LayerInterface_interface;
    ViewPositionEvent* viewPositionEvent;
    int32_t halfWidth;
    int32_t halfHeight;
    const char* name;
    ViewPositionBase* viewPosition;
};

extern AllBinaryLayer* AllBinaryLayer_NULL_ALLBINARY_LAYER;

AllBinaryLayer* AllBinaryLayer_new(const char* name, Rectangle* rectangle, ViewPositionBase* viewPosition);

void AllBinaryLayer_init(AllBinaryLayer* this, const char* name, Rectangle* rectangle, ViewPositionBase* viewPosition);

void AllBinaryLayer_setPosition(AllBinaryLayer* this, int32_t x, int32_t y, int32_t z);

void AllBinaryLayer_moveDXYZ(AllBinaryLayer* this, int32_t dx, int32_t dy, int32_t dz);

int32_t AllBinaryLayer_getXP(AllBinaryLayer* this);

int32_t AllBinaryLayer_getYP(AllBinaryLayer* this);

int32_t AllBinaryLayer_getZP(AllBinaryLayer* this);

int32_t AllBinaryLayer_getWidth(AllBinaryLayer* this);

int32_t AllBinaryLayer_getHeight(AllBinaryLayer* this);

void AllBinaryLayer_setVisible(AllBinaryLayer* this, bool visible);

bool AllBinaryLayer_isVisible(AllBinaryLayer* this);

void AllBinaryLayer_paint(AllBinaryLayer* this, Graphics* graphics);

void AllBinaryLayer_onChangeEvent(AllBinaryLayer* this, ViewPositionEvent* layerManagerEvent);

void AllBinaryLayer_paintThreed(AllBinaryLayer* this, Graphics* graphics);

int32_t AllBinaryLayer_getX2(AllBinaryLayer* this);

int32_t AllBinaryLayer_getY2(AllBinaryLayer* this);

int32_t AllBinaryLayer_getZ2(AllBinaryLayer* this);

const char* AllBinaryLayer_getName(AllBinaryLayer* this);

void AllBinaryLayer_setHalfWidth(AllBinaryLayer* this, int32_t halfWidth);

int32_t AllBinaryLayer_getHalfWidth(AllBinaryLayer* this);

void AllBinaryLayer_setHalfHeight(AllBinaryLayer* this, int32_t halfHeight);

int32_t AllBinaryLayer_getHalfHeight(AllBinaryLayer* this);

int32_t AllBinaryLayer_getHalfDepth(AllBinaryLayer* this);

ViewPositionBase* AllBinaryLayer_getViewPosition(AllBinaryLayer* this);

void AllBinaryLayer_setViewPosition(AllBinaryLayer* this, ViewPositionBase* viewPosition);

Group** AllBinaryLayer_getGroupInterface(AllBinaryLayer* this);

bool AllBinaryLayer_implmentsTickableInterface(AllBinaryLayer* this);

bool AllBinaryLayer_implmentsGameInputInterface(AllBinaryLayer* this);

bool AllBinaryLayer_implmentsArtificialIntelligenceCompositeInterface(AllBinaryLayer* this);

bool AllBinaryLayer_implmentsCollidableInterface(AllBinaryLayer* this);

bool AllBinaryLayer_implementsThreedInterface(AllBinaryLayer* this);

int32_t AllBinaryLayer_getType(AllBinaryLayer* this);

int32_t AllBinaryLayer_getMultiPlayerType(AllBinaryLayer* this);

void AllBinaryLayer_toStringAppend(AllBinaryLayer* this, StringMaker* stringBuffer);

const char* AllBinaryLayer_toString(AllBinaryLayer* this);
#define AllBinaryLayer_new3 AllBinaryLayer_new
#define AllBinaryLayer_init3 AllBinaryLayer_init
#ifndef AllBinaryLayer_moveDXY
#define AllBinaryLayer_moveDXY Layer_moveDXY
#endif
#ifndef AllBinaryLayer_getDepth
#define AllBinaryLayer_getDepth Layer_getDepth
#endif
#ifndef AllBinaryLayer_setLayerWidth
#define AllBinaryLayer_setLayerWidth Layer_setLayerWidth
#endif
#ifndef AllBinaryLayer_setLayerHeight
#define AllBinaryLayer_setLayerHeight Layer_setLayerHeight
#endif
#ifndef AllBinaryLayer_setSize
#define AllBinaryLayer_setSize Layer_setSize
#endif
#ifndef AllBinaryLayer_getX
#define AllBinaryLayer_getX Layer_getX
#endif
#ifndef AllBinaryLayer_getY
#define AllBinaryLayer_getY Layer_getY
#endif
#ifndef AllBinaryLayer_move
#define AllBinaryLayer_move Layer_move
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryLayer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryLayer_register(void);

#if __has_include("org/allbinary/view/ViewPositionBase.h")
#include "org/allbinary/view/ViewPositionBase.h"
#endif

#endif // ORG_ALLBINARY_LAYER_ALLBINARYLAYER_H
