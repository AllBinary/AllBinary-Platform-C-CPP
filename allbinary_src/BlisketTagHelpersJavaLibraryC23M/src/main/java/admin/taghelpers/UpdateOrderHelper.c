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
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/address/BillingAddressData.h"
#include "org/allbinary/business/user/address/ShippingAddressData.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderData.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h"
#include "org/allbinary/business/user/commerce/money/payment/PaymentData.h"
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodData.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "admin/taghelpers/TagHelper.h"

typedef struct UpdateOrderHelper UpdateOrderHelper;
struct UpdateOrderHelper {
    TagHelper base;
    LogUtil* logUtil;
    HttpServletRequest* request;
    const char* entryId;
    const char* orderId;
    const char* userName;
    const char* storeName;
    const char* shipDate;
    const char* orderDate;
    const char* transDate;
    const char* cancelDate;
    const char* status;
    const char* paymentMethod;
    const char* name;
    const char* type;
    const char* expiration;
    const char* number;
    const char* encryption;
    const char* billingName;
    const char* billingStreet;
    const char* billingCity;
    const char* billingState;
    const char* billingCode;
    const char* billingCountry;
    const char* shippingName;
    const char* shippingStreet;
    const char* shippingCity;
    const char* shippingState;
    const char* shippingCode;
    const char* shippingCountry;
    const char* shippingMethodName;
    const char* subTotal;
    const char* shippingCost;
    const char* tax;
    const char* total;
    const char* special;
    const char* userComment;
    const char* userCancelComment;
    const char* storeComment;
    const char* storeCancelComment;
};


UpdateOrderHelper* UpdateOrderHelper_new(HashMap* hashMap, PageContext* pageContext);

void UpdateOrderHelper_init(UpdateOrderHelper* this, HashMap* hashMap, PageContext* pageContext);
static void UpdateOrderHelper_getFormData(UpdateOrderHelper* this);
const char* UpdateOrderHelper_update(UpdateOrderHelper* this);

static void UpdateOrderHelper_initFields(UpdateOrderHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->entryId = nullptr;
    this->orderId = nullptr;
    this->userName = nullptr;
    this->storeName = nullptr;
    this->shipDate = nullptr;
    this->orderDate = nullptr;
    this->transDate = nullptr;
    this->cancelDate = nullptr;
    this->status = nullptr;
    this->paymentMethod = nullptr;
    this->name = nullptr;
    this->type = nullptr;
    this->expiration = nullptr;
    this->number = nullptr;
    this->encryption = nullptr;
    this->billingName = nullptr;
    this->billingStreet = nullptr;
    this->billingCity = nullptr;
    this->billingState = nullptr;
    this->billingCode = nullptr;
    this->billingCountry = nullptr;
    this->shippingName = nullptr;
    this->shippingStreet = nullptr;
    this->shippingCity = nullptr;
    this->shippingState = nullptr;
    this->shippingCode = nullptr;
    this->shippingCountry = nullptr;
    this->shippingMethodName = nullptr;
    this->subTotal = nullptr;
    this->shippingCost = nullptr;
    this->tax = nullptr;
    this->total = nullptr;
    this->special = nullptr;
    this->userComment = nullptr;
    this->userCancelComment = nullptr;
    this->storeComment = nullptr;
    this->storeCancelComment = nullptr;
}


void UpdateOrderHelper_init(UpdateOrderHelper* this, HashMap* hashMap, PageContext* pageContext) {
    TagHelper_init(&this->base);
    UpdateOrderHelper_initFields(this);
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        UpdateOrderHelper_getFormData(this);
}

UpdateOrderHelper* UpdateOrderHelper_new(HashMap* hashMap, PageContext* pageContext) {
    UpdateOrderHelper* this = calloc(1, sizeof(UpdateOrderHelper));
    UpdateOrderHelper_init(this, hashMap, pageContext);
    return this;
}


