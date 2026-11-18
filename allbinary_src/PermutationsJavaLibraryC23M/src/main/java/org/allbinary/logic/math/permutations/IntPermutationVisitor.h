#ifndef ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_INTPERMUTATIONVISITOR_H
#define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_INTPERMUTATIONVISITOR_H
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
typedef struct NullUtil NullUtil;
typedef struct StringMaker StringMaker;
typedef struct Visitor Visitor;
typedef struct CommonSeps CommonSeps;
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "java/lang/System.h"

typedef struct IntPermutationVisitor IntPermutationVisitor;
struct IntPermutationVisitor {
    Visitor base;
    int32_t* data;
    StringMaker* stringBuilder;
};


IntPermutationVisitor* IntPermutationVisitor_new(int32_t* data);

void IntPermutationVisitor_init(IntPermutationVisitor* this, int32_t* data);

void* IntPermutationVisitor_visit(IntPermutationVisitor* this, void* anyType);

void IntPermutationVisitor_print2(IntPermutationVisitor* this, int32_t* data);

void IntPermutationVisitor_print3(IntPermutationVisitor* this, int32_t* data, StringMaker* stringBuilder);
#define IntPermutationVisitor_print(...) JAVA_OVERLOADED(IntPermutationVisitor_print, __VA_ARGS__)
#define IntPermutationVisitor_new1 IntPermutationVisitor_new
#define IntPermutationVisitor_init1 IntPermutationVisitor_init
#ifndef IntPermutationVisitor_getInstance
#define IntPermutationVisitor_getInstance Visitor_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void IntPermutationVisitor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void IntPermutationVisitor_register(void);


#endif // ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_INTPERMUTATIONVISITOR_H
