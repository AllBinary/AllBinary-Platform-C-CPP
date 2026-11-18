#ifndef ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_OBJECTPERMUTATIONVISITOR_H
#define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_OBJECTPERMUTATIONVISITOR_H
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
typedef struct TsUtil TsUtil;
typedef struct NullUtil NullUtil;
typedef struct StringMaker StringMaker;
typedef struct Visitor Visitor;
typedef struct CommonSeps CommonSeps;
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "java/lang/System.h"

typedef struct ObjectPermutationVisitor ObjectPermutationVisitor;
struct ObjectPermutationVisitor {
    Visitor base;
    void** data;
    StringMaker* stringBuilder;
};


ObjectPermutationVisitor* ObjectPermutationVisitor_new(void** data);

void ObjectPermutationVisitor_init(ObjectPermutationVisitor* this, void** data);

void* ObjectPermutationVisitor_visit(ObjectPermutationVisitor* this, void* anyType);

void ObjectPermutationVisitor_print2(ObjectPermutationVisitor* this, void** data);

void ObjectPermutationVisitor_print3(ObjectPermutationVisitor* this, void** data, StringMaker* stringBuilder);
#define ObjectPermutationVisitor_print(...) JAVA_OVERLOADED(ObjectPermutationVisitor_print, __VA_ARGS__)
#define ObjectPermutationVisitor_new1 ObjectPermutationVisitor_new
#define ObjectPermutationVisitor_init1 ObjectPermutationVisitor_init
#ifndef ObjectPermutationVisitor_getInstance
#define ObjectPermutationVisitor_getInstance Visitor_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ObjectPermutationVisitor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ObjectPermutationVisitor_register(void);


#endif // ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_OBJECTPERMUTATIONVISITOR_H
