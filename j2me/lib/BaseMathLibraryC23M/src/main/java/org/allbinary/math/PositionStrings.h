#ifndef ORG_ALLBINARY_MATH_POSITIONSTRINGS_H
#define ORG_ALLBINARY_MATH_POSITIONSTRINGS_H
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
// #include "jsinterop/annotations/JsProperty.h"

typedef struct PositionStrings PositionStrings;
struct PositionStrings {
    const char* X;
    const char* Y;
    const char* X_LABEL;
    const char* Y_LABEL;
    const char* Z_LABEL;
    const char* DX_LABEL;
    const char* DY_LABEL;
    const char* DZ_LABEL;
};


PositionStrings* PositionStrings_new(void);
void PositionStrings_init(PositionStrings* this);

PositionStrings* PositionStrings_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PositionStrings_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PositionStrings_register(void);


#endif // ORG_ALLBINARY_MATH_POSITIONSTRINGS_H
