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
// package org.allbinary.logic.communication.http.request.session

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
// #include "javax/servlet/http/HttpSession.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/commerce/inventory/basket/Basket.h"
#include "org/allbinary/business/user/commerce/inventory/order/Order.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h"
#include "org/allbinary/business/user/role/UserRole.h"
#include "org/allbinary/business/user/role/UserRoleB.h"
#include "org/allbinary/business/user/role/UserRoleData.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h"

typedef struct WeblisketSession WeblisketSession;
struct WeblisketSession {
    WeblisketSessionInterface WeblisketSessionInterface_interface;
    HttpSession* session;
};


WeblisketSession* WeblisketSession_new(HashMap* hashMap, PageContext* pageContext);

void WeblisketSession_init(WeblisketSession* this, HashMap* hashMap, PageContext* pageContext);

WeblisketSession* WeblisketSession_new2(HashMap* hashMap, HttpServletRequest* httpServletRequest);
void WeblisketSession_init2(WeblisketSession* this, HashMap* hashMap, HttpServletRequest* httpServletRequest);
const char* WeblisketSession_getId(WeblisketSession* this);
void WeblisketSession_setPassword(WeblisketSession* this, const char* password);
void WeblisketSession_setUserName(WeblisketSession* this, const char* userName);
void WeblisketSession_setPaymentMethod(WeblisketSession* this, const char* value);
void WeblisketSession_setAuthenticated(WeblisketSession* this);
void WeblisketSession_setRole(WeblisketSession* this, UserRole* aRole);
void WeblisketSession_setAttempts(WeblisketSession* this, int32_t value);
void WeblisketSession_setTimeout(WeblisketSession* this, const char* value);
void WeblisketSession_setStoreName(WeblisketSession* this, const char* value);
const char* WeblisketSession_getWebAppPath(WeblisketSession* this);
const char* WeblisketSession_getUserName(WeblisketSession* this);
const char* WeblisketSession_getPassword(WeblisketSession* this);
const char* WeblisketSession_getPaymentMethod(WeblisketSession* this);
const char* WeblisketSession_getAuthentication(WeblisketSession* this);
int32_t WeblisketSession_getAttempts(WeblisketSession* this);
const char* WeblisketSession_getTimeout(WeblisketSession* this);
const char* WeblisketSession_getStoreName(WeblisketSession* this);
UserRole* WeblisketSession_getRole(WeblisketSession* this);
OrderInterface* WeblisketSession_getOrder(WeblisketSession* this);
void WeblisketSession_setAuthenticated(WeblisketSession* this, bool value);
void WeblisketSession_clear(WeblisketSession* this);
int64_t WeblisketSession_getCreationTime(WeblisketSession* this);
int64_t WeblisketSession_getLastAccessedTime(WeblisketSession* this);
void WeblisketSession_removeBasket(WeblisketSession* this);

static void WeblisketSession_initFields(WeblisketSession* this) {
    
}


void WeblisketSession_init(WeblisketSession* this, HashMap* hashMap, PageContext* pageContext) {
        WeblisketSession_init(this, hashMap, ((HttpServletRequest*) PageContext_getRequest(pageContext)));
}

WeblisketSession* WeblisketSession_new(HashMap* hashMap, PageContext* pageContext) {
    WeblisketSession* this = calloc(1, sizeof(WeblisketSession));
    WeblisketSession_init(this, hashMap, pageContext);
    return this;
}


void WeblisketSession_init2(WeblisketSession* this, HashMap* hashMap, HttpServletRequest* httpServletRequest) {
    WeblisketSession_initFields(this);
        HashMap* propertiesHashMap = hashMap;
        HttpServletRequest* request = httpServletRequest;
        this->session = HttpServletRequest_getSession(request, true);
        if (WeblisketSession_getStoreName(this) == nullptr) {
            WeblisketSession_setStoreName(this, ((const char*) HashMap_get(propertiesHashMap, StoreFrontData_getInstance()->NAME)));
        }
}

WeblisketSession* WeblisketSession_new2(HashMap* hashMap, HttpServletRequest* httpServletRequest) {
    WeblisketSession* this = calloc(1, sizeof(WeblisketSession));
    WeblisketSession_init2(this, hashMap, httpServletRequest);
    return this;
}


const char* WeblisketSession_getId(WeblisketSession* this) {
        return HttpSession_getId(this->session);
}


void WeblisketSession_setPassword(WeblisketSession* this, const char* password) {
        HttpSession_setAttribute(this->session, UserData_PASSWORD, password);
}


void WeblisketSession_setUserName(WeblisketSession* this, const char* userName) {
        HttpSession_setAttribute(this->session, UserData_USERNAME, userName);
}


void WeblisketSession_setPaymentMethod(WeblisketSession* this, const char* value) {
        HttpSession_setAttribute(this->session, JAVA_CALL(PaymentGatewayData_NAME, toString), value);
}


