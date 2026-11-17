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
// package org.allbinary.globals

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct URLGLOBALS URLGLOBALS;
struct URLGLOBALS {
    char unused;
};

static UrlGlobalsInterface* URLGLOBALS_urlGlobalsInterface;

URLGLOBALS* URLGLOBALS_new(void);
void URLGLOBALS_init(UrlGlobalsInterface* urlGlobalsInterface);
bool URLGLOBALS_isTestingMode(void);
const char* URLGLOBALS_getWebappPath(void);
const char* URLGLOBALS_getTestHtmlPath(void);
const char* URLGLOBALS_getMainPath(void);

// Static fields with runtime initializers: call this once at startup
void URLGLOBALS_staticInit(void) {
    URLGLOBALS_urlGlobalsInterface = AppUrlGlobals_NULL_APP_URL_GLOBALS;
}

void URLGLOBALS_init(URLGLOBALS* this) {
}

URLGLOBALS* URLGLOBALS_new(void) {
    URLGLOBALS* this = calloc(1, sizeof(URLGLOBALS));
    URLGLOBALS_init(this);
    return this;
}


void URLGLOBALS_init(UrlGlobalsInterface* urlGlobalsInterface) {
        _URLGLOBALS->urlGlobalsInterface = urlGlobalsInterface;
}


bool URLGLOBALS_isTestingMode(void) {
        return JAVA_CALL(_URLGLOBALS->urlGlobalsInterface, isTestingMode);
}


const char* URLGLOBALS_getWebappPath(void) {
        return JAVA_CALL(_URLGLOBALS->urlGlobalsInterface, getWebappPath);
}


const char* URLGLOBALS_getTestHtmlPath(void) {
        return JAVA_CALL(_URLGLOBALS->urlGlobalsInterface, getTestHtmlPath);
}


// throws Exception
const char* URLGLOBALS_getMainPath(void) {
        return JAVA_CALL(_URLGLOBALS->urlGlobalsInterface, getMainPath);
}

