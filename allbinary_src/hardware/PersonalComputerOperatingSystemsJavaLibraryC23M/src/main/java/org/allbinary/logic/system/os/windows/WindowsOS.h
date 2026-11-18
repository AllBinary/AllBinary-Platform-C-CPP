#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_WINDOWS_WINDOWSOS_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_OS_WINDOWS_WINDOWSOS_H
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
typedef struct GenericOperatingSystem GenericOperatingSystem;
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"

typedef struct WindowsOS WindowsOS;
struct WindowsOS {
    GenericOperatingSystem base;
};


WindowsOS* WindowsOS_new(void);

void WindowsOS_init(WindowsOS* this);

bool WindowsOS_isAutoHide(WindowsOS* this);
#define WindowsOS_new0 WindowsOS_new
#define WindowsOS_init0 WindowsOS_init
#ifndef WindowsOS_getName
#define WindowsOS_getName GenericOperatingSystem_getName
#endif
#ifndef WindowsOS_getVersion
#define WindowsOS_getVersion GenericOperatingSystem_getVersion
#endif
#ifndef WindowsOS_getArch
#define WindowsOS_getArch GenericOperatingSystem_getArch
#endif
#ifndef WindowsOS_getCharacterSet
#define WindowsOS_getCharacterSet GenericOperatingSystem_getCharacterSet
#endif
#ifndef WindowsOS_isOverScan
#define WindowsOS_isOverScan GenericOperatingSystem_isOverScan
#endif
#ifndef WindowsOS_getOverScanXPercent
#define WindowsOS_getOverScanXPercent GenericOperatingSystem_getOverScanXPercent
#endif
#ifndef WindowsOS_getOverScanYPercent
#define WindowsOS_getOverScanYPercent GenericOperatingSystem_getOverScanYPercent
#endif
#ifndef WindowsOS_isScalable
#define WindowsOS_isScalable GenericOperatingSystem_isScalable
#endif
#ifndef WindowsOS_toString
#define WindowsOS_toString GenericOperatingSystem_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void WindowsOS_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void WindowsOS_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_OS_WINDOWS_WINDOWSOS_H
