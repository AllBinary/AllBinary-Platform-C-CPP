#ifndef ORG_ALLBINARY_GLOBALS_GLOBALS_H
#define ORG_ALLBINARY_GLOBALS_GLOBALS_H
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
typedef struct URLGLOBALS URLGLOBALS;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringValidationUtil StringValidationUtil;
typedef struct WebappClassLoaderInfo WebappClassLoaderInfo;
typedef struct CommonSeps CommonSeps;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "java/lang/ClassLoader.h"

typedef struct Globals Globals;
struct Globals {
    LogUtil* logUtil;
};


Globals* Globals_new(void);

Globals* Globals_getInstance(void);

void Globals_init(Globals* this);

void Globals_initMethod(Globals* this, ClassLoader* classLoader, const char* pathString);
#define Globals_new0 Globals_new
#define Globals_init0 Globals_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Globals_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Globals_register(void);


#endif // ORG_ALLBINARY_GLOBALS_GLOBALS_H
