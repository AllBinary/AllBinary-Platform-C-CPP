#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_HARDWAREINTERFACE_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_HARDWAREINTERFACE_H
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
// package org.allbinary.logic.system.hardware

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct HardwareComponentInterface HardwareComponentInterface;
typedef struct ABHashtable ABHashtable;

typedef struct HardwareInterface HardwareInterface;
struct HardwareInterface {
    HardwareComponentInterface* (*getComponent)(void* this, int32_t index);
    const char* (*toString)(void* this);
    bool (*compareTo)(void* this, HardwareInterface* hardwareInterface);
    ABHashtable* (*difference)(void* this, HardwareInterface* hardwareInterface);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HardwareInterface_staticInit(void);

static inline HardwareComponentInterface* HardwareInterface_getComponent(void* this, int32_t index) {
    return ((__typeof__(((HardwareInterface*) nullptr)->getComponent)) java_method_of(this, "getComponent"))(this, index);
}

static inline const char* HardwareInterface_toString(void* this) {
    return ((__typeof__(((HardwareInterface*) nullptr)->toString)) java_method_of(this, "toString"))(this);
}

static inline bool HardwareInterface_compareTo(void* this, HardwareInterface* hardwareInterface) {
    return ((__typeof__(((HardwareInterface*) nullptr)->compareTo)) java_method_of(this, "compareTo"))(this, hardwareInterface);
}

static inline ABHashtable* HardwareInterface_difference(void* this, HardwareInterface* hardwareInterface) {
    return ((__typeof__(((HardwareInterface*) nullptr)->difference)) java_method_of(this, "difference"))(this, hardwareInterface);
}


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_HARDWAREINTERFACE_H
