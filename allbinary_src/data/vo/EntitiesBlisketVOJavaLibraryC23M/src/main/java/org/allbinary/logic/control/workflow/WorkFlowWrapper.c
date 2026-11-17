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
#include "org/allbinary/logic/control/workflow/WorkFlowInterface.h"

typedef struct WorkFlowWrapper WorkFlowWrapper;
struct WorkFlowWrapper {
    WorkFlowInterface WorkFlowInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    Any* anyType;
};


WorkFlowWrapper* WorkFlowWrapper_new(Any* anyType);

void WorkFlowWrapper_init(WorkFlowWrapper* this, Any* anyType);
Any* WorkFlowWrapper_getWorkFlowObject(WorkFlowWrapper* this);
const char* WorkFlowWrapper_getName(WorkFlowWrapper* this);
const char* WorkFlowWrapper_getStoreName(WorkFlowWrapper* this);
int32_t WorkFlowWrapper_process(WorkFlowWrapper* this);

static void WorkFlowWrapper_initFields(WorkFlowWrapper* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
}


void WorkFlowWrapper_init(WorkFlowWrapper* this, Any* anyType) {
    WorkFlowWrapper_initFields(this);
        this->anyType = anyType;
}

WorkFlowWrapper* WorkFlowWrapper_new(Any* anyType) {
    WorkFlowWrapper* this = calloc(1, sizeof(WorkFlowWrapper));
    WorkFlowWrapper_init(this, anyType);
    return this;
}


Any* WorkFlowWrapper_getWorkFlowObject(WorkFlowWrapper* this) {
        return this->anyType;
}


// throws Exception
const char* WorkFlowWrapper_getName(WorkFlowWrapper* this) {
        JAVA_TRY {
            const char* helperClass = java_class_of(this->anyType);
            Method* method = Class_getMethod(helperClass, "getName", nullptr);
            const char* result = ((const char*) Method_invoke(method, this->anyType, nullptr));
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Reflection Exception";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getName()", e);
            }
            java_throw(java_exception_new("Exception", error));
        } JAVA_END_TRY;
}


// throws Exception
const char* WorkFlowWrapper_getStoreName(WorkFlowWrapper* this) {
        JAVA_TRY {
            const char* helperClass = java_class_of(this->anyType);
            Method* method = Class_getMethod(helperClass, "getStoreName", nullptr);
            const char* result = ((const char*) Method_invoke(method, this->anyType, nullptr));
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Reflection Exception";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getStoreName()", e);
            }
            java_throw(java_exception_new("Exception", error));
        } JAVA_END_TRY;
}


// throws Exception
int32_t WorkFlowWrapper_process(WorkFlowWrapper* this) {
        JAVA_TRY {
            const char* helperClass = java_class_of(this->anyType);
            Method* method = Class_getMethod(helperClass, this->commonStrings->PROCESS, nullptr);
            int32_t result = ((int32_t) Method_invoke(method, this->anyType, nullptr));
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Reflection Exception";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, e);
            }
            java_throw(java_exception_new("Exception", error));
        } JAVA_END_TRY;
}

