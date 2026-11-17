#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMFACTORY_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMFACTORY_H
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
// package org.allbinary.logic.system.os

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct NoOperatingSystem NoOperatingSystem;
typedef struct GenericOperatingSystem GenericOperatingSystem;
typedef struct OperatingSystems OperatingSystems;
typedef struct SystemProperties SystemProperties;
typedef struct Log Log;
typedef struct LogFactory LogFactory;
typedef struct LogUtil LogUtil;
typedef struct LogConfigTypeFactory LogConfigTypeFactory;
typedef struct LogConfigTypes LogConfigTypes;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct LinuxOperatingSystemFactory LinuxOperatingSystemFactory;
typedef struct SolarisOperatingSystemFactory SolarisOperatingSystemFactory;
typedef struct WindowsOperatingSystemFactory WindowsOperatingSystemFactory;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "java/lang/System.h"
#if __has_include("org/allbinary/logic/system/os/GenericOperatingSystem.h")
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#endif

typedef struct OperatingSystemFactory OperatingSystemFactory;
struct OperatingSystemFactory {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    GenericOperatingSystem* genericOperatingSystem;
    bool hasDetected;
};


OperatingSystemFactory* OperatingSystemFactory_new(void);

OperatingSystemFactory* OperatingSystemFactory_getInstance(void);

void OperatingSystemFactory_init(OperatingSystemFactory* this);

GenericOperatingSystem* OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OperatingSystemFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OperatingSystemFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMFACTORY_H
