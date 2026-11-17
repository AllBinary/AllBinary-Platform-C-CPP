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
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/http/HttpSession.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h"
#include "org/allbinary/business/user/role/BasicUserRole.h"
#include "org/allbinary/business/user/role/BasicUserRoleData.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"

typedef struct BasicWeblisketSession BasicWeblisketSession;
struct BasicWeblisketSession {
    HttpSession* session;
    PageContext* pageContext;
};


BasicWeblisketSession* BasicWeblisketSession_new(PageContext* pageContext);

void BasicWeblisketSession_init(BasicWeblisketSession* this, PageContext* pageContext);
void BasicWeblisketSession_setRole(BasicWeblisketSession* this, BasicUserRole* aRole);
BasicUserRole* BasicWeblisketSession_getRole(BasicWeblisketSession* this);
void BasicWeblisketSession_setPassword(BasicWeblisketSession* this, const char* password);
void BasicWeblisketSession_setUserName(BasicWeblisketSession* this, const char* userName);
void BasicWeblisketSession_setPaymentMethod(BasicWeblisketSession* this, const char* value);
void BasicWeblisketSession_setAuthenticated(BasicWeblisketSession* this);
void BasicWeblisketSession_setAttempts(BasicWeblisketSession* this, int32_t value);
void BasicWeblisketSession_setTimeout(BasicWeblisketSession* this, const char* value);
void BasicWeblisketSession_setStoreName(BasicWeblisketSession* this, const char* value);
const char* BasicWeblisketSession_getWebAppPath(BasicWeblisketSession* this);
const char* BasicWeblisketSession_getUserName(BasicWeblisketSession* this);
const char* BasicWeblisketSession_getPassword(BasicWeblisketSession* this);
const char* BasicWeblisketSession_getPaymentMethod(BasicWeblisketSession* this);
const char* BasicWeblisketSession_getAuthentication(BasicWeblisketSession* this);
int32_t BasicWeblisketSession_getAttempts(BasicWeblisketSession* this);
const char* BasicWeblisketSession_getTimeout(BasicWeblisketSession* this);
const char* BasicWeblisketSession_getStoreName(BasicWeblisketSession* this);
void BasicWeblisketSession_setAuthenticated(BasicWeblisketSession* this, bool value);
void BasicWeblisketSession_clear(BasicWeblisketSession* this);
int64_t BasicWeblisketSession_getCreationTime(BasicWeblisketSession* this);
int64_t BasicWeblisketSession_getLastAccessedTime(BasicWeblisketSession* this);

static void BasicWeblisketSession_initFields(BasicWeblisketSession* this) {
    
    
}


void BasicWeblisketSession_init(BasicWeblisketSession* this, PageContext* pageContext) {
    BasicWeblisketSession_initFields(this);
        this->pageContext = pageContext;
        HttpServletRequest* request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        this->session = HttpServletRequest_getSession(request, true);
}

BasicWeblisketSession* BasicWeblisketSession_new(PageContext* pageContext) {
    BasicWeblisketSession* this = calloc(1, sizeof(BasicWeblisketSession));
    BasicWeblisketSession_init(this, pageContext);
    return this;
}


void BasicWeblisketSession_setRole(BasicWeblisketSession* this, BasicUserRole* aRole) {
        HttpSession_setAttribute(this->session, JAVA_CALL(BasicUserRoleData_NAME, toString), aRole);
}


BasicUserRole* BasicWeblisketSession_getRole(BasicWeblisketSession* this) {
        return ((BasicUserRole*) HttpSession_getAttribute(this->session, JAVA_CALL(BasicUserRoleData_NAME, toString)));
}


void BasicWeblisketSession_setPassword(BasicWeblisketSession* this, const char* password) {
        HttpSession_setAttribute(this->session, UserData_PASSWORD, password);
}


void BasicWeblisketSession_setUserName(BasicWeblisketSession* this, const char* userName) {
        HttpSession_setAttribute(this->session, UserData_USERNAME, userName);
}


