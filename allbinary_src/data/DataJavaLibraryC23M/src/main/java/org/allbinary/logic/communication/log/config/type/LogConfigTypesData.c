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

typedef struct LogConfigTypesData LogConfigTypesData;
struct LogConfigTypesData {
    const char* NAME;
    const char* DESCRIPTION;
};

static LogConfigTypesData* LogConfigTypesData_instance;

LogConfigTypesData* LogConfigTypesData_new(void);
LogConfigTypesData* LogConfigTypesData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void LogConfigTypesData_staticInit(void) {
    LogConfigTypesData_instance = LogConfigTypesData_new();
}

static void LogConfigTypesData_initFields(LogConfigTypesData* this) {
    this->NAME = "LOG_CONFIG_TYPES_NAME";
    this->DESCRIPTION = "LOG_CONFIG_TYPES_DESCRIPTION";
}

void LogConfigTypesData_init(LogConfigTypesData* this) {
    LogConfigTypesData_initFields(this);
}

LogConfigTypesData* LogConfigTypesData_new(void) {
    LogConfigTypesData* this = calloc(1, sizeof(LogConfigTypesData));
    LogConfigTypesData_init(this);
    return this;
}


LogConfigTypesData* LogConfigTypesData_getInstance(void) {
        return LogConfigTypesData_instance;
}

