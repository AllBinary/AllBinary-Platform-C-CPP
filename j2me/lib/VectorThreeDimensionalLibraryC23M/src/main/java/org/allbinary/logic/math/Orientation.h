#ifndef ORG_ALLBINARY_LOGIC_MATH_ORIENTATION_H
#define ORG_ALLBINARY_LOGIC_MATH_ORIENTATION_H
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
// package org.allbinary.logic.math

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicDecimal BasicDecimal;
typedef struct StringMaker StringMaker;
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif

typedef struct Orientation Orientation;
struct Orientation {
    BasicDecimal* yaw;
    BasicDecimal* pitch;
    BasicDecimal* roll;
};

extern Orientation* Orientation_NONE;

Orientation* Orientation_new(int32_t yaw, int32_t pitch, int32_t roll);

Orientation* Orientation_getInstance(int32_t yaw, int32_t pitch, int32_t roll);

void Orientation_init(Orientation* this, int32_t yaw, int32_t pitch, int32_t roll);

const char* Orientation_toString(Orientation* this);
#define Orientation_new3 Orientation_new
#define Orientation_init3 Orientation_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Orientation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Orientation_register(void);


#endif // ORG_ALLBINARY_LOGIC_MATH_ORIENTATION_H
