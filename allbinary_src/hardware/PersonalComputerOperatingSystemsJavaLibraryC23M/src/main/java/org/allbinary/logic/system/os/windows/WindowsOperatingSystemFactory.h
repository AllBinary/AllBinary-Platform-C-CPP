#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_WINDOWS_WINDOWSOPERATINGSYSTEMFACTORY_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_OS_WINDOWS_WINDOWSOPERATINGSYSTEMFACTORY_H
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
// package org.allbinary.logic.system.os.windows

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct WindowsOS WindowsOS;
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

typedef struct WindowsOperatingSystemFactory WindowsOperatingSystemFactory;
struct WindowsOperatingSystemFactory {
    LogUtil* logUtil;
};


WindowsOperatingSystemFactory* WindowsOperatingSystemFactory_new(void);

WindowsOperatingSystemFactory* WindowsOperatingSystemFactory_getInstance(void);

void WindowsOperatingSystemFactory_init(WindowsOperatingSystemFactory* this);

GenericOperatingSystem* WindowsOperatingSystemFactory_getOperatingSystemInstance(WindowsOperatingSystemFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void WindowsOperatingSystemFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void WindowsOperatingSystemFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_OS_WINDOWS_WINDOWSOPERATINGSYSTEMFACTORY_H
