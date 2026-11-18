#ifndef ORG_ALLBINARY_VIEW_VIEWPOSITION_H
#define ORG_ALLBINARY_VIEW_VIEWPOSITION_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
typedef struct ViewPositionBase ViewPositionBase;
typedef struct AllBinaryLayer AllBinaryLayer;
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#include "org/allbinary/view/ViewPositionBase.h"

typedef struct ViewPosition ViewPosition;
struct ViewPosition {
    ViewPositionBase base;
    AllBinaryLayer* allbinaryLayer;
};


ViewPosition* ViewPosition_new(int32_t x, int32_t y, int32_t z);

ViewPosition* ViewPosition_getInstanceD(void);

void ViewPosition_init(ViewPosition* this, int32_t x, int32_t y, int32_t z);

int32_t ViewPosition_getX(ViewPosition* this);

int32_t ViewPosition_getY(ViewPosition* this);

int32_t ViewPosition_getZ(ViewPosition* this);

int32_t ViewPosition_getX2(ViewPosition* this);

int32_t ViewPosition_getY2(ViewPosition* this);

int32_t ViewPosition_getZ2(ViewPosition* this);

void ViewPosition_setAllbinaryLayer(ViewPosition* this, void* allbinaryLayer);
#define ViewPosition_new3 ViewPosition_new
#define ViewPosition_init3 ViewPosition_init
#ifndef ViewPosition_getInstance
#define ViewPosition_getInstance GPoint_getInstance
#endif
#ifndef ViewPosition_getRawX
#define ViewPosition_getRawX GPoint_getRawX
#endif
#ifndef ViewPosition_getRawY
#define ViewPosition_getRawY GPoint_getRawY
#endif
#ifndef ViewPosition_getRawZ
#define ViewPosition_getRawZ GPoint_getRawZ
#endif
#ifndef ViewPosition_toString
#define ViewPosition_toString GPoint_toString
#endif
#ifndef ViewPosition_toStringStatic
#define ViewPosition_toStringStatic GPoint_toStringStatic
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ViewPosition_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ViewPosition_register(void);


#endif // ORG_ALLBINARY_VIEW_VIEWPOSITION_H
