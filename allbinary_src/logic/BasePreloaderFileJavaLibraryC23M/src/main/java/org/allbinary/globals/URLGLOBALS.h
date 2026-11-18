#ifndef ORG_ALLBINARY_GLOBALS_URLGLOBALS_H
#define ORG_ALLBINARY_GLOBALS_URLGLOBALS_H
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
typedef struct AppUrlGlobals AppUrlGlobals;
typedef struct UrlGlobalsInterface UrlGlobalsInterface;
#if __has_include("org/allbinary/globals/UrlGlobalsInterface.h")
#include "org/allbinary/globals/UrlGlobalsInterface.h"
#endif

typedef struct URLGLOBALS URLGLOBALS;
struct URLGLOBALS {
    char unused;
};


URLGLOBALS* URLGLOBALS_new(void);
void URLGLOBALS_init(URLGLOBALS* this);

void URLGLOBALS_initMethod(UrlGlobalsInterface* urlGlobalsInterface);

bool URLGLOBALS_isTestingMode(void);

const char* URLGLOBALS_getWebappPath(void);

const char* URLGLOBALS_getTestHtmlPath(void);

const char* URLGLOBALS_getMainPath(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void URLGLOBALS_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void URLGLOBALS_register(void);


#endif // ORG_ALLBINARY_GLOBALS_URLGLOBALS_H
