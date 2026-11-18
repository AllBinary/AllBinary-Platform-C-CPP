#ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFELAYER_H
#define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFELAYER_H
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
// package org.allbinary.game.ag.layer.pickup.life

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Graphics Graphics;
typedef struct Life Life;
typedef struct LifeVisitorInterface LifeVisitorInterface;
typedef struct PointFactory PointFactory;
typedef struct Rectangle Rectangle;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct StringUtil StringUtil;
typedef struct ViewPosition ViewPosition;
#include "org/allbinary/game/ag/life/LifeVisitorInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct LifeLayer LifeLayer;
struct LifeLayer {
    AllBinaryLayer base;
    LifeVisitorInterface LifeVisitorInterface_interface;
};


LifeLayer* LifeLayer_new(void);

void LifeLayer_init(LifeLayer* this);

void LifeLayer_paint(LifeLayer* this, Graphics* graphics);

void LifeLayer_visit(LifeLayer* this, Life* lifeInterface);
#define LifeLayer_new0 LifeLayer_new
#define LifeLayer_init0 LifeLayer_init
#ifndef LifeLayer_setPosition
#define LifeLayer_setPosition AllBinaryLayer_setPosition
#endif
#ifndef LifeLayer_moveDXYZ
#define LifeLayer_moveDXYZ AllBinaryLayer_moveDXYZ
#endif
#ifndef LifeLayer_getXP
#define LifeLayer_getXP AllBinaryLayer_getXP
#endif
#ifndef LifeLayer_getYP
#define LifeLayer_getYP AllBinaryLayer_getYP
#endif
#ifndef LifeLayer_getZP
#define LifeLayer_getZP AllBinaryLayer_getZP
#endif
#ifndef LifeLayer_getWidth
#define LifeLayer_getWidth AllBinaryLayer_getWidth
#endif
#ifndef LifeLayer_getHeight
#define LifeLayer_getHeight AllBinaryLayer_getHeight
#endif
#ifndef LifeLayer_setVisible
#define LifeLayer_setVisible AllBinaryLayer_setVisible
#endif
#ifndef LifeLayer_isVisible
#define LifeLayer_isVisible AllBinaryLayer_isVisible
#endif
#ifndef LifeLayer_onChangeEvent
#define LifeLayer_onChangeEvent AllBinaryLayer_onChangeEvent
#endif
#ifndef LifeLayer_paintThreed
#define LifeLayer_paintThreed AllBinaryLayer_paintThreed
#endif
#ifndef LifeLayer_getX2
#define LifeLayer_getX2 AllBinaryLayer_getX2
#endif
#ifndef LifeLayer_getY2
#define LifeLayer_getY2 AllBinaryLayer_getY2
#endif
#ifndef LifeLayer_getZ2
#define LifeLayer_getZ2 AllBinaryLayer_getZ2
#endif
#ifndef LifeLayer_getName
#define LifeLayer_getName AllBinaryLayer_getName
#endif
#ifndef LifeLayer_setHalfWidth
#define LifeLayer_setHalfWidth AllBinaryLayer_setHalfWidth
#endif
#ifndef LifeLayer_getHalfWidth
#define LifeLayer_getHalfWidth AllBinaryLayer_getHalfWidth
#endif
#ifndef LifeLayer_setHalfHeight
#define LifeLayer_setHalfHeight AllBinaryLayer_setHalfHeight
#endif
#ifndef LifeLayer_getHalfHeight
#define LifeLayer_getHalfHeight AllBinaryLayer_getHalfHeight
#endif
#ifndef LifeLayer_getHalfDepth
#define LifeLayer_getHalfDepth AllBinaryLayer_getHalfDepth
#endif
#ifndef LifeLayer_getViewPosition
#define LifeLayer_getViewPosition AllBinaryLayer_getViewPosition
#endif
#ifndef LifeLayer_setViewPosition
#define LifeLayer_setViewPosition AllBinaryLayer_setViewPosition
#endif
#ifndef LifeLayer_getGroupInterface
#define LifeLayer_getGroupInterface AllBinaryLayer_getGroupInterface
#endif
#ifndef LifeLayer_implmentsTickableInterface
#define LifeLayer_implmentsTickableInterface AllBinaryLayer_implmentsTickableInterface
#endif
#ifndef LifeLayer_implmentsGameInputInterface
#define LifeLayer_implmentsGameInputInterface AllBinaryLayer_implmentsGameInputInterface
#endif
#ifndef LifeLayer_implmentsArtificialIntelligenceCompositeInterface
#define LifeLayer_implmentsArtificialIntelligenceCompositeInterface AllBinaryLayer_implmentsArtificialIntelligenceCompositeInterface
#endif
#ifndef LifeLayer_implmentsCollidableInterface
#define LifeLayer_implmentsCollidableInterface AllBinaryLayer_implmentsCollidableInterface
#endif
#ifndef LifeLayer_implementsThreedInterface
#define LifeLayer_implementsThreedInterface AllBinaryLayer_implementsThreedInterface
#endif
#ifndef LifeLayer_getType
#define LifeLayer_getType AllBinaryLayer_getType
#endif
#ifndef LifeLayer_getMultiPlayerType
#define LifeLayer_getMultiPlayerType AllBinaryLayer_getMultiPlayerType
#endif
#ifndef LifeLayer_toStringAppend
#define LifeLayer_toStringAppend AllBinaryLayer_toStringAppend
#endif
#ifndef LifeLayer_toString
#define LifeLayer_toString AllBinaryLayer_toString
#endif
#ifndef LifeLayer_setPosition
#define LifeLayer_setPosition Layer_setPosition
#endif
#ifndef LifeLayer_moveDXY
#define LifeLayer_moveDXY Layer_moveDXY
#endif
#ifndef LifeLayer_moveDXYZ
#define LifeLayer_moveDXYZ Layer_moveDXYZ
#endif
#ifndef LifeLayer_getXP
#define LifeLayer_getXP Layer_getXP
#endif
#ifndef LifeLayer_getYP
#define LifeLayer_getYP Layer_getYP
#endif
#ifndef LifeLayer_getZP
#define LifeLayer_getZP Layer_getZP
#endif
#ifndef LifeLayer_getWidth
#define LifeLayer_getWidth Layer_getWidth
#endif
#ifndef LifeLayer_getHeight
#define LifeLayer_getHeight Layer_getHeight
#endif
#ifndef LifeLayer_getDepth
#define LifeLayer_getDepth Layer_getDepth
#endif
#ifndef LifeLayer_setVisible
#define LifeLayer_setVisible Layer_setVisible
#endif
#ifndef LifeLayer_isVisible
#define LifeLayer_isVisible Layer_isVisible
#endif
#ifndef LifeLayer_setLayerWidth
#define LifeLayer_setLayerWidth Layer_setLayerWidth
#endif
#ifndef LifeLayer_setLayerHeight
#define LifeLayer_setLayerHeight Layer_setLayerHeight
#endif
#ifndef LifeLayer_toStringAppend
#define LifeLayer_toStringAppend Layer_toStringAppend
#endif
#ifndef LifeLayer_setSize
#define LifeLayer_setSize Layer_setSize
#endif
#ifndef LifeLayer_getX
#define LifeLayer_getX Layer_getX
#endif
#ifndef LifeLayer_getY
#define LifeLayer_getY Layer_getY
#endif
#ifndef LifeLayer_move
#define LifeLayer_move Layer_move
#endif
#ifndef LifeLayer_setPosition
#define LifeLayer_setPosition Layer_setPosition
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LifeLayer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LifeLayer_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFELAYER_H
