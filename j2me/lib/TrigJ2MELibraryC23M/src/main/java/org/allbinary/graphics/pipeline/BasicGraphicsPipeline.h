#ifndef ORG_ALLBINARY_GRAPHICS_PIPELINE_BASICGRAPHICSPIPELINE_H
#define ORG_ALLBINARY_GRAPHICS_PIPELINE_BASICGRAPHICSPIPELINE_H
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
// package org.allbinary.graphics.pipeline

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GPoint GPoint;
typedef struct PointFactory PointFactory;
typedef struct Angle Angle;
typedef struct NoDecimalTrigTable NoDecimalTrigTable;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/math/NoDecimalTrigTable.h")
#include "org/allbinary/math/NoDecimalTrigTable.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct BasicGraphicsPipeline BasicGraphicsPipeline;
struct BasicGraphicsPipeline {
    BasicArrayList* pointBasicArrayList;
    NoDecimalTrigTable* noDecimalTrigTable;
};


BasicGraphicsPipeline* BasicGraphicsPipeline_new(BasicArrayList* points);

void BasicGraphicsPipeline_init(BasicGraphicsPipeline* this, BasicArrayList* points);

void BasicGraphicsPipeline_setInitMatrix(BasicGraphicsPipeline* this, BasicArrayList* points);

void BasicGraphicsPipeline_createMatrix(BasicGraphicsPipeline* this);

void BasicGraphicsPipeline_translate(BasicGraphicsPipeline* this, int32_t x, int32_t y);

void BasicGraphicsPipeline_rotateToAngle(BasicGraphicsPipeline* this, Angle* angle);


void BasicGraphicsPipeline_mirror(BasicGraphicsPipeline* this, int32_t width);

BasicArrayList* BasicGraphicsPipeline_getMatrix(BasicGraphicsPipeline* this);
#define BasicGraphicsPipeline_new1 BasicGraphicsPipeline_new
#define BasicGraphicsPipeline_init1 BasicGraphicsPipeline_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicGraphicsPipeline_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicGraphicsPipeline_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_PIPELINE_BASICGRAPHICSPIPELINE_H
