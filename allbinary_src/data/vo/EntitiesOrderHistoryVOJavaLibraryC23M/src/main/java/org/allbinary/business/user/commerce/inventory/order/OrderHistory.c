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
// package org.allbinary.business.user.commerce.inventory.order

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Date.h"
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/address/BillingAddressData.h"
#include "org/allbinary/business/user/address/ShippingAddressData.h"
#include "org/allbinary/business/user/address/StreetAddress.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h"
#include "org/allbinary/business/user/commerce/money/Money.h"
#include "org/allbinary/business/user/commerce/money/MoneyException.h"
#include "org/allbinary/business/user/commerce/money/payment/Payment.h"
#include "org/allbinary/business/user/commerce/money/payment/PaymentData.h"
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodData.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/business/user/commerce/inventory/order/Order.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryInterface.h"

typedef struct OrderHistory OrderHistory;
struct OrderHistory {
    Order base;
    OrderHistoryInterface OrderHistoryInterface_interface;
    const char* userName;
    StreetAddress* shippingAddress;
    StreetAddress* billingAddress;
    Payment* payment;
    const char* shipDate;
    const char* orderDate;
    const char* transDate;
    const char* cancelDate;
    const char* status;
    Money* subTotal;
    Money* shippingCost;
    Money* taxes;
    Money* total;
};


OrderHistory* OrderHistory_new(BasketInterface* basketInterface);

void OrderHistory_init(OrderHistory* this, BasketInterface* basketInterface);

OrderHistory* OrderHistory_new2(BasketInterface* basketInterface, OrderHistory* orderHistory);
void OrderHistory_init2(OrderHistory* this, BasketInterface* basketInterface, OrderHistory* orderHistory);

OrderHistory* OrderHistory_new2(BasketInterface* basketInterface, HashMap* orderHistoryHashMap);
void OrderHistory_init2(OrderHistory* this, BasketInterface* basketInterface, HashMap* orderHistoryHashMap);
void OrderHistory_setUserName(OrderHistory* this, const char* value);
void OrderHistory_setDefaultShippingAddress(OrderHistory* this, StreetAddress* shippingAddress);
void OrderHistory_setBillingAddress(OrderHistory* this, StreetAddress* billingAddress);
void OrderHistory_setPaymentInfo(OrderHistory* this, Payment* payment);
void OrderHistory_setShipDate(OrderHistory* this, const char* value);
void OrderHistory_setOrderDate(OrderHistory* this, const char* value);
void OrderHistory_setTransDate(OrderHistory* this, const char* value);
void OrderHistory_setCancelDate(OrderHistory* this, const char* value);
void OrderHistory_setStatus(OrderHistory* this, const char* value);
void OrderHistory_setSubTotal(OrderHistory* this, Money* value);
void OrderHistory_setShippingCost(OrderHistory* this, Money* value);
void OrderHistory_setTaxes(OrderHistory* this, Money* value);
void OrderHistory_setTotal(OrderHistory* this, Money* value);
const char* OrderHistory_getUserName(OrderHistory* this);
StreetAddress* OrderHistory_getShippingAddress(OrderHistory* this);
StreetAddress* OrderHistory_getBillingAddress(OrderHistory* this);
Payment* OrderHistory_getPaymentInfo(OrderHistory* this);
const char* OrderHistory_getShipDate(OrderHistory* this);
const char* OrderHistory_getOrderDate(OrderHistory* this);
const char* OrderHistory_getTransDate(OrderHistory* this);
const char* OrderHistory_getCancelDate(OrderHistory* this);
const char* OrderHistory_getStatus(OrderHistory* this);
Money* OrderHistory_getSubTotal(OrderHistory* this);
Money* OrderHistory_getShippingCost(OrderHistory* this);
Money* OrderHistory_getTaxes(OrderHistory* this);
Money* OrderHistory_getTotal(OrderHistory* this);
HashMap* OrderHistory_toHashMap(OrderHistory* this);
Node* OrderHistory_toXmlNode(OrderHistory* this, Document* document);
const char* OrderHistory_getPaymentMethod(OrderHistory* this);

static void OrderHistory_initFields(OrderHistory* this) {
    
    
    
    
    
    
    
    
    
    
    
    
    
}


