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
#include "admin/taghelpers/PaymentGatewayHelperFactory.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "admin/tags/TableTag.h"

typedef struct PaymentGatewayTag PaymentGatewayTag;
struct PaymentGatewayTag {
    TableTag base;
    LogUtil* logUtil;
};


PaymentGatewayTag* PaymentGatewayTag_new(void);

void PaymentGatewayTag_init(PaymentGatewayTag* this);
const char* PaymentGatewayTag_process(PaymentGatewayTag* this);
int32_t PaymentGatewayTag_doStartTag(PaymentGatewayTag* this);

static void PaymentGatewayTag_initFields(PaymentGatewayTag* this) {
    this->logUtil = LogUtil_getInstance();
}


void PaymentGatewayTag_init(PaymentGatewayTag* this) {
    TableTag_init(&this->base);
    PaymentGatewayTag_initFields(this);
        PaymentGatewayTag_setTagHelperFactory(this, PaymentGatewayHelperFactory_new());
        PaymentGatewayTag_setTagRequestHelperFactory(this, PaymentGatewayHelperFactory_new());
}

PaymentGatewayTag* PaymentGatewayTag_new(void) {
    PaymentGatewayTag* this = calloc(1, sizeof(PaymentGatewayTag));
    PaymentGatewayTag_init(this);
    return this;
}


// throws LicensingException, Exception
const char* PaymentGatewayTag_process(PaymentGatewayTag* this) {
        JAVA_TRY {
            Any* anyType = PaymentGatewayHelperFactory_getInstance(PaymentGatewayHelperFactory_new(), PaymentGatewayTag_getPropertiesHashMap(this), this->pageContext);
            const char* helperClass = java_class_of(anyType);
            Method* method = Class_getMethod(helperClass, this->base.commonStrings->PROCESS, nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            LogUtil_put(this->logUtil, "LicensingException", this, this->commonStrings->PROCESS, e);
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t PaymentGatewayTag_doStartTag(PaymentGatewayTag* this) {
        JAVA_TRY {
            if (PaymentGatewayTag_isEnabled(this)) {
                if (JAVA_CALL(PaymentGatewayTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->AUTHORIZEORDEREVALBODYONERROR) == 0 || JAVA_CALL(PaymentGatewayTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->AUTHORIZEORDERANDEVALBODY) == 0 || JAVA_CALL(PaymentGatewayTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->AUTHORIZEFORMEVALBODYONERROR) == 0) {
                    const char* output = PaymentGatewayTag_process(this);
                    {
                        JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, java_concat(output, "<br />"));
                    }
                    if (JAVA_CALL(PaymentGatewayTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->AUTHORIZEORDEREVALBODYONERROR) == 0) {
                        return this->SKIP_BODY;
                    } else {
                        return this->EVAL_BODY_INCLUDE;
                    }
                } else {
                    return TableTag_doStartTag((&this->base));
                }
            }
            return TableTag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return TableTag_SKIP_BODY;
        } JAVA_END_TRY;
}

