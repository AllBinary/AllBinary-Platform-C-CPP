#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTINFORMATIONINTERFACE_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTINFORMATIONINTERFACE_H
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
// package org.allbinary.logic.system.security.licensing

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GenericOperatingSystem GenericOperatingSystem;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;

typedef struct AbeClientInformationInterface AbeClientInformationInterface;
struct AbeClientInformationInterface {
    void (*init)(void* this);
    GenericOperatingSystem* (*getOperatingSystemInterface)(void* this);
    const char* (*getName)(void* this);
    const char* (*getSpecialName)(void* this);
    const char* (*getVersion)(void* this);
    const char* (*getLicenseId)(void* this);
    BasicArrayList* (*getLicenseServers)(void* this);
    const char* (*getLicenseServer)(void* this, int32_t index);
    int32_t (*getNumberOfLicenseServers)(void* this);
    ABHashtable* (*toHashtable)(void* this);
    bool (*isSameId)(void* this, const char* alicenseId);
    bool (*isLargerOrDifferentServerList)(void* this, BasicArrayList* vector);
    bool (*isHardSale)(void* this);
    const char* (*toShortString)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AbeClientInformationInterface_staticInit(void);

static inline void AbeClientInformationInterface_initMethod(void* this) {
    ((__typeof__(((AbeClientInformationInterface*) nullptr)->init)) java_method_of(this, "init"))(this);
}

static inline GenericOperatingSystem* AbeClientInformationInterface_getOperatingSystemInterface(void* this) {
    return ((__typeof__(((AbeClientInformationInterface*) nullptr)->getOperatingSystemInterface)) java_method_of(this, "getOperatingSystemInterface"))(this);
}

static inline const char* AbeClientInformationInterface_getName(void* this) {
    return ((__typeof__(((AbeClientInformationInterface*) nullptr)->getName)) java_method_of(this, "getName"))(this);
}

static inline const char* AbeClientInformationInterface_getSpecialName(void* this) {
    return ((__typeof__(((AbeClientInformationInterface*) nullptr)->getSpecialName)) java_method_of(this, "getSpecialName"))(this);
}

static inline const char* AbeClientInformationInterface_getVersion(void* this) {
    return ((__typeof__(((AbeClientInformationInterface*) nullptr)->getVersion)) java_method_of(this, "getVersion"))(this);
}

static inline const char* AbeClientInformationInterface_getLicenseId(void* this) {
    return ((__typeof__(((AbeClientInformationInterface*) nullptr)->getLicenseId)) java_method_of(this, "getLicenseId"))(this);
}

static inline BasicArrayList* AbeClientInformationInterface_getLicenseServers(void* this) {
    return ((__typeof__(((AbeClientInformationInterface*) nullptr)->getLicenseServers)) java_method_of(this, "getLicenseServers"))(this);
}

static inline const char* AbeClientInformationInterface_getLicenseServer(void* this, int32_t index) {
    return ((__typeof__(((AbeClientInformationInterface*) nullptr)->getLicenseServer)) java_method_of(this, "getLicenseServer"))(this, index);
}

static inline int32_t AbeClientInformationInterface_getNumberOfLicenseServers(void* this) {
    return ((__typeof__(((AbeClientInformationInterface*) nullptr)->getNumberOfLicenseServers)) java_method_of(this, "getNumberOfLicenseServers"))(this);
}

static inline ABHashtable* AbeClientInformationInterface_toHashtable(void* this) {
    return ((__typeof__(((AbeClientInformationInterface*) nullptr)->toHashtable)) java_method_of(this, "toHashtable"))(this);
}

static inline bool AbeClientInformationInterface_isSameId(void* this, const char* alicenseId) {
    return ((__typeof__(((AbeClientInformationInterface*) nullptr)->isSameId)) java_method_of(this, "isSameId"))(this, alicenseId);
}

static inline bool AbeClientInformationInterface_isLargerOrDifferentServerList(void* this, BasicArrayList* vector) {
    return ((__typeof__(((AbeClientInformationInterface*) nullptr)->isLargerOrDifferentServerList)) java_method_of(this, "isLargerOrDifferentServerList"))(this, vector);
}

static inline bool AbeClientInformationInterface_isHardSale(void* this) {
    return ((__typeof__(((AbeClientInformationInterface*) nullptr)->isHardSale)) java_method_of(this, "isHardSale"))(this);
}

static inline const char* AbeClientInformationInterface_toShortString(void* this) {
    return ((__typeof__(((AbeClientInformationInterface*) nullptr)->toShortString)) java_method_of(this, "toShortString"))(this);
}

#if __has_include("org/allbinary/logic/system/os/GenericOperatingSystem.h")
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTINFORMATIONINTERFACE_H
