#ifndef ORG_ALLBINARY_INIT_INITINTERFACE_H
#define ORG_ALLBINARY_INIT_INITINTERFACE_H
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
// package org.allbinary.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct InitInterface InitInterface;
struct InitInterface {
    void (*init)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InitInterface_staticInit(void);

static inline void InitInterface_initMethod(void* this) {
    ((__typeof__(((InitInterface*) nullptr)->init)) java_method_of(this, "init"))(this);
}


#endif // ORG_ALLBINARY_INIT_INITINTERFACE_H
