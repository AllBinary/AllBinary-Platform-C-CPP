#ifndef ORG_ALLBINARY_THREAD_NULLTHREAD_H
#define ORG_ALLBINARY_THREAD_NULLTHREAD_H
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
#include "java/lang/Thread.h"

typedef struct NullThread NullThread;
struct NullThread {
    char unused;
};

extern Thread* NullThread_NULL_THREAD;

NullThread* NullThread_new(void);
void NullThread_init(NullThread* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullThread_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullThread_register(void);


#endif // ORG_ALLBINARY_THREAD_NULLTHREAD_H
