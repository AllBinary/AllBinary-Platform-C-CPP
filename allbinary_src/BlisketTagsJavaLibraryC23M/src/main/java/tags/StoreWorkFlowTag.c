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
// package tags

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/lang/reflect/Method.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#include "taghelpers/StoreTagWorkFlowHelperFactory.h"
#include "tags/HelperTag.h"

//and hidden field removal
typedef struct StoreWorkFlowTag StoreWorkFlowTag;
struct StoreWorkFlowTag {
    HelperTag base;
    LogUtil* logUtil;
    const char* viewName;
    const char* viewFile;
};


StoreWorkFlowTag* StoreWorkFlowTag_new(void);

void StoreWorkFlowTag_init(StoreWorkFlowTag* this);
void StoreWorkFlowTag_setName(StoreWorkFlowTag* this, const char* value);
static int32_t StoreWorkFlowTag_process(StoreWorkFlowTag* this);
int32_t StoreWorkFlowTag_doStartTag(StoreWorkFlowTag* this);

static void StoreWorkFlowTag_initFields(StoreWorkFlowTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->viewName = nullptr;
    this->viewFile = nullptr;
}


void StoreWorkFlowTag_init(StoreWorkFlowTag* this) {
        HelperTag_init(&this->base, StoreTagWorkFlowHelperFactory_new());
        StoreWorkFlowTag_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        }
}

StoreWorkFlowTag* StoreWorkFlowTag_new(void) {
    StoreWorkFlowTag* this = calloc(1, sizeof(StoreWorkFlowTag));
    StoreWorkFlowTag_init(this);
    return this;
}


void StoreWorkFlowTag_setName(StoreWorkFlowTag* this, const char* value) {
        this->viewName = value;
        JAVA_CALL(StoreWorkFlowTag_getPropertiesHashMap(this), put, TransformInfoData_getInstance()->NAME, this->viewName);
}


// throws Exception
static int32_t StoreWorkFlowTag_process(StoreWorkFlowTag* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->PROCESS);
            }
            const char* helperClass = java_class_of(StoreWorkFlowTag_getHelper(this));
            Method* method = Class_getMethod(helperClass, this->base.commonStrings->PROCESS, nullptr);
            int32_t result = ((int32_t) Method_invoke(method, StoreWorkFlowTag_getHelper(this), nullptr));
            return Integer_intValue(result);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t StoreWorkFlowTag_doStartTag(StoreWorkFlowTag* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->base.tagStrings->DO_START_TAG);
            }
            StoreWorkFlowTag_setHelper(this);
            return StoreWorkFlowTag_process(this);
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return HelperTag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return HelperTag_SKIP_BODY;
        } JAVA_END_TRY;
}

