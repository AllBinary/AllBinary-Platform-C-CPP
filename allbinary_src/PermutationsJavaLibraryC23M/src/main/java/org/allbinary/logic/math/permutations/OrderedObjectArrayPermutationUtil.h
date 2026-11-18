#ifndef ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDOBJECTARRAYPERMUTATIONUTIL_H
#define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDOBJECTARRAYPERMUTATIONUTIL_H
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
// package org.allbinary.logic.math.permutations

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ComparableObject ComparableObject;
typedef struct ObjectPermutationVisitor ObjectPermutationVisitor;
typedef struct TsUtil TsUtil;
typedef struct Visitor Visitor;
#include "java/util/Arrays.h"
#include "java/lang/System.h"

typedef struct OrderedObjectArrayPermutationUtil OrderedObjectArrayPermutationUtil;
struct OrderedObjectArrayPermutationUtil {
    const char* TOTAL_ITERATIONS_TABLE;
    const char* FINISHED;
};


OrderedObjectArrayPermutationUtil* OrderedObjectArrayPermutationUtil_new(void);

OrderedObjectArrayPermutationUtil* OrderedObjectArrayPermutationUtil_getInstance(void);

void OrderedObjectArrayPermutationUtil_init(OrderedObjectArrayPermutationUtil* this);

void OrderedObjectArrayPermutationUtil_getNext(OrderedObjectArrayPermutationUtil* this, void** data);

void OrderedObjectArrayPermutationUtil_swap(OrderedObjectArrayPermutationUtil* this, void** data, int32_t a, int32_t b);

int64_t OrderedObjectArrayPermutationUtil_factorial(OrderedObjectArrayPermutationUtil* this, int32_t dataLength);

void OrderedObjectArrayPermutationUtil_generate(OrderedObjectArrayPermutationUtil* this, void** data, Visitor* visitor);

void OrderedObjectArrayPermutationUtil_main(const char** args);
#define OrderedObjectArrayPermutationUtil_new0 OrderedObjectArrayPermutationUtil_new
#define OrderedObjectArrayPermutationUtil_init0 OrderedObjectArrayPermutationUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OrderedObjectArrayPermutationUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OrderedObjectArrayPermutationUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDOBJECTARRAYPERMUTATIONUTIL_H
