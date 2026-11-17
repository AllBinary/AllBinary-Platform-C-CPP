#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMINTERFACE_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMINTERFACE_H
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
typedef struct CharacterSet CharacterSet;

typedef struct OperatingSystemInterface OperatingSystemInterface;
struct OperatingSystemInterface {
    const char* (*getName)(void* this);
    const char* (*getVersion)(void* this);
    const char* (*getArch)(void* this);
    CharacterSet* (*getCharacterSet)(void* this);
    bool (*isOverScan)(void* this);
    int32_t (*getOverScanXPercent)(void* this);
    int32_t (*getOverScanYPercent)(void* this);
    bool (*isScalable)(void* this);
    bool (*isAutoHide)(void* this);
    const char* (*toString)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OperatingSystemInterface_staticInit(void);

static inline const char* OperatingSystemInterface_getName(void* this) {
    return ((__typeof__(((OperatingSystemInterface*) nullptr)->getName)) java_method_of(this, "getName"))(this);
}

static inline const char* OperatingSystemInterface_getVersion(void* this) {
    return ((__typeof__(((OperatingSystemInterface*) nullptr)->getVersion)) java_method_of(this, "getVersion"))(this);
}

static inline const char* OperatingSystemInterface_getArch(void* this) {
    return ((__typeof__(((OperatingSystemInterface*) nullptr)->getArch)) java_method_of(this, "getArch"))(this);
}

static inline CharacterSet* OperatingSystemInterface_getCharacterSet(void* this) {
    return ((__typeof__(((OperatingSystemInterface*) nullptr)->getCharacterSet)) java_method_of(this, "getCharacterSet"))(this);
}

static inline bool OperatingSystemInterface_isOverScan(void* this) {
    return ((__typeof__(((OperatingSystemInterface*) nullptr)->isOverScan)) java_method_of(this, "isOverScan"))(this);
}

static inline int32_t OperatingSystemInterface_getOverScanXPercent(void* this) {
    return ((__typeof__(((OperatingSystemInterface*) nullptr)->getOverScanXPercent)) java_method_of(this, "getOverScanXPercent"))(this);
}

static inline int32_t OperatingSystemInterface_getOverScanYPercent(void* this) {
    return ((__typeof__(((OperatingSystemInterface*) nullptr)->getOverScanYPercent)) java_method_of(this, "getOverScanYPercent"))(this);
}

static inline bool OperatingSystemInterface_isScalable(void* this) {
    return ((__typeof__(((OperatingSystemInterface*) nullptr)->isScalable)) java_method_of(this, "isScalable"))(this);
}

static inline bool OperatingSystemInterface_isAutoHide(void* this) {
    return ((__typeof__(((OperatingSystemInterface*) nullptr)->isAutoHide)) java_method_of(this, "isAutoHide"))(this);
}

static inline const char* OperatingSystemInterface_toString(void* this) {
    return ((__typeof__(((OperatingSystemInterface*) nullptr)->toString)) java_method_of(this, "toString"))(this);
}


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMINTERFACE_H
