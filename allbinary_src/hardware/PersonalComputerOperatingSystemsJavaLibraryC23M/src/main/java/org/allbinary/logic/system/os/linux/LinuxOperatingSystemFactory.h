#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_LINUX_LINUXOPERATINGSYSTEMFACTORY_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_OS_LINUX_LINUXOPERATINGSYSTEMFACTORY_H
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
// package org.allbinary.logic.system.os.linux

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct LinuxOS LinuxOS;
typedef struct LogUtil LogUtil;
typedef struct LogConfigTypeFactory LogConfigTypeFactory;
typedef struct LogConfigTypes LogConfigTypes;
typedef struct GenericOperatingSystem GenericOperatingSystem;
typedef struct NoOperatingSystem NoOperatingSystem;
typedef struct OperatingSystems OperatingSystems;
typedef struct SystemProperties SystemProperties;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct LinuxOperatingSystemFactory LinuxOperatingSystemFactory;
struct LinuxOperatingSystemFactory {
    LogUtil* logUtil;
};


LinuxOperatingSystemFactory* LinuxOperatingSystemFactory_new(void);

LinuxOperatingSystemFactory* LinuxOperatingSystemFactory_getInstance(void);

void LinuxOperatingSystemFactory_init(LinuxOperatingSystemFactory* this);

GenericOperatingSystem* LinuxOperatingSystemFactory_getOperatingSystemInstance(LinuxOperatingSystemFactory* this);
#define LinuxOperatingSystemFactory_new0 LinuxOperatingSystemFactory_new
#define LinuxOperatingSystemFactory_init0 LinuxOperatingSystemFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LinuxOperatingSystemFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LinuxOperatingSystemFactory_register(void);

#if __has_include("org/allbinary/logic/system/os/GenericOperatingSystem.h")
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#endif

#endif // ORG_ALLBINARY_LOGIC_SYSTEM_OS_LINUX_LINUXOPERATINGSYSTEMFACTORY_H
