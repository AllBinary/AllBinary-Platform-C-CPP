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
// package admin.taghelpers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderData.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h"
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodData.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntityFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "admin/taghelpers/TagHelper.h"

typedef struct OrderItemsRequestHelper OrderItemsRequestHelper;
struct OrderItemsRequestHelper {
    TagHelper base;
    LogUtil* logUtil;
    HttpServletRequest* request;
    const char* id;
    const char* groupId;
    const char* status;
};


OrderItemsRequestHelper* OrderItemsRequestHelper_new(HashMap* hashMap, PageContext* pageContext);

void OrderItemsRequestHelper_init(OrderItemsRequestHelper* this, HashMap* hashMap, PageContext* pageContext);
static void OrderItemsRequestHelper_getFormData(OrderItemsRequestHelper* this);
const char* OrderItemsRequestHelper_setOrderStatus(OrderItemsRequestHelper* this, const char* newStatus);
const char* OrderItemsRequestHelper_setOrderStatus(OrderItemsRequestHelper* this);

static void OrderItemsRequestHelper_initFields(OrderItemsRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->id = nullptr;
    this->groupId = nullptr;
    this->status = nullptr;
}


void OrderItemsRequestHelper_init(OrderItemsRequestHelper* this, HashMap* hashMap, PageContext* pageContext) {
    TagHelper_init(&this->base);
    OrderItemsRequestHelper_initFields(this);
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        OrderItemsRequestHelper_getFormData(this);
}

OrderItemsRequestHelper* OrderItemsRequestHelper_new(HashMap* hashMap, PageContext* pageContext) {
    OrderItemsRequestHelper* this = calloc(1, sizeof(OrderItemsRequestHelper));
    OrderItemsRequestHelper_init(this, hashMap, pageContext);
    return this;
}


static void OrderItemsRequestHelper_getFormData(OrderItemsRequestHelper* this) {
        this->id = HttpServletRequest_getParameter(this->request, OrderData_ID);
        this->groupId = HttpServletRequest_getParameter(this->request, ShippingMethodData_GROUP);
        this->status = HttpServletRequest_getParameter(this->request, OrderHistoryData_STATUS);
}


const char* OrderItemsRequestHelper_setOrderStatus(OrderItemsRequestHelper* this, const char* newStatus) {
        JAVA_TRY {
            if (newStatus == nullptr) {
                newStatus = this->status;
            }
            const char* success = java_concat("Status successfully set to: ", newStatus);
            OrderItemsEntityFactory_setStatus(OrderItemsEntityFactory_getInstance(), this->id, this->groupId, newStatus);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "setOrderStatus(newStatus)");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to view order table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setOrderStatus(newStatus)", e);
            }
            return error;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
const char* OrderItemsRequestHelper_setOrderStatus(OrderItemsRequestHelper* this) {
        JAVA_TRY {
            const char* success = java_concat("Status successfully set to: ", this->status);
            OrderItemsEntityFactory_setStatus(OrderItemsEntityFactory_getInstance(), this->id, this->groupId, this->status);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "setOrderStatus(newStatus)");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to view order table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setOrderStatus(newStatus)", e);
            }
            return error;
        } JAVA_END_TRY;
}

