#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_GENERICOPERATINGSYSTEM_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_OS_GENERICOPERATINGSYSTEM_H
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
typedef struct OperatingSystemInterface OperatingSystemInterface;
typedef struct SystemProperties SystemProperties;
typedef struct CharacterSet CharacterSet;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct StringValidationUtil StringValidationUtil;
typedef struct CommonSeps CommonSeps;
#if __has_include("org/allbinary/logic/java/character/CharacterSet.h")
#include "org/allbinary/logic/java/character/CharacterSet.h"
#endif
#include "org/allbinary/logic/system/os/OperatingSystemInterface.h"

typedef struct GenericOperatingSystem GenericOperatingSystem;
struct GenericOperatingSystem {
    OperatingSystemInterface OperatingSystemInterface_interface;
    const char* osName;
    const char* osArch;
    const char* osVersion;
    CharacterSet* characterSet;
    bool scalable;
};


GenericOperatingSystem* GenericOperatingSystem_new(void);

void GenericOperatingSystem_init(GenericOperatingSystem* this);

const char* GenericOperatingSystem_getName(GenericOperatingSystem* this);

const char* GenericOperatingSystem_getVersion(GenericOperatingSystem* this);

const char* GenericOperatingSystem_getArch(GenericOperatingSystem* this);

CharacterSet* GenericOperatingSystem_getCharacterSet(GenericOperatingSystem* this);

bool GenericOperatingSystem_isOverScan(GenericOperatingSystem* this);

int32_t GenericOperatingSystem_getOverScanXPercent(GenericOperatingSystem* this);

int32_t GenericOperatingSystem_getOverScanYPercent(GenericOperatingSystem* this);

bool GenericOperatingSystem_isScalable(GenericOperatingSystem* this);

bool GenericOperatingSystem_isAutoHide(GenericOperatingSystem* this);

const char* GenericOperatingSystem_toString(GenericOperatingSystem* this);
#define GenericOperatingSystem_new0 GenericOperatingSystem_new
#define GenericOperatingSystem_init0 GenericOperatingSystem_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GenericOperatingSystem_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GenericOperatingSystem_register(void);

#if __has_include("org/allbinary/logic/java/character/CharacterSet.h")
#include "org/allbinary/logic/java/character/CharacterSet.h"
#endif

#endif // ORG_ALLBINARY_LOGIC_SYSTEM_OS_GENERICOPERATINGSYSTEM_H
