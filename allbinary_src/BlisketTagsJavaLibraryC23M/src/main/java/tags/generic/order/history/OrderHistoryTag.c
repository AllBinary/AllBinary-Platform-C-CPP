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
// package tags.generic.order.history

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
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "taghelpers/OrderHistoryHelperFactory.h"
#include "tags/StoreValidationTransformTag.h"

typedef struct OrderHistoryTag OrderHistoryTag;
struct OrderHistoryTag {
    StoreValidationTransformTag base;
    LogUtil* logUtil;
    const char* status;
};


OrderHistoryTag* OrderHistoryTag_new(void);

void OrderHistoryTag_init(OrderHistoryTag* this);
void OrderHistoryTag_setStatus(OrderHistoryTag* this, const char* value);
static const char* OrderHistoryTag_setOrderStatus(OrderHistoryTag* this);
int32_t OrderHistoryTag_doStartTag(OrderHistoryTag* this);

static void OrderHistoryTag_initFields(OrderHistoryTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->status = nullptr;
}


void OrderHistoryTag_init(OrderHistoryTag* this) {
    StoreValidationTransformTag_init(&this->base);
    OrderHistoryTag_initFields(this);
}

OrderHistoryTag* OrderHistoryTag_new(void) {
    OrderHistoryTag* this = calloc(1, sizeof(OrderHistoryTag));
    OrderHistoryTag_init(this);
    return this;
}


void OrderHistoryTag_setStatus(OrderHistoryTag* this, const char* value) {
        this->status = value;
}


// throws LicensingException
static const char* OrderHistoryTag_setOrderStatus(OrderHistoryTag* this) {
        JAVA_TRY {
            Any* anyType = OrderHistoryHelperFactory_getInstance(OrderHistoryHelperFactory_new(), OrderHistoryTag_getPropertiesHashMap(this), this->base.pageContext);
            const char* helperClass = java_class_of(anyType);
            Method* method = Class_getMethod(helperClass, "setOrderStatus", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to view order table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setOrderStatus()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t OrderHistoryTag_doStartTag(OrderHistoryTag* this) {
        JAVA_TRY {
            OrderHistoryTag_setName(this, "Basic Order History View");
            OrderHistoryTag_setObjectFile(this, "views.generic.order.history.ValidationView");
            if (OrderHistoryTag_getCommand(this) != nullptr) {
                if (JAVA_CALL(OrderHistoryTag_getCommand(this), compareTo, OrderHistoryData_SETSTATUS) == 0) {
                    JAVA_CALL(OrderHistoryTag_getPropertiesHashMap(this), put, OrderHistoryData_STATUS, this->status);
                    JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, OrderHistoryTag_setOrderStatus(this));
                } else if (JAVA_CALL(OrderHistoryTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(OrderHistoryTag_getCommand(this)))));
                }
                return StoreValidationTransformTag_doStartTag((&this->base));
            }
            java_throw(java_exception_new("Exception", "Command Null"));
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return StoreValidationTransformTag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return StoreValidationTransformTag_SKIP_BODY;
        } JAVA_END_TRY;
}

