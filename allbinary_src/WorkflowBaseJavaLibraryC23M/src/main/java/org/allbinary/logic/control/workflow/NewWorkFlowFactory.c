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
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/DynamicObjectData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/loader/AbeFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct NewWorkFlowFactory NewWorkFlowFactory;
struct NewWorkFlowFactory {
    LogUtil* logUtil;
};

static NewWorkFlowFactory* NewWorkFlowFactory_instance;

NewWorkFlowFactory* NewWorkFlowFactory_new(void);
NewWorkFlowFactory* NewWorkFlowFactory_getInstance(void);

void NewWorkFlowFactory_init(NewWorkFlowFactory* this);
WorkFlowInterface* NewWorkFlowFactory_getInstance(NewWorkFlowFactory* this, AbeClientInformationInterface* abeClientInformation, HashMap* hashMap, PageContext* pageContext);
WorkFlowInterface* NewWorkFlowFactory_getInstance(NewWorkFlowFactory* this, AbeClientInformationInterface* abeClientInformation, const char* className);

// Static fields with runtime initializers: call this once at startup
void NewWorkFlowFactory_staticInit(void) {
    NewWorkFlowFactory_instance = NewWorkFlowFactory_new();
}

static void NewWorkFlowFactory_initFields(NewWorkFlowFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


NewWorkFlowFactory* NewWorkFlowFactory_getInstance(void) {
        return NewWorkFlowFactory_instance;
}


void NewWorkFlowFactory_init(NewWorkFlowFactory* this) {
    NewWorkFlowFactory_initFields(this);
}

NewWorkFlowFactory* NewWorkFlowFactory_new(void) {
    NewWorkFlowFactory* this = calloc(1, sizeof(NewWorkFlowFactory));
    NewWorkFlowFactory_init(this);
    return this;
}


// throws Exception, LicensingException
// Java overloaded method: C needs a different name
WorkFlowInterface* NewWorkFlowFactory_getInstance(NewWorkFlowFactory* this, AbeClientInformationInterface* abeClientInformation, HashMap* hashMap, PageContext* pageContext) {
        JAVA_TRY {
            const char* className = ((const char*) HashMap_get(hashMap, DynamicObjectData_NAME));
            Any** params = ((Any**) java_array_new(sizeof(Any*), 2));
            const char** classes = ((const char**) java_array_new(sizeof(const char*), 2));
            classes[0] = java_class_of(hashMap);
            classes[1] = AbeFactory_getClass(AbeFactory_getInstance(), abeClientInformation, "javax.servlet.jsp.PageContext");
            params[0] = ((Any*) hashMap);
            params[1] = ((Any*) pageContext);
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


// throws Exception, LicensingException
// Java overloaded method: C needs a different name
WorkFlowInterface* NewWorkFlowFactory_getInstance(NewWorkFlowFactory* this, AbeClientInformationInterface* abeClientInformation, const char* className) {
        JAVA_TRY {
            StringUtil* stringUtil = StringUtil_getInstance();
            if (className != nullptr && strcmp(className, stringUtil->EMPTY_STRING) != 0) {
                Any* anyType = AbeFactory_getInstance(AbeFactory_getInstance(), abeClientInformation, className, nullptr, nullptr);
                return ((WorkFlowInterface*) WorkFlowWrapper_new(anyType));
            } else {
                java_throw(java_exception_new("Exception", "No WorkFlow ClassName"));
            }
        } JAVA_CATCH(LicensingException, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

