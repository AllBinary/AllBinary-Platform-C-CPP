#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_NOHARDWARE_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_NOHARDWARE_H
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
typedef struct HardwareInterface HardwareInterface;
typedef struct StdUtil StdUtil;
typedef struct HardwareComponentInterface HardwareComponentInterface;
typedef struct NoHardwareComponent NoHardwareComponent;
typedef struct ABHashtable ABHashtable;
#include "org/allbinary/logic/system/hardware/HardwareInterface.h"

typedef struct NoHardware NoHardware;
struct NoHardware {
    HardwareInterface HardwareInterface_interface;
};


NoHardware* NoHardware_new(void);
void NoHardware_init(NoHardware* this);

HardwareInterface* NoHardware_getInstance(void);

HardwareComponentInterface* NoHardware_getComponent(NoHardware* this, int32_t index);

const char* NoHardware_toString(NoHardware* this);

bool NoHardware_compareTo(NoHardware* this, HardwareInterface* hardwareInterface);

ABHashtable* NoHardware_difference(NoHardware* this, HardwareInterface* hardwareInterface);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoHardware_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoHardware_register(void);

#if __has_include("org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h")
#include "org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_NOHARDWARE_H
