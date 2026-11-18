#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_NOOPERATINGSYSTEM_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_OS_NOOPERATINGSYSTEM_H
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
typedef struct GenericOperatingSystem GenericOperatingSystem;
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"

typedef struct NoOperatingSystem NoOperatingSystem;
struct NoOperatingSystem {
    GenericOperatingSystem base;
};

extern GenericOperatingSystem* NoOperatingSystem_NO_OPERATING_SYSTEM;

NoOperatingSystem* NoOperatingSystem_new(void);

void NoOperatingSystem_init(NoOperatingSystem* this);
#define NoOperatingSystem_new0 NoOperatingSystem_new
#define NoOperatingSystem_init0 NoOperatingSystem_init
#ifndef NoOperatingSystem_getName
#define NoOperatingSystem_getName GenericOperatingSystem_getName
#endif
#ifndef NoOperatingSystem_getVersion
#define NoOperatingSystem_getVersion GenericOperatingSystem_getVersion
#endif
#ifndef NoOperatingSystem_getArch
#define NoOperatingSystem_getArch GenericOperatingSystem_getArch
#endif
#ifndef NoOperatingSystem_getCharacterSet
#define NoOperatingSystem_getCharacterSet GenericOperatingSystem_getCharacterSet
#endif
#ifndef NoOperatingSystem_isOverScan
#define NoOperatingSystem_isOverScan GenericOperatingSystem_isOverScan
#endif
#ifndef NoOperatingSystem_getOverScanXPercent
#define NoOperatingSystem_getOverScanXPercent GenericOperatingSystem_getOverScanXPercent
#endif
#ifndef NoOperatingSystem_getOverScanYPercent
#define NoOperatingSystem_getOverScanYPercent GenericOperatingSystem_getOverScanYPercent
#endif
#ifndef NoOperatingSystem_isScalable
#define NoOperatingSystem_isScalable GenericOperatingSystem_isScalable
#endif
#ifndef NoOperatingSystem_isAutoHide
#define NoOperatingSystem_isAutoHide GenericOperatingSystem_isAutoHide
#endif
#ifndef NoOperatingSystem_toString
#define NoOperatingSystem_toString GenericOperatingSystem_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoOperatingSystem_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoOperatingSystem_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_OS_NOOPERATINGSYSTEM_H
