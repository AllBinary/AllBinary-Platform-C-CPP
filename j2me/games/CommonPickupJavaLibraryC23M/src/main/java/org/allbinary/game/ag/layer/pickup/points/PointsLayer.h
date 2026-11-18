#ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSLAYER_H
#define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSLAYER_H
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
// package org.allbinary.game.ag.layer.pickup.points

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Graphics Graphics;
typedef struct ScoreableInterface ScoreableInterface;
typedef struct PointFactory PointFactory;
typedef struct Rectangle Rectangle;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct StringUtil StringUtil;
typedef struct ViewPosition ViewPosition;
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct PointsLayer PointsLayer;
struct PointsLayer {
    AllBinaryLayer base;
    int32_t points;
};


PointsLayer* PointsLayer_new(int32_t points);

void PointsLayer_init(PointsLayer* this, int32_t points);

void PointsLayer_paint(PointsLayer* this, Graphics* graphics);

void PointsLayer_visit(PointsLayer* this, ScoreableInterface* scoreableInterface);
#define PointsLayer_new1 PointsLayer_new
#define PointsLayer_init1 PointsLayer_init
#ifndef PointsLayer_setPosition
#define PointsLayer_setPosition AllBinaryLayer_setPosition
#endif
#ifndef PointsLayer_moveDXYZ
#define PointsLayer_moveDXYZ AllBinaryLayer_moveDXYZ
#endif
#ifndef PointsLayer_getXP
#define PointsLayer_getXP AllBinaryLayer_getXP
#endif
#ifndef PointsLayer_getYP
#define PointsLayer_getYP AllBinaryLayer_getYP
#endif
#ifndef PointsLayer_getZP
#define PointsLayer_getZP AllBinaryLayer_getZP
#endif
#ifndef PointsLayer_getWidth
#define PointsLayer_getWidth AllBinaryLayer_getWidth
#endif
#ifndef PointsLayer_getHeight
#define PointsLayer_getHeight AllBinaryLayer_getHeight
#endif
#ifndef PointsLayer_setVisible
#define PointsLayer_setVisible AllBinaryLayer_setVisible
#endif
#ifndef PointsLayer_isVisible
#define PointsLayer_isVisible AllBinaryLayer_isVisible
#endif
#ifndef PointsLayer_onChangeEvent
#define PointsLayer_onChangeEvent AllBinaryLayer_onChangeEvent
#endif
#ifndef PointsLayer_paintThreed
#define PointsLayer_paintThreed AllBinaryLayer_paintThreed
#endif
#ifndef PointsLayer_getX2
#define PointsLayer_getX2 AllBinaryLayer_getX2
#endif
#ifndef PointsLayer_getY2
#define PointsLayer_getY2 AllBinaryLayer_getY2
#endif
#ifndef PointsLayer_getZ2
#define PointsLayer_getZ2 AllBinaryLayer_getZ2
#endif
#ifndef PointsLayer_getName
#define PointsLayer_getName AllBinaryLayer_getName
#endif
#ifndef PointsLayer_setHalfWidth
#define PointsLayer_setHalfWidth AllBinaryLayer_setHalfWidth
#endif
#ifndef PointsLayer_getHalfWidth
#define PointsLayer_getHalfWidth AllBinaryLayer_getHalfWidth
#endif
#ifndef PointsLayer_setHalfHeight
#define PointsLayer_setHalfHeight AllBinaryLayer_setHalfHeight
#endif
#ifndef PointsLayer_getHalfHeight
#define PointsLayer_getHalfHeight AllBinaryLayer_getHalfHeight
#endif
#ifndef PointsLayer_getHalfDepth
#define PointsLayer_getHalfDepth AllBinaryLayer_getHalfDepth
#endif
#ifndef PointsLayer_getViewPosition
#define PointsLayer_getViewPosition AllBinaryLayer_getViewPosition
#endif
#ifndef PointsLayer_setViewPosition
#define PointsLayer_setViewPosition AllBinaryLayer_setViewPosition
#endif
#ifndef PointsLayer_getGroupInterface
#define PointsLayer_getGroupInterface AllBinaryLayer_getGroupInterface
#endif
#ifndef PointsLayer_implmentsTickableInterface
#define PointsLayer_implmentsTickableInterface AllBinaryLayer_implmentsTickableInterface
#endif
#ifndef PointsLayer_implmentsGameInputInterface
#define PointsLayer_implmentsGameInputInterface AllBinaryLayer_implmentsGameInputInterface
#endif
#ifndef PointsLayer_implmentsArtificialIntelligenceCompositeInterface
#define PointsLayer_implmentsArtificialIntelligenceCompositeInterface AllBinaryLayer_implmentsArtificialIntelligenceCompositeInterface
#endif
#ifndef PointsLayer_implmentsCollidableInterface
#define PointsLayer_implmentsCollidableInterface AllBinaryLayer_implmentsCollidableInterface
#endif
#ifndef PointsLayer_implementsThreedInterface
#define PointsLayer_implementsThreedInterface AllBinaryLayer_implementsThreedInterface
#endif
#ifndef PointsLayer_getType
#define PointsLayer_getType AllBinaryLayer_getType
#endif
#ifndef PointsLayer_getMultiPlayerType
#define PointsLayer_getMultiPlayerType AllBinaryLayer_getMultiPlayerType
#endif
#ifndef PointsLayer_toStringAppend
#define PointsLayer_toStringAppend AllBinaryLayer_toStringAppend
#endif
#ifndef PointsLayer_toString
#define PointsLayer_toString AllBinaryLayer_toString
#endif
#ifndef PointsLayer_setPosition
#define PointsLayer_setPosition Layer_setPosition
#endif
#ifndef PointsLayer_moveDXY
#define PointsLayer_moveDXY Layer_moveDXY
#endif
#ifndef PointsLayer_moveDXYZ
#define PointsLayer_moveDXYZ Layer_moveDXYZ
#endif
#ifndef PointsLayer_getXP
#define PointsLayer_getXP Layer_getXP
#endif
#ifndef PointsLayer_getYP
#define PointsLayer_getYP Layer_getYP
#endif
#ifndef PointsLayer_getZP
#define PointsLayer_getZP Layer_getZP
#endif
#ifndef PointsLayer_getWidth
#define PointsLayer_getWidth Layer_getWidth
#endif
#ifndef PointsLayer_getHeight
#define PointsLayer_getHeight Layer_getHeight
#endif
#ifndef PointsLayer_getDepth
#define PointsLayer_getDepth Layer_getDepth
#endif
#ifndef PointsLayer_setVisible
#define PointsLayer_setVisible Layer_setVisible
#endif
#ifndef PointsLayer_isVisible
#define PointsLayer_isVisible Layer_isVisible
#endif
#ifndef PointsLayer_setLayerWidth
#define PointsLayer_setLayerWidth Layer_setLayerWidth
#endif
#ifndef PointsLayer_setLayerHeight
#define PointsLayer_setLayerHeight Layer_setLayerHeight
#endif
#ifndef PointsLayer_toStringAppend
#define PointsLayer_toStringAppend Layer_toStringAppend
#endif
#ifndef PointsLayer_setSize
#define PointsLayer_setSize Layer_setSize
#endif
#ifndef PointsLayer_getX
#define PointsLayer_getX Layer_getX
#endif
#ifndef PointsLayer_getY
#define PointsLayer_getY Layer_getY
#endif
#ifndef PointsLayer_move
#define PointsLayer_move Layer_move
#endif
#ifndef PointsLayer_setPosition
#define PointsLayer_setPosition Layer_setPosition
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PointsLayer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PointsLayer_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSLAYER_H
