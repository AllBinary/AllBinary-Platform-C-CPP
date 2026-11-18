#ifndef ORG_ALLBINARY_BOUNDS_BOUNDSVISITORINTERFACE_H
#define ORG_ALLBINARY_BOUNDS_BOUNDSVISITORINTERFACE_H
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
// package org.allbinary.bounds

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct BoundsVisitorInterface BoundsVisitorInterface;
struct BoundsVisitorInterface {
    int32_t (*getX)(void* this);
    int32_t (*getY)(void* this);
    void (*maxX)(void* this);
    void (*maxY)(void* this);
    void (*minX)(void* this);
    void (*minY)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BoundsVisitorInterface_staticInit(void);

static inline int32_t BoundsVisitorInterface_getX(void* this) {
    return ((__typeof__(((BoundsVisitorInterface*) nullptr)->getX)) java_method_of(this, "getX"))(this);
}

static inline int32_t BoundsVisitorInterface_getY(void* this) {
    return ((__typeof__(((BoundsVisitorInterface*) nullptr)->getY)) java_method_of(this, "getY"))(this);
}

static inline void BoundsVisitorInterface_maxX(void* this) {
    ((__typeof__(((BoundsVisitorInterface*) nullptr)->maxX)) java_method_of(this, "maxX"))(this);
}

static inline void BoundsVisitorInterface_maxY(void* this) {
    ((__typeof__(((BoundsVisitorInterface*) nullptr)->maxY)) java_method_of(this, "maxY"))(this);
}

static inline void BoundsVisitorInterface_minX(void* this) {
    ((__typeof__(((BoundsVisitorInterface*) nullptr)->minX)) java_method_of(this, "minX"))(this);
}

static inline void BoundsVisitorInterface_minY(void* this) {
    ((__typeof__(((BoundsVisitorInterface*) nullptr)->minY)) java_method_of(this, "minY"))(this);
}


#endif // ORG_ALLBINARY_BOUNDS_BOUNDSVISITORINTERFACE_H
