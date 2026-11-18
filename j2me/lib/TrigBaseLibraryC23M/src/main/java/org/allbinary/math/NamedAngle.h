#ifndef ORG_ALLBINARY_MATH_NAMEDANGLE_H
#define ORG_ALLBINARY_MATH_NAMEDANGLE_H
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
// package org.allbinary.math

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Angle Angle;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsProperty.h"
// #include "jsinterop/annotations/JsConstructor.h"
#include "org/allbinary/math/Angle.h"

typedef struct NamedAngle NamedAngle;
struct NamedAngle {
    Angle base;
    const char* name;
};


NamedAngle* NamedAngle_new(int16_t angle, const char* name);

void NamedAngle_init(NamedAngle* this, int16_t angle, const char* name);
#define NamedAngle_new2 NamedAngle_new
#define NamedAngle_init2 NamedAngle_init
#ifndef NamedAngle_getValue
#define NamedAngle_getValue Angle_getValue
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NamedAngle_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NamedAngle_register(void);


#endif // ORG_ALLBINARY_MATH_NAMEDANGLE_H
