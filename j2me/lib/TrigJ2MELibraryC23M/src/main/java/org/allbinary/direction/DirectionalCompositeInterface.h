#ifndef ORG_ALLBINARY_DIRECTION_DIRECTIONALCOMPOSITEINTERFACE_H
#define ORG_ALLBINARY_DIRECTION_DIRECTIONALCOMPOSITEINTERFACE_H
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
typedef struct DirectionalInterface DirectionalInterface;

typedef struct DirectionalCompositeInterface DirectionalCompositeInterface;
struct DirectionalCompositeInterface {
    DirectionalInterface* (*getDirectionalInterface)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DirectionalCompositeInterface_staticInit(void);

static inline DirectionalInterface* DirectionalCompositeInterface_getDirectionalInterface(void* this) {
    return ((__typeof__(((DirectionalCompositeInterface*) nullptr)->getDirectionalInterface)) java_method_of(this, "getDirectionalInterface"))(this);
}


#endif // ORG_ALLBINARY_DIRECTION_DIRECTIONALCOMPOSITEINTERFACE_H
