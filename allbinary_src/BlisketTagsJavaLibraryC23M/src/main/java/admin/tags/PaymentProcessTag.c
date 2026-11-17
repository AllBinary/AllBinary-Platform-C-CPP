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
// #include "javax/servlet/jsp/JspTagException.h"
#include "admin/taghelpers/PaymentProcessHelperFactory.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "tags/StoreValidationTransformTag.h"

typedef struct PaymentProcessTag PaymentProcessTag;
struct PaymentProcessTag {
    StoreValidationTransformTag base;
    LogUtil* logUtil;
};


PaymentProcessTag* PaymentProcessTag_new(void);

void PaymentProcessTag_init(PaymentProcessTag* this);
const char* PaymentProcessTag_process(PaymentProcessTag* this);
int32_t PaymentProcessTag_doStartTag(PaymentProcessTag* this);

static void PaymentProcessTag_initFields(PaymentProcessTag* this) {
    this->logUtil = LogUtil_getInstance();
}


void PaymentProcessTag_init(PaymentProcessTag* this) {
    StoreValidationTransformTag_init(&this->base);
    PaymentProcessTag_initFields(this);
}

PaymentProcessTag* PaymentProcessTag_new(void) {
    PaymentProcessTag* this = calloc(1, sizeof(PaymentProcessTag));
    PaymentProcessTag_init(this);
    return this;
}


// throws LicensingException, Exception
const char* PaymentProcessTag_process(PaymentProcessTag* this) {
        JAVA_TRY {
            Any* anyType = PaymentProcessHelperFactory_getInstance(PaymentProcessHelperFactory_new(), PaymentProcessTag_getPropertiesHashMap(this), this->pageContext);
            const char* helperClass = java_class_of(anyType);
            Method* method = Class_getMethod(helperClass, this->base.commonStrings->PROCESS, nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LICENSINGERROR)) {
                LogUtil_put(this->logUtil, "LicensingException", this, this->commonStrings->PROCESS, e);
            }
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t PaymentProcessTag_doStartTag(PaymentProcessTag* this) {
        JAVA_TRY {
            if (JAVA_CALL(PaymentProcessTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->AUTHORIZEORDEREVALBODYONERROR) == 0 || JAVA_CALL(PaymentProcessTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->AUTHORIZEORDERANDEVALBODY) == 0 || JAVA_CALL(PaymentProcessTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->AUTHORIZEFORMEVALBODYONERROR) == 0) {
                JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, java_concat(java_string_of(PaymentProcessTag_process(this)), "<br />"));
                if (JAVA_CALL(PaymentProcessTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->AUTHORIZEORDEREVALBODYONERROR) == 0) {
                    return this->SKIP_BODY;
                } else {
                    return this->EVAL_BODY_INCLUDE;
                }
            } else {
                java_throw(java_exception_new("Exception", "No Such Payment Processing Command"));
            }
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return StoreValidationTransformTag_SKIP_BODY;
        } JAVA_END_TRY;
}

