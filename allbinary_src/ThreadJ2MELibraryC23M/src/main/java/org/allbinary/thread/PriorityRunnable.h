#ifndef ORG_ALLBINARY_THREAD_PRIORITYRUNNABLE_H
#define ORG_ALLBINARY_THREAD_PRIORITYRUNNABLE_H
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
#include "java/lang/Runnable.h"

typedef struct PriorityRunnable PriorityRunnable;
struct PriorityRunnable {
    int32_t (*getPriority)(void* this);
    bool (*isDone)(void* this);
    void (*reset)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PriorityRunnable_staticInit(void);

static inline int32_t PriorityRunnable_getPriority(void* this) {
    return ((__typeof__(((PriorityRunnable*) nullptr)->getPriority)) java_method_of(this, "getPriority"))(this);
}

static inline bool PriorityRunnable_isDone(void* this) {
    return ((__typeof__(((PriorityRunnable*) nullptr)->isDone)) java_method_of(this, "isDone"))(this);
}

static inline void PriorityRunnable_reset(void* this) {
    ((__typeof__(((PriorityRunnable*) nullptr)->reset)) java_method_of(this, "reset"))(this);
}


#endif // ORG_ALLBINARY_THREAD_PRIORITYRUNNABLE_H
