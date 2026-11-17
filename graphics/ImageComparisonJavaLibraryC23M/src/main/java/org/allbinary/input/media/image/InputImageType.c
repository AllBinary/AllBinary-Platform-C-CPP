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
// package org.allbinary.input.media.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"

typedef struct InputImageType InputImageType;
struct InputImageType {
    const char* name;
    int32_t index;
};

static HashMap* InputImageType_hashMap;
static BasicArrayList* InputImageType_TYPE_VECTOR;
InputImageType* InputImageType_CAPTURE;
InputImageType* InputImageType_COMPARISON;
InputImageType* InputImageType_MOTION;

InputImageType* InputImageType_new(const char* name, int32_t index);

void InputImageType_init(InputImageType* this, const char* name, int32_t index);
const char* InputImageType_toString(InputImageType* this);
const char* InputImageType_getName(InputImageType* this);
InputImageType* InputImageType_getInstance(const char* imageTypeString);
BasicArrayList* InputImageType_getAllAsVector(void);
int32_t InputImageType_getIndex(InputImageType* this);

// Static fields with runtime initializers: call this once at startup
void InputImageType_staticInit(void) {
    InputImageType_hashMap = StdUtil_createHashMap(StdUtil_getInstance());
    InputImageType_TYPE_VECTOR = BasicArrayListD_new();
    InputImageType_CAPTURE = InputImageType_new("Capture", 0);
    InputImageType_COMPARISON = InputImageType_new("Comparison", 1);
    InputImageType_MOTION = InputImageType_new("Motion", 2);
}

static void InputImageType_initFields(InputImageType* this) {
    
    
}


void InputImageType_init(InputImageType* this, const char* name, int32_t index) {
    InputImageType_initFields(this);
        this->name = name;
        this->index = index;
        JAVA_CALL(InputImageType_TYPE_VECTOR, add, this);
        JAVA_CALL(InputImageType_hashMap, put, InputImageType_getName(this), this);
}

InputImageType* InputImageType_new(const char* name, int32_t index) {
    InputImageType* this = calloc(1, sizeof(InputImageType));
    InputImageType_init(this, name, index);
    return this;
}


const char* InputImageType_toString(InputImageType* this) {
        return java_concat("ImageType: ", InputImageType_getName(this));
}


const char* InputImageType_getName(InputImageType* this) {
        return this->name;
}


InputImageType* InputImageType_getInstance(const char* imageTypeString) {
        return ((InputImageType*) JAVA_CALL(InputImageType_hashMap, get, imageTypeString));
}


BasicArrayList* InputImageType_getAllAsVector(void) {
        return InputImageType_TYPE_VECTOR;
}


int32_t InputImageType_getIndex(InputImageType* this) {
        return this->index;
}

