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
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct NullServiceReference NullServiceReference;
struct NullServiceReference {
    char unused;
};


NullServiceReference* NullServiceReference_new(void);
Any* NullServiceReference_getProperty(NullServiceReference* this, const char* key);
const char** NullServiceReference_getPropertyKeys(NullServiceReference* this);
int32_t NullServiceReference_compareTo(NullServiceReference* this, Any* o);

void NullServiceReference_init(NullServiceReference* this) {
}

NullServiceReference* NullServiceReference_new(void) {
    NullServiceReference* this = calloc(1, sizeof(NullServiceReference));
    NullServiceReference_init(this);
    return this;
}


Any* NullServiceReference_getProperty(NullServiceReference* this, const char* key) {
        return NullUtil_getInstance()->NULL_OBJECT;
}


const char** NullServiceReference_getPropertyKeys(NullServiceReference* this) {
        return StringUtil_getArrayInstance(StringUtil_getInstance());
}


int32_t NullServiceReference_compareTo(NullServiceReference* this, Any* o) {
        java_throw(java_exception_new("RuntimeException", ""));
}

