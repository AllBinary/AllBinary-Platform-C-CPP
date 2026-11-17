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
// package org.allbinary.business.user.commerce.money.payment

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/ServletRequest.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/control/crypt/SuperCrypt.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/business/user/commerce/money/payment/PaymentInterface.h"

typedef struct Payment Payment;
struct Payment {
    PaymentInterface PaymentInterface_interface;
    DomNodeInterface DomNodeInterface_interface;
    const char* name;
    const char* expiration;
    const char* encryption;
    const char* number;
    const char* id;
    const char* type;
    const char* tenderType;
    const char* transactionType;
    const char* aba;
    const char* account;
    const char* accountType;
    const char* authorizationCode;
    const char* checkNumber;
    const char* checkType;
    const char* driversLicense;
    const char* magneticInkCheckReader;
    bool isDefault;
};


Payment* Payment_new(HashMap* payment);

void Payment_init(Payment* this, HashMap* payment);

Payment* Payment_new1(ServletRequest* request);
void Payment_init1(Payment* this, ServletRequest* request);

Payment* Payment_new0();
void Payment_init0(Payment* this);
bool Payment_isValid(Payment* this);
void Payment_setTenderType(Payment* this, const char* value);
void Payment_setTransactionType(Payment* this, const char* value);
void Payment_setAuthorizationCode(Payment* this, const char* value);
void Payment_setCheckType(Payment* this, const char* value);
void Payment_setCheckNumber(Payment* this, const char* value);
void Payment_setDriversLicense(Payment* this, const char* value);
void Payment_setMagneticInkCheckReader(Payment* this, const char* value);
void Payment_setAba(Payment* this, const char* value);
void Payment_setAccountType(Payment* this, const char* value);
void Payment_setName(Payment* this, const char* value);
void Payment_setType(Payment* this, const char* value);
void Payment_setExpiration(Payment* this, const char* value);
void Payment_setNumber(Payment* this, const char* value);
const char* Payment_getId(Payment* this);
const char* Payment_getName(Payment* this);
const char* Payment_getType(Payment* this);
const char* Payment_getExpiration(Payment* this);
const char* Payment_getEncryption(Payment* this);
const char* Payment_getNumber(Payment* this);
const char* Payment_getTenderType(Payment* this);
const char* Payment_getTransactionType(Payment* this);
const char* Payment_getAba(Payment* this);
const char* Payment_getAccount(Payment* this);
const char* Payment_getAccountType(Payment* this);
const char* Payment_getAuthorizationCode(Payment* this);
const char* Payment_getCheckNumber(Payment* this);
const char* Payment_getCheckType(Payment* this);
const char* Payment_getDriversLicense(Payment* this);
const char* Payment_getMagneticInkCheckReader(Payment* this);
const char* Payment_getLastFour(Payment* this);
bool Payment_isDefault(Payment* this);
HashMap* Payment_toHashMap(Payment* this);
Node* Payment_toXmlNode(Payment* this, Document* document);
Document* Payment_toXmlDoc(Payment* this);
const char* Payment_view(Payment* this);
Document* Payment_toValidationInfoDoc(Payment* this);
Node* Payment_toValidationInfoNode(Payment* this, Document* document);
const char* Payment_validationInfo(Payment* this);

static void Payment_initFields(Payment* this) {
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    this->isDefault = false;
}


void Payment_init(Payment* this, HashMap* payment) {
    Payment_initFields(this);
        this->name = ((const char*) HashMap_get(payment, PaymentData_NAME));
        this->type = ((const char*) HashMap_get(payment, PaymentData_TYPE));
        this->expiration = ((const char*) HashMap_get(payment, PaymentData_EXPIRATION));
        this->encryption = ((const char*) HashMap_get(payment, EntryData_getInstance()->ENCRYPTION));
        this->number = ((const char*) SuperCrypt_decrypt(SuperCrypt_new(Integer_intValue(this->encryption)), ((const char*) HashMap_get(payment, PaymentData_NUMBER))));
        this->id = ((const char*) HashMap_get(payment, PaymentData_ID));
        const char* def = ((const char*) HashMap_get(payment, EntryData_getInstance()->DEFAULT));
        if (def != nullptr && strcmp(def, EntryData_getInstance()->DEFAULT) == 0) {
            this->isDefault = true;
        } else {
            this->isDefault = false;
        }
        this->tenderType = ((const char*) HashMap_get(payment, PaymentData_TENDERTYPE));
        this->transactionType = ((const char*) HashMap_get(payment, PaymentData_TRANSACTIONTYPE));
        this->aba = ((const char*) HashMap_get(payment, PaymentData_ABA));
        this->account = ((const char*) HashMap_get(payment, PaymentData_ACCOUNT));
        this->accountType = ((const char*) HashMap_get(payment, PaymentData_ACCOUNTTYPE));
        this->authorizationCode = ((const char*) HashMap_get(payment, PaymentData_AUTHORIZATIONCODE));
        this->checkNumber = ((const char*) HashMap_get(payment, PaymentData_CHECKNUMBER));
        this->checkType = ((const char*) HashMap_get(payment, PaymentData_CHECKTYPE));
        this->driversLicense = ((const char*) HashMap_get(payment, PaymentData_DRIVERSLICENSE));
        this->magneticInkCheckReader = ((const char*) HashMap_get(payment, PaymentData_MAGNETICINKCHECKREADER));
}

