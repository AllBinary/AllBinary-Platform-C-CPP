#ifndef ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERINTERFACE_H
#define ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERINTERFACE_H
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
// package org.allbinary.game.layer.drop

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct PickedUpLayerInterface PickedUpLayerInterface;
typedef struct LayerInterface LayerInterface;
#include "org/allbinary/layer/LayerInterface.h"

typedef struct DropLayerInterface DropLayerInterface;
struct DropLayerInterface {
    PickedUpLayerInterface* (*getDroppedLayer)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DropLayerInterface_staticInit(void);

static inline PickedUpLayerInterface* DropLayerInterface_getDroppedLayer(void* this) {
    return ((__typeof__(((DropLayerInterface*) nullptr)->getDroppedLayer)) java_method_of(this, "getDroppedLayer"))(this);
}
#define DropLayerInterface_getHeight LayerInterface_getHeight
#define DropLayerInterface_getWidth LayerInterface_getWidth
#define DropLayerInterface_getHalfHeight LayerInterface_getHalfHeight
#define DropLayerInterface_getHalfWidth LayerInterface_getHalfWidth
#define DropLayerInterface_getXP LayerInterface_getXP
#define DropLayerInterface_getYP LayerInterface_getYP
#define DropLayerInterface_getZP LayerInterface_getZP
#define DropLayerInterface_getX2 LayerInterface_getX2
#define DropLayerInterface_getY2 LayerInterface_getY2
#define DropLayerInterface_getZ2 LayerInterface_getZ2
#define DropLayerInterface_isVisible LayerInterface_isVisible
#define DropLayerInterface_moveDXYZ LayerInterface_moveDXYZ
#define DropLayerInterface_setVisible LayerInterface_setVisible
#define DropLayerInterface_implmentsTickableInterface LayerInterface_implmentsTickableInterface
#define DropLayerInterface_implmentsCollidableInterface LayerInterface_implmentsCollidableInterface
#define DropLayerInterface_implmentsGameInputInterface LayerInterface_implmentsGameInputInterface
#define DropLayerInterface_implmentsArtificialIntelligenceCompositeInterface LayerInterface_implmentsArtificialIntelligenceCompositeInterface
#define DropLayerInterface_getType LayerInterface_getType

#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterface.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterface.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERINTERFACE_H
