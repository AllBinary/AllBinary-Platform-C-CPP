#ifndef ORG_ALLBINARY_GLOBALS_URLGLOBALSINTERFACE_H
#define ORG_ALLBINARY_GLOBALS_URLGLOBALSINTERFACE_H
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
typedef struct StringUtil StringUtil;

typedef struct UrlGlobalsInterface UrlGlobalsInterface;
struct UrlGlobalsInterface {
    char unused;
};


UrlGlobalsInterface* UrlGlobalsInterface_new(void);
void UrlGlobalsInterface_init(UrlGlobalsInterface* this);

const char* UrlGlobalsInterface_getMainPath(UrlGlobalsInterface* this);

const char* UrlGlobalsInterface_getTestHtmlPath(UrlGlobalsInterface* this);

const char* UrlGlobalsInterface_getWebappPath(UrlGlobalsInterface* this);

bool UrlGlobalsInterface_isTestingMode(UrlGlobalsInterface* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void UrlGlobalsInterface_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void UrlGlobalsInterface_register(void);


#endif // ORG_ALLBINARY_GLOBALS_URLGLOBALSINTERFACE_H