Payment* Payment_new(HashMap* payment) {
    Payment* this = calloc(1, sizeof(Payment));
    Payment_init(this, payment);
    return this;
}


void Payment_init1(Payment* this, ServletRequest* request) {
    Payment_initFields(this);
        this->name = ServletRequest_getParameter(request, PaymentData_NAME);
        this->type = ServletRequest_getParameter(request, PaymentData_TYPE);
        this->expiration = ServletRequest_getParameter(request, PaymentData_EXPIRATION);
        this->number = ServletRequest_getParameter(request, PaymentData_NUMBER);
        this->tenderType = ServletRequest_getParameter(request, PaymentData_TENDERTYPE);
        this->transactionType = ServletRequest_getParameter(request, PaymentData_TRANSACTIONTYPE);
        this->aba = ServletRequest_getParameter(request, PaymentData_ABA);
        this->account = ServletRequest_getParameter(request, PaymentData_ACCOUNT);
        this->accountType = ServletRequest_getParameter(request, PaymentData_ACCOUNTTYPE);
        this->authorizationCode = ServletRequest_getParameter(request, PaymentData_AUTHORIZATIONCODE);
        this->checkNumber = ServletRequest_getParameter(request, PaymentData_CHECKNUMBER);
        this->checkType = ServletRequest_getParameter(request, PaymentData_CHECKTYPE);
        this->driversLicense = ServletRequest_getParameter(request, PaymentData_DRIVERSLICENSE);
        this->magneticInkCheckReader = ServletRequest_getParameter(request, PaymentData_MAGNETICINKCHECKREADER);
}

Payment* Payment_new1(ServletRequest* request) {
    Payment* this = calloc(1, sizeof(Payment));
    Payment_init1(this, request);
    return this;
}


void Payment_init0(Payment* this) {
    Payment_initFields(this);
}

Payment* Payment_new0(void) {
    Payment* this = calloc(1, sizeof(Payment));
    Payment_init0(this);
    return this;
}


bool Payment_isValid(Payment* this) {
        StringUtil* stringUtil = StringUtil_getInstance();
        bool aFalse = false;
        if (this->name == nullptr || strcmp(this->name, stringUtil->EMPTY_STRING) == 0) {
            return aFalse;
        }
        if (this->type == nullptr || strcmp(this->type, stringUtil->EMPTY_STRING) == 0) {
            return aFalse;
        }
        if (this->expiration == nullptr || strcmp(this->expiration, stringUtil->EMPTY_STRING) == 0) {
            return aFalse;
        }
        if (this->number == nullptr || strcmp(this->number, stringUtil->EMPTY_STRING) == 0) {
            return aFalse;
        }
        if (((int32_t) strlen(this->number)) > org_allbinary->business->user->commerce->money->payment->types->CreditCardType->MAXLEN) {
            return aFalse;
        }
        return true;
}


void Payment_setTenderType(Payment* this, const char* value) {
        this->tenderType = value;
}


void Payment_setTransactionType(Payment* this, const char* value) {
        this->transactionType = value;
}


void Payment_setAuthorizationCode(Payment* this, const char* value) {
        this->authorizationCode = value;
}


void Payment_setCheckType(Payment* this, const char* value) {
        this->checkType = value;
}


void Payment_setCheckNumber(Payment* this, const char* value) {
        this->checkNumber = value;
}


void Payment_setDriversLicense(Payment* this, const char* value) {
        this->driversLicense = value;
}


void Payment_setMagneticInkCheckReader(Payment* this, const char* value) {
        this->magneticInkCheckReader = value;
}


