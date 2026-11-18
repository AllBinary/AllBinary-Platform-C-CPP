#ifndef ORG_ALLBINARY_GLOBALS_APPURLGLOBALS_H
#define ORG_ALLBINARY_GLOBALS_APPURLGLOBALS_H
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
typedef struct UrlGlobalsInterface UrlGlobalsInterface;
typedef struct StringUtil StringUtil;
#include "org/allbinary/globals/UrlGlobalsInterface.h"

//implements
typedef struct AppUrlGlobals AppUrlGlobals;
struct AppUrlGlobals {
    UrlGlobalsInterface base;
    const char* path;
};

extern AppUrlGlobals* AppUrlGlobals_NULL_APP_URL_GLOBALS;

AppUrlGlobals* AppUrlGlobals_new(void);
void AppUrlGlobals_init(AppUrlGlobals* this);

bool AppUrlGlobals_isTestingMode(AppUrlGlobals* this);

const char* AppUrlGlobals_getWebappPath(AppUrlGlobals* this);

void AppUrlGlobals_setWebappPath(AppUrlGlobals* this, const char* path);

const char* AppUrlGlobals_getTestHtmlPath(AppUrlGlobals* this);

const char* AppUrlGlobals_getMainPath(AppUrlGlobals* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AppUrlGlobals_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AppUrlGlobals_register(void);


#endif // ORG_ALLBINARY_GLOBALS_APPURLGLOBALS_H