static void UpdateOrderHelper_getFormData(UpdateOrderHelper* this) {
        this->entryId = HttpServletRequest_getParameter(this->request, EntryData_getInstance()->ID);
        this->orderId = HttpServletRequest_getParameter(this->request, OrderData_ID);
        this->userName = HttpServletRequest_getParameter(this->request, UserData_USERNAME);
        this->storeName = HttpServletRequest_getParameter(this->request, StoreFrontData_getInstance()->NAME);
        this->shipDate = HttpServletRequest_getParameter(this->request, OrderHistoryData_SHIPPEDDATE);
        this->orderDate = HttpServletRequest_getParameter(this->request, OrderHistoryData_ORDERDATE);
        this->transDate = HttpServletRequest_getParameter(this->request, OrderHistoryData_TRANSDATE);
        this->cancelDate = HttpServletRequest_getParameter(this->request, OrderHistoryData_CANCELDATE);
        this->status = HttpServletRequest_getParameter(this->request, OrderHistoryData_STATUS);
        this->paymentMethod = HttpServletRequest_getParameter(this->request, PaymentData_METHOD);
        this->name = HttpServletRequest_getParameter(this->request, PaymentData_NAME);
        this->type = HttpServletRequest_getParameter(this->request, PaymentData_TYPE);
        this->expiration = HttpServletRequest_getParameter(this->request, PaymentData_EXPIRATION);
        this->number = HttpServletRequest_getParameter(this->request, PaymentData_NUMBER);
        this->encryption = HttpServletRequest_getParameter(this->request, EntryData_getInstance()->ENCRYPTION);
        this->billingName = HttpServletRequest_getParameter(this->request, BillingAddressData_NAME);
        this->billingStreet = HttpServletRequest_getParameter(this->request, BillingAddressData_STREET);
        this->billingCity = HttpServletRequest_getParameter(this->request, BillingAddressData_CITY);
        this->billingState = HttpServletRequest_getParameter(this->request, BillingAddressData_STATE);
        this->billingCode = HttpServletRequest_getParameter(this->request, BillingAddressData_CODE);
        this->billingCountry = HttpServletRequest_getParameter(this->request, BillingAddressData_COUNTRY);
        this->shippingName = HttpServletRequest_getParameter(this->request, ShippingAddressData_NAME);
        this->shippingStreet = HttpServletRequest_getParameter(this->request, ShippingAddressData_STREET);
        this->shippingCity = HttpServletRequest_getParameter(this->request, ShippingAddressData_CITY);
        this->shippingState = HttpServletRequest_getParameter(this->request, ShippingAddressData_STATE);
        this->shippingCode = HttpServletRequest_getParameter(this->request, ShippingAddressData_CODE);
        this->shippingCountry = HttpServletRequest_getParameter(this->request, ShippingAddressData_COUNTRY);
        this->shippingMethodName = HttpServletRequest_getParameter(this->request, ShippingMethodData_NAME);
        this->subTotal = HttpServletRequest_getParameter(this->request, OrderHistoryData_SUBTOTAL);
        this->shippingCost = HttpServletRequest_getParameter(this->request, OrderHistoryData_SHIPPINGCOST);
        this->tax = HttpServletRequest_getParameter(this->request, OrderHistoryData_TAX);
        this->total = HttpServletRequest_getParameter(this->request, OrderHistoryData_TOTAL);
        this->special = HttpServletRequest_getParameter(this->request, EntryData_getInstance()->SPECIAL);
        this->userComment = HttpServletRequest_getParameter(this->request, OrderData_CUSTOMERCOMMENT);
        this->userCancelComment = HttpServletRequest_getParameter(this->request, OrderData_CUSTOMERCANCELCOMMENT);
        this->storeComment = HttpServletRequest_getParameter(this->request, OrderData_STORECOMMENT);
        this->storeCancelComment = HttpServletRequest_getParameter(this->request, OrderData_STORECANCELCOMMENT);
}


const char* UpdateOrderHelper_update(UpdateOrderHelper* this) {
        JAVA_TRY {
            const char* success = "Successful update";
            HashMap* orderHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap* whereHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(orderHashMap, EntryData_getInstance()->ID, this->entryId);
            HashMap_put(orderHashMap, OrderData_ID, this->orderId);
            HashMap_put(orderHashMap, UserData_USERNAME, this->userName);
            HashMap_put(orderHashMap, StoreFrontData_getInstance()->NAME, this->storeName);
            HashMap_put(orderHashMap, OrderHistoryData_SHIPPEDDATE, this->shipDate);
            HashMap_put(orderHashMap, OrderHistoryData_ORDERDATE, this->orderDate);
            HashMap_put(orderHashMap, OrderHistoryData_TRANSDATE, this->transDate);
            HashMap_put(orderHashMap, OrderHistoryData_CANCELDATE, this->cancelDate);
            HashMap_put(orderHashMap, OrderHistoryData_STATUS, this->status);
            HashMap_put(orderHashMap, PaymentData_METHOD, this->paymentMethod);
            HashMap_put(orderHashMap, PaymentData_NAME, this->name);
            HashMap_put(orderHashMap, PaymentData_TYPE, this->type);
            HashMap_put(orderHashMap, PaymentData_EXPIRATION, this->expiration);
            HashMap_put(orderHashMap, BillingAddressData_NAME, this->billingName);
            HashMap_put(orderHashMap, BillingAddressData_STREET, this->billingStreet);
            HashMap_put(orderHashMap, BillingAddressData_CITY, this->billingCity);
            HashMap_put(orderHashMap, BillingAddressData_STATE, this->billingState);
            HashMap_put(orderHashMap, BillingAddressData_CODE, this->billingCode);
            HashMap_put(orderHashMap, BillingAddressData_COUNTRY, this->billingCountry);
            HashMap_put(orderHashMap, ShippingAddressData_NAME, this->shippingName);
            HashMap_put(orderHashMap, ShippingAddressData_STREET, this->shippingStreet);
            HashMap_put(orderHashMap, ShippingAddressData_CITY, this->shippingCity);
            HashMap_put(orderHashMap, ShippingAddressData_STATE, this->shippingState);
            HashMap_put(orderHashMap, ShippingAddressData_CODE, this->shippingCode);
            HashMap_put(orderHashMap, ShippingAddressData_COUNTRY, this->shippingCountry);
            HashMap_put(orderHashMap, ShippingMethodData_NAME, this->shippingMethodName);
            HashMap_put(orderHashMap, OrderHistoryData_SUBTOTAL, this->subTotal);
            HashMap_put(orderHashMap, OrderHistoryData_SHIPPINGCOST, this->shippingCost);
            HashMap_put(orderHashMap, OrderHistoryData_TAX, this->tax);
            HashMap_put(orderHashMap, OrderHistoryData_TOTAL, this->total);
            HashMap_put(orderHashMap, EntryData_getInstance()->SPECIAL, this->special);
            HashMap_put(orderHashMap, OrderData_CUSTOMERCOMMENT, this->userComment);
            HashMap_put(orderHashMap, OrderData_CUSTOMERCANCELCOMMENT, this->userCancelComment);
            HashMap_put(orderHashMap, OrderData_STORECOMMENT, this->storeComment);
            HashMap_put(orderHashMap, OrderData_STORECANCELCOMMENT, this->storeCancelComment);
            HashMap_put(whereHashMap, OrderData_ID, this->orderId);
            OrderHistoryEntityFactory_update(OrderHistoryEntityFactory_getInstance(), whereHashMap, orderHashMap);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "update()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to update order table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "update()", e);
            }
            return error;
        } JAVA_END_TRY;
}

