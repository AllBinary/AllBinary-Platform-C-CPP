#ifndef ORG_ALLBINARY_THREAD_RUNNABLEINTERFACE_H
#define ORG_ALLBINARY_THREAD_RUNNABLEINTERFACE_H
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
#include "java/lang/Thread.h"
#include "java/lang/Runnable.h"

typedef struct RunnableInterface RunnableInterface;
struct RunnableInterface {
    bool (*isRunning)(void* this);
    void (*setRunning)(void* this, bool isRunning);
    void (*setThread)(void* this, Thread* thread);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RunnableInterface_staticInit(void);

static inline bool RunnableInterface_isRunning(void* this) {
    return ((__typeof__(((RunnableInterface*) nullptr)->isRunning)) java_method_of(this, "isRunning"))(this);
}

static inline void RunnableInterface_setRunning(void* this, bool isRunning) {
    ((__typeof__(((RunnableInterface*) nullptr)->setRunning)) java_method_of(this, "setRunning"))(this, isRunning);
}

static inline void RunnableInterface_setThread(void* this, Thread* thread) {
    ((__typeof__(((RunnableInterface*) nullptr)->setThread)) java_method_of(this, "setThread"))(this, thread);
}


#endif // ORG_ALLBINARY_THREAD_RUNNABLEINTERFACE_H
