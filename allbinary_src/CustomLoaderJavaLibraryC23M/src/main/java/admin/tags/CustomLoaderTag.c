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
// package admin.tags

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/lang/reflect/Method.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "admin/taghelpers/CustomLoaderHelperFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "tags/CustomTagSupport.h"

typedef struct CustomLoaderTag CustomLoaderTag;
struct CustomLoaderTag {
    CustomTagSupport base;
    LogUtil* logUtil;
    const char* command;
    const char* webappPath;
    HashMap* propertiesHashMap;
};


CustomLoaderTag* CustomLoaderTag_new(void);

void CustomLoaderTag_init(CustomLoaderTag* this);
void CustomLoaderTag_setCommand(CustomLoaderTag* this, const char* command);
void CustomLoaderTag_setWebappPath(CustomLoaderTag* this, const char* value);
static void CustomLoaderTag_setCustomLoaderWebappPath(CustomLoaderTag* this);
int32_t CustomLoaderTag_doStartTag(CustomLoaderTag* this);

static void CustomLoaderTag_initFields(CustomLoaderTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->command = nullptr;
    this->webappPath = nullptr;
    this->propertiesHashMap = nullptr;
}


void CustomLoaderTag_init(CustomLoaderTag* this) {
    CustomTagSupport_init(&this->base);
    CustomLoaderTag_initFields(this);
}

CustomLoaderTag* CustomLoaderTag_new(void) {
    CustomLoaderTag* this = calloc(1, sizeof(CustomLoaderTag));
    CustomLoaderTag_init(this);
    return this;
}


void CustomLoaderTag_setCommand(CustomLoaderTag* this, const char* command) {
        this->command = command;
}


void CustomLoaderTag_setWebappPath(CustomLoaderTag* this, const char* value) {
        this->webappPath = value;
}


// throws LicensingException
static void CustomLoaderTag_setCustomLoaderWebappPath(CustomLoaderTag* this) {
        JAVA_TRY {
            Any* anyType = CustomLoaderHelperFactory_getInstance(CustomLoaderHelperFactory_new(), this->propertiesHashMap, this->base.pageContext);
            const char* helperClass = java_class_of(anyType);
            const char** methodParams = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ java_class_of(this->webappPath) }) / sizeof(const char*), (const char*[]){ java_class_of(this->webappPath) }));
            Any** methodArgs = ((Any**) java_array_from(sizeof(Any*), sizeof((Any*[]){ this->webappPath }) / sizeof(Any*), (Any*[]){ this->webappPath }));
            Method* setMethod = Class_getMethod(helperClass, "setWebappPath", methodParams);
            Method_invoke(setMethod, anyType, methodArgs);
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setCustomLoaderWebappPath()", e);
            }
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t CustomLoaderTag_doStartTag(CustomLoaderTag* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->base.tagStrings->DO_START_TAG);
            }
            if (this->command != nullptr) {
                this->propertiesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
                if (strcmp(this->command, org_allbinary->globals->GLOBALS2->SET) == 0) {
                    CustomLoaderTag_setCustomLoaderWebappPath(this);
                }
            }
            return CustomTagSupport_SKIP_BODY;
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return CustomTagSupport_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return CustomTagSupport_SKIP_BODY;
        } JAVA_END_TRY;
}