void Payment_setAba(Payment* this, const char* value) {
        this->aba = value;
}


void Payment_setAccountType(Payment* this, const char* value) {
        this->accountType = value;
}


void Payment_setName(Payment* this, const char* value) {
        this->name = value;
}


void Payment_setType(Payment* this, const char* value) {
        this->type = value;
}


void Payment_setExpiration(Payment* this, const char* value) {
        this->expiration = value;
}


void Payment_setNumber(Payment* this, const char* value) {
        this->number = value;
}


const char* Payment_getId(Payment* this) {
        return this->id;
}


const char* Payment_getName(Payment* this) {
        return this->name;
}


const char* Payment_getType(Payment* this) {
        return this->type;
}


const char* Payment_getExpiration(Payment* this) {
        return this->expiration;
}


const char* Payment_getEncryption(Payment* this) {
        return this->encryption;
}


const char* Payment_getNumber(Payment* this) {
        return this->number;
}


const char* Payment_getTenderType(Payment* this) {
        return this->tenderType;
}


const char* Payment_getTransactionType(Payment* this) {
        return this->transactionType;
}


const char* Payment_getAba(Payment* this) {
        return this->aba;
}


const char* Payment_getAccount(Payment* this) {
        return this->account;
}


const char* Payment_getAccountType(Payment* this) {
        return this->accountType;
}


const char* Payment_getAuthorizationCode(Payment* this) {
        return this->authorizationCode;
}


const char* Payment_getCheckNumber(Payment* this) {
        return this->checkNumber;
}


const char* Payment_getCheckType(Payment* this) {
        return this->checkType;
}


const char* Payment_getDriversLicense(Payment* this) {
        return this->driversLicense;
}


const char* Payment_getMagneticInkCheckReader(Payment* this) {
        return this->magneticInkCheckReader;
}


const char* Payment_getLastFour(Payment* this) {
        if (((int32_t) strlen(this->number)) > PaymentData_MIN && ((int32_t) strlen(this->number)) <= PaymentData_MAX) {
            return java_substring(this->number, ((int32_t) strlen(this->number)) - 4, (int32_t) strlen(this->number));
        } else {
            return "Invalid #";
        }
}


bool Payment_isDefault(Payment* this) {
        return this->isDefault;
}


HashMap* Payment_toHashMap(Payment* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, PaymentData_NAME, this->name);
        HashMap_put(hashMap, PaymentData_TYPE, this->type);
        HashMap_put(hashMap, PaymentData_EXPIRATION, this->expiration);
        HashMap_put(hashMap, PaymentData_NUMBER, Payment_getLastFour(this));
        HashMap_put(hashMap, PaymentData_TENDERTYPE, this->tenderType);
        HashMap_put(hashMap, PaymentData_TRANSACTIONTYPE, this->transactionType);
        HashMap_put(hashMap, PaymentData_ABA, this->aba);
        HashMap_put(hashMap, PaymentData_ACCOUNT, this->account);
        HashMap_put(hashMap, PaymentData_ACCOUNTTYPE, this->accountType);
        HashMap_put(hashMap, PaymentData_AUTHORIZATIONCODE, this->authorizationCode);
        HashMap_put(hashMap, PaymentData_CHECKNUMBER, this->checkNumber);
        HashMap_put(hashMap, PaymentData_DRIVERSLICENSE, this->driversLicense);
        HashMap_put(hashMap, PaymentData_MAGNETICINKCHECKREADER, this->magneticInkCheckReader);
        if (this->isDefault) {
            HashMap_put(hashMap, EntryData_getInstance()->DEFAULT, EntryData_getInstance()->DEFAULT);
        } else {
            HashMap_put(hashMap, EntryData_getInstance()->DEFAULT, StringUtil_getInstance()->EMPTY_STRING);
        }
        return hashMap;
}


// throws Exception
Node* Payment_toXmlNode(Payment* this, Document* document) {
        HashMap* hashMap = Payment_toHashMap(this);
        Node* node = ModDomHelper_createNameValueNodes(document, PaymentData_PAYMENT, hashMap);
        return node;
}


Document* Payment_toXmlDoc(Payment* this) {
        return nullptr;
}


const char* Payment_view(Payment* this) {
        return nullptr;
}


Document* Payment_toValidationInfoDoc(Payment* this) {
        return nullptr;
}


Node* Payment_toValidationInfoNode(Payment* this, Document* document) {
        return nullptr;
}


const char* Payment_validationInfo(Payment* this) {
        return nullptr;
}

