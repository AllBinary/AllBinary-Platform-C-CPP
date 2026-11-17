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
// #include "java/io/Serializable.h"
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/PaymentData.h"
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodData.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderInterface.h"

typedef struct Order Order;
struct Order {
    OrderInterface OrderInterface_interface;
    Serializable Serializable_interface;
    BasketInterface* basket;
    const char* paymentMethod;
    const char* shippingType;
    const char* storeName;
    const char* special;
    const char* id;
    const char* userComment;
    const char* userCancelComment;
    const char* storeComment;
    const char* storeCancelComment;
};


Order* Order_new(BasketInterface* basket);

void Order_init(Order* this, BasketInterface* basket);

Order* Order_new6(const char* storeName, BasketInterface* basket, const char* id, const char* shippingType, const char* special, const char* paymentMethod);
void Order_init6(Order* this, const char* storeName, BasketInterface* basket, const char* id, const char* shippingType, const char* special, const char* paymentMethod);
bool Order_isIdValid(Order* this);
bool Order_isValid(Order* this);
const char* Order_getIdValidationInfo(Order* this);
void Order_setShippingMethod(Order* this, const char* shippingType);
void Order_setPaymentMethod(Order* this, const char* value);
void Order_setSpecial(Order* this, const char* special);
void Order_setId(Order* this, const char* value);
void Order_setStoreName(Order* this, const char* value);
void Order_setUserComments(Order* this, const char* value);
void Order_setUserCancelComments(Order* this, const char* value);
void Order_setStoreComments(Order* this, const char* value);
void Order_setStoreCancelComments(Order* this, const char* value);
BasketInterface* Order_getBasket(Order* this);
const char* Order_getShippingMethod(Order* this);
const char* Order_getPaymentMethod(Order* this);
const char* Order_getSpecial(Order* this);
const char* Order_getId(Order* this);
const char* Order_getStoreName(Order* this);
const char* Order_getUserComments(Order* this);
const char* Order_getUserCancelComments(Order* this);
const char* Order_getStoreComments(Order* this);
const char* Order_getStoreCancelComments(Order* this);
const char* Order_reviewOrder(Order* this, const char* paymentMethod);
const char* Order_viewOrder(Order* this, const char* paymentMethod);
const char* Order_emailOrder(Order* this, const char* userName, const char* paymentMethod, StoreFrontInterface* storeFrontInterface);
HashMap* Order_toHashMapOrder(Order* this);
Node* Order_toXmlNode(Order* this, Document* document);

static void Order_initFields(Order* this) {
    
    
    
    
    
    
    this->userComment = nullptr;
    this->userCancelComment = nullptr;
    this->storeComment = nullptr;
    this->storeCancelComment = nullptr;
}


void Order_init(Order* this, BasketInterface* basket) {
    Order_initFields(this);
        this->basket = basket;
        this->id = nullptr;
        this->shippingType = StringUtil_getInstance()->EMPTY_STRING;
}

Order* Order_new(BasketInterface* basket) {
    Order* this = calloc(1, sizeof(Order));
    Order_init(this, basket);
    return this;
}


void Order_init6(Order* this, const char* storeName, BasketInterface* basket, const char* id, const char* shippingType, const char* special, const char* paymentMethod) {
    Order_initFields(this);
        this->storeName = storeName;
        this->basket = basket;
        this->id = id;
        this->shippingType = shippingType;
        this->special = special;
        this->paymentMethod = paymentMethod;
}

Order* Order_new6(const char* storeName, BasketInterface* basket, const char* id, const char* shippingType, const char* special, const char* paymentMethod) {
    Order* this = calloc(1, sizeof(Order));
    Order_init6(this, storeName, basket, id, shippingType, special, paymentMethod);
    return this;
}


bool Order_isIdValid(Order* this) {
        if (Order_getId(this) == nullptr || JAVA_CALL(Order_getId(this), compareTo, StringUtil_getInstance()->EMPTY_STRING) == 0 || JAVA_CALL(Order_getId(this), length) > OrderHistoryData_MAXIDLEN || !StringValidationUtil_isNumber(StringValidationUtil_getInstance(), Order_getId(this))) {
            return false;
        }
        return true;
}


bool Order_isValid(Order* this) {
        return true;
}


