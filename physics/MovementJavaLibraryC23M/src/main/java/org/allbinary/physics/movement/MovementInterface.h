#ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_MOVEMENTINTERFACE_H
#define ORG_ALLBINARY_PHYSICS_MOVEMENT_MOVEMENTINTERFACE_H
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
// package org.allbinary.physics.movement

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryGameLayer AllBinaryGameLayer;
typedef struct BasicDecimal BasicDecimal;

typedef struct MovementInterface MovementInterface;
struct MovementInterface {
    void (*init)(void* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle);
    void (*process)(void* this, AllBinaryGameLayer* layer);
    void (*stop)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MovementInterface_staticInit(void);

static inline void MovementInterface_initMethod(void* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle) {
    ((__typeof__(((MovementInterface*) nullptr)->init)) java_method_of(this, "init"))(this, speedBasicDecimal, angle, otherAngle);
}

static inline void MovementInterface_process(void* this, AllBinaryGameLayer* layer) {
    ((__typeof__(((MovementInterface*) nullptr)->process)) java_method_of(this, "process"))(this, layer);
}

static inline void MovementInterface_stop(void* this) {
    ((__typeof__(((MovementInterface*) nullptr)->stop)) java_method_of(this, "stop"))(this);
}


#endif // ORG_ALLBINARY_PHYSICS_MOVEMENT_MOVEMENTINTERFACE_H
