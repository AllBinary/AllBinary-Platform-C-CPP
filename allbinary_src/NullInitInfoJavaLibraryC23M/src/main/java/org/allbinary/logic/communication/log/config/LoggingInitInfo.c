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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct LoggingInitInfo LoggingInitInfo;
struct LoggingInitInfo {
    char unused;
};

static BasicArrayList* LoggingInitInfo_logConfigInfoList = nullptr;
static bool LoggingInitInfo_hasRead = false;

LoggingInitInfo* LoggingInitInfo_new(void);

void LoggingInitInfo_init(LoggingInitInfo* this);
void LoggingInitInfo_write(void);
static void LoggingInitInfo_read(void);
void LoggingInitInfo_setHasRead(bool value);
static void LoggingInitInfo_updateIfNeeded(void);
bool LoggingInitInfo_isValid(LoggingInitInfo* this);
void LoggingInitInfo_set(BasicArrayList* logConfigInfoList);
BasicArrayList* LoggingInitInfo_get(void);
BasicArrayList* LoggingInitInfo_getTypeList(void);
int32_t LoggingInitInfo_getNumberOfLogConfigs(LoggingInitInfo* this);
const char* LoggingInitInfo_toString(LoggingInitInfo* this);


void LoggingInitInfo_init(LoggingInitInfo* this) {
}

LoggingInitInfo* LoggingInitInfo_new(void) {
    LoggingInitInfo* this = calloc(1, sizeof(LoggingInitInfo));
    LoggingInitInfo_init(this);
    return this;
}


// throws Exception
// synchronized
void LoggingInitInfo_write(void) {
        JAVA_TRY {
            LoggingInitInfo_hasRead = false;
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// synchronized
static void LoggingInitInfo_read(void) {
        JAVA_TRY {
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


// synchronized
void LoggingInitInfo_setHasRead(bool value) {
        LoggingInitInfo_hasRead = value;
}


// throws Exception
// synchronized
static void LoggingInitInfo_updateIfNeeded(void) {
        if (!LoggingInitInfo_hasRead) {
            LoggingInitInfo_read();
            LoggingInitInfo_hasRead = true;
            if (LoggingInitInfo_logConfigInfoList == nullptr) {
                java_throw(java_exception_new("Exception", "Read Failed"));
            }
        }
}


bool LoggingInitInfo_isValid(LoggingInitInfo* this) {
        JAVA_TRY {
            return true;
        } JAVA_CATCH(Exception, e) {
            return false;
        } JAVA_END_TRY;
}


// synchronized
void LoggingInitInfo_set(BasicArrayList* logConfigInfoList) {
        LoggingInitInfo_logConfigInfoList = logConfigInfoList;
}


// throws Exception
BasicArrayList* LoggingInitInfo_get(void) {
        LoggingInitInfo_updateIfNeeded();
        return LoggingInitInfo_logConfigInfoList;
}


// throws Exception
BasicArrayList* LoggingInitInfo_getTypeList(void) {
        LoggingInitInfo_updateIfNeeded();
        BasicArrayList* allLogTypeVector = BasicArrayListD_new();
        int32_t size = JAVA_CALL(LoggingInitInfo_logConfigInfoList, size);
        for (int32_t index = 0; index < size; index++) {
            LogConfig* logConfigInfo = ((LogConfig*) LoggingInitInfo_logConfigInfoList->objectArray[index]);
            BasicArrayList* logTypeVector = LogConfig_getTypeVector(logConfigInfo);
            if (LogConfig_isEnabled(logConfigInfo)) {
                BasicArrayList_addAllList(allLogTypeVector, logTypeVector);
            }
        }
        return allLogTypeVector;
}


// throws Exception
int32_t LoggingInitInfo_getNumberOfLogConfigs(LoggingInitInfo* this) {
        return JAVA_CALL(LoggingInitInfo_logConfigInfoList, size);
}


const char* LoggingInitInfo_toString(LoggingInitInfo* this) {
        JAVA_TRY {
            return nullptr;
        } JAVA_CATCH(Exception, e) {
            return "Error";
        } JAVA_END_TRY;
}

