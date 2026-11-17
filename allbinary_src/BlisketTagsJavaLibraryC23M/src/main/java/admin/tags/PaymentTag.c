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
#include "admin/taghelpers/PaymentHelperFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/user/commerce/money/payment/PaymentData.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "admin/tags/TableTag.h"

typedef struct PaymentTag PaymentTag;
struct PaymentTag {
    TableTag base;
    LogUtil* logUtil;
    const char* storeName;
    HashMap* propertiesHashMap;
};


PaymentTag* PaymentTag_new(void);

void PaymentTag_init(PaymentTag* this);
void PaymentTag_setStoreName(PaymentTag* this, const char* value);
static const char* PaymentTag_select(PaymentTag* this);
int32_t PaymentTag_doStartTag(PaymentTag* this);

static void PaymentTag_initFields(PaymentTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->storeName = nullptr;
    this->propertiesHashMap = nullptr;
}


void PaymentTag_init(PaymentTag* this) {
    TableTag_init(&this->base);
    PaymentTag_initFields(this);
        PaymentTag_setTagHelperFactory(this, PaymentHelperFactory_new());
        PaymentTag_setTagRequestHelperFactory(this, PaymentHelperFactory_new());
}

PaymentTag* PaymentTag_new(void) {
    PaymentTag* this = calloc(1, sizeof(PaymentTag));
    PaymentTag_init(this);
    return this;
}


void PaymentTag_setStoreName(PaymentTag* this, const char* value) {
        this->storeName = value;
}


// throws LicensingException
static const char* PaymentTag_select(PaymentTag* this) {
        JAVA_TRY {
            Any* anyType = PaymentHelperFactory_getInstance(PaymentHelperFactory_new(), PaymentTag_getPropertiesHashMap(this), this->base.pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "select", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to select Payment";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "selectPayment()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t PaymentTag_doStartTag(PaymentTag* this) {
        JAVA_TRY {
            if (PaymentTag_isEnabled(this)) {
                this->propertiesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
                HashMap_put(this->propertiesHashMap, StoreFrontData_getInstance()->NAME, this->storeName);
                if (PaymentTag_getCommand(this) != nullptr) {
                    if (JAVA_CALL(PaymentTag_getCommand(this), compareTo, PaymentData_SELECT) == 0) {
                        const char* output = PaymentTag_select(this);
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGEXTRAOUTPUT)) {
                            JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, java_concat(output, "<br />"));
                        }
                        return this->EVAL_BODY_INCLUDE;
                    } else {
                        return TableTag_doStartTag((&this->base));
                    }
                }
            }
            return TableTag_SKIP_BODY;
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return TableTag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return TableTag_SKIP_BODY;
        } JAVA_END_TRY;
}

