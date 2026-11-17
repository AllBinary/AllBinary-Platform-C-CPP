#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_COMPONENTFACTORY_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_COMPONENTFACTORY_H
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
// package org.allbinary.logic.system.hardware.components

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Component Component;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/system/hardware/components/Component.h")
#include "org/allbinary/logic/system/hardware/components/Component.h"
#endif

typedef struct ComponentFactory ComponentFactory;
struct ComponentFactory {
    Component* VGA;
    Component* IDE;
    Component* SCSI;
    Component* BRIDGE;
    Component* ETHERNET;
    Component* USB;
    Component* MULTIMEDIA;
    Component* PCI;
    Component* RAID;
    Component* SMBUS;
    Component* PIC;
    Component* Class;
    Component* UNKNOWN;
};


ComponentFactory* ComponentFactory_new(void);
void ComponentFactory_init(ComponentFactory* this);

ComponentFactory* ComponentFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ComponentFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ComponentFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_COMPONENTFACTORY_H
