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

typedef struct ThreadObjectUtil ThreadObjectUtil;
struct ThreadObjectUtil {
    PriorityRunnable* NULL_PRIORITY_RUNNABLE;
};

static ThreadObjectUtil* ThreadObjectUtil_instance;

ThreadObjectUtil* ThreadObjectUtil_new(void);
ThreadObjectUtil* ThreadObjectUtil_getInstance(void);
void ThreadObjectUtil_notifyObject(ThreadObjectUtil* this, Any* anyType);
void ThreadObjectUtil_waitObject(ThreadObjectUtil* this, Any* anyType);
void ThreadObjectUtil_waitObjectFor(ThreadObjectUtil* this, Any* anyType, int64_t delay);
void ThreadObjectUtil_processThread(ThreadObjectUtil* this, Runnable* runnable);

// Static fields with runtime initializers: call this once at startup
void ThreadObjectUtil_staticInit(void) {
    ThreadObjectUtil_instance = ThreadObjectUtil_new();
}

static void ThreadObjectUtil_initFields(ThreadObjectUtil* this) {
    this->NULL_PRIORITY_RUNNABLE = NullPriorityRunnable_new();
}

void ThreadObjectUtil_init(ThreadObjectUtil* this) {
    ThreadObjectUtil_initFields(this);
}

ThreadObjectUtil* ThreadObjectUtil_new(void) {
    ThreadObjectUtil* this = calloc(1, sizeof(ThreadObjectUtil));
    ThreadObjectUtil_init(this);
    return this;
}


ThreadObjectUtil* ThreadObjectUtil_getInstance(void) {
        return ThreadObjectUtil_instance;
}


void ThreadObjectUtil_notifyObject(ThreadObjectUtil* this, Any* anyType) {
}


// throws Exception
void ThreadObjectUtil_waitObject(ThreadObjectUtil* this, Any* anyType) {
}


// throws Exception
void ThreadObjectUtil_waitObjectFor(ThreadObjectUtil* this, Any* anyType, int64_t delay) {
}


void ThreadObjectUtil_processThread(ThreadObjectUtil* this, Runnable* runnable) {
        Runnable_run(runnable);
}

