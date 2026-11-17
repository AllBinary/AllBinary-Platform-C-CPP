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
// package org.allbinary.logic.communication.http

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/StdUtil.h"

typedef struct AcceptableResponseUtil AcceptableResponseUtil;
struct AcceptableResponseUtil {
    BasicArrayList* candidateVector;
    BasicArrayList* tagNameVector;
};

static AcceptableResponseUtil* AcceptableResponseUtil_instance;

AcceptableResponseUtil* AcceptableResponseUtil_new(void);
AcceptableResponseUtil* AcceptableResponseUtil_getInstance(void);
const char* AcceptableResponseUtil_get(AcceptableResponseUtil* this, int32_t index);
const char* AcceptableResponseUtil_getTagName(AcceptableResponseUtil* this, int32_t index);
int32_t AcceptableResponseUtil_size(AcceptableResponseUtil* this);

// Static fields with runtime initializers: call this once at startup
void AcceptableResponseUtil_staticInit(void) {
    AcceptableResponseUtil_instance = AcceptableResponseUtil_new();
}

static void AcceptableResponseUtil_initFields(AcceptableResponseUtil* this) {
    this->candidateVector = BasicArrayListD_new();
    this->tagNameVector = BasicArrayListD_new();
}

void AcceptableResponseUtil_init(AcceptableResponseUtil* this) {
    AcceptableResponseUtil_initFields(this);
}

AcceptableResponseUtil* AcceptableResponseUtil_new(void) {
    AcceptableResponseUtil* this = calloc(1, sizeof(AcceptableResponseUtil));
    AcceptableResponseUtil_init(this);
    return this;
}


AcceptableResponseUtil* AcceptableResponseUtil_getInstance(void) {
        return AcceptableResponseUtil_instance;
}


// Java static initializer: call this once at startup
void AcceptableResponseUtil_staticInitializer(void) {
        TsUtil_hashCode(TsUtil_getInstance(), AcceptableResponseFactory_getInstance()->HTML);
}


const char* AcceptableResponseUtil_get(AcceptableResponseUtil* this, int32_t index) {
        return ((const char*) BasicArrayList_get(this->candidateVector, index));
}


const char* AcceptableResponseUtil_getTagName(AcceptableResponseUtil* this, int32_t index) {
        return ((const char*) BasicArrayList_get(this->tagNameVector, index));
}


int32_t AcceptableResponseUtil_size(AcceptableResponseUtil* this) {
        return BasicArrayList_size(this->candidateVector);
}

