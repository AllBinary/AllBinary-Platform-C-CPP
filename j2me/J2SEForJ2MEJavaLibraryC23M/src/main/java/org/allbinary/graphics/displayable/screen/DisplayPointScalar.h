#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_DISPLAYPOINTSCALAR_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_DISPLAYPOINTSCALAR_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.graphics.displayable.screen

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GPoint GPoint;

typedef struct DisplayPointScalar DisplayPointScalar;
struct DisplayPointScalar {
    char unused;
};


DisplayPointScalar* DisplayPointScalar_new(void);

DisplayPointScalar* DisplayPointScalar_getInstance(void);

void DisplayPointScalar_init(DisplayPointScalar* this);

int32_t DisplayPointScalar_processX(DisplayPointScalar* this, int32_t value);

int32_t DisplayPointScalar_processY(DisplayPointScalar* this, int32_t value);

GPoint* DisplayPointScalar_process(DisplayPointScalar* this, GPoint* point);
#define DisplayPointScalar_new0 DisplayPointScalar_new
#define DisplayPointScalar_init0 DisplayPointScalar_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DisplayPointScalar_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DisplayPointScalar_register(void);

#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_DISPLAYPOINTSCALAR_H
