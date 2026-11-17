#ifndef ORG_ALLBINARY_LOGIC_ABSYSTEMWRAPPER_H
#define ORG_ALLBINARY_LOGIC_ABSYSTEMWRAPPER_H
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
// package org.allbinary.logic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "jsinterop/annotations/JsType.h"
#include "java/lang/System.h"

typedef struct ABSystemWrapper ABSystemWrapper;
struct ABSystemWrapper {
    char unused;
};


ABSystemWrapper* ABSystemWrapper_new(void);
void ABSystemWrapper_init(ABSystemWrapper* this);

ABSystemWrapper* ABSystemWrapper_getInstance(void);

void ABSystemWrapper_arraycopy(ABSystemWrapper* this, void* src, int32_t srcPos, void* dest, int32_t destPos, int32_t length);

int64_t ABSystemWrapper_currentTimeMillis(ABSystemWrapper* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ABSystemWrapper_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ABSystemWrapper_register(void);


#endif // ORG_ALLBINARY_LOGIC_ABSYSTEMWRAPPER_H
