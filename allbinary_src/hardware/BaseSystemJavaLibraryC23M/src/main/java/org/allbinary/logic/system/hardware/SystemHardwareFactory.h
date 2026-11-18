#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_SYSTEMHARDWAREFACTORY_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_SYSTEMHARDWAREFACTORY_H
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
typedef struct HardwareFactory HardwareFactory;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct GenericOperatingSystem GenericOperatingSystem;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/logic/system/hardware/HardwareInterface.h")
#include "org/allbinary/logic/system/hardware/HardwareInterface.h"
#endif

typedef struct SystemHardwareFactory SystemHardwareFactory;
struct SystemHardwareFactory {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    HardwareInterface* hardwareInterface;
};


SystemHardwareFactory* SystemHardwareFactory_new(void);

SystemHardwareFactory* SystemHardwareFactory_getInstance0(void);

void SystemHardwareFactory_init(SystemHardwareFactory* this);

HardwareInterface* SystemHardwareFactory_getInstance2(SystemHardwareFactory* this, GenericOperatingSystem* operatingSystemInterface);

const char* SystemHardwareFactory_static_toString(void);
#define SystemHardwareFactory_getInstance(...) JAVA_OVERLOADED(SystemHardwareFactory_getInstance, __VA_ARGS__)
#define SystemHardwareFactory_new0 SystemHardwareFactory_new
#define SystemHardwareFactory_init0 SystemHardwareFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SystemHardwareFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SystemHardwareFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_SYSTEMHARDWAREFACTORY_H
