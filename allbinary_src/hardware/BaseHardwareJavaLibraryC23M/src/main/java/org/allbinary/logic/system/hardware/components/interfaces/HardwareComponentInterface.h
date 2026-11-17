#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_HARDWARECOMPONENTINTERFACE_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_HARDWARECOMPONENTINTERFACE_H
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

typedef struct HardwareComponentInterface HardwareComponentInterface;
struct HardwareComponentInterface {
    bool (*compareTo)(void* this, HardwareComponentInterface* componentInterface);
    const char* (*toString)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HardwareComponentInterface_staticInit(void);

static inline bool HardwareComponentInterface_compareTo(void* this, HardwareComponentInterface* componentInterface) {
    return ((__typeof__(((HardwareComponentInterface*) nullptr)->compareTo)) java_method_of(this, "compareTo"))(this, componentInterface);
}

static inline const char* HardwareComponentInterface_toString(void* this) {
    return ((__typeof__(((HardwareComponentInterface*) nullptr)->toString)) java_method_of(this, "toString"))(this);
}


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_HARDWARECOMPONENTINTERFACE_H
