#ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCOMPOSITESETTERINTERFACE_H
#define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCOMPOSITESETTERINTERFACE_H
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
// package org.allbinary.graphics.color

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicColor BasicColor;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"

typedef struct BasicColorCompositeSetterInterface BasicColorCompositeSetterInterface;
struct BasicColorCompositeSetterInterface {
    void (*setBasicColorP)(void* this, BasicColor* basicColor);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicColorCompositeSetterInterface_staticInit(void);

static inline void BasicColorCompositeSetterInterface_setBasicColorP(void* this, BasicColor* basicColor) {
    ((__typeof__(((BasicColorCompositeSetterInterface*) nullptr)->setBasicColorP)) java_method_of(this, "setBasicColorP"))(this, basicColor);
}


#endif // ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCOMPOSITESETTERINTERFACE_H
