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
// package org.allbinary

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Displayable.h"
// #include "javax/microedition/lcdui/Form.h"
// #include "javax/microedition/rms/InvalidRecordIDException.h"
// #include "javax/microedition/rms/RecordStore.h"
// #include "javax/microedition/rms/RecordStoreException.h"
// #include "javax/microedition/rms/RecordStoreNotOpenException.h"
#include "org/allbinary/logic/NullUtil.h"

//J2SE
typedef struct TsUtil TsUtil;
struct TsUtil {
    char unused;
};

static TsUtil* TsUtil_instance;

TsUtil* TsUtil_new(void);
TsUtil* TsUtil_getInstance(void);
double TsUtil_longBitsToDouble(TsUtil* this, int64_t bits);
float TsUtil_intBitsToFloat(TsUtil* this, int32_t bits);
int32_t TsUtil_hashCode(TsUtil* this, Any* anyType);
void TsUtil_waitFor(TsUtil* this, Any* any, int64_t timeoutMillis);
int8_t* TsUtil_getRecord(TsUtil* this, Any* anyType, int32_t recordId);
int32_t TsUtil_compareTo(TsUtil* this, const char* a, const char* b);
bool TsUtil_equalIgnoreCase(TsUtil* this, const char* a, const char* b);
bool TsUtil_equalsNotstring(TsUtil* this, Any* anyType, Any* object2);
ClassLoader* TsUtil_getClassClassLoader(TsUtil* this, Any* anyType);
int32_t TsUtil_toNumberFromChar(TsUtil* this, uint16_t value);
int32_t TsUtil_toNumber(TsUtil* this, int32_t value);
int8_t* TsUtil_getByteArray(TsUtil* this, const char* string);
bool TsUtil_isItemListener(TsUtil* this, Displayable* owner);
void TsUtil_gc(TsUtil* this);

// Static fields with runtime initializers: call this once at startup
void TsUtil_staticInit(void) {
    TsUtil_instance = TsUtil_new();
}

void TsUtil_init(TsUtil* this) {
}

TsUtil* TsUtil_new(void) {
    TsUtil* this = calloc(1, sizeof(TsUtil));
    TsUtil_init(this);
    return this;
}


TsUtil* TsUtil_getInstance(void) {
        return TsUtil_instance;
}


double TsUtil_longBitsToDouble(TsUtil* this, int64_t bits) {
        return JAVA_CALL(java_lang->Double, longBitsToDouble, bits);
}


float TsUtil_intBitsToFloat(TsUtil* this, int32_t bits) {
        return JAVA_CALL(java_lang->Float, intBitsToFloat, bits);
}


int32_t TsUtil_hashCode(TsUtil* this, Any* anyType) {
        return Any_hashCode(anyType);
}


// throws InterruptedException
void TsUtil_waitFor(TsUtil* this, Any* any, int64_t timeoutMillis) {
        Any* anyType = ((Any*) any);
        Any_wait(anyType, timeoutMillis);
}


// throws RecordStoreNotOpenException, InvalidRecordIDException, RecordStoreException
int8_t* TsUtil_getRecord(TsUtil* this, Any* anyType, int32_t recordId) {
        RecordStore* recordStore = ((RecordStore*) anyType);
        int8_t* data = nullptr;
        java_monitor_enter(this);
        {
            data = ((int8_t*) java_array_new(sizeof(int8_t), RecordStore_getRecordSize(recordStore, recordId)));
            RecordStore_getRecord(recordStore, recordId, data, 0);
        }
        java_monitor_exit(this);
        return (java_array_length(data) < 1 ? NullUtil_getInstance()->NULL_BYTE_ARRAY : data);
}


int32_t TsUtil_compareTo(TsUtil* this, const char* a, const char* b) {
        return strcmp(a, b);
}


bool TsUtil_equalIgnoreCase(TsUtil* this, const char* a, const char* b) {
        return (strcasecmp(a, b) == 0);
}


bool TsUtil_equalsNotstring(TsUtil* this, Any* anyType, Any* object2) {
        return Any_equals(anyType, object2);
}


ClassLoader* TsUtil_getClassClassLoader(TsUtil* this, Any* anyType) {
        return JAVA_CALL(java_class_of(anyType), getClassLoader);
}


int32_t TsUtil_toNumberFromChar(TsUtil* this, uint16_t value) {
        return ((int32_t) value);
}


int32_t TsUtil_toNumber(TsUtil* this, int32_t value) {
        return value;
}


int8_t* TsUtil_getByteArray(TsUtil* this, const char* string) {
        return java_string_getBytes(string);
}


bool TsUtil_isItemListener(TsUtil* this, Displayable* owner) {
        if (java_instanceof(owner, "Form")) {
            return true;
        } else {
            return false;
        }
}


void TsUtil_gc(TsUtil* this) {
        ((void) 0);
}

