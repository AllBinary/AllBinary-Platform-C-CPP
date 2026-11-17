#ifndef ORG_ALLBINARY_LOGIC_UTIL_VISITOR_VISITORINTERFACE_H
#define ORG_ALLBINARY_LOGIC_UTIL_VISITOR_VISITORINTERFACE_H
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
struct VisitorInterface {
    void* (*visit)(void* this, void* anyType);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VisitorInterface_staticInit(void);

static inline void* VisitorInterface_visit(void* this, void* anyType) {
    return ((__typeof__(((VisitorInterface*) nullptr)->visit)) java_method_of(this, "visit"))(this, anyType);
}


#endif // ORG_ALLBINARY_LOGIC_UTIL_VISITOR_VISITORINTERFACE_H
