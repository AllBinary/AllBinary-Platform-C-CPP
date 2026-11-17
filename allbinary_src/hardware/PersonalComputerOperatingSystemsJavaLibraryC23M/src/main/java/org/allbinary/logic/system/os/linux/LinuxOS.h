#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_LINUX_LINUXOS_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_OS_LINUX_LINUXOS_H
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
typedef struct GenericOperatingSystem GenericOperatingSystem;
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"

typedef struct LinuxOS LinuxOS;
struct LinuxOS {
    GenericOperatingSystem base;
};


LinuxOS* LinuxOS_new(void);

void LinuxOS_init(LinuxOS* this);

bool LinuxOS_isAutoHide(LinuxOS* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LinuxOS_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LinuxOS_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_OS_LINUX_LINUXOS_H
