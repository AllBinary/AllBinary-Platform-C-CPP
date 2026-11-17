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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/loader/AbeFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct StoreTagWorkFlowFactory StoreTagWorkFlowFactory;
struct StoreTagWorkFlowFactory {
    LogUtil* logUtil;
};

static StoreTagWorkFlowFactory* StoreTagWorkFlowFactory_instance;

StoreTagWorkFlowFactory* StoreTagWorkFlowFactory_new(void);
StoreTagWorkFlowFactory* StoreTagWorkFlowFactory_getInstance(void);

void StoreTagWorkFlowFactory_init(StoreTagWorkFlowFactory* this);
StoreWorkFlowInterface* StoreTagWorkFlowFactory_getInstance(StoreTagWorkFlowFactory* this, AbeClientInformationInterface* abeClientInformation, HashMap* propertiesHashMap, PageContext* pageContext);

// Static fields with runtime initializers: call this once at startup
void StoreTagWorkFlowFactory_staticInit(void) {
    StoreTagWorkFlowFactory_instance = StoreTagWorkFlowFactory_new();
}

static void StoreTagWorkFlowFactory_initFields(StoreTagWorkFlowFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


StoreTagWorkFlowFactory* StoreTagWorkFlowFactory_getInstance(void) {
        return StoreTagWorkFlowFactory_instance;
}


void StoreTagWorkFlowFactory_init(StoreTagWorkFlowFactory* this) {
    StoreTagWorkFlowFactory_initFields(this);
}

StoreTagWorkFlowFactory* StoreTagWorkFlowFactory_new(void) {
    StoreTagWorkFlowFactory* this = calloc(1, sizeof(StoreTagWorkFlowFactory));
    StoreTagWorkFlowFactory_init(this);
    return this;
}


// throws Exception, LicensingException
// Java overloaded method: C needs a different name
StoreWorkFlowInterface* StoreTagWorkFlowFactory_getInstance(StoreTagWorkFlowFactory* this, AbeClientInformationInterface* abeClientInformation, HashMap* propertiesHashMap, PageContext* pageContext) {
        JAVA_TRY {
            const char* workFlowClassName = ((const char*) HashMap_get(propertiesHashMap, DynamicObjectData_NAME));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Creating WorkFlow: ");
                StringMaker_append(stringBuffer, workFlowClassName);
                StringMaker_append(stringBuffer, "->");
                StringMaker_append(stringBuffer, java_class_of(StoreTagWorkFlowFactory_instance));
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, commonStrings->GET_INSTANCE);
            }
            Any** params = ((Any**) java_array_new(sizeof(Any*), 2));
            const char** classes = ((const char**) java_array_new(sizeof(const char*), 2));
            classes[0] = java_class_of(propertiesHashMap);
            classes[1] = AbeFactory_getClass(AbeFactory_getInstance(), abeClientInformation, "javax.servlet.jsp.PageContext");
            params[0] = ((Any*) propertiesHashMap);
            params[1] = ((Any*) pageContext);
            return ((StoreWorkFlowInterface*) AbeFactory_getInstance(AbeFactory_getInstance(), abeClientInformation, workFlowClassName, classes, params));
        } JAVA_CATCH(LicensingException, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                const char* workFlowClassName = ((const char*) HashMap_get(propertiesHashMap, DynamicObjectData_NAME));
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Error Creating WorkFlow: ");
                StringMaker_append(stringBuffer, workFlowClassName);
                StringMaker_append(stringBuffer, "->");
                StringMaker_append(stringBuffer, java_class_of(StoreTagWorkFlowFactory_instance));
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, StringMaker_toString(stringBuffer), this, commonStrings->GET_INSTANCE, e);
            }
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                const char* workFlowClassName = ((const char*) HashMap_get(propertiesHashMap, DynamicObjectData_NAME));
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Error Creating WorkFlow: ");
                StringMaker_append(stringBuffer, workFlowClassName);
                StringMaker_append(stringBuffer, "->");
                StringMaker_append(stringBuffer, java_class_of(StoreTagWorkFlowFactory_instance));
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, StringMaker_toString(stringBuffer), this, commonStrings->GET_INSTANCE, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

