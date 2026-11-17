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
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistory.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h"
#include "org/allbinary/business/user/commerce/inventory/order/status/OrderStatusEmail.h"
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodData.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntityFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "admin/taghelpers/TagHelper.h"

typedef struct OrderHistoryRequestHelper OrderHistoryRequestHelper;
struct OrderHistoryRequestHelper {
    TagHelper base;
    LogUtil* logUtil;
    AbeClientInformationInterface* abeClientInformation;
    HttpServletRequest* request;
    const char* id;
    const char* groupId;
    const char* status;
};


OrderHistoryRequestHelper* OrderHistoryRequestHelper_new(HashMap* hashMap, PageContext* pageContext);

void OrderHistoryRequestHelper_init(OrderHistoryRequestHelper* this, HashMap* hashMap, PageContext* pageContext);
static void OrderHistoryRequestHelper_getFormData(OrderHistoryRequestHelper* this);
const char* OrderHistoryRequestHelper_setOrderStatus(OrderHistoryRequestHelper* this);
const char* OrderHistoryRequestHelper_setOrderStatus(OrderHistoryRequestHelper* this, const char* newStatus);

static void OrderHistoryRequestHelper_initFields(OrderHistoryRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
    
    this->id = nullptr;
    this->groupId = nullptr;
    this->status = nullptr;
}


void OrderHistoryRequestHelper_init(OrderHistoryRequestHelper* this, HashMap* hashMap, PageContext* pageContext) {
    TagHelper_init(&this->base);
    OrderHistoryRequestHelper_initFields(this);
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        OrderHistoryRequestHelper_getFormData(this);
}

OrderHistoryRequestHelper* OrderHistoryRequestHelper_new(HashMap* hashMap, PageContext* pageContext) {
    OrderHistoryRequestHelper* this = calloc(1, sizeof(OrderHistoryRequestHelper));
    OrderHistoryRequestHelper_init(this, hashMap, pageContext);
    return this;
}


static void OrderHistoryRequestHelper_getFormData(OrderHistoryRequestHelper* this) {
        this->id = HttpServletRequest_getParameter(this->request, OrderData_ID);
        this->groupId = HttpServletRequest_getParameter(this->request, ShippingMethodData_GROUP);
        this->status = HttpServletRequest_getParameter(this->request, OrderHistoryData_STATUS);
}


const char* OrderHistoryRequestHelper_setOrderStatus(OrderHistoryRequestHelper* this) {
        JAVA_TRY {
            if (strcmp(this->groupId, CommonPhoneStrings_getInstance()->ZERO) != 0) {
                if (OrderItemsEntityFactory_isEverythingShipped(OrderItemsEntityFactory_getInstance(), this->id)) {
                    this->status = OrderHistoryData_SHIPPED;
                } else {
                    this->status = OrderHistoryData_PARTIALLYSHIPPED;
                }
            }
            const char* success = java_concat("Status successfully set to: ", this->status);
            OrderHistoryEntityFactory_setStatus(OrderHistoryEntityFactory_getInstance(), this->id, this->status);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, "Success", this, "setOrderStatus()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to set order status";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setOrderStatus()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
const char* OrderHistoryRequestHelper_setOrderStatus(OrderHistoryRequestHelper* this, const char* newStatus) {
        JAVA_TRY {
            if (newStatus == nullptr) {
                newStatus = this->status;
            }
            const char* success = java_concat("Status successfully set to: ", newStatus);
            OrderHistoryEntityFactory_setStatus(OrderHistoryEntityFactory_getInstance(), this->id, newStatus);
            OrderHistory* orderHistory = OrderHistoryEntityFactory_getOrder(OrderHistoryEntityFactory_getInstance(), this->id);
            OrderStatusEmail_process(OrderStatusEmail_new(this->abeClientInformation, orderHistory));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, "Success", this, "setOrderStatus()");
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