void WeblisketSession_setAuthenticated(WeblisketSession* this) {
        HttpSession_setAttribute(this->session, WeblisketSessionData_AUTHENTICATED, BooleanFactory_getInstance()->TRUE_STRING);
}


void WeblisketSession_setRole(WeblisketSession* this, UserRole* aRole) {
        HttpSession_setAttribute(this->session, JAVA_CALL(UserRoleData_NAME, toString), aRole);
}


void WeblisketSession_setAttempts(WeblisketSession* this, int32_t value) {
        HttpSession_setAttribute(this->session, WeblisketSessionData_ATTEMPTS, value);
}


void WeblisketSession_setTimeout(WeblisketSession* this, const char* value) {
        HttpSession_setAttribute(this->session, WeblisketSessionData_TIMEOUT, value);
}


void WeblisketSession_setStoreName(WeblisketSession* this, const char* value) {
        HttpSession_setAttribute(this->session, StoreFrontData_getInstance()->NAME, value);
}


const char* WeblisketSession_getWebAppPath(WeblisketSession* this) {
        return ((const char*) HttpSession_getAttribute(this->session, org_allbinary->globals->GLOBALS2->WEBAPPPATH));
}


const char* WeblisketSession_getUserName(WeblisketSession* this) {
        return ((const char*) HttpSession_getAttribute(this->session, UserData_USERNAME));
}


const char* WeblisketSession_getPassword(WeblisketSession* this) {
        return ((const char*) HttpSession_getAttribute(this->session, UserData_PASSWORD));
}


const char* WeblisketSession_getPaymentMethod(WeblisketSession* this) {
        return ((const char*) HttpSession_getAttribute(this->session, JAVA_CALL(PaymentGatewayData_NAME, toString)));
}


const char* WeblisketSession_getAuthentication(WeblisketSession* this) {
        return ((const char*) HttpSession_getAttribute(this->session, WeblisketSessionData_AUTHENTICATED));
}


int32_t WeblisketSession_getAttempts(WeblisketSession* this) {
        return ((int32_t) HttpSession_getAttribute(this->session, WeblisketSessionData_ATTEMPTS));
}


const char* WeblisketSession_getTimeout(WeblisketSession* this) {
        return ((const char*) HttpSession_getAttribute(this->session, WeblisketSessionData_TIMEOUT));
}


const char* WeblisketSession_getStoreName(WeblisketSession* this) {
        return ((const char*) HttpSession_getAttribute(this->session, StoreFrontData_getInstance()->NAME));
}


// throws Exception
UserRole* WeblisketSession_getRole(WeblisketSession* this) {
        UserRole* userRole = ((UserRole*) HttpSession_getAttribute(this->session, JAVA_CALL(UserRoleData_NAME, toString)));
        if (userRole != nullptr) {
            return UserRoleB_getRole(JAVA_CALL(UserRole_getBasicUserRole(userRole), getRole));
        } else {
            return nullptr;
        }
}


// throws Exception
OrderInterface* WeblisketSession_getOrder(WeblisketSession* this) {
        StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(WeblisketSession_getStoreName(this));
        const char* basketName = StoreFrontInterface_getBasketName(storeFrontInterface);
        if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), basketName)) {
            OrderInterface* orderInterface = ((OrderInterface*) HttpSession_getAttribute(this->session, basketName));
            if (orderInterface == nullptr) {
                orderInterface = ((OrderInterface*) Order_new(Basket_new()));
            }
            HttpSession_setAttribute(this->session, basketName, orderInterface);
            return orderInterface;
        } else {
            java_throw(java_exception_new("Exception", "Basket Name Not Found"));
        }
}


// Java overloaded method: C needs a different name
void WeblisketSession_setAuthenticated(WeblisketSession* this, bool value) {
        HttpSession_setAttribute(this->session, WeblisketSessionData_AUTHENTICATED, BooleanFactory_getInstance()->FALSE_STRING);
}


void WeblisketSession_clear(WeblisketSession* this) {
        HttpSession_removeAttribute(this->session, WeblisketSessionData_AUTHENTICATED);
        HttpSession_removeAttribute(this->session, WeblisketSessionData_TIMEOUT);
        HttpSession_removeAttribute(this->session, JAVA_CALL(UserRoleData_NAME, toString));
        HttpSession_removeAttribute(this->session, UserData_USERNAME);
}


int64_t WeblisketSession_getCreationTime(WeblisketSession* this) {
        return HttpSession_getCreationTime(this->session);
}


int64_t WeblisketSession_getLastAccessedTime(WeblisketSession* this) {
        return HttpSession_getLastAccessedTime(this->session);
}


void WeblisketSession_removeBasket(WeblisketSession* this) {
        StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(WeblisketSession_getStoreName(this));
        const char* basketName = StoreFrontInterface_getBasketName(storeFrontInterface);
        if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), basketName)) {
            HttpSession_removeAttribute(this->session, basketName);
        }
}

