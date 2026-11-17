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

//ActualPlatform
typedef struct ExceptionUtil ExceptionUtil;
struct ExceptionUtil {
    JavaException* PRETEND_EXCEPTION;
    const char* NONE;
};

static JavaException* ExceptionUtil_instance;

ExceptionUtil* ExceptionUtil_new(void);
JavaException* ExceptionUtil_getInstance(void);

void ExceptionUtil_init(ExceptionUtil* this);
const char* ExceptionUtil_getStackTrace(ExceptionUtil* this, JavaException* e);

// Static fields with runtime initializers: call this once at startup
void ExceptionUtil_staticInit(void) {
    ExceptionUtil_instance = java_exception_new("ExceptionUtil", "");
}

static void ExceptionUtil_initFields(ExceptionUtil* this) {
    this->PRETEND_EXCEPTION = java_exception_new("Exception", "Not Really An Exception");
    this->NONE = "No Stack Trace";
}


JavaException* ExceptionUtil_getInstance(void) {
        return ExceptionUtil_instance;
}


void ExceptionUtil_init(ExceptionUtil* this) {
    ExceptionUtil_initFields(this);
}

ExceptionUtil* ExceptionUtil_new(void) {
    ExceptionUtil* this = calloc(1, sizeof(ExceptionUtil));
    ExceptionUtil_init(this);
    return this;
}


const char* ExceptionUtil_getStackTrace(ExceptionUtil* this, JavaException* e) {
        if (true) {
        }
        if (true) {
        }
        if (true) {
        }
        if (true) {
        }
        return this->NONE;
}

