#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSEUTIL_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSEUTIL_H
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
typedef struct CommandListener CommandListener;

typedef struct LicenseUtil LicenseUtil;
struct LicenseUtil {
    char unused;
};


LicenseUtil* LicenseUtil_new(void);
void LicenseUtil_init(LicenseUtil* this);

LicenseUtil* LicenseUtil_getInstance(void);

void LicenseUtil_initMethod(LicenseUtil* this);

bool LicenseUtil_isRunning(LicenseUtil* this);

void LicenseUtil_setRunning(LicenseUtil* this, bool running);

bool LicenseUtil_shouldWait(LicenseUtil* this, CommandListener* commandListener);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LicenseUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LicenseUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSEUTIL_H
