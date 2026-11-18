#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_SOLARIS_SOLARISOS_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_OS_SOLARIS_SOLARISOS_H
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
typedef struct GenericOperatingSystem GenericOperatingSystem;
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"

typedef struct SolarisOS SolarisOS;
struct SolarisOS {
    GenericOperatingSystem base;
};


SolarisOS* SolarisOS_new(void);

void SolarisOS_init(SolarisOS* this);

bool SolarisOS_isAutoHide(SolarisOS* this);
#define SolarisOS_new0 SolarisOS_new
#define SolarisOS_init0 SolarisOS_init
#ifndef SolarisOS_getName
#define SolarisOS_getName GenericOperatingSystem_getName
#endif
#ifndef SolarisOS_getVersion
#define SolarisOS_getVersion GenericOperatingSystem_getVersion
#endif
#ifndef SolarisOS_getArch
#define SolarisOS_getArch GenericOperatingSystem_getArch
#endif
#ifndef SolarisOS_getCharacterSet
#define SolarisOS_getCharacterSet GenericOperatingSystem_getCharacterSet
#endif
#ifndef SolarisOS_isOverScan
#define SolarisOS_isOverScan GenericOperatingSystem_isOverScan
#endif
#ifndef SolarisOS_getOverScanXPercent
#define SolarisOS_getOverScanXPercent GenericOperatingSystem_getOverScanXPercent
#endif
#ifndef SolarisOS_getOverScanYPercent
#define SolarisOS_getOverScanYPercent GenericOperatingSystem_getOverScanYPercent
#endif
#ifndef SolarisOS_isScalable
#define SolarisOS_isScalable GenericOperatingSystem_isScalable
#endif
#ifndef SolarisOS_toString
#define SolarisOS_toString GenericOperatingSystem_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SolarisOS_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SolarisOS_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_OS_SOLARIS_SOLARISOS_H
