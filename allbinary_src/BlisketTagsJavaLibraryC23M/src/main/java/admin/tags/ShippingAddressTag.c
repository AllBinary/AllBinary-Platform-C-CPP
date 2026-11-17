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
#include "admin/taghelpers/ShippingAddressHelperFactory.h"
#include "org/allbinary/business/user/address/ShippingAddressData.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "admin/tags/TableTag.h"

typedef struct ShippingAddressTag ShippingAddressTag;
struct ShippingAddressTag {
    TableTag base;
    LogUtil* logUtil;
    const char* value;
};


ShippingAddressTag* ShippingAddressTag_new(void);

void ShippingAddressTag_init(ShippingAddressTag* this);
void ShippingAddressTag_setValue(ShippingAddressTag* this, const char* value);
static const char* ShippingAddressTag_set(ShippingAddressTag* this);
static const char* ShippingAddressTag_setToBillingAddress(ShippingAddressTag* this);
int32_t ShippingAddressTag_doStartTag(ShippingAddressTag* this);

static void ShippingAddressTag_initFields(ShippingAddressTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->value = nullptr;
}


void ShippingAddressTag_init(ShippingAddressTag* this) {
    TableTag_init(&this->base);
    ShippingAddressTag_initFields(this);
        ShippingAddressTag_setTagHelperFactory(this, ShippingAddressHelperFactory_new());
        ShippingAddressTag_setTagRequestHelperFactory(this, ShippingAddressHelperFactory_new());
}

ShippingAddressTag* ShippingAddressTag_new(void) {
    ShippingAddressTag* this = calloc(1, sizeof(ShippingAddressTag));
    ShippingAddressTag_init(this);
    return this;
}


void ShippingAddressTag_setValue(ShippingAddressTag* this, const char* value) {
        this->value = value;
}


// throws LicensingException
static const char* ShippingAddressTag_set(ShippingAddressTag* this) {
        JAVA_TRY {
            Any* anyType = ShippingAddressHelperFactory_getInstance(ShippingAddressHelperFactory_new(), ShippingAddressTag_getPropertiesHashMap(this), this->pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "set", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to set Shipping Address";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "set()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
static const char* ShippingAddressTag_setToBillingAddress(ShippingAddressTag* this) {
        JAVA_TRY {
            Any* anyType = ShippingAddressHelperFactory_getInstance(ShippingAddressHelperFactory_new(), ShippingAddressTag_getPropertiesHashMap(this), this->pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "setToBillingAddress", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed Setting Shipping address to Billing Address";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setShippingAddressToBillingAddress()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t ShippingAddressTag_doStartTag(ShippingAddressTag* this) {
        JAVA_TRY {
            if (ShippingAddressTag_isEnabled(this)) {
                if (ShippingAddressTag_getCommand(this) != nullptr) {
                    if (JAVA_CALL(ShippingAddressTag_getCommand(this), compareTo, ShippingAddressData_SELECT) == 0) {
                        ShippingAddressTag_set(this);
                        return this->EVAL_BODY_INCLUDE;
                    } else if (JAVA_CALL(ShippingAddressTag_getCommand(this), compareTo, ShippingAddressData_SETTOBILLINGADDRESS) == 0) {
                        ShippingAddressTag_setToBillingAddress(this);
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

