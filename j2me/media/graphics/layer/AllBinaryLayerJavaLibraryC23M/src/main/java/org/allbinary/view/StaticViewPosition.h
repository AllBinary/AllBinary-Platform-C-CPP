#ifndef ORG_ALLBINARY_VIEW_STATICVIEWPOSITION_H
#define ORG_ALLBINARY_VIEW_STATICVIEWPOSITION_H
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
typedef struct ViewPosition ViewPosition;
#include "org/allbinary/view/ViewPosition.h"

typedef struct StaticViewPosition StaticViewPosition;
struct StaticViewPosition {
    ViewPosition base;
};


StaticViewPosition* StaticViewPosition_new(int32_t x, int32_t y, int32_t z);

void StaticViewPosition_init(StaticViewPosition* this, int32_t x, int32_t y, int32_t z);

int32_t StaticViewPosition_getX(StaticViewPosition* this);

int32_t StaticViewPosition_getY(StaticViewPosition* this);

int32_t StaticViewPosition_getZ(StaticViewPosition* this);
#define StaticViewPosition_new3 StaticViewPosition_new
#define StaticViewPosition_init3 StaticViewPosition_init
#ifndef StaticViewPosition_getInstanceD
#define StaticViewPosition_getInstanceD ViewPosition_getInstanceD
#endif
#ifndef StaticViewPosition_getX2
#define StaticViewPosition_getX2 ViewPosition_getX2
#endif
#ifndef StaticViewPosition_getY2
#define StaticViewPosition_getY2 ViewPosition_getY2
#endif
#ifndef StaticViewPosition_getZ2
#define StaticViewPosition_getZ2 ViewPosition_getZ2
#endif
#ifndef StaticViewPosition_setAllbinaryLayer
#define StaticViewPosition_setAllbinaryLayer ViewPosition_setAllbinaryLayer
#endif
#ifndef StaticViewPosition_getX2
#define StaticViewPosition_getX2 ViewPositionBase_getX2
#endif
#ifndef StaticViewPosition_getY2
#define StaticViewPosition_getY2 ViewPositionBase_getY2
#endif
#ifndef StaticViewPosition_getZ2
#define StaticViewPosition_getZ2 ViewPositionBase_getZ2
#endif
#ifndef StaticViewPosition_setAllbinaryLayer
#define StaticViewPosition_setAllbinaryLayer ViewPositionBase_setAllbinaryLayer
#endif
#ifndef StaticViewPosition_getInstance
#define StaticViewPosition_getInstance GPoint_getInstance
#endif
#ifndef StaticViewPosition_getRawX
#define StaticViewPosition_getRawX GPoint_getRawX
#endif
#ifndef StaticViewPosition_getRawY
#define StaticViewPosition_getRawY GPoint_getRawY
#endif
#ifndef StaticViewPosition_getRawZ
#define StaticViewPosition_getRawZ GPoint_getRawZ
#endif
#ifndef StaticViewPosition_toString
#define StaticViewPosition_toString GPoint_toString
#endif
#ifndef StaticViewPosition_toStringStatic
#define StaticViewPosition_toStringStatic GPoint_toStringStatic
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void StaticViewPosition_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void StaticViewPosition_register(void);


#endif // ORG_ALLBINARY_VIEW_STATICVIEWPOSITION_H
