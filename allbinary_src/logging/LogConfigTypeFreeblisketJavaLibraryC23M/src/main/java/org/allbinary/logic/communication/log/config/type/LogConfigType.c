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
// package org.allbinary.logic.communication.log.config.type

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct LogConfigType LogConfigType;
struct LogConfigType {
    LogUtil* logUtil;
    const char* name;
    const char* description;
};

BasicArrayList* LogConfigType_availableLogConfigTypes;

LogConfigType* LogConfigType_new(const char* name, const char* description);

void LogConfigType_init(LogConfigType* this, const char* name, const char* description);
const char* LogConfigType_getName(LogConfigType* this);
const char* LogConfigType_getDescription(LogConfigType* this);
void LogConfigType_setName(LogConfigType* this, const char* value);
void LogConfigType_setDescription(LogConfigType* this, const char* value);

// Static fields with runtime initializers: call this once at startup
void LogConfigType_staticInit(void) {
    LogConfigType_availableLogConfigTypes = BasicArrayListD_new();
}

static void LogConfigType_initFields(LogConfigType* this) {
    this->logUtil = LogUtil_getInstance();
    
    
}


void LogConfigType_init(LogConfigType* this, const char* name, const char* description) {
    LogConfigType_initFields(this);
        this->name = name;
        this->description = description;
        JAVA_CALL(LogConfigType_availableLogConfigTypes, add, this);
}

LogConfigType* LogConfigType_new(const char* name, const char* description) {
    LogConfigType* this = calloc(1, sizeof(LogConfigType));
    LogConfigType_init(this, name, description);
    return this;
}


const char* LogConfigType_getName(LogConfigType* this) {
        return this->name;
}


const char* LogConfigType_getDescription(LogConfigType* this) {
        return this->description;
}


void LogConfigType_setName(LogConfigType* this, const char* value) {
        this->name = value;
}


void LogConfigType_setDescription(LogConfigType* this, const char* value) {
        this->description = value;
}

