#ifndef ORG_ALLBINARY_LOGIC_JAVA_PRIMITIVEARRAYTOSTRING_H
#define ORG_ALLBINARY_LOGIC_JAVA_PRIMITIVEARRAYTOSTRING_H
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
// package org.allbinary.logic.java

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct StringMaker StringMaker;

typedef struct PrimitiveArrayToString PrimitiveArrayToString;
struct PrimitiveArrayToString {
    char unused;
};


PrimitiveArrayToString* PrimitiveArrayToString_new(void);
void PrimitiveArrayToString_init(PrimitiveArrayToString* this);

const char* PrimitiveArrayToString_toString(float* floats);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PrimitiveArrayToString_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PrimitiveArrayToString_register(void);


#endif // ORG_ALLBINARY_LOGIC_JAVA_PRIMITIVEARRAYTOSTRING_H
