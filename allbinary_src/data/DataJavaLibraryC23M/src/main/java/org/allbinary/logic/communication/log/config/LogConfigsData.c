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

typedef struct LogConfigsData LogConfigsData;
struct LogConfigsData {
    const char* NAME;
};

static LogConfigsData* LogConfigsData_instance;

LogConfigsData* LogConfigsData_new(void);
LogConfigsData* LogConfigsData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void LogConfigsData_staticInit(void) {
    LogConfigsData_instance = LogConfigsData_new();
}

static void LogConfigsData_initFields(LogConfigsData* this) {
    this->NAME = "LOG_CONFIGS_NAME";
}

void LogConfigsData_init(LogConfigsData* this) {
    LogConfigsData_initFields(this);
}

LogConfigsData* LogConfigsData_new(void) {
    LogConfigsData* this = calloc(1, sizeof(LogConfigsData));
    LogConfigsData_init(this);
    return this;
}


LogConfigsData* LogConfigsData_getInstance(void) {
        return LogConfigsData_instance;
}

