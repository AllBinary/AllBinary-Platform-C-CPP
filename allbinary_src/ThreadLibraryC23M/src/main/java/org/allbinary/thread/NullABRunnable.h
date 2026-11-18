#ifndef ORG_ALLBINARY_THREAD_NULLABRUNNABLE_H
#define ORG_ALLBINARY_THREAD_NULLABRUNNABLE_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
typedef struct ABRunnable ABRunnable;
#include "org/allbinary/thread/ABRunnable.h"

typedef struct NullABRunnable NullABRunnable;
struct NullABRunnable {
    ABRunnable base;
};


NullABRunnable* NullABRunnable_new(void);
void NullABRunnable_init(NullABRunnable* this);

NullABRunnable* NullABRunnable_getInstance(void);

bool NullABRunnable_isRunning(NullABRunnable* this);
#ifndef NullABRunnable_setThread
#define NullABRunnable_setThread ABRunnable_setThread
#endif
#ifndef NullABRunnable_setRunning
#define NullABRunnable_setRunning ABRunnable_setRunning
#endif
#ifndef NullABRunnable_run
#define NullABRunnable_run ABRunnable_run
#endif
#ifndef NullABRunnable_getType
#define NullABRunnable_getType ABRunnable_getType
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullABRunnable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullABRunnable_register(void);


#endif // ORG_ALLBINARY_THREAD_NULLABRUNNABLE_H
