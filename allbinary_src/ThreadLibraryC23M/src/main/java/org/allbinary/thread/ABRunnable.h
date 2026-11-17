#ifndef ORG_ALLBINARY_THREAD_ABRUNNABLE_H
#define ORG_ALLBINARY_THREAD_ABRUNNABLE_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
typedef struct RunnableInterface RunnableInterface;
#include "java/lang/Thread.h"
#include "org/allbinary/thread/RunnableInterface.h"

typedef struct ABRunnable ABRunnable;
struct ABRunnable {
    RunnableInterface RunnableInterface_interface;
    bool running;
};


ABRunnable* ABRunnable_new(void);
void ABRunnable_init(ABRunnable* this);

void ABRunnable_setThread(ABRunnable* this, Thread* thread);

bool ABRunnable_isRunning(ABRunnable* this);

void ABRunnable_setRunning(ABRunnable* this, bool running);

void ABRunnable_run(ABRunnable* this);

int32_t ABRunnable_getType(ABRunnable* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ABRunnable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ABRunnable_register(void);


#endif // ORG_ALLBINARY_THREAD_ABRUNNABLE_H
