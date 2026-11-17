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
#include "org/allbinary/logic/system/security/licensing/LockedUtilInterface.h"

typedef struct LockedUtil LockedUtil;
struct LockedUtil {
    LockedUtilInterface LockedUtilInterface_interface;
};

static LockedUtil* LockedUtil_instance;

LockedUtil* LockedUtil_new(void);
LockedUtil* LockedUtil_getInstance(void);
bool LockedUtil_isLocked(LockedUtil* this);
bool LockedUtil_isLockedFeature(LockedUtil* this, LockableFeature* lockableFeatrue);

// Static fields with runtime initializers: call this once at startup
void LockedUtil_staticInit(void) {
    LockedUtil_instance = LockedUtil_new();
}

void LockedUtil_init(LockedUtil* this) {
}

LockedUtil* LockedUtil_new(void) {
    LockedUtil* this = calloc(1, sizeof(LockedUtil));
    LockedUtil_init(this);
    return this;
}


LockedUtil* LockedUtil_getInstance(void) {
        return LockedUtil_instance;
}


bool LockedUtil_isLocked(LockedUtil* this) {
        return false;
}


bool LockedUtil_isLockedFeature(LockedUtil* this, LockableFeature* lockableFeatrue) {
        return false;
}