void BasicWeblisketSession_setPaymentMethod(BasicWeblisketSession* this, const char* value) {
        HttpSession_setAttribute(this->session, JAVA_CALL(PaymentGatewayData_NAME, toString), value);
}


void BasicWeblisketSession_setAuthenticated(BasicWeblisketSession* this) {
        HttpSession_setAttribute(this->session, WeblisketSessionData_AUTHENTICATED, BooleanFactory_getInstance()->TRUE_STRING);
}


void BasicWeblisketSession_setAttempts(BasicWeblisketSession* this, int32_t value) {
        HttpSession_setAttribute(this->session, WeblisketSessionData_ATTEMPTS, value);
}


void BasicWeblisketSession_setTimeout(BasicWeblisketSession* this, const char* value) {
        HttpSession_setAttribute(this->session, WeblisketSessionData_TIMEOUT, value);
}


void BasicWeblisketSession_setStoreName(BasicWeblisketSession* this, const char* value) {
        HttpSession_setAttribute(this->session, StoreFrontData_getInstance()->NAME, value);
}


const char* BasicWeblisketSession_getWebAppPath(BasicWeblisketSession* this) {
        return ((const char*) HttpSession_getAttribute(this->session, org_allbinary->globals->GLOBALS2->WEBAPPPATH));
}


const char* BasicWeblisketSession_getUserName(BasicWeblisketSession* this) {
        return ((const char*) HttpSession_getAttribute(this->session, UserData_USERNAME));
}


const char* BasicWeblisketSession_getPassword(BasicWeblisketSession* this) {
        return ((const char*) HttpSession_getAttribute(this->session, UserData_PASSWORD));
}


const char* BasicWeblisketSession_getPaymentMethod(BasicWeblisketSession* this) {
        return ((const char*) HttpSession_getAttribute(this->session, JAVA_CALL(PaymentGatewayData_NAME, toString)));
}


const char* BasicWeblisketSession_getAuthentication(BasicWeblisketSession* this) {
        return ((const char*) HttpSession_getAttribute(this->session, WeblisketSessionData_AUTHENTICATED));
}


int32_t BasicWeblisketSession_getAttempts(BasicWeblisketSession* this) {
        return ((int32_t) HttpSession_getAttribute(this->session, WeblisketSessionData_ATTEMPTS));
}


const char* BasicWeblisketSession_getTimeout(BasicWeblisketSession* this) {
        return ((const char*) HttpSession_getAttribute(this->session, WeblisketSessionData_TIMEOUT));
}


const char* BasicWeblisketSession_getStoreName(BasicWeblisketSession* this) {
        return ((const char*) HttpSession_getAttribute(this->session, StoreFrontData_getInstance()->NAME));
}


// Java overloaded method: C needs a different name
void BasicWeblisketSession_setAuthenticated(BasicWeblisketSession* this, bool value) {
        HttpSession_setAttribute(this->session, WeblisketSessionData_AUTHENTICATED, BooleanFactory_getInstance()->FALSE_STRING);
}


void BasicWeblisketSession_clear(BasicWeblisketSession* this) {
        HttpSession_removeAttribute(this->session, WeblisketSessionData_AUTHENTICATED);
        HttpSession_removeAttribute(this->session, WeblisketSessionData_TIMEOUT);
        HttpSession_removeAttribute(this->session, JAVA_CALL(BasicUserRoleData_NAME, toString));
        HttpSession_removeAttribute(this->session, UserData_USERNAME);
}


int64_t BasicWeblisketSession_getCreationTime(BasicWeblisketSession* this) {
        return HttpSession_getCreationTime(this->session);
}


int64_t BasicWeblisketSession_getLastAccessedTime(BasicWeblisketSession* this) {
        int64_t lastAccessedTime = HttpSession_getLastAccessedTime(this->session);
        return lastAccessedTime;
}

