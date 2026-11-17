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
// package org.allbinary.data.tables.workflow

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

typedef struct WorkFlowEntityFactory WorkFlowEntityFactory;
struct WorkFlowEntityFactory {
    LogUtil* logUtil;
};

static WorkFlowEntityFactory* WorkFlowEntityFactory_instance;

WorkFlowEntityFactory* WorkFlowEntityFactory_new(void);
WorkFlowEntityFactory* WorkFlowEntityFactory_getInstance(void);

void WorkFlowEntityFactory_init(WorkFlowEntityFactory* this);
WorkFlowEntity* WorkFlowEntityFactory_create2(WorkFlowEntityFactory* this);

// Static fields with runtime initializers: call this once at startup
void WorkFlowEntityFactory_staticInit(void) {
    WorkFlowEntityFactory_instance = WorkFlowEntityFactory_new();
}

static void WorkFlowEntityFactory_initFields(WorkFlowEntityFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


WorkFlowEntityFactory* WorkFlowEntityFactory_getInstance(void) {
        return WorkFlowEntityFactory_instance;
}


void WorkFlowEntityFactory_init(WorkFlowEntityFactory* this) {
    WorkFlowEntityFactory_initFields(this);
}

WorkFlowEntityFactory* WorkFlowEntityFactory_new(void) {
    WorkFlowEntityFactory* this = calloc(1, sizeof(WorkFlowEntityFactory));
    WorkFlowEntityFactory_init(this);
    return this;
}


WorkFlowEntity* WorkFlowEntityFactory_create2(WorkFlowEntityFactory* this) {
        JAVA_TRY {
            return WorkFlowEntity_new();
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

