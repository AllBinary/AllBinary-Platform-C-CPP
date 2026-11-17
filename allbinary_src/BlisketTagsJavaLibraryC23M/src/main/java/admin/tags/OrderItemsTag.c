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
#include "admin/taghelpers/OrderItemsHelperFactory.h"
#include "admin/taghelpers/OrderItemsRequestHelperFactory.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "admin/tags/TableTag.h"

typedef struct OrderItemsTag OrderItemsTag;
struct OrderItemsTag {
    TableTag base;
    LogUtil* logUtil;
    const char* status;
};


OrderItemsTag* OrderItemsTag_new(void);

void OrderItemsTag_init(OrderItemsTag* this);
void OrderItemsTag_setStatus(OrderItemsTag* this, const char* value);
static const char* OrderItemsTag_setOrderStatus(OrderItemsTag* this);
int32_t OrderItemsTag_doStartTag(OrderItemsTag* this);

static void OrderItemsTag_initFields(OrderItemsTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->status = nullptr;
}


void OrderItemsTag_init(OrderItemsTag* this) {
    TableTag_init(&this->base);
    OrderItemsTag_initFields(this);
        OrderItemsTag_setTagHelperFactory(this, OrderItemsHelperFactory_new());
        OrderItemsTag_setTagRequestHelperFactory(this, OrderItemsRequestHelperFactory_new());
}

OrderItemsTag* OrderItemsTag_new(void) {
    OrderItemsTag* this = calloc(1, sizeof(OrderItemsTag));
    OrderItemsTag_init(this);
    return this;
}


void OrderItemsTag_setStatus(OrderItemsTag* this, const char* value) {
        this->status = value;
}


// throws LicensingException
static const char* OrderItemsTag_setOrderStatus(OrderItemsTag* this) {
        JAVA_TRY {
            Any* anyType = OrderItemsRequestHelperFactory_getInstance(OrderItemsRequestHelperFactory_new(), OrderItemsTag_getPropertiesHashMap(this), this->pageContext);
            if (this->status == nullptr) {
                const char* helperClass = java_class_of(anyType);
                Method* method = Class_getMethod(helperClass, "setOrderStatus", nullptr);
                const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
                return result;
            } else {
                const char* helperClass = java_class_of(anyType);
                const char** methodParams = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ java_class_of(this->status) }) / sizeof(const char*), (const char*[]){ java_class_of(this->status) }));
                Method* method = Class_getMethod(helperClass, "setOrderStatus", methodParams);
                Any** methodArgs = ((Any**) java_array_from(sizeof(Any*), sizeof((Any*[]){ this->status }) / sizeof(Any*), (Any*[]){ this->status }));
                const char* result = ((const char*) Method_invoke(method, anyType, methodArgs));
                return result;
            }
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = java_concat("Failed to set Order status to: ", this->status);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setOrderStatus()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t OrderItemsTag_doStartTag(OrderItemsTag* this) {
        JAVA_TRY {
            if (OrderItemsTag_isEnabled(this)) {
                if (OrderItemsTag_getCommand(this) != nullptr) {
                    JAVA_CALL(OrderItemsTag_getPropertiesHashMap(this), put, OrderHistoryData_STATUS, this->status);
                    if (JAVA_CALL(OrderItemsTag_getCommand(this), compareTo, OrderHistoryData_SETSTATUS) == 0) {
                        JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, OrderItemsTag_setOrderStatus(this));
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

