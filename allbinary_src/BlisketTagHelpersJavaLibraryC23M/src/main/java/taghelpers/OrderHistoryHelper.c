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
// package taghelpers

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
#include "admin/taghelpers/TagHelper.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/address/StreetAddress.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderData.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryFactory.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryInterface.h"
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodData.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct OrderHistoryHelper OrderHistoryHelper;
struct OrderHistoryHelper {
    TagHelper base;
    LogUtil* logUtil;
    WeblisketSession* weblisketSession;
    StoreFrontInterface* storeFrontInterface;
    HashMap* propertiesHashMap;
    PageContext* pageContext;
    HttpServletRequest* request;
    StreetAddress* streetAddress;
    const char* id;
    const char* groupId;
    const char* status;
    const char* newStatus;
};


OrderHistoryHelper* OrderHistoryHelper_new(HashMap* propertiesHashMap, PageContext* pageContext);

void OrderHistoryHelper_init(OrderHistoryHelper* this, HashMap* propertiesHashMap, PageContext* pageContext);
static void OrderHistoryHelper_getFormData(OrderHistoryHelper* this);
const char* OrderHistoryHelper_setOrderStatus(OrderHistoryHelper* this);

static void OrderHistoryHelper_initFields(OrderHistoryHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->weblisketSession = nullptr;
    this->storeFrontInterface = nullptr;
    
    
    
    this->streetAddress = nullptr;
    this->id = nullptr;
    this->groupId = nullptr;
    this->status = nullptr;
    
}


void OrderHistoryHelper_init(OrderHistoryHelper* this, HashMap* propertiesHashMap, PageContext* pageContext) {
    TagHelper_init(&this->base);
    OrderHistoryHelper_initFields(this);
        this->propertiesHashMap = propertiesHashMap;
        this->pageContext = pageContext;
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        const char* storeName = ((const char*) HashMap_get(propertiesHashMap, StoreFrontData_getInstance()->NAME));
        this->newStatus = ((const char*) HashMap_get(propertiesHashMap, OrderHistoryData_STATUS));
        if (storeName != nullptr) {
            this->storeFrontInterface = StoreFrontFactory_getInstance(storeName);
        }
        OrderHistoryHelper_getFormData(this);
}

OrderHistoryHelper* OrderHistoryHelper_new(HashMap* propertiesHashMap, PageContext* pageContext) {
    OrderHistoryHelper* this = calloc(1, sizeof(OrderHistoryHelper));
    OrderHistoryHelper_init(this, propertiesHashMap, pageContext);
    return this;
}


static void OrderHistoryHelper_getFormData(OrderHistoryHelper* this) {
        this->id = HttpServletRequest_getParameter(this->request, OrderData_ID);
        this->groupId = HttpServletRequest_getParameter(this->request, ShippingMethodData_GROUP);
        if (this->newStatus == nullptr) {
            this->newStatus = HttpServletRequest_getParameter(this->request, OrderHistoryData_STATUS);
        }
}


const char* OrderHistoryHelper_setOrderStatus(OrderHistoryHelper* this) {
        JAVA_TRY {
            const char* success = java_concat("Status successfully set to: ", this->status);
            OrderHistoryInterface* orderReviewInterface = OrderHistoryFactory_getInstance(this->id);
            const char* status = OrderHistoryInterface_getStatus(orderReviewInterface);
            if (strcmp(status, OrderHistoryData_CANCELLED) == 0) {
                return java_concat(java_concat("Order ", this->id), " Already Cancelled<br/>");
            } else if (strcmp(status, OrderHistoryData_SHIPPED) == 0) {
                return java_concat(java_concat("Order ", this->id), " Already Shipped. You can't cancel a shipped order.<br/>");
            } else if (strcmp(status, OrderHistoryData_PREPROCESSING) == 0) {
                return java_concat(java_concat("Order ", this->id), " has been cancelled.<br/>");
            } else if (strcmp(status, OrderHistoryData_PARTIALLYSHIPPED) == 0) {
                return java_concat(java_concat("Order ", this->id), " Partially Shipped. You can cancel unshipped items, but not the whole order.<br/>");
            } else if (strcmp(status, OrderHistoryData_PROCESSING) == 0) {
                OrderHistoryEntityInterface* orderHistoryEntityInterface = OrderHistoryEntityFactory_getInstance();
                OrderHistoryEntityInterface_setStatus(orderHistoryEntityInterface, this->id, this->newStatus);
                return java_concat(java_concat("Order ", this->id), " has been cancelled.<br/>");
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "setOrderStatus()");
            }
            return "Error Setting Order Status";
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to set order status";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setOrderStatus()", e);
            }
            return java_concat(java_concat(java_concat(java_concat(error, "<br/>"), "Exception: "), java_string_of(e)), "<br/>");
        } JAVA_END_TRY;
}

