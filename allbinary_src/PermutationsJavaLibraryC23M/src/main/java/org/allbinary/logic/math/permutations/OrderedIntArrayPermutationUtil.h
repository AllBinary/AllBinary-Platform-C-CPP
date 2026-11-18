#ifndef ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDINTARRAYPERMUTATIONUTIL_H
#define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDINTARRAYPERMUTATIONUTIL_H
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
typedef struct IntPermutationVisitor IntPermutationVisitor;
typedef struct Visitor Visitor;
typedef struct StringMaker StringMaker;
#include "java/lang/System.h"

typedef struct OrderedIntArrayPermutationUtil OrderedIntArrayPermutationUtil;
struct OrderedIntArrayPermutationUtil {
    const char* TOTAL_ITERATIONS_TABLE;
    const char* FINISHED;
};


OrderedIntArrayPermutationUtil* OrderedIntArrayPermutationUtil_new(void);

OrderedIntArrayPermutationUtil* OrderedIntArrayPermutationUtil_getInstance(void);

void OrderedIntArrayPermutationUtil_init(OrderedIntArrayPermutationUtil* this);

void OrderedIntArrayPermutationUtil_getNext(OrderedIntArrayPermutationUtil* this, int32_t* data);

void OrderedIntArrayPermutationUtil_swap(OrderedIntArrayPermutationUtil* this, int32_t* data, int32_t a, int32_t b);

int64_t OrderedIntArrayPermutationUtil_factorial(OrderedIntArrayPermutationUtil* this, int32_t dataLength);

void OrderedIntArrayPermutationUtil_generate(OrderedIntArrayPermutationUtil* this, int32_t* data, Visitor* visitor);

void OrderedIntArrayPermutationUtil_main(const char** args);
#define OrderedIntArrayPermutationUtil_new0 OrderedIntArrayPermutationUtil_new
#define OrderedIntArrayPermutationUtil_init0 OrderedIntArrayPermutationUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OrderedIntArrayPermutationUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OrderedIntArrayPermutationUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDINTARRAYPERMUTATIONUTIL_H
