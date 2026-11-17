/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionTracking.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/layer/VehicleLayerInterface.h"

typedef struct NullVehicleLayer NullVehicleLayer;
struct NullVehicleLayer {
    VehicleLayerInterface VehicleLayerInterface_interface;
};

NullVehicleLayer* NullVehicleLayer_NULL_VEHICLE_LAYER;

NullVehicleLayer* NullVehicleLayer_new(void);
const char* NullVehicleLayer_getName(NullVehicleLayer* this);
Group** NullVehicleLayer_getGroupInterface(NullVehicleLayer* this);
void NullVehicleLayer_setPosition(NullVehicleLayer* this, int32_t x, int32_t y, int32_t z);
int32_t NullVehicleLayer_getHeight(NullVehicleLayer* this);
int32_t NullVehicleLayer_getWidth(NullVehicleLayer* this);
int32_t NullVehicleLayer_getHalfHeight(NullVehicleLayer* this);
int32_t NullVehicleLayer_getHalfWidth(NullVehicleLayer* this);
int32_t NullVehicleLayer_getXP(NullVehicleLayer* this);
int32_t NullVehicleLayer_getYP(NullVehicleLayer* this);
int32_t NullVehicleLayer_getZP(NullVehicleLayer* this);
int32_t NullVehicleLayer_getX2(NullVehicleLayer* this);
int32_t NullVehicleLayer_getY2(NullVehicleLayer* this);
int32_t NullVehicleLayer_getZ2(NullVehicleLayer* this);
bool NullVehicleLayer_isVisible(NullVehicleLayer* this);
void NullVehicleLayer_moveDXYZ(NullVehicleLayer* this, int32_t dx, int32_t dy, int32_t dz);
void NullVehicleLayer_setVisible(NullVehicleLayer* this, bool visible);
bool NullVehicleLayer_implmentsTickableInterface(NullVehicleLayer* this);
bool NullVehicleLayer_implmentsCollidableInterface(NullVehicleLayer* this);
bool NullVehicleLayer_implmentsGameInputInterface(NullVehicleLayer* this);
bool NullVehicleLayer_implmentsArtificialIntelligenceCompositeInterface(NullVehicleLayer* this);
int32_t NullVehicleLayer_getType(NullVehicleLayer* this);
VehicleProperties* NullVehicleLayer_getVehicleProperties(NullVehicleLayer* this);
BasicArrayList* NullVehicleLayer_getGameKeyEventList(NullVehicleLayer* this);
BasicDecimal* NullVehicleLayer_getSpeedBasicDecimal(NullVehicleLayer* this);
bool NullVehicleLayer_isReadyForExplosion(NullVehicleLayer* this);
RotationAnimation* NullVehicleLayer_getRotationAnimationInterface(NullVehicleLayer* this);
void NullVehicleLayer_setRotationAnimationInterface(NullVehicleLayer* this, RotationAnimation* animationInterface);
bool NullVehicleLayer_isDestroyed(NullVehicleLayer* this);
bool NullVehicleLayer_isFinish(NullVehicleLayer* this);
int32_t NullVehicleLayer_getFinalPosition(NullVehicleLayer* this);
void NullVehicleLayer_handleFinish(NullVehicleLayer* this);
GeographicMapCellPositionTracking* NullVehicleLayer_getGeographicMapCellPositionTracking(NullVehicleLayer* this);
GeographicMapCellHistory** NullVehicleLayer_getGeographicMapCellHistoryArray(NullVehicleLayer* this);
void NullVehicleLayer_setGeographicMapCellHistoryArray(NullVehicleLayer* this, GeographicMapCellHistory** geographicMapCellHistory);
void NullVehicleLayer_paint(NullVehicleLayer* this, Graphics* graphics);
void NullVehicleLayer_paintThreed(NullVehicleLayer* this, Graphics* graphics);

// Static fields with runtime initializers: call this once at startup
void NullVehicleLayer_staticInit(void) {
    NullVehicleLayer_NULL_VEHICLE_LAYER = NullVehicleLayer_new();
}

void NullVehicleLayer_init(NullVehicleLayer* this) {
}

NullVehicleLayer* NullVehicleLayer_new(void) {
    NullVehicleLayer* this = calloc(1, sizeof(NullVehicleLayer));
    NullVehicleLayer_init(this);
    return this;
}


const char* NullVehicleLayer_getName(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


Group** NullVehicleLayer_getGroupInterface(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullVehicleLayer_setPosition(NullVehicleLayer* this, int32_t x, int32_t y, int32_t z) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullVehicleLayer_getHeight(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullVehicleLayer_getWidth(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullVehicleLayer_getHalfHeight(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullVehicleLayer_getHalfWidth(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullVehicleLayer_getXP(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullVehicleLayer_getYP(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullVehicleLayer_getZP(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullVehicleLayer_getX2(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullVehicleLayer_getY2(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullVehicleLayer_getZ2(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool NullVehicleLayer_isVisible(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullVehicleLayer_moveDXYZ(NullVehicleLayer* this, int32_t dx, int32_t dy, int32_t dz) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullVehicleLayer_setVisible(NullVehicleLayer* this, bool visible) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool NullVehicleLayer_implmentsTickableInterface(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool NullVehicleLayer_implmentsCollidableInterface(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool NullVehicleLayer_implmentsGameInputInterface(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool NullVehicleLayer_implmentsArtificialIntelligenceCompositeInterface(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullVehicleLayer_getType(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


VehicleProperties* NullVehicleLayer_getVehicleProperties(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


BasicArrayList* NullVehicleLayer_getGameKeyEventList(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


BasicDecimal* NullVehicleLayer_getSpeedBasicDecimal(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool NullVehicleLayer_isReadyForExplosion(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


RotationAnimation* NullVehicleLayer_getRotationAnimationInterface(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullVehicleLayer_setRotationAnimationInterface(NullVehicleLayer* this, RotationAnimation* animationInterface) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool NullVehicleLayer_isDestroyed(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool NullVehicleLayer_isFinish(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullVehicleLayer_getFinalPosition(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void NullVehicleLayer_handleFinish(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


GeographicMapCellPositionTracking* NullVehicleLayer_getGeographicMapCellPositionTracking(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


GeographicMapCellHistory** NullVehicleLayer_getGeographicMapCellHistoryArray(NullVehicleLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullVehicleLayer_setGeographicMapCellHistoryArray(NullVehicleLayer* this, GeographicMapCellHistory** geographicMapCellHistory) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullVehicleLayer_paint(NullVehicleLayer* this, Graphics* graphics) {
}


void NullVehicleLayer_paintThreed(NullVehicleLayer* this, Graphics* graphics) {
}

