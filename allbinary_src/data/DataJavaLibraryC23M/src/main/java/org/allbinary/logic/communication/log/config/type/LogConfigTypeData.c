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

typedef struct LogConfigTypeData LogConfigTypeData;
struct LogConfigTypeData {
    const char* NAME;
    const char* DESCRIPTION;
};

static LogConfigTypeData* LogConfigTypeData_instance;

LogConfigTypeData* LogConfigTypeData_new(void);
LogConfigTypeData* LogConfigTypeData_getInstance(void);

void LogConfigTypeData_init(LogConfigTypeData* this);

// Static fields with runtime initializers: call this once at startup
void LogConfigTypeData_staticInit(void) {
    LogConfigTypeData_instance = LogConfigTypeData_new();
}

static void LogConfigTypeData_initFields(LogConfigTypeData* this) {
    this->NAME = "LOG_CONFIG_TYPE_NAME";
    this->DESCRIPTION = "LOG_CONFIG_TYPE_DESCRIPTION";
}


LogConfigTypeData* LogConfigTypeData_getInstance(void) {
        return LogConfigTypeData_instance;
}


void LogConfigTypeData_init(LogConfigTypeData* this) {
    LogConfigTypeData_initFields(this);
}

LogConfigTypeData* LogConfigTypeData_new(void) {
    LogConfigTypeData* this = calloc(1, sizeof(LogConfigTypeData));
    LogConfigTypeData_init(this);
    return this;
}

