#ifndef ORG_ALLBINARY_GRAPHICS_COLOR_COLORCOMPOSITEINTERFACE_H
#define ORG_ALLBINARY_GRAPHICS_COLOR_COLORCOMPOSITEINTERFACE_H
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
typedef struct BasicColorCompositeSetterInterface BasicColorCompositeSetterInterface;
typedef struct BasicColor BasicColor;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"
#include "org/allbinary/graphics/color/BasicColorCompositeSetterInterface.h"

typedef struct ColorCompositeInterface ColorCompositeInterface;
struct ColorCompositeInterface {
    BasicColor* (*getBasicColorP)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ColorCompositeInterface_staticInit(void);

static inline BasicColor* ColorCompositeInterface_getBasicColorP(void* this) {
    return ((__typeof__(((ColorCompositeInterface*) nullptr)->getBasicColorP)) java_method_of(this, "getBasicColorP"))(this);
}


#endif // ORG_ALLBINARY_GRAPHICS_COLOR_COLORCOMPOSITEINTERFACE_H
