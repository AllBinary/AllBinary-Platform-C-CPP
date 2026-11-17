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
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "admin/taghelpers/OrderHistoryHelperFactory.h"
#include "admin/taghelpers/OrderHistoryRequestHelperFactory.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "admin/tags/TableTag.h"

typedef struct OrderHistoryTag OrderHistoryTag;
struct OrderHistoryTag {
    TableTag base;
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
    TableTag_init(&this->base);
    OrderHistoryTag_initFields(this);
        OrderHistoryTag_setTagHelperFactory(this, OrderHistoryHelperFactory_new());
        OrderHistoryTag_setTagRequestHelperFactory(this, OrderHistoryRequestHelperFactory_new());
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
            HttpServletRequest* request = ((HttpServletRequest*) JAVA_CALL(this->pageContext, getRequest));
            Any* anyType = OrderHistoryRequestHelperFactory_getInstance(OrderHistoryRequestHelperFactory_new(), OrderHistoryTag_getPropertiesHashMap(this), this->base.pageContext);
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
            const char* error = "Failed to set Order Status";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setOrderStatus()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t OrderHistoryTag_doStartTag(OrderHistoryTag* this) {
        JAVA_TRY {
            if (OrderHistoryTag_isEnabled(this)) {
                if (OrderHistoryTag_getCommand(this) != nullptr) {
                    JAVA_CALL(OrderHistoryTag_getPropertiesHashMap(this), put, OrderHistoryData_STATUS, this->status);
                    if (JAVA_CALL(OrderHistoryTag_getCommand(this), compareTo, OrderHistoryData_SETSTATUS) == 0) {
                        OrderHistoryTag_setOrderStatus(this);
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