void OrderHistory_init(OrderHistory* this, BasketInterface* basketInterface) {
        Order_init(&this->base, basketInterface);
        OrderHistory_initFields(this);
}

OrderHistory* OrderHistory_new(BasketInterface* basketInterface) {
    OrderHistory* this = calloc(1, sizeof(OrderHistory));
    OrderHistory_init(this, basketInterface);
    return this;
}


void OrderHistory_init2(OrderHistory* this, BasketInterface* basketInterface, OrderHistory* orderHistory) {
        Order_init(&this->base, OrderHistory_getStoreName(orderHistory), basketInterface, OrderHistory_getId(orderHistory), OrderHistory_getShippingMethod(orderHistory), OrderHistory_getSpecial(orderHistory), OrderHistory_getPaymentMethod(orderHistory));
        OrderHistory_initFields(this);
        this->userName = OrderHistory_getUserName(orderHistory);
        this->shippingAddress = OrderHistory_getShippingAddress(orderHistory);
        this->billingAddress = OrderHistory_getBillingAddress(orderHistory);
        this->payment = OrderHistory_getPaymentInfo(orderHistory);
        this->shipDate = OrderHistory_getShipDate(orderHistory);
        this->orderDate = OrderHistory_getOrderDate(orderHistory);
        this->transDate = OrderHistory_getTransDate(orderHistory);
        this->cancelDate = OrderHistory_getCancelDate(orderHistory);
        this->status = OrderHistory_getStatus(orderHistory);
        this->subTotal = OrderHistory_getSubTotal(orderHistory);
        this->shippingCost = OrderHistory_getShippingCost(orderHistory);
        this->taxes = OrderHistory_getTaxes(orderHistory);
        this->total = OrderHistory_getTotal(orderHistory);
        Order_setUserComments((&this->base), ((const char*) OrderHistory_getUserComments(orderHistory)));
        Order_setUserCancelComments((&this->base), ((const char*) OrderHistory_getUserCancelComments(orderHistory)));
        Order_setStoreComments((&this->base), ((const char*) OrderHistory_getStoreComments(orderHistory)));
        Order_setStoreCancelComments((&this->base), ((const char*) OrderHistory_getStoreCancelComments(orderHistory)));
}

OrderHistory* OrderHistory_new2(BasketInterface* basketInterface, OrderHistory* orderHistory) {
    OrderHistory* this = calloc(1, sizeof(OrderHistory));
    OrderHistory_init2(this, basketInterface, orderHistory);
    return this;
}


