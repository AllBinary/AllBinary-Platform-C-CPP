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

typedef struct NullServiceReferenceFactory NullServiceReferenceFactory;
struct NullServiceReferenceFactory {
    NullServiceReference* NULL_SERVICE_REFERENCE;
};

static NullServiceReferenceFactory* NullServiceReferenceFactory_instance;

NullServiceReferenceFactory* NullServiceReferenceFactory_new(void);
NullServiceReferenceFactory* NullServiceReferenceFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void NullServiceReferenceFactory_staticInit(void) {
    NullServiceReferenceFactory_instance = NullServiceReferenceFactory_new();
}

static void NullServiceReferenceFactory_initFields(NullServiceReferenceFactory* this) {
    this->NULL_SERVICE_REFERENCE = NullServiceReference_new();
}

void NullServiceReferenceFactory_init(NullServiceReferenceFactory* this) {
    NullServiceReferenceFactory_initFields(this);
}

NullServiceReferenceFactory* NullServiceReferenceFactory_new(void) {
    NullServiceReferenceFactory* this = calloc(1, sizeof(NullServiceReferenceFactory));
    NullServiceReferenceFactory_init(this);
    return this;
}


NullServiceReferenceFactory* NullServiceReferenceFactory_getInstance(void) {
        return NullServiceReferenceFactory_instance;
}

