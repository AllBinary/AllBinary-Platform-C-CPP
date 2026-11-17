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
// package admin.taghelpers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/loader/AbeFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct HelperFactory HelperFactory;
struct HelperFactory {
    LogUtil* logUtil;
};


HelperFactory* HelperFactory_new(void);

void HelperFactory_init(HelperFactory* this);
Any* HelperFactory_getInstance(AbeClientInformationInterface* abeClientInformation, const char* factoryName, const char* className, HashMap* hashMap, HttpServletRequest* httpServletRequest);
Any* HelperFactory_getInstance(AbeClientInformationInterface* abeClientInformation, const char* factoryName, const char* className, HashMap* hashMap, PageContext* pageContext);
Any* HelperFactory_getInstance(AbeClientInformationInterface* abeClientInformation, const char* factoryName, const char* className, HashMap* hashMap, HashMap* specialhashMap, PageContext* pageContext);
Any* HelperFactory_getInstance(AbeClientInformationInterface* abeClientInformation, const char* factoryName, const char* className);

static void HelperFactory_initFields(HelperFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


void HelperFactory_init(HelperFactory* this) {
    HelperFactory_initFields(this);
}

HelperFactory* HelperFactory_new(void) {
    HelperFactory* this = calloc(1, sizeof(HelperFactory));
    HelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* HelperFactory_getInstance(AbeClientInformationInterface* abeClientInformation, const char* factoryName, const char* className, HashMap* hashMap, HttpServletRequest* httpServletRequest) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            Any** params = ((Any**) java_array_new(sizeof(Any*), 2));
            const char** classes = ((const char**) java_array_new(sizeof(const char*), 2));
            AbeFactory* abeFactory = AbeFactory_getInstance();
            classes[0] = java_class_of(hashMap);
            classes[1] = AbeFactory_getClass(abeFactory, abeClientInformation, "javax.servlet.http.HttpServletRequest");
            params[0] = ((Any*) hashMap);
            params[1] = ((Any*) httpServletRequest);
            Any* anyType = AbeFactory_getInstance(abeFactory, abeClientInformation, className, classes, params);
            return anyType;
        } JAVA_CATCH(LicensingException, e) {
            const char* error = java_concat(java_concat(java_concat("Failed To Get Instance Args: HashMap=", HashMap_toString(hashMap)), " HttpServletRequest="), java_string_of(httpServletRequest));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                LogUtil_put(logUtil, error, java_concat(factoryName, "->HelperFactory"), "getInstance(String, String, HashMap, PageContext)", e);
            }
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed To Get Instance";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                LogUtil_put(logUtil, error, java_concat(factoryName, "->HelperFactory"), "getInstance(String, String, HashMap, PageContext)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// throws LicensingException
// Java overloaded method: C needs a different name
Any* HelperFactory_getInstance(AbeClientInformationInterface* abeClientInformation, const char* factoryName, const char* className, HashMap* hashMap, PageContext* pageContext) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            Any** params = ((Any**) java_array_new(sizeof(Any*), 2));
            const char** classes = ((const char**) java_array_new(sizeof(const char*), 2));
            AbeFactory* abeFactory = AbeFactory_getInstance();
            classes[0] = java_class_of(hashMap);
            classes[1] = AbeFactory_getClass(abeFactory, abeClientInformation, "javax.servlet.jsp.PageContext");
            params[0] = ((Any*) hashMap);
            params[1] = ((Any*) pageContext);
            Any* anyType = AbeFactory_getInstance(abeFactory, abeClientInformation, className, classes, params);
            return anyType;
        } JAVA_CATCH(LicensingException, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                const char* error = java_concat(java_concat(java_concat("Failed To Get Instance Args: HashMap=", HashMap_toString(hashMap)), " PageContext="), java_string_of(pageContext));
                LogUtil_put(logUtil, error, java_concat(factoryName, "->HelperFactory"), "getInstance(String, String, HashMap, PageContext)", e);
            }
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(logUtil, commonStrings->EXCEPTION, java_concat(factoryName, "->HelperFactory"), "getInstance(String, String, HashMap, PageContext)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// throws LicensingException
// Java overloaded method: C needs a different name
Any* HelperFactory_getInstance(AbeClientInformationInterface* abeClientInformation, const char* factoryName, const char* className, HashMap* hashMap, HashMap* specialhashMap, PageContext* pageContext) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            Any** params = ((Any**) java_array_new(sizeof(Any*), 3));
            const char** classes = ((const char**) java_array_new(sizeof(const char*), 3));
            AbeFactory* abeFactory = AbeFactory_getInstance();
            classes[0] = java_class_of(hashMap);
            classes[1] = java_class_of(specialhashMap);
            classes[2] = AbeFactory_getClass(abeFactory, abeClientInformation, "javax.servlet.jsp.PageContext");
            params[0] = ((Any*) hashMap);
            params[1] = ((Any*) specialhashMap);
            params[2] = ((Any*) pageContext);
            Any* anyType = AbeFactory_getInstance(abeFactory, abeClientInformation, className, classes, params);
            return anyType;
        } JAVA_CATCH(LicensingException, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                const char* error = java_concat(java_concat(java_concat("Failed To Get Instance Args: HashMap=", HashMap_toString(hashMap)), " PageContext="), java_string_of(pageContext));
                LogUtil_put(logUtil, error, java_concat(factoryName, "->HelperFactory"), "getInstance(String, String, HashMap, PageContext)", e);
            }
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(logUtil, commonStrings->EXCEPTION, java_concat(factoryName, "->HelperFactory"), "getInstance(String, String, HashMap, PageContext)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// throws LicensingException
// Java overloaded method: C needs a different name
Any* HelperFactory_getInstance(AbeClientInformationInterface* abeClientInformation, const char* factoryName, const char* className) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            Any* anyType = AbeFactory_getInstance(AbeFactory_getInstance(), abeClientInformation, className);
            return anyType;
        } JAVA_CATCH(LicensingException, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(logUtil, commonStrings->EXCEPTION, java_concat(factoryName, "->HelperFactory"), "getInstance(String, String, HashMap, PageContext)", e);
            }
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(logUtil, commonStrings->EXCEPTION, java_concat(factoryName, "->HelperFactory"), "getInstance(String, String, HashMap, PageContext)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

