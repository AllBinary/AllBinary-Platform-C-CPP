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
// #include "java/lang/reflect/Method.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/control/workflow/WorkFlowWrapper.h"

typedef struct StoreWorkFlowWrapper StoreWorkFlowWrapper;
struct StoreWorkFlowWrapper {
    WorkFlowWrapper base;
    LogUtil* logUtil;
};


StoreWorkFlowWrapper* StoreWorkFlowWrapper_new(Any* anyType);

void StoreWorkFlowWrapper_init(StoreWorkFlowWrapper* this, Any* anyType);
const char* StoreWorkFlowWrapper_getStoreName(StoreWorkFlowWrapper* this);

static void StoreWorkFlowWrapper_initFields(StoreWorkFlowWrapper* this) {
    this->logUtil = LogUtil_getInstance();
}


void StoreWorkFlowWrapper_init(StoreWorkFlowWrapper* this, Any* anyType) {
        WorkFlowWrapper_init(&this->base, anyType);
        StoreWorkFlowWrapper_initFields(this);
}

StoreWorkFlowWrapper* StoreWorkFlowWrapper_new(Any* anyType) {
    StoreWorkFlowWrapper* this = calloc(1, sizeof(StoreWorkFlowWrapper));
    StoreWorkFlowWrapper_init(this, anyType);
    return this;
}


// throws Exception
const char* StoreWorkFlowWrapper_getStoreName(StoreWorkFlowWrapper* this) {
        JAVA_TRY {
            const char* helperClass = java_class_of(StoreWorkFlowWrapper_getWorkFlowObject(this));
            Method* method = Class_getMethod(helperClass, "getStoreName", nullptr);
            const char* result = ((const char*) Method_invoke(method, StoreWorkFlowWrapper_getWorkFlowObject(this), nullptr));
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Reflection Exception";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "getStoreName()", e);
            }
            java_throw(java_exception_new("Exception", error));
        } JAVA_END_TRY;
}

