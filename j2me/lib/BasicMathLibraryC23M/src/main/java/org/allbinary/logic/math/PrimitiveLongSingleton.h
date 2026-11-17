#ifndef ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGSINGLETON_H
#define ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGSINGLETON_H
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
typedef struct StringMaker StringMaker;

typedef struct PrimitiveLongSingleton PrimitiveLongSingleton;
struct PrimitiveLongSingleton {
    uint16_t* UNK;
    int8_t* NUMBER_ARRAY;
    uint16_t* NUMBER_CHAR_ARRAY;
    uint16_t** NUMBER_CHAR_ARRAYS;
    uint16_t* ZERO;
};


PrimitiveLongSingleton* PrimitiveLongSingleton_new(void);
void PrimitiveLongSingleton_init(PrimitiveLongSingleton* this);

PrimitiveLongSingleton* PrimitiveLongSingleton_getInstance(void);

int8_t PrimitiveLongSingleton_getNumberFromChar(PrimitiveLongSingleton* this, uint16_t numberAsChar);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PrimitiveLongSingleton_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PrimitiveLongSingleton_register(void);


#endif // ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGSINGLETON_H
