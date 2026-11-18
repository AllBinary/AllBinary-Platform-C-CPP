#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDUTILINTERFACE_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDUTILINTERFACE_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
typedef struct LockableFeature LockableFeature;

typedef struct LockedUtilInterface LockedUtilInterface;
struct LockedUtilInterface {
    bool (*isLocked)(void* this);
    bool (*isLockedFeature)(void* this, LockableFeature* lockableFeatrue);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LockedUtilInterface_staticInit(void);

static inline bool LockedUtilInterface_isLocked(void* this) {
    return ((__typeof__(((LockedUtilInterface*) nullptr)->isLocked)) java_method_of(this, "isLocked"))(this);
}

static inline bool LockedUtilInterface_isLockedFeature(void* this, LockableFeature* lockableFeatrue) {
    return ((__typeof__(((LockedUtilInterface*) nullptr)->isLockedFeature)) java_method_of(this, "isLockedFeature"))(this, lockableFeatrue);
}


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDUTILINTERFACE_H
