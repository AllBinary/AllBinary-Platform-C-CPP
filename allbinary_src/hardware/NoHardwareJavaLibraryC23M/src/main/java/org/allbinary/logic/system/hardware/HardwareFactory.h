#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_HARDWAREFACTORY_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_HARDWAREFACTORY_H
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
typedef struct NoHardware NoHardware;
typedef struct HardwareInterface HardwareInterface;
typedef struct OperatingSystemInterface OperatingSystemInterface;
#if __has_include("org/allbinary/logic/system/hardware/HardwareInterface.h")
#include "org/allbinary/logic/system/hardware/HardwareInterface.h"
#endif

typedef struct HardwareFactory HardwareFactory;
struct HardwareFactory {
    HardwareInterface* SINGLETON;
};


HardwareFactory* HardwareFactory_new(void);

HardwareFactory* HardwareFactory_getInstance0(void);

void HardwareFactory_init(HardwareFactory* this);

HardwareInterface* HardwareFactory_getInstance2(HardwareFactory* this, OperatingSystemInterface* os);
#define HardwareFactory_getInstance(...) JAVA_OVERLOADED(HardwareFactory_getInstance, __VA_ARGS__)
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HardwareFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HardwareFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_HARDWAREFACTORY_H
