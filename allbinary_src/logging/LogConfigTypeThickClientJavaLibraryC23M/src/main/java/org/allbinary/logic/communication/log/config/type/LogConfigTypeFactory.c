/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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

typedef struct LogConfigTypeFactory LogConfigTypeFactory;
struct LogConfigTypeFactory {
    const char* NO_DESCRIPTION;
    LogConfigType* OS;
    LogConfigType* FACTORYERROR;
    LogConfigType* FILE;
    LogConfigType* FILEERROR;
    LogConfigType* IDLOGGING;
    LogConfigType* REPLACE;
    LogConfigType* REPLACE_INFO;
    LogConfigType* REPLACEERROR;
};

static LogConfigTypeFactory* LogConfigTypeFactory_instance;

LogConfigTypeFactory* LogConfigTypeFactory_new(void);
LogConfigTypeFactory* LogConfigTypeFactory_getInstance(void);

void LogConfigTypeFactory_init(LogConfigTypeFactory* this);

// Static fields with runtime initializers: call this once at startup
void LogConfigTypeFactory_staticInit(void) {
    LogConfigTypeFactory_instance = LogConfigTypeFactory_new();
}

static void LogConfigTypeFactory_initFields(LogConfigTypeFactory* this) {
    this->NO_DESCRIPTION = "No Description";
    this->OS = LogConfigType_new("Operating System", this->NO_DESCRIPTION);
    this->FACTORYERROR = LogConfigType_new("Factory Error", this->NO_DESCRIPTION);
    this->FILE = LogConfigType_new("File", this->NO_DESCRIPTION);
    this->FILEERROR = LogConfigType_new("File Error", this->NO_DESCRIPTION);
    this->IDLOGGING = LogConfigType_new("ID Logging", this->NO_DESCRIPTION);
    this->REPLACE = LogConfigType_new("Replace", this->NO_DESCRIPTION);
    this->REPLACE_INFO = LogConfigType_new("Replace Info", this->NO_DESCRIPTION);
    this->REPLACEERROR = LogConfigType_new("Replace Error", this->NO_DESCRIPTION);
}


LogConfigTypeFactory* LogConfigTypeFactory_getInstance(void) {
        return LogConfigTypeFactory_instance;
}


void LogConfigTypeFactory_init(LogConfigTypeFactory* this) {
    LogConfigTypeFactory_initFields(this);
        JAVA_CALL(LogConfigTypes_LOGGING, add, this->OS);
        JAVA_CALL(LogConfigTypes_LOGGING, add, this->FACTORYERROR);
}

LogConfigTypeFactory* LogConfigTypeFactory_new(void) {
    LogConfigTypeFactory* this = calloc(1, sizeof(LogConfigTypeFactory));
    LogConfigTypeFactory_init(this);
    return this;
}

