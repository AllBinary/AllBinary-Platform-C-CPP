#ifndef ORG_ALLBINARY_UTIL_ABSTACK_H
#define ORG_ALLBINARY_UTIL_ABSTACK_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2026 AllBinary 
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
// package org.allbinary.util

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "java/util/Stack.h"

typedef struct ABStack ABStack;
struct ABStack {
    Stack base;
};


ABStack* ABStack_new(void);
void ABStack_init(ABStack* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ABStack_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ABStack_register(void);


#endif // ORG_ALLBINARY_UTIL_ABSTACK_H
