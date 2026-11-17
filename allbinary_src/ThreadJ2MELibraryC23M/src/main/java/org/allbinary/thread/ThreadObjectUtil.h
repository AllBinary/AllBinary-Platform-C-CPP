#ifndef ORG_ALLBINARY_THREAD_THREADOBJECTUTIL_H
#define ORG_ALLBINARY_THREAD_THREADOBJECTUTIL_H
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
typedef struct NullPriorityRunnable NullPriorityRunnable;
typedef struct PriorityRunnable PriorityRunnable;
typedef struct TsUtil TsUtil;
#include "java/lang/Thread.h"
#include "java/lang/Runnable.h"
#if __has_include("org/allbinary/thread/PriorityRunnable.h")
#include "org/allbinary/thread/PriorityRunnable.h"
#endif

typedef struct ThreadObjectUtil ThreadObjectUtil;
struct ThreadObjectUtil {
    PriorityRunnable* NULL_PRIORITY_RUNNABLE;
};


ThreadObjectUtil* ThreadObjectUtil_new(void);
void ThreadObjectUtil_init(ThreadObjectUtil* this);

ThreadObjectUtil* ThreadObjectUtil_getInstance(void);

void ThreadObjectUtil_notifyObject(ThreadObjectUtil* this, void* anyType);

void ThreadObjectUtil_waitObject(ThreadObjectUtil* this, void* anyType);

void ThreadObjectUtil_waitObjectFor(ThreadObjectUtil* this, void* anyType, int64_t delay);

void ThreadObjectUtil_processThread(ThreadObjectUtil* this, Runnable* runnable);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ThreadObjectUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ThreadObjectUtil_register(void);


#endif // ORG_ALLBINARY_THREAD_THREADOBJECTUTIL_H
