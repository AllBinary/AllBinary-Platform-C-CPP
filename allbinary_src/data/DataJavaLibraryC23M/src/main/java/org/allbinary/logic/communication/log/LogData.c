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
// package org.allbinary.logic.communication.log

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/io/path/AbPathData.h"

typedef struct LogData LogData;
struct LogData {
    int64_t MAX;
    const char* extension;
    const char* backupFileExt;
    const char* ALLBINARY;
    const char* NAME;
    const char* DESCRIPTION;
};


LogData* LogData_new(void);

static void LogData_initFields(LogData* this) {
    this->MAX = 5000000LL;
    this->extension = "log";
    this->backupFileExt = java_concat(java_concat(java_concat(java_string_of(AbPathData_getInstance()->EXTENSION_SEP), "bak"), java_string_of(AbPathData_getInstance()->EXTENSION_SEP)), "txt");
    this->ALLBINARY = "allbinary";
    this->NAME = "LOG_NAME";
    this->DESCRIPTION = "LOG_DESCRIPTION";
}

void LogData_init(LogData* this) {
    LogData_initFields(this);
}

LogData* LogData_new(void) {
    LogData* this = calloc(1, sizeof(LogData));
    LogData_init(this);
    return this;
}

