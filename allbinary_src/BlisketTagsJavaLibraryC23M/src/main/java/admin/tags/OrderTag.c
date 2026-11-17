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
// #include "javax/servlet/jsp/tagext/TagSupport.h"
#include "admin/taghelpers/OrderHelperFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "tags/CustomTagSupport.h"

typedef struct OrderTag OrderTag;
struct OrderTag {
    CustomTagSupport base;
    LogUtil* logUtil;
    const char* command;
    const char* storeName;
    HashMap* propertiesHashMap;
};


OrderTag* OrderTag_new(void);

void OrderTag_init(OrderTag* this);
void OrderTag_setCommand(OrderTag* this, const char* command);
void OrderTag_setStoreName(OrderTag* this, const char* value);
static const char* OrderTag_process(OrderTag* this);
static bool OrderTag_setPaymentGateway(OrderTag* this);
int32_t OrderTag_doStartTag(OrderTag* this);

static void OrderTag_initFields(OrderTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->command = nullptr;
    this->storeName = nullptr;
    this->propertiesHashMap = nullptr;
}


void OrderTag_init(OrderTag* this) {
    CustomTagSupport_init(&this->base);
    OrderTag_initFields(this);
}

OrderTag* OrderTag_new(void) {
    OrderTag* this = calloc(1, sizeof(OrderTag));
    OrderTag_init(this);
    return this;
}


void OrderTag_setCommand(OrderTag* this, const char* command) {
        this->command = command;
}


void OrderTag_setStoreName(OrderTag* this, const char* value) {
        this->storeName = value;
}


// throws LicensingException
static const char* OrderTag_process(OrderTag* this) {
        JAVA_TRY {
            Any* anyType = OrderHelperFactory_getInstance(OrderHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            const char* helperClass = java_class_of(anyType);
            Method* method = Class_getMethod(helperClass, this->base.commonStrings->PROCESS, nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to Process Order: ";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
static bool OrderTag_setPaymentGateway(OrderTag* this) {
        JAVA_TRY {
            Any* anyType = OrderHelperFactory_getInstance(OrderHelperFactory_new(), this->propertiesHashMap, this->pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "setPaymentGateway", nullptr);
            bool result = ((bool) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to setPaymentGateway for Order";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setPaymentGateway()", e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t OrderTag_doStartTag(OrderTag* this) {
        JAVA_TRY {
            if (this->command != nullptr) {
                this->propertiesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
                HashMap_put(this->propertiesHashMap, StoreFrontData_getInstance()->NAME, this->storeName);
                if (strcmp(this->command, org_allbinary->globals->GLOBALS2->PROCESS) == 0) {
                    OrderTag_process(this);
                } else if (strcmp(this->command, JAVA_CALL(PaymentGatewayData_NAME, toString)) == 0) {
                    if (OrderTag_setPaymentGateway(this) == true) {
                        return TagSupport_EVAL_BODY_INCLUDE;
                    }
                }
            }
            return TagSupport_SKIP_BODY;
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return CustomTagSupport_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return CustomTagSupport_SKIP_BODY;
        } JAVA_END_TRY;
}

