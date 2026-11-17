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
// package org.allbinary.logic.control.workflow

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/DynamicObjectData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/loader/AbeFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct DbWorkFlowFactory DbWorkFlowFactory;
struct DbWorkFlowFactory {
    LogUtil* logUtil;
};

static DbWorkFlowFactory* DbWorkFlowFactory_instance;

DbWorkFlowFactory* DbWorkFlowFactory_new(void);
DbWorkFlowFactory* DbWorkFlowFactory_getInstance(void);

void DbWorkFlowFactory_init(DbWorkFlowFactory* this);
WorkFlowInterface* DbWorkFlowFactory_getInstance(DbWorkFlowFactory* this, AbeClientInformationInterface* abeClientInformation, HashMap* hashMap);

// Static fields with runtime initializers: call this once at startup
void DbWorkFlowFactory_staticInit(void) {
    DbWorkFlowFactory_instance = DbWorkFlowFactory_new();
}

static void DbWorkFlowFactory_initFields(DbWorkFlowFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


DbWorkFlowFactory* DbWorkFlowFactory_getInstance(void) {
        return DbWorkFlowFactory_instance;
}


void DbWorkFlowFactory_init(DbWorkFlowFactory* this) {
    DbWorkFlowFactory_initFields(this);
}

DbWorkFlowFactory* DbWorkFlowFactory_new(void) {
    DbWorkFlowFactory* this = calloc(1, sizeof(DbWorkFlowFactory));
    DbWorkFlowFactory_init(this);
    return this;
}


// throws Exception, LicensingException
// Java overloaded method: C needs a different name
WorkFlowInterface* DbWorkFlowFactory_getInstance(DbWorkFlowFactory* this, AbeClientInformationInterface* abeClientInformation, HashMap* hashMap) {
        JAVA_TRY {
            const char* className = ((const char*) HashMap_get(hashMap, DynamicObjectData_NAME));
            Any** params = ((Any**) java_array_new(sizeof(Any*), 1));
            const char** classes = ((const char**) java_array_new(sizeof(const char*), 1));
            classes[0] = java_class_of(hashMap);
            params[0] = ((Any*) hashMap);
            Any* anyType = AbeFactory_getInstance(AbeFactory_getInstance(), abeClientInformation, className, classes, params);
            return ((WorkFlowInterface*) WorkFlowWrapper_new(anyType));
        } JAVA_CATCH(LicensingException, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "getInstance(HashMap)", e);
            }
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "getInstance(HashMap)", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

