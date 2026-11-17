#ifndef ORG_ALLBINARY_THREAD_NULLRUNNABLE_H
#define ORG_ALLBINARY_THREAD_NULLRUNNABLE_H
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
// package org.allbinary.thread

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ARunnable ARunnable;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"
#include "org/allbinary/thread/ARunnable.h"

typedef struct NullRunnable NullRunnable;
struct NullRunnable {
    ARunnable base;
};


NullRunnable* NullRunnable_new(void);

NullRunnable* NullRunnable_getInstance(void);

void NullRunnable_init(NullRunnable* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullRunnable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullRunnable_register(void);


#endif // ORG_ALLBINARY_THREAD_NULLRUNNABLE_H
