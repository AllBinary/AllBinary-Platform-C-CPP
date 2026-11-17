#ifndef ORG_ALLBINARY_THREAD_NULLPRIORITYRUNNABLE_H
#define ORG_ALLBINARY_THREAD_NULLPRIORITYRUNNABLE_H
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
typedef struct PriorityRunnable PriorityRunnable;
#include "org/allbinary/thread/PriorityRunnable.h"

typedef struct NullPriorityRunnable NullPriorityRunnable;
struct NullPriorityRunnable {
    PriorityRunnable PriorityRunnable_interface;
};


NullPriorityRunnable* NullPriorityRunnable_new(void);
void NullPriorityRunnable_init(NullPriorityRunnable* this);

int32_t NullPriorityRunnable_getPriority(NullPriorityRunnable* this);

bool NullPriorityRunnable_isDone(NullPriorityRunnable* this);

void NullPriorityRunnable_reset(NullPriorityRunnable* this);

void NullPriorityRunnable_run(NullPriorityRunnable* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullPriorityRunnable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullPriorityRunnable_register(void);


#endif // ORG_ALLBINARY_THREAD_NULLPRIORITYRUNNABLE_H
