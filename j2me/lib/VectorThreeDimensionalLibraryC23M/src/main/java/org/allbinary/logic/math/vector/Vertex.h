#ifndef ORG_ALLBINARY_LOGIC_MATH_VECTOR_VERTEX_H
#define ORG_ALLBINARY_LOGIC_MATH_VECTOR_VERTEX_H
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
// package org.allbinary.logic.math.vector

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
typedef struct PositionStrings PositionStrings;
typedef struct CommonSeps CommonSeps;
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif

typedef struct Vertex Vertex;
struct Vertex {
    BasicDecimal* x;
    BasicDecimal* y;
    BasicDecimal* z;
};


Vertex* Vertex_new(void);

void Vertex_init(Vertex* this);

const char* Vertex_toString(Vertex* this);
#define Vertex_new0 Vertex_new
#define Vertex_init0 Vertex_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Vertex_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Vertex_register(void);


#endif // ORG_ALLBINARY_LOGIC_MATH_VECTOR_VERTEX_H
