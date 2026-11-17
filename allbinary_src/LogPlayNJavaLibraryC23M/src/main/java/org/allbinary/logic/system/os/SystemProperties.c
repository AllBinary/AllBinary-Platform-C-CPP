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

//ActualPlatform
typedef struct SystemProperties SystemProperties;
struct SystemProperties {
    const char* OS_NAME;
    const char* OS_ARCH;
    const char* OS_VERSION;
};

static SystemProperties* SystemProperties_instance;

SystemProperties* SystemProperties_new(void);
SystemProperties* SystemProperties_getInstance(void);

void SystemProperties_init(SystemProperties* this);
const char* SystemProperties_getName(SystemProperties* this);
const char* SystemProperties_getArch(SystemProperties* this);
const char* SystemProperties_getVersion(SystemProperties* this);
const char* SystemProperties_getUserHomePath(SystemProperties* this);

// Static fields with runtime initializers: call this once at startup
void SystemProperties_staticInit(void) {
    SystemProperties_instance = SystemProperties_new();
}

static void SystemProperties_initFields(SystemProperties* this) {
    this->OS_NAME = "os.name";
    this->OS_ARCH = "os.arch";
    this->OS_VERSION = "os.version";
}


SystemProperties* SystemProperties_getInstance(void) {
        return SystemProperties_instance;
}


void SystemProperties_init(SystemProperties* this) {
    SystemProperties_initFields(this);
}

SystemProperties* SystemProperties_new(void) {
    SystemProperties* this = calloc(1, sizeof(SystemProperties));
    SystemProperties_init(this);
    return this;
}


const char* SystemProperties_getName(SystemProperties* this) {
        return this->OS_NAME;
}


const char* SystemProperties_getArch(SystemProperties* this) {
        return this->OS_ARCH;
}


const char* SystemProperties_getVersion(SystemProperties* this) {
        return this->OS_VERSION;
}


const char* SystemProperties_getUserHomePath(SystemProperties* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

