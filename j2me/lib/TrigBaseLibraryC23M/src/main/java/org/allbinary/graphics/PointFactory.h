#ifndef ORG_ALLBINARY_GRAPHICS_POINTFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_POINTFACTORY_H
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
// package org.allbinary.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GPoint GPoint;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"
// #include "jsinterop/annotations/JsProperty.h"
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif

typedef struct PointFactory PointFactory;
struct PointFactory {
    GPoint* ZERO_ZERO;
};


PointFactory* PointFactory_new(void);

PointFactory* PointFactory_getInstance(void);

void PointFactory_initMethod(PointFactory* this);

void PointFactory_init(PointFactory* this);

GPoint* PointFactory_createXY(PointFactory* this, int32_t x, int32_t y);

GPoint* PointFactory_createXYZ(PointFactory* this, int32_t x, int32_t y, int32_t z);
#define PointFactory_new0 PointFactory_new
#define PointFactory_init0 PointFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PointFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PointFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_POINTFACTORY_H
