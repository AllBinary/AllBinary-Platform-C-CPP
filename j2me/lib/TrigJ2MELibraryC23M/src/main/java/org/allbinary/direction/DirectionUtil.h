#ifndef ORG_ALLBINARY_DIRECTION_DIRECTIONUTIL_H
#define ORG_ALLBINARY_DIRECTION_DIRECTIONUTIL_H
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
// package org.allbinary.direction

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DirectionFactory DirectionFactory;
typedef struct Direction Direction;
typedef struct Angle Angle;
typedef struct AngleFactory AngleFactory;
#if __has_include("org/allbinary/math/Angle.h")
#include "org/allbinary/math/Angle.h"
#endif

typedef struct DirectionUtil DirectionUtil;
struct DirectionUtil {
    Angle** directionArray;
    Angle** directionArray2;
};


DirectionUtil* DirectionUtil_new(void);

DirectionUtil* DirectionUtil_getInstance(void);

void DirectionUtil_init(DirectionUtil* this);

Angle* DirectionUtil_getAngle(DirectionUtil* this, Direction* direction);

Angle* DirectionUtil_getFrameAngle(DirectionUtil* this, Direction* direction);
#define DirectionUtil_new0 DirectionUtil_new
#define DirectionUtil_init0 DirectionUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DirectionUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DirectionUtil_register(void);

#if __has_include("org/allbinary/math/Angle.h")
#include "org/allbinary/math/Angle.h"
#endif

#endif // ORG_ALLBINARY_DIRECTION_DIRECTIONUTIL_H
