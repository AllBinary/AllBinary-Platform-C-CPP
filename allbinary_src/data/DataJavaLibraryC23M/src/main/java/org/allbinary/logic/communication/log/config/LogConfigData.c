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
// package org.allbinary.logic.communication.log.config

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct LogConfigData LogConfigData;
struct LogConfigData {
    const char* NAME;
    const char* DESCRIPTION;
    const char* FILE;
};

static LogConfigData* LogConfigData_instance;

LogConfigData* LogConfigData_new(void);
LogConfigData* LogConfigData_getInstance(void);

void LogConfigData_init(LogConfigData* this);

// Static fields with runtime initializers: call this once at startup
void LogConfigData_staticInit(void) {
    LogConfigData_instance = LogConfigData_new();
}

static void LogConfigData_initFields(LogConfigData* this) {
    this->NAME = "LOG_CONFIG_NAME";
    this->DESCRIPTION = "LOG_CONFIG_DESCRIPTION";
    this->FILE = "LOG_CONFIG_FILE";
}


LogConfigData* LogConfigData_getInstance(void) {
        return LogConfigData_instance;
}


void LogConfigData_init(LogConfigData* this) {
    LogConfigData_initFields(this);
}

LogConfigData* LogConfigData_new(void) {
    LogConfigData* this = calloc(1, sizeof(LogConfigData));
    LogConfigData_init(this);
    return this;
}

