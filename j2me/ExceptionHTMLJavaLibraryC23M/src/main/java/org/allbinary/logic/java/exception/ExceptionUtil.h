#ifndef ORG_ALLBINARY_LOGIC_JAVA_EXCEPTION_EXCEPTIONUTIL_H
#define ORG_ALLBINARY_LOGIC_JAVA_EXCEPTION_EXCEPTIONUTIL_H
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
// package org.allbinary.logic.java.exception

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "jsinterop/annotations/JsType.h"

//ActualPlatform
typedef struct ExceptionUtil ExceptionUtil;
struct ExceptionUtil {
    const char* NONE;
};

extern JavaException* ExceptionUtil_PRETEND_EXCEPTION;

ExceptionUtil* ExceptionUtil_new(void);

ExceptionUtil* ExceptionUtil_getInstance(void);

void ExceptionUtil_init(ExceptionUtil* this);

const char* ExceptionUtil_getStackTrace(ExceptionUtil* this, JavaException* e);
#define ExceptionUtil_new0 ExceptionUtil_new
#define ExceptionUtil_init0 ExceptionUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ExceptionUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ExceptionUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_JAVA_EXCEPTION_EXCEPTIONUTIL_H
