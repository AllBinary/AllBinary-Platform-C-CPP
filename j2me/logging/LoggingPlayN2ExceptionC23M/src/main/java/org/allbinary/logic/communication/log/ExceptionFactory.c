/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2026 AllBinary 
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
// package org.allbinary.logic.communication.log

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "jsinterop/annotations/JsType.h"

typedef struct ExceptionFactory ExceptionFactory;
struct ExceptionFactory {
    char unused;
};


ExceptionFactory* ExceptionFactory_new(void);
JavaException* ExceptionFactory_createThrowable(const char* message);

void ExceptionFactory_init(ExceptionFactory* this) {
}

ExceptionFactory* ExceptionFactory_new(void) {
    ExceptionFactory* this = calloc(1, sizeof(ExceptionFactory));
    ExceptionFactory_init(this);
    return this;
}


JavaException* ExceptionFactory_createThrowable(const char* message) {
        return java_exception_new("Throwable", message);
}

