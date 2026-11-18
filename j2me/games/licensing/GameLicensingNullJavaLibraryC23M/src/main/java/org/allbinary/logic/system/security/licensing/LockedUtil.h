#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDUTIL_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDUTIL_H
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
typedef struct LockedUtilInterface LockedUtilInterface;
typedef struct LockableFeature LockableFeature;
#include "org/allbinary/logic/system/security/licensing/LockedUtilInterface.h"

typedef struct LockedUtil LockedUtil;
struct LockedUtil {
    LockedUtilInterface LockedUtilInterface_interface;
};


LockedUtil* LockedUtil_new(void);
void LockedUtil_init(LockedUtil* this);

LockedUtil* LockedUtil_getInstance(void);

bool LockedUtil_isLocked(LockedUtil* this);

bool LockedUtil_isLockedFeature(LockedUtil* this, LockableFeature* lockableFeatrue);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LockedUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LockedUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDUTIL_H
