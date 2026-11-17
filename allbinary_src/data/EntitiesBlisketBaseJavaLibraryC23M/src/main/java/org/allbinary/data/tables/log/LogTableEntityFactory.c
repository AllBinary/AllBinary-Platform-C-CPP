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
// package org.allbinary.data.tables.log

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct LogTableEntityFactory LogTableEntityFactory;
struct LogTableEntityFactory {
    LogUtil* logUtil;
};

static LogTableEntityFactory* LogTableEntityFactory_instance;

LogTableEntityFactory* LogTableEntityFactory_new(void);
LogTableEntityFactory* LogTableEntityFactory_getInstance(void);

void LogTableEntityFactory_init(LogTableEntityFactory* this);
LogTableEntity* LogTableEntityFactory_getLogTableEntityInstance(LogTableEntityFactory* this);

// Static fields with runtime initializers: call this once at startup
void LogTableEntityFactory_staticInit(void) {
    LogTableEntityFactory_instance = LogTableEntityFactory_new();
}

static void LogTableEntityFactory_initFields(LogTableEntityFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


LogTableEntityFactory* LogTableEntityFactory_getInstance(void) {
        return LogTableEntityFactory_instance;
}


void LogTableEntityFactory_init(LogTableEntityFactory* this) {
    LogTableEntityFactory_initFields(this);
}

LogTableEntityFactory* LogTableEntityFactory_new(void) {
    LogTableEntityFactory* this = calloc(1, sizeof(LogTableEntityFactory));
    LogTableEntityFactory_init(this);
    return this;
}


LogTableEntity* LogTableEntityFactory_getLogTableEntityInstance(LogTableEntityFactory* this) {
        JAVA_TRY {
            return LogTableEntity_new();
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