void OrderHistory_init2(OrderHistory* this, BasketInterface* basketInterface, HashMap* orderHistoryHashMap) {
        Order_init(&this->base, ((const char*) HashMap_get(orderHistoryHashMap, StoreFrontData_getInstance()->NAME)), basketInterface, ((const char*) HashMap_get(orderHistoryHashMap, OrderData_ID)), ((const char*) HashMap_get(orderHistoryHashMap, ShippingMethodData_NAME)), ((const char*) HashMap_get(orderHistoryHashMap, EntryData_getInstance()->SPECIAL)), ((const char*) HashMap_get(orderHistoryHashMap, PaymentData_METHOD)));
        OrderHistory_initFields(this);
        this->shippingAddress = StreetAddress_new(((const char*) HashMap_get(orderHistoryHashMap, ShippingAddressData_NAME)), ((const char*) HashMap_get(orderHistoryHashMap, ShippingAddressData_STREET)), ((const char*) HashMap_get(orderHistoryHashMap, ShippingAddressData_CITY)), ((const char*) HashMap_get(orderHistoryHashMap, ShippingAddressData_STATE)), ((const char*) HashMap_get(orderHistoryHashMap, ShippingAddressData_CODE)), ((const char*) HashMap_get(orderHistoryHashMap, ShippingAddressData_COUNTRY)));
        this->billingAddress = StreetAddress_new(((const char*) HashMap_get(orderHistoryHashMap, BillingAddressData_NAME)), ((const char*) HashMap_get(orderHistoryHashMap, BillingAddressData_STREET)), ((const char*) HashMap_get(orderHistoryHashMap, BillingAddressData_CITY)), ((const char*) HashMap_get(orderHistoryHashMap, BillingAddressData_STATE)), ((const char*) HashMap_get(orderHistoryHashMap, BillingAddressData_CODE)), ((const char*) HashMap_get(orderHistoryHashMap, BillingAddressData_COUNTRY)));
        this->payment = Payment_new(orderHistoryHashMap);
        this->userName = ((const char*) HashMap_get(orderHistoryHashMap, UserData_USERNAME));
        this->orderDate = ((const char*) HashMap_get(orderHistoryHashMap, OrderHistoryData_ORDERDATE));
        this->shipDate = ((const char*) HashMap_get(orderHistoryHashMap, OrderHistoryData_SHIPPEDDATE));
        this->transDate = ((const char*) HashMap_get(orderHistoryHashMap, OrderHistoryData_TRANSDATE));
        this->cancelDate = ((const char*) HashMap_get(orderHistoryHashMap, OrderHistoryData_CANCELDATE));
        this->status = ((const char*) HashMap_get(orderHistoryHashMap, OrderHistoryData_STATUS));
        this->subTotal = Money_new(((const char*) HashMap_get(orderHistoryHashMap, OrderHistoryData_SUBTOTAL)));
        this->total = Money_new(((const char*) HashMap_get(orderHistoryHashMap, OrderHistoryData_TOTAL)));
        this->shippingCost = Money_new(((const char*) HashMap_get(orderHistoryHashMap, OrderHistoryData_SHIPPINGCOST)));
        this->taxes = Money_new(((const char*) HashMap_get(orderHistoryHashMap, OrderHistoryData_TAX)));
        Order_setUserComments((&this->base), ((const char*) HashMap_get(orderHistoryHashMap, OrderData_CUSTOMERCOMMENT)));
        Order_setUserCancelComments((&this->base), ((const char*) HashMap_get(orderHistoryHashMap, OrderData_CUSTOMERCANCELCOMMENT)));
        Order_setStoreComments((&this->base), ((const char*) HashMap_get(orderHistoryHashMap, OrderData_STORECOMMENT)));
        Order_setStoreCancelComments((&this->base), ((const char*) HashMap_get(orderHistoryHashMap, OrderData_STORECANCELCOMMENT)));
}

OrderHistory* OrderHistory_new2(BasketInterface* basketInterface, HashMap* orderHistoryHashMap) {
    OrderHistory* this = calloc(1, sizeof(OrderHistory));
    OrderHistory_init2(this, basketInterface, orderHistoryHashMap);
    return this;
}


void OrderHistory_setUserName(OrderHistory* this, const char* value) {
        this->userName = value;
}


void OrderHistory_setDefaultShippingAddress(OrderHistory* this, StreetAddress* shippingAddress) {
        this->shippingAddress = shippingAddress;
}


void OrderHistory_setBillingAddress(OrderHistory* this, StreetAddress* billingAddress) {
        this->billingAddress = billingAddress;
}


void OrderHistory_setPaymentInfo(OrderHistory* this, Payment* payment) {
        this->payment = payment;
}


void OrderHistory_setShipDate(OrderHistory* this, const char* value) {
        this->shipDate = value;
}


void OrderHistory_setOrderDate(OrderHistory* this, const char* value) {
        this->orderDate = value;
}


void OrderHistory_setTransDate(OrderHistory* this, const char* value) {
        this->transDate = value;
}


void OrderHistory_setCancelDate(OrderHistory* this, const char* value) {
        this->cancelDate = value;
}


void OrderHistory_setStatus(OrderHistory* this, const char* value) {
        this->status = value;
}


void OrderHistory_setSubTotal(OrderHistory* this, Money* value) {
        this->subTotal = value;
}


void OrderHistory_setShippingCost(OrderHistory* this, Money* value) {
        this->shippingCost = value;
}


void OrderHistory_setTaxes(OrderHistory* this, Money* value) {
        this->taxes = value;
}


void OrderHistory_setTotal(OrderHistory* this, Money* value) {
        this->total = value;
}


const char* OrderHistory_getUserName(OrderHistory* this) {
        return this->userName;
}


StreetAddress* OrderHistory_getShippingAddress(OrderHistory* this) {
        return this->shippingAddress;
}


StreetAddress* OrderHistory_getBillingAddress(OrderHistory* this) {
        return this->billingAddress;
}


