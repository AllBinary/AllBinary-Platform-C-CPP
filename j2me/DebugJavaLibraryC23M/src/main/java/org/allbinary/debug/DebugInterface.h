#ifndef ORG_ALLBINARY_DEBUG_DEBUGINTERFACE_H
#define ORG_ALLBINARY_DEBUG_DEBUGINTERFACE_H
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
// package org.allbinary.debug

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct DebugInterface DebugInterface;
struct DebugInterface {
    void (*start)(void* this);
    void (*stop)(void* this);
    int64_t (*getStartTime)(void* this);
    int64_t (*getMaxTime)(void* this);
    bool (*isRunning)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DebugInterface_staticInit(void);

static inline void DebugInterface_start(void* this) {
    ((__typeof__(((DebugInterface*) nullptr)->start)) java_method_of(this, "start"))(this);
}

static inline void DebugInterface_stop(void* this) {
    ((__typeof__(((DebugInterface*) nullptr)->stop)) java_method_of(this, "stop"))(this);
}

static inline int64_t DebugInterface_getStartTime(void* this) {
    return ((__typeof__(((DebugInterface*) nullptr)->getStartTime)) java_method_of(this, "getStartTime"))(this);
}

static inline int64_t DebugInterface_getMaxTime(void* this) {
    return ((__typeof__(((DebugInterface*) nullptr)->getMaxTime)) java_method_of(this, "getMaxTime"))(this);
}

static inline bool DebugInterface_isRunning(void* this) {
    return ((__typeof__(((DebugInterface*) nullptr)->isRunning)) java_method_of(this, "isRunning"))(this);
}


#endif // ORG_ALLBINARY_DEBUG_DEBUGINTERFACE_H
