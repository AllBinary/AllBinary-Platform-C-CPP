#ifndef ORG_ALLBINARY_LAYER_LAYERINTERFACE_H
#define ORG_ALLBINARY_LAYER_LAYERINTERFACE_H
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
typedef struct NamedInterface NamedInterface;
typedef struct PositionInterface PositionInterface;
typedef struct GroupInterfaceCompositeInterface GroupInterfaceCompositeInterface;
typedef struct PaintableInterface PaintableInterface;
#include "org/allbinary/game/identification/GroupInterfaceCompositeInterface.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/layer/NamedInterface.h"
#include "org/allbinary/layer/PositionInterface.h"

typedef struct LayerInterface LayerInterface;
struct LayerInterface {
    int32_t (*getHeight)(void* this);
    int32_t (*getWidth)(void* this);
    int32_t (*getHalfHeight)(void* this);
    int32_t (*getHalfWidth)(void* this);
    int32_t (*getXP)(void* this);
    int32_t (*getYP)(void* this);
    int32_t (*getZP)(void* this);
    int32_t (*getX2)(void* this);
    int32_t (*getY2)(void* this);
    int32_t (*getZ2)(void* this);
    bool (*isVisible)(void* this);
    void (*moveDXYZ)(void* this, int32_t dx, int32_t dy, int32_t dz);
    void (*setVisible)(void* this, bool visible);
    bool (*implmentsTickableInterface)(void* this);
    bool (*implmentsCollidableInterface)(void* this);
    bool (*implmentsGameInputInterface)(void* this);
    bool (*implmentsArtificialIntelligenceCompositeInterface)(void* this);
    int32_t (*getType)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerInterface_staticInit(void);

static inline int32_t LayerInterface_getHeight(void* this) {
    return ((__typeof__(((LayerInterface*) nullptr)->getHeight)) java_method_of(this, "getHeight"))(this);
}

static inline int32_t LayerInterface_getWidth(void* this) {
    return ((__typeof__(((LayerInterface*) nullptr)->getWidth)) java_method_of(this, "getWidth"))(this);
}

static inline int32_t LayerInterface_getHalfHeight(void* this) {
    return ((__typeof__(((LayerInterface*) nullptr)->getHalfHeight)) java_method_of(this, "getHalfHeight"))(this);
}

static inline int32_t LayerInterface_getHalfWidth(void* this) {
    return ((__typeof__(((LayerInterface*) nullptr)->getHalfWidth)) java_method_of(this, "getHalfWidth"))(this);
}

static inline int32_t LayerInterface_getXP(void* this) {
    return ((__typeof__(((LayerInterface*) nullptr)->getXP)) java_method_of(this, "getXP"))(this);
}

static inline int32_t LayerInterface_getYP(void* this) {
    return ((__typeof__(((LayerInterface*) nullptr)->getYP)) java_method_of(this, "getYP"))(this);
}

static inline int32_t LayerInterface_getZP(void* this) {
    return ((__typeof__(((LayerInterface*) nullptr)->getZP)) java_method_of(this, "getZP"))(this);
}

static inline int32_t LayerInterface_getX2(void* this) {
    return ((__typeof__(((LayerInterface*) nullptr)->getX2)) java_method_of(this, "getX2"))(this);
}

static inline int32_t LayerInterface_getY2(void* this) {
    return ((__typeof__(((LayerInterface*) nullptr)->getY2)) java_method_of(this, "getY2"))(this);
}

static inline int32_t LayerInterface_getZ2(void* this) {
    return ((__typeof__(((LayerInterface*) nullptr)->getZ2)) java_method_of(this, "getZ2"))(this);
}

static inline bool LayerInterface_isVisible(void* this) {
    return ((__typeof__(((LayerInterface*) nullptr)->isVisible)) java_method_of(this, "isVisible"))(this);
}

static inline void LayerInterface_moveDXYZ(void* this, int32_t dx, int32_t dy, int32_t dz) {
    ((__typeof__(((LayerInterface*) nullptr)->moveDXYZ)) java_method_of(this, "moveDXYZ"))(this, dx, dy, dz);
}

static inline void LayerInterface_setVisible(void* this, bool visible) {
    ((__typeof__(((LayerInterface*) nullptr)->setVisible)) java_method_of(this, "setVisible"))(this, visible);
}

static inline bool LayerInterface_implmentsTickableInterface(void* this) {
    return ((__typeof__(((LayerInterface*) nullptr)->implmentsTickableInterface)) java_method_of(this, "implmentsTickableInterface"))(this);
}

static inline bool LayerInterface_implmentsCollidableInterface(void* this) {
    return ((__typeof__(((LayerInterface*) nullptr)->implmentsCollidableInterface)) java_method_of(this, "implmentsCollidableInterface"))(this);
}

static inline bool LayerInterface_implmentsGameInputInterface(void* this) {
    return ((__typeof__(((LayerInterface*) nullptr)->implmentsGameInputInterface)) java_method_of(this, "implmentsGameInputInterface"))(this);
}

static inline bool LayerInterface_implmentsArtificialIntelligenceCompositeInterface(void* this) {
    return ((__typeof__(((LayerInterface*) nullptr)->implmentsArtificialIntelligenceCompositeInterface)) java_method_of(this, "implmentsArtificialIntelligenceCompositeInterface"))(this);
}

static inline int32_t LayerInterface_getType(void* this) {
    return ((__typeof__(((LayerInterface*) nullptr)->getType)) java_method_of(this, "getType"))(this);
}
#define LayerInterface_getName NamedInterface_getName
#define LayerInterface_paint PaintableInterface_paint
#define LayerInterface_paintThreed PaintableInterface_paintThreed
#define LayerInterface_getGroupInterface GroupInterfaceCompositeInterface_getGroupInterface
#define LayerInterface_setPosition PositionInterface_setPosition


#endif // ORG_ALLBINARY_LAYER_LAYERINTERFACE_H
