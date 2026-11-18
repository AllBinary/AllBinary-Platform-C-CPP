#ifndef ORG_ALLBINARY_VECTOR_VECTORINTERFACE_H
#define ORG_ALLBINARY_VECTOR_VECTORINTERFACE_H
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
// package org.allbinary.vector

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct VectorInterface VectorInterface;
struct VectorInterface {
    int32_t** (*getPoints)(void* this, int32_t frame);
    void (*setPoints)(void* this, int32_t*** currentPoints);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VectorInterface_staticInit(void);

static inline int32_t** VectorInterface_getPoints(void* this, int32_t frame) {
    return ((__typeof__(((VectorInterface*) nullptr)->getPoints)) java_method_of(this, "getPoints"))(this, frame);
}

static inline void VectorInterface_setPoints(void* this, int32_t*** currentPoints) {
    ((__typeof__(((VectorInterface*) nullptr)->setPoints)) java_method_of(this, "setPoints"))(this, currentPoints);
}


#endif // ORG_ALLBINARY_VECTOR_VECTORINTERFACE_H
