#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_BASESCALABLE_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_BASESCALABLE_H
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
// package org.allbinary.graphics.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ScalableListener ScalableListener;
#include "org/allbinary/graphics/displayable/ScalableListener.h"

typedef struct BaseScalable BaseScalable;
struct BaseScalable {
    ScalableListener ScalableListener_interface;
};


BaseScalable* BaseScalable_new(void);
void BaseScalable_init(BaseScalable* this);

float BaseScalable_getRatio(BaseScalable* this, float ratio);

int32_t BaseScalable_getLeft(BaseScalable* this, int32_t xOffset);

int32_t BaseScalable_getTop(BaseScalable* this, int32_t yOffset);

void BaseScalable_scale(BaseScalable* this, float ratio);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BaseScalable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BaseScalable_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_BASESCALABLE_H
