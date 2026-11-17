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
// package org.allbinary.logic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "jsinterop/annotations/JsType.h"
#include "jsinterop/annotations/JsProperty.h"
#include "jsinterop/annotations/JsMethod.h"
#include "org/allbinary/util/ABHashMap.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/ABStack.h"
#include "org/allbinary/util/ABVector.h"

//ActualPlatform
typedef struct StdUtil StdUtil;
struct StdUtil {
    ABVector* EMPTY_VECTOR;
    ABHashtable* NULL_TABLE;
    ABHashMap* NULL_MAP;
};

static StdUtil* StdUtil_instance;

StdUtil* StdUtil_new(void);
StdUtil* StdUtil_getInstance(void);
ABStack* StdUtil_createStack(StdUtil* this);
ABVector* StdUtil_createVector(StdUtil* this);
ABHashtable* StdUtil_createHashtable(StdUtil* this);
ABHashMap* StdUtil_createHashMap(StdUtil* this);

// Static fields with runtime initializers: call this once at startup
void StdUtil_staticInit(void) {
    StdUtil_instance = StdUtil_new();
}

static void StdUtil_initFields(StdUtil* this) {
    this->EMPTY_VECTOR = StdUtil_createVector(this);
    this->NULL_TABLE = StdUtil_createHashtable(this);
    this->NULL_MAP = StdUtil_createHashMap(this);
}

void StdUtil_init(StdUtil* this) {
    StdUtil_initFields(this);
}

StdUtil* StdUtil_new(void) {
    StdUtil* this = calloc(1, sizeof(StdUtil));
    StdUtil_init(this);
    return this;
}


StdUtil* StdUtil_getInstance(void) {
        return StdUtil_instance;
}


ABStack* StdUtil_createStack(StdUtil* this) {
        return ABStack_new();
}


ABVector* StdUtil_createVector(StdUtil* this) {
        return ABVector_new();
}


ABHashtable* StdUtil_createHashtable(StdUtil* this) {
        return ABHashtable_new();
}


ABHashMap* StdUtil_createHashMap(StdUtil* this) {
        return ABHashMap_new();
}

