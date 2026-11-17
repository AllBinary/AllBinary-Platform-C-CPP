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
#include "admin/taghelpers/BillingAddressHelperFactory.h"
#include "org/allbinary/business/user/address/BillingAddressData.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "admin/tags/TableTag.h"

typedef struct BillingAddressTag BillingAddressTag;
struct BillingAddressTag {
    TableTag base;
    LogUtil* logUtil;
    const char* value;
};


BillingAddressTag* BillingAddressTag_new(void);

void BillingAddressTag_init(BillingAddressTag* this);
void BillingAddressTag_setValue(BillingAddressTag* this, const char* value);
static const char* BillingAddressTag_set(BillingAddressTag* this);
static const char* BillingAddressTag_setToShippingAddress(BillingAddressTag* this);
int32_t BillingAddressTag_doStartTag(BillingAddressTag* this);

static void BillingAddressTag_initFields(BillingAddressTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->value = nullptr;
}


void BillingAddressTag_init(BillingAddressTag* this) {
    TableTag_init(&this->base);
    BillingAddressTag_initFields(this);
        BillingAddressTag_setTagHelperFactory(this, BillingAddressHelperFactory_new());
        BillingAddressTag_setTagRequestHelperFactory(this, BillingAddressHelperFactory_new());
}

BillingAddressTag* BillingAddressTag_new(void) {
    BillingAddressTag* this = calloc(1, sizeof(BillingAddressTag));
    BillingAddressTag_init(this);
    return this;
}


void BillingAddressTag_setValue(BillingAddressTag* this, const char* value) {
        this->value = value;
}


// throws LicensingException
static const char* BillingAddressTag_set(BillingAddressTag* this) {
        JAVA_TRY {
            Any* anyType = BillingAddressHelperFactory_getInstance(BillingAddressHelperFactory_new(), BillingAddressTag_getPropertiesHashMap(this), this->pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "set", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to set billing Address";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "set()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
static const char* BillingAddressTag_setToShippingAddress(BillingAddressTag* this) {
        JAVA_TRY {
            Any* anyType = BillingAddressHelperFactory_getInstance(BillingAddressHelperFactory_new(), BillingAddressTag_getPropertiesHashMap(this), this->pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "setToShippingAddress", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to Set Billing address to Shipping Address";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setToShippingAddress()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t BillingAddressTag_doStartTag(BillingAddressTag* this) {
        JAVA_TRY {
            if (BillingAddressTag_isEnabled(this)) {
                if (BillingAddressTag_getCommand(this) != nullptr) {
                    if (JAVA_CALL(BillingAddressTag_getCommand(this), compareTo, BillingAddressData_SELECT) == 0) {
                        BillingAddressTag_set(this);
                        return this->EVAL_BODY_INCLUDE;
                    } else if (JAVA_CALL(BillingAddressTag_getCommand(this), compareTo, BillingAddressData_SETTOSHIPPINGADDRESS) == 0) {
                        BillingAddressTag_setToShippingAddress(this);
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

