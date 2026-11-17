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
// #include "javax/microedition/lcdui/CommandListener.h"

typedef struct LicenseUtil LicenseUtil;
struct LicenseUtil {
    char unused;
};

static LicenseUtil* LicenseUtil_instance;

LicenseUtil* LicenseUtil_new(void);
LicenseUtil* LicenseUtil_getInstance(void);
void LicenseUtil_init(LicenseUtil* this);
bool LicenseUtil_isRunning(LicenseUtil* this);
void LicenseUtil_setRunning(LicenseUtil* this, bool running);
bool LicenseUtil_shouldWait(LicenseUtil* this, CommandListener* commandListener);

// Static fields with runtime initializers: call this once at startup
void LicenseUtil_staticInit(void) {
    LicenseUtil_instance = LicenseUtil_new();
}

void LicenseUtil_init(LicenseUtil* this) {
}

LicenseUtil* LicenseUtil_new(void) {
    LicenseUtil* this = calloc(1, sizeof(LicenseUtil));
    LicenseUtil_init(this);
    return this;
}


LicenseUtil* LicenseUtil_getInstance(void) {
        return LicenseUtil_instance;
}


void LicenseUtil_init(LicenseUtil* this) {
}


// synchronized
bool LicenseUtil_isRunning(LicenseUtil* this) {
        return false;
}


// synchronized
void LicenseUtil_setRunning(LicenseUtil* this, bool running) {
}


bool LicenseUtil_shouldWait(LicenseUtil* this, CommandListener* commandListener) {
        return LicenseUtil_isRunning(this);
}

