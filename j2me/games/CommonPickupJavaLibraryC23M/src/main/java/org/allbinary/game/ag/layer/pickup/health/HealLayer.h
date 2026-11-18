#ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYER_H
#define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYER_H
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
// package org.allbinary.game.ag.layer.pickup.health

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Graphics Graphics;
typedef struct HealthInterface HealthInterface;
typedef struct HealthVisitorInterface HealthVisitorInterface;
typedef struct PointFactory PointFactory;
typedef struct Rectangle Rectangle;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct StringUtil StringUtil;
typedef struct ViewPosition ViewPosition;
#include "org/allbinary/game/health/HealthVisitorInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct HealLayer HealLayer;
struct HealLayer {
    AllBinaryLayer base;
    HealthVisitorInterface HealthVisitorInterface_interface;
};


HealLayer* HealLayer_new(void);

void HealLayer_init(HealLayer* this);

void HealLayer_paint(HealLayer* this, Graphics* graphics);

void HealLayer_visit(HealLayer* this, HealthInterface* healthInterface);
#define HealLayer_new0 HealLayer_new
#define HealLayer_init0 HealLayer_init
#ifndef HealLayer_setPosition
#define HealLayer_setPosition AllBinaryLayer_setPosition
#endif
#ifndef HealLayer_moveDXYZ
#define HealLayer_moveDXYZ AllBinaryLayer_moveDXYZ
#endif
#ifndef HealLayer_getXP
#define HealLayer_getXP AllBinaryLayer_getXP
#endif
#ifndef HealLayer_getYP
#define HealLayer_getYP AllBinaryLayer_getYP
#endif
#ifndef HealLayer_getZP
#define HealLayer_getZP AllBinaryLayer_getZP
#endif
#ifndef HealLayer_getWidth
#define HealLayer_getWidth AllBinaryLayer_getWidth
#endif
#ifndef HealLayer_getHeight
#define HealLayer_getHeight AllBinaryLayer_getHeight
#endif
#ifndef HealLayer_setVisible
#define HealLayer_setVisible AllBinaryLayer_setVisible
#endif
#ifndef HealLayer_isVisible
#define HealLayer_isVisible AllBinaryLayer_isVisible
#endif
#ifndef HealLayer_onChangeEvent
#define HealLayer_onChangeEvent AllBinaryLayer_onChangeEvent
#endif
#ifndef HealLayer_paintThreed
#define HealLayer_paintThreed AllBinaryLayer_paintThreed
#endif
#ifndef HealLayer_getX2
#define HealLayer_getX2 AllBinaryLayer_getX2
#endif
#ifndef HealLayer_getY2
#define HealLayer_getY2 AllBinaryLayer_getY2
#endif
#ifndef HealLayer_getZ2
#define HealLayer_getZ2 AllBinaryLayer_getZ2
#endif
#ifndef HealLayer_getName
#define HealLayer_getName AllBinaryLayer_getName
#endif
#ifndef HealLayer_setHalfWidth
#define HealLayer_setHalfWidth AllBinaryLayer_setHalfWidth
#endif
#ifndef HealLayer_getHalfWidth
#define HealLayer_getHalfWidth AllBinaryLayer_getHalfWidth
#endif
#ifndef HealLayer_setHalfHeight
#define HealLayer_setHalfHeight AllBinaryLayer_setHalfHeight
#endif
#ifndef HealLayer_getHalfHeight
#define HealLayer_getHalfHeight AllBinaryLayer_getHalfHeight
#endif
#ifndef HealLayer_getHalfDepth
#define HealLayer_getHalfDepth AllBinaryLayer_getHalfDepth
#endif
#ifndef HealLayer_getViewPosition
#define HealLayer_getViewPosition AllBinaryLayer_getViewPosition
#endif
#ifndef HealLayer_setViewPosition
#define HealLayer_setViewPosition AllBinaryLayer_setViewPosition
#endif
#ifndef HealLayer_getGroupInterface
#define HealLayer_getGroupInterface AllBinaryLayer_getGroupInterface
#endif
#ifndef HealLayer_implmentsTickableInterface
#define HealLayer_implmentsTickableInterface AllBinaryLayer_implmentsTickableInterface
#endif
#ifndef HealLayer_implmentsGameInputInterface
#define HealLayer_implmentsGameInputInterface AllBinaryLayer_implmentsGameInputInterface
#endif
#ifndef HealLayer_implmentsArtificialIntelligenceCompositeInterface
#define HealLayer_implmentsArtificialIntelligenceCompositeInterface AllBinaryLayer_implmentsArtificialIntelligenceCompositeInterface
#endif
#ifndef HealLayer_implmentsCollidableInterface
#define HealLayer_implmentsCollidableInterface AllBinaryLayer_implmentsCollidableInterface
#endif
#ifndef HealLayer_implementsThreedInterface
#define HealLayer_implementsThreedInterface AllBinaryLayer_implementsThreedInterface
#endif
#ifndef HealLayer_getType
#define HealLayer_getType AllBinaryLayer_getType
#endif
#ifndef HealLayer_getMultiPlayerType
#define HealLayer_getMultiPlayerType AllBinaryLayer_getMultiPlayerType
#endif
#ifndef HealLayer_toStringAppend
#define HealLayer_toStringAppend AllBinaryLayer_toStringAppend
#endif
#ifndef HealLayer_toString
#define HealLayer_toString AllBinaryLayer_toString
#endif
#ifndef HealLayer_setPosition
#define HealLayer_setPosition Layer_setPosition
#endif
#ifndef HealLayer_moveDXY
#define HealLayer_moveDXY Layer_moveDXY
#endif
#ifndef HealLayer_moveDXYZ
#define HealLayer_moveDXYZ Layer_moveDXYZ
#endif
#ifndef HealLayer_getXP
#define HealLayer_getXP Layer_getXP
#endif
#ifndef HealLayer_getYP
#define HealLayer_getYP Layer_getYP
#endif
#ifndef HealLayer_getZP
#define HealLayer_getZP Layer_getZP
#endif
#ifndef HealLayer_getWidth
#define HealLayer_getWidth Layer_getWidth
#endif
#ifndef HealLayer_getHeight
#define HealLayer_getHeight Layer_getHeight
#endif
#ifndef HealLayer_getDepth
#define HealLayer_getDepth Layer_getDepth
#endif
#ifndef HealLayer_setVisible
#define HealLayer_setVisible Layer_setVisible
#endif
#ifndef HealLayer_isVisible
#define HealLayer_isVisible Layer_isVisible
#endif
#ifndef HealLayer_setLayerWidth
#define HealLayer_setLayerWidth Layer_setLayerWidth
#endif
#ifndef HealLayer_setLayerHeight
#define HealLayer_setLayerHeight Layer_setLayerHeight
#endif
#ifndef HealLayer_toStringAppend
#define HealLayer_toStringAppend Layer_toStringAppend
#endif
#ifndef HealLayer_setSize
#define HealLayer_setSize Layer_setSize
#endif
#ifndef HealLayer_getX
#define HealLayer_getX Layer_getX
#endif
#ifndef HealLayer_getY
#define HealLayer_getY Layer_getY
#endif
#ifndef HealLayer_move
#define HealLayer_move Layer_move
#endif
#ifndef HealLayer_setPosition
#define HealLayer_setPosition Layer_setPosition
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HealLayer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HealLayer_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYER_H
