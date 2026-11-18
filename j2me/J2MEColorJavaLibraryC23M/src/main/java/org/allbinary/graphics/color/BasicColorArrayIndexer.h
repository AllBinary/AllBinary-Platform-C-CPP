#ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORARRAYINDEXER_H
#define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORARRAYINDEXER_H
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
typedef struct CircularIndexUtil CircularIndexUtil;
// #include "jsinterop/annotations/JsType.h"
#if __has_include("org/allbinary/util/CircularIndexUtil.h")
#include "org/allbinary/util/CircularIndexUtil.h"
#endif
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

typedef struct BasicColorArrayIndexer BasicColorArrayIndexer;
struct BasicColorArrayIndexer {
    BasicColor** basicColorArray;
    CircularIndexUtil* circularIndexUtil;
};


BasicColorArrayIndexer* BasicColorArrayIndexer_new(BasicColor** basicColorArray);

void BasicColorArrayIndexer_init(BasicColorArrayIndexer* this, BasicColor** basicColorArray);

void BasicColorArrayIndexer_next(BasicColorArrayIndexer* this);

BasicColor* BasicColorArrayIndexer_get(BasicColorArrayIndexer* this);

BasicColor** BasicColorArrayIndexer_getBasicColorArray(BasicColorArrayIndexer* this);
#define BasicColorArrayIndexer_new1 BasicColorArrayIndexer_new
#define BasicColorArrayIndexer_init1 BasicColorArrayIndexer_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicColorArrayIndexer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicColorArrayIndexer_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORARRAYINDEXER_H
