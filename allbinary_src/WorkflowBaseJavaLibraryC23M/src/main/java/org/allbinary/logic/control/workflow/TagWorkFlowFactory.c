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

typedef struct TagWorkFlowFactory TagWorkFlowFactory;
struct TagWorkFlowFactory {
    LogUtil* logUtil;
};

static TagWorkFlowFactory* TagWorkFlowFactory_instance;

TagWorkFlowFactory* TagWorkFlowFactory_new(void);
TagWorkFlowFactory* TagWorkFlowFactory_getInstance(void);

void TagWorkFlowFactory_init(TagWorkFlowFactory* this);
WorkFlowInterface* TagWorkFlowFactory_getInstance(TagWorkFlowFactory* this, AbeClientInformationInterface* abeClientInformation, HashMap* propertiesHashMap, PageContext* pageContext);

// Static fields with runtime initializers: call this once at startup
void TagWorkFlowFactory_staticInit(void) {
    TagWorkFlowFactory_instance = TagWorkFlowFactory_new();
}

static void TagWorkFlowFactory_initFields(TagWorkFlowFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


TagWorkFlowFactory* TagWorkFlowFactory_getInstance(void) {
        return TagWorkFlowFactory_instance;
}


void TagWorkFlowFactory_init(TagWorkFlowFactory* this) {
    TagWorkFlowFactory_initFields(this);
}

TagWorkFlowFactory* TagWorkFlowFactory_new(void) {
    TagWorkFlowFactory* this = calloc(1, sizeof(TagWorkFlowFactory));
    TagWorkFlowFactory_init(this);
    return this;
}


// throws Exception, LicensingException
// Java overloaded method: C needs a different name
WorkFlowInterface* TagWorkFlowFactory_getInstance(TagWorkFlowFactory* this, AbeClientInformationInterface* abeClientInformation, HashMap* propertiesHashMap, PageContext* pageContext) {
        JAVA_TRY {
            const char* workFlowClassName = ((const char*) HashMap_get(propertiesHashMap, DynamicObjectData_NAME));
            Any** params = ((Any**) java_array_new(sizeof(Any*), 2));
            const char** classes = ((const char**) java_array_new(sizeof(const char*), 2));
            classes[0] = java_class_of(propertiesHashMap);
            classes[1] = AbeFactory_getClass(AbeFactory_getInstance(), abeClientInformation, "javax.servlet.jsp.PageContext");
            params[0] = ((Any*) propertiesHashMap);
            params[1] = ((Any*) pageContext);
            return ((WorkFlowInterface*) AbeFactory_getInstance(AbeFactory_getInstance(), abeClientInformation, workFlowClassName, classes, params));
        } JAVA_CATCH(LicensingException, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                const char* workFlowClassName = ((const char*) HashMap_get(propertiesHashMap, DynamicObjectData_NAME));
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Failed To Get Instance: ");
                StringMaker_append(stringBuffer, workFlowClassName);
                StringMaker_append(stringBuffer, "->");
                StringMaker_append(stringBuffer, java_class_of(TagWorkFlowFactory_instance));
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, StringMaker_toString(stringBuffer), this, commonStrings->GET_INSTANCE, e);
            }
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                const char* workFlowClassName = ((const char*) HashMap_get(propertiesHashMap, DynamicObjectData_NAME));
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Failed To Get Instance: ");
                StringMaker_append(stringBuffer, workFlowClassName);
                StringMaker_append(stringBuffer, "->");
                StringMaker_append(stringBuffer, java_class_of(TagWorkFlowFactory_instance));
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, StringMaker_toString(stringBuffer), this, commonStrings->GET_INSTANCE, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

