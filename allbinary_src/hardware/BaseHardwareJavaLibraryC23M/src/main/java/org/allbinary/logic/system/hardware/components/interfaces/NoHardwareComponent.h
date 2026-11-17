#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_NOHARDWARECOMPONENT_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_NOHARDWARECOMPONENT_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
typedef struct StringUtil StringUtil;
#include "org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h"

typedef struct NoHardwareComponent NoHardwareComponent;
struct NoHardwareComponent {
    HardwareComponentInterface HardwareComponentInterface_interface;
};


NoHardwareComponent* NoHardwareComponent_new(void);
void NoHardwareComponent_init(NoHardwareComponent* this);

NoHardwareComponent* NoHardwareComponent_getInstance(void);

bool NoHardwareComponent_compareTo(NoHardwareComponent* this, HardwareComponentInterface* componentInterface);

const char* NoHardwareComponent_toString(NoHardwareComponent* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoHardwareComponent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoHardwareComponent_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_NOHARDWARECOMPONENT_H
