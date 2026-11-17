/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.osgi.framework

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/osgi/framework/ServiceReference.h"

typedef struct BaseServiceReference BaseServiceReference;
struct BaseServiceReference {
    ServiceReference ServiceReference_interface;
};


BaseServiceReference* BaseServiceReference_new(void);
Any* BaseServiceReference_getProperty(BaseServiceReference* this, const char* key);
const char** BaseServiceReference_getPropertyKeys(BaseServiceReference* this);
int32_t BaseServiceReference_compareTo(BaseServiceReference* this, Any* o);

void BaseServiceReference_init(BaseServiceReference* this) {
}

BaseServiceReference* BaseServiceReference_new(void) {
    BaseServiceReference* this = calloc(1, sizeof(BaseServiceReference));
    BaseServiceReference_init(this);
    return this;
}


Any* BaseServiceReference_getProperty(BaseServiceReference* this, const char* key) {
        java_throw(java_exception_new("RuntimeException", ""));
}


const char** BaseServiceReference_getPropertyKeys(BaseServiceReference* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t BaseServiceReference_compareTo(BaseServiceReference* this, Any* o) {
        java_throw(java_exception_new("RuntimeException", ""));
}