Payment* OrderHistory_getPaymentInfo(OrderHistory* this) {
        return this->payment;
}


const char* OrderHistory_getShipDate(OrderHistory* this) {
        return this->shipDate;
}


const char* OrderHistory_getOrderDate(OrderHistory* this) {
        return this->orderDate;
}


const char* OrderHistory_getTransDate(OrderHistory* this) {
        return this->transDate;
}


const char* OrderHistory_getCancelDate(OrderHistory* this) {
        return this->cancelDate;
}


const char* OrderHistory_getStatus(OrderHistory* this) {
        return this->status;
}


Money* OrderHistory_getSubTotal(OrderHistory* this) {
        return this->subTotal;
}


Money* OrderHistory_getShippingCost(OrderHistory* this) {
        return this->shippingCost;
}


Money* OrderHistory_getTaxes(OrderHistory* this) {
        return this->taxes;
}


Money* OrderHistory_getTotal(OrderHistory* this) {
        return this->total;
}


HashMap* OrderHistory_toHashMap(OrderHistory* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, UserData_USERNAME, this->userName);
        HashMap_put(hashMap, OrderHistoryData_ORDERDATE, this->orderDate);
        HashMap_put(hashMap, OrderHistoryData_SHIPPEDDATE, this->shipDate);
        HashMap_put(hashMap, OrderHistoryData_TRANSDATE, this->transDate);
        HashMap_put(hashMap, OrderHistoryData_CANCELDATE, this->cancelDate);
        HashMap_put(hashMap, OrderHistoryData_ORDERDATEFORMATTED, Date_toString(Date_new(Long_longValue(this->orderDate))));
        HashMap_put(hashMap, OrderHistoryData_SHIPPEDDATEFORMATTED, Date_toString(Date_new(Long_longValue(this->shipDate))));
        HashMap_put(hashMap, OrderHistoryData_TRANSDATEFORMATTED, Date_toString(Date_new(Long_longValue(this->transDate))));
        HashMap_put(hashMap, OrderHistoryData_CANCELDATEFORMATTED, Date_toString(Date_new(Long_longValue(this->cancelDate))));
        HashMap_put(hashMap, OrderHistoryData_STATUS, this->status);
        HashMap_put(hashMap, OrderHistoryData_SUBTOTAL, Money_toString(this->subTotal));
        HashMap_put(hashMap, OrderHistoryData_TOTAL, Money_toString(this->total));
        HashMap_put(hashMap, OrderHistoryData_SHIPPINGCOST, Money_toString(this->shippingCost));
        HashMap_put(hashMap, OrderHistoryData_TAX, Money_toString(this->taxes));
        return hashMap;
}


// throws Exception
Node* OrderHistory_toXmlNode(OrderHistory* this, Document* document) {
        HashMap* hashMap = OrderHistory_toHashMap(this);
        Set* keySet = HashMap_keySet(hashMap);
        Any** keyArray = Set_toArray(keySet);
        int32_t size = java_array_length(keyArray);
        Node* node = Document_createElement(document, OrderHistoryData_ORDERHISTORY);
        Node_appendChild(node, Order_toXmlNode((&this->base), document));
        Node* billingAddressNode = Document_createElement(document, BillingAddressData_BILLINGADDRESS);
        Node_appendChild(billingAddressNode, StreetAddress_toXmlNode(this->billingAddress, document));
        Node* shippingAddressNode = Document_createElement(document, ShippingAddressData_SHIPPINGADDRESS);
        Node_appendChild(shippingAddressNode, StreetAddress_toXmlNode(this->shippingAddress, document));
        Node_appendChild(node, billingAddressNode);
        Node_appendChild(node, shippingAddressNode);
        Node_appendChild(node, Payment_toXmlNode(this->payment, document));
        for (int32_t i = 0; i < size; i++) {
            const char* name = ((const char*) keyArray[i]);
            const char* value = ((const char*) HashMap_get(hashMap, name));
            value = StringUtil_getNonNull(StringUtil_getInstance(), value);
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, name, value));
        }
        return node;
}


const char* OrderHistory_getPaymentMethod(OrderHistory* this) {
        return Order_getPaymentMethod((&this->base));
}

