#ifndef ORG_ALLBINARY_MATH_ANGLE_H
#define ORG_ALLBINARY_MATH_ANGLE_H
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
// package org.allbinary.math

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"

typedef struct Angle Angle;
struct Angle {
    int16_t value;
};


Angle* Angle_new(int16_t angle);

void Angle_init(Angle* this, int16_t angle);

int16_t Angle_getValue(Angle* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Angle_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Angle_register(void);


#endif // ORG_ALLBINARY_MATH_ANGLE_H
