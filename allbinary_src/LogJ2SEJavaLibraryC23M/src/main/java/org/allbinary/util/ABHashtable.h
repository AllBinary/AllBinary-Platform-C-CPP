#ifndef ORG_ALLBINARY_UTIL_ABHASHTABLE_H
#define ORG_ALLBINARY_UTIL_ABHASHTABLE_H
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
#include "java/util/Hashtable.h"

typedef struct ABHashtable ABHashtable;
struct ABHashtable {
    Hashtable base;
};


ABHashtable* ABHashtable_new(int32_t initialCapacity);

void ABHashtable_init(ABHashtable* this, int32_t initialCapacity);

ABHashtable* ABHashtable_new0();
void ABHashtable_init0(ABHashtable* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ABHashtable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ABHashtable_register(void);


#endif // ORG_ALLBINARY_UTIL_ABHASHTABLE_H
