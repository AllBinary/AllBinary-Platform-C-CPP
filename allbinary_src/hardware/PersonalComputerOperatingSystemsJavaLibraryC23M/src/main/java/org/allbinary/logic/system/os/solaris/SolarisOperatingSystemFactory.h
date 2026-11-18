#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_SOLARIS_SOLARISOPERATINGSYSTEMFACTORY_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_OS_SOLARIS_SOLARISOPERATINGSYSTEMFACTORY_H
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
// package org.allbinary.logic.system.os.solaris

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct SolarisOS SolarisOS;
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

typedef struct SolarisOperatingSystemFactory SolarisOperatingSystemFactory;
struct SolarisOperatingSystemFactory {
    LogUtil* logUtil;
};


SolarisOperatingSystemFactory* SolarisOperatingSystemFactory_new(void);

SolarisOperatingSystemFactory* SolarisOperatingSystemFactory_getInstance(void);

void SolarisOperatingSystemFactory_init(SolarisOperatingSystemFactory* this);

GenericOperatingSystem* SolarisOperatingSystemFactory_getOperatingSystemInstance(SolarisOperatingSystemFactory* this);
#define SolarisOperatingSystemFactory_new0 SolarisOperatingSystemFactory_new
#define SolarisOperatingSystemFactory_init0 SolarisOperatingSystemFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SolarisOperatingSystemFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SolarisOperatingSystemFactory_register(void);

#if __has_include("org/allbinary/logic/system/os/GenericOperatingSystem.h")
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#endif

#endif // ORG_ALLBINARY_LOGIC_SYSTEM_OS_SOLARIS_SOLARISOPERATINGSYSTEMFACTORY_H
