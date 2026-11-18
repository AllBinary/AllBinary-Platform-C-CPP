#ifndef ORG_ALLBINARY_DIRECTION_DIRECTIONALINTERFACE_H
#define ORG_ALLBINARY_DIRECTION_DIRECTIONALINTERFACE_H
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
// package org.allbinary.direction

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Direction Direction;
typedef struct Angle Angle;

typedef struct DirectionalInterface DirectionalInterface;
struct DirectionalInterface {
    void (*setFrameByDirection)(void* this, Direction* direction);
    void (*setFrameToAngle)(void* this, Angle* angle);
    void (*adjustFrameToAngle)(void* this, Angle* newAngle);
    void (*adjustFrame)(void* this, int16_t angle);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DirectionalInterface_staticInit(void);

static inline void DirectionalInterface_setFrameByDirection(void* this, Direction* direction) {
    ((__typeof__(((DirectionalInterface*) nullptr)->setFrameByDirection)) java_method_of(this, "setFrameByDirection"))(this, direction);
}

static inline void DirectionalInterface_setFrameToAngle(void* this, Angle* angle) {
    ((__typeof__(((DirectionalInterface*) nullptr)->setFrameToAngle)) java_method_of(this, "setFrameToAngle"))(this, angle);
}

static inline void DirectionalInterface_adjustFrameToAngle(void* this, Angle* newAngle) {
    ((__typeof__(((DirectionalInterface*) nullptr)->adjustFrameToAngle)) java_method_of(this, "adjustFrameToAngle"))(this, newAngle);
}

static inline void DirectionalInterface_adjustFrame(void* this, int16_t angle) {
    ((__typeof__(((DirectionalInterface*) nullptr)->adjustFrame)) java_method_of(this, "adjustFrame"))(this, angle);
}


#endif // ORG_ALLBINARY_DIRECTION_DIRECTIONALINTERFACE_H
