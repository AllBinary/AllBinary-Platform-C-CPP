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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"

typedef struct LogBuffer LogBuffer;
struct LogBuffer {
    LogUtil* logUtil;
    BasicArrayList* logEntryVector;
};


LogBuffer* LogBuffer_new(void);

void LogBuffer_init(LogBuffer* this);
void LogBuffer_add(LogBuffer* this, Log* log);
void LogBuffer_logAll(LogBuffer* this);

static void LogBuffer_initFields(LogBuffer* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void LogBuffer_init(LogBuffer* this) {
    LogBuffer_initFields(this);
        this->logEntryVector = BasicArrayListD_new();
}

LogBuffer* LogBuffer_new(void) {
    LogBuffer* this = calloc(1, sizeof(LogBuffer));
    LogBuffer_init(this);
    return this;
}


void LogBuffer_add(LogBuffer* this, Log* log) {
        BasicArrayList_add(this->logEntryVector, log);
}


void LogBuffer_logAll(LogBuffer* this) {
        int32_t size = BasicArrayList_size(this->logEntryVector);
        for (int32_t index = 0; index < size; index++) {
            Log* log = ((Log*) BasicArrayList_get(this->logEntryVector, index));
            LogUtil_putL(this->logUtil, log);
        }
}

