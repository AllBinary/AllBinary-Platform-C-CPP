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
// package org.allbinary.logic.java.anyType.clazz.loader

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ClassLoaderUtil ClassLoaderUtil;
struct ClassLoaderUtil {
    char unused;
};


ClassLoaderUtil* ClassLoaderUtil_new(void);

void ClassLoaderUtil_init(ClassLoaderUtil* this);
const char* ClassLoaderUtil_getName(Any* anyType);


void ClassLoaderUtil_init(ClassLoaderUtil* this) {
}

ClassLoaderUtil* ClassLoaderUtil_new(void) {
    ClassLoaderUtil* this = calloc(1, sizeof(ClassLoaderUtil));
    ClassLoaderUtil_init(this);
    return this;
}


// throws Exception
const char* ClassLoaderUtil_getName(Any* anyType) {
        ClassLoader* classLoader = JAVA_CALL(java_class_of(anyType), getClassLoader);
        if (classLoader != nullptr) {
            return java_concat("ClassLoader: ", java_class_of(classLoader));
        }
        java_throw(java_exception_new("Exception", "Unable to get ClassLoader"));
}

