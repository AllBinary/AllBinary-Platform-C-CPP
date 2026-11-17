#ifndef ORG_ALLBINARY_LOGIC_UTIL_VISITOR_VISITOR_H
#define ORG_ALLBINARY_LOGIC_UTIL_VISITOR_VISITOR_H
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
// package org.allbinary.logic.util.visitor

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct VisitorInterface VisitorInterface;
typedef struct NullUtil NullUtil;
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#include "org/allbinary/logic/util/visitor/VisitorInterface.h"

typedef struct Visitor Visitor;
struct Visitor {
    VisitorInterface VisitorInterface_interface;
    NullUtil* nullUtil;
};


Visitor* Visitor_new(void);
void Visitor_init(Visitor* this);

void* Visitor_visit(Visitor* this, void* anyType);

Visitor* Visitor_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Visitor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Visitor_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_VISITOR_VISITOR_H
