#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_CPUINTERFACE_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_CPUINTERFACE_H
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
// package org.allbinary.logic.system.hardware.components.interfaces

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct CpuInterface CpuInterface;
struct CpuInterface {
    const char* (*getProcessor)(void* this);
    const char* (*getVendorId)(void* this);
    const char* (*getCpuFamily)(void* this);
    const char* (*getModel)(void* this);
    const char* (*getModelName)(void* this);
    const char* (*getStepping)(void* this);
    const char* (*getCpuSpeed)(void* this);
    const char* (*getCacheSize)(void* this);
    bool (*compareTo)(void* this, CpuInterface* cpuInterface);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CpuInterface_staticInit(void);

static inline const char* CpuInterface_getProcessor(void* this) {
    return ((__typeof__(((CpuInterface*) nullptr)->getProcessor)) java_method_of(this, "getProcessor"))(this);
}

static inline const char* CpuInterface_getVendorId(void* this) {
    return ((__typeof__(((CpuInterface*) nullptr)->getVendorId)) java_method_of(this, "getVendorId"))(this);
}

static inline const char* CpuInterface_getCpuFamily(void* this) {
    return ((__typeof__(((CpuInterface*) nullptr)->getCpuFamily)) java_method_of(this, "getCpuFamily"))(this);
}

static inline const char* CpuInterface_getModel(void* this) {
    return ((__typeof__(((CpuInterface*) nullptr)->getModel)) java_method_of(this, "getModel"))(this);
}

static inline const char* CpuInterface_getModelName(void* this) {
    return ((__typeof__(((CpuInterface*) nullptr)->getModelName)) java_method_of(this, "getModelName"))(this);
}

static inline const char* CpuInterface_getStepping(void* this) {
    return ((__typeof__(((CpuInterface*) nullptr)->getStepping)) java_method_of(this, "getStepping"))(this);
}

static inline const char* CpuInterface_getCpuSpeed(void* this) {
    return ((__typeof__(((CpuInterface*) nullptr)->getCpuSpeed)) java_method_of(this, "getCpuSpeed"))(this);
}

static inline const char* CpuInterface_getCacheSize(void* this) {
    return ((__typeof__(((CpuInterface*) nullptr)->getCacheSize)) java_method_of(this, "getCacheSize"))(this);
}

static inline bool CpuInterface_compareTo(void* this, CpuInterface* cpuInterface) {
    return ((__typeof__(((CpuInterface*) nullptr)->compareTo)) java_method_of(this, "compareTo"))(this, cpuInterface);
}


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_CPUINTERFACE_H
