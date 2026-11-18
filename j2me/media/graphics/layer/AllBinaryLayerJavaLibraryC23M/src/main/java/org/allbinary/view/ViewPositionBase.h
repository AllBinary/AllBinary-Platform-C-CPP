#ifndef ORG_ALLBINARY_VIEW_VIEWPOSITIONBASE_H
#define ORG_ALLBINARY_VIEW_VIEWPOSITIONBASE_H
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
// package org.allbinary.view

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GPoint GPoint;
#include "org/allbinary/graphics/GPoint.h"

typedef struct ViewPositionBase ViewPositionBase;
struct ViewPositionBase {
    GPoint base;
};

extern ViewPositionBase* ViewPositionBase_NULL_VIEW_POSITION;

ViewPositionBase* ViewPositionBase_new(int32_t x, int32_t y, int32_t z);

void ViewPositionBase_init(ViewPositionBase* this, int32_t x, int32_t y, int32_t z);

int32_t ViewPositionBase_getX2(ViewPositionBase* this);

int32_t ViewPositionBase_getY2(ViewPositionBase* this);

int32_t ViewPositionBase_getZ2(ViewPositionBase* this);

void ViewPositionBase_setAllbinaryLayer(ViewPositionBase* this, void* allbinaryLayer);
#define ViewPositionBase_new3 ViewPositionBase_new
#define ViewPositionBase_init3 ViewPositionBase_init
#ifndef ViewPositionBase_getInstance
#define ViewPositionBase_getInstance GPoint_getInstance
#endif
#ifndef ViewPositionBase_getX
#define ViewPositionBase_getX GPoint_getX
#endif
#ifndef ViewPositionBase_getY
#define ViewPositionBase_getY GPoint_getY
#endif
#ifndef ViewPositionBase_getZ
#define ViewPositionBase_getZ GPoint_getZ
#endif
#ifndef ViewPositionBase_getRawX
#define ViewPositionBase_getRawX GPoint_getRawX
#endif
#ifndef ViewPositionBase_getRawY
#define ViewPositionBase_getRawY GPoint_getRawY
#endif
#ifndef ViewPositionBase_getRawZ
#define ViewPositionBase_getRawZ GPoint_getRawZ
#endif
#ifndef ViewPositionBase_toString
#define ViewPositionBase_toString GPoint_toString
#endif
#ifndef ViewPositionBase_toStringStatic
#define ViewPositionBase_toStringStatic GPoint_toStringStatic
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ViewPositionBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ViewPositionBase_register(void);


#endif // ORG_ALLBINARY_VIEW_VIEWPOSITIONBASE_H