const char* Order_getIdValidationInfo(Order* this) {
        const char* EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
        if (Order_getId(this) == nullptr || JAVA_CALL(Order_getId(this), compareTo, EMPTY_STRING) == 0 || JAVA_CALL(Order_getId(this), length) > OrderHistoryData_MAXIDLEN || !StringValidationUtil_isNumber(StringValidationUtil_getInstance(), Order_getId(this))) {
            return java_concat(java_concat("Please enter a valid order Id < ", java_string_of(OrderHistoryData_MAXIDLEN)), " digits in length.<br>");
        }
        return EMPTY_STRING;
}


void Order_setShippingMethod(Order* this, const char* shippingType) {
        this->shippingType = shippingType;
}


void Order_setPaymentMethod(Order* this, const char* value) {
        this->paymentMethod = value;
}


void Order_setSpecial(Order* this, const char* special) {
        this->special = special;
}


void Order_setId(Order* this, const char* value) {
        this->id = value;
}


void Order_setStoreName(Order* this, const char* value) {
        this->storeName = value;
}


void Order_setUserComments(Order* this, const char* value) {
        this->userComment = value;
}


void Order_setUserCancelComments(Order* this, const char* value) {
        this->userCancelComment = value;
}


void Order_setStoreComments(Order* this, const char* value) {
        this->storeComment = value;
}


void Order_setStoreCancelComments(Order* this, const char* value) {
        this->storeCancelComment = value;
}


BasketInterface* Order_getBasket(Order* this) {
        return this->basket;
}


const char* Order_getShippingMethod(Order* this) {
        return this->shippingType;
}


const char* Order_getPaymentMethod(Order* this) {
        return this->paymentMethod;
}


const char* Order_getSpecial(Order* this) {
        return this->special;
}


const char* Order_getId(Order* this) {
        return this->id;
}


const char* Order_getStoreName(Order* this) {
        return this->storeName;
}


const char* Order_getUserComments(Order* this) {
        return this->userComment;
}


const char* Order_getUserCancelComments(Order* this) {
        return this->userCancelComment;
}


const char* Order_getStoreComments(Order* this) {
        return this->storeComment;
}


const char* Order_getStoreCancelComments(Order* this) {
        return this->storeCancelComment;
}


const char* Order_reviewOrder(Order* this, const char* paymentMethod) {
        return "Create your own Order.reviewOrder";
}


const char* Order_viewOrder(Order* this, const char* paymentMethod) {
        return "Create your own Order.viewOrder";
}


const char* Order_emailOrder(Order* this, const char* userName, const char* paymentMethod, StoreFrontInterface* storeFrontInterface) {
        return "Create your own Order.emailOrder";
}


HashMap* Order_toHashMapOrder(Order* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, PaymentData_METHOD, this->paymentMethod);
        HashMap_put(hashMap, ShippingMethodData_NAME, this->shippingType);
        HashMap_put(hashMap, StoreFrontData_getInstance()->NAME, this->storeName);
        HashMap_put(hashMap, EntryData_getInstance()->SPECIAL, this->special);
        HashMap_put(hashMap, OrderData_ID, this->id);
        HashMap_put(hashMap, OrderData_CUSTOMERCOMMENT, this->userComment);
        HashMap_put(hashMap, OrderData_CUSTOMERCANCELCOMMENT, this->userCancelComment);
        HashMap_put(hashMap, OrderData_STORECOMMENT, this->storeComment);
        HashMap_put(hashMap, OrderData_STORECANCELCOMMENT, this->storeCancelComment);
        return hashMap;
}


// throws Exception
Node* Order_toXmlNode(Order* this, Document* document) {
        HashMap* hashMap = Order_toHashMapOrder(this);
        Set* keySet = HashMap_keySet(hashMap);
        Any** keyArray = Set_toArray(keySet);
        int32_t size = java_array_length(keyArray);
        Node* node = Document_createElement(document, OrderData_ORDER);
        for (int32_t i = 0; i < size; i++) {
            const char* name = ((const char*) keyArray[i]);
            const char* value = ((const char*) HashMap_get(hashMap, name));
            value = StringUtil_getNonNull(StringUtil_getInstance(), value);
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, name, value));
        }
        return node;
}

