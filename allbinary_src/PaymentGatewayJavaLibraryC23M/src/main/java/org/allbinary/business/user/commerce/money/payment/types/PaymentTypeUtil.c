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
// package org.allbinary.business.user.commerce.money.payment.types

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewaysData.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/crypt/file/CryptFileReader.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct PaymentTypeUtil PaymentTypeUtil;
struct PaymentTypeUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* PAYMENTGATEWAYFILEPATHSTRING;
    const char* SHIPPINGMETHODSFILENAME;
    const char* defaultName;
    BasicArrayList* paymentTypeVector;
};

static PaymentTypeUtil* PaymentTypeUtil_instance;

PaymentTypeUtil* PaymentTypeUtil_new(void);
PaymentTypeUtil* PaymentTypeUtil_getInstance(void);

void PaymentTypeUtil_init(PaymentTypeUtil* this);
void PaymentTypeUtil_add(PaymentTypeUtil* this, PaymentType* paymentType);
PaymentType* PaymentTypeUtil_get(PaymentTypeUtil* this, const char* paymentTypeString);
void PaymentTypeUtil_initDefault(PaymentTypeUtil* this, const char* storeName);
PaymentType* PaymentTypeUtil_getDefault(PaymentTypeUtil* this, const char* storeName);
bool PaymentTypeUtil_isContain(PaymentTypeUtil* this, PaymentType* paymentType);
BasicArrayList* PaymentTypeUtil_difference(PaymentTypeUtil* this, BasicArrayList* a_PaymentTypeVector);

// Static fields with runtime initializers: call this once at startup
void PaymentTypeUtil_staticInit(void) {
    PaymentTypeUtil_instance = PaymentTypeUtil_new();
}

static void PaymentTypeUtil_initFields(PaymentTypeUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->SHIPPINGMETHODSFILENAME = "paymentGatewayTypes.xml";
    this->defaultName = nullptr;
    this->paymentTypeVector = BasicArrayListD_new();
}


// Java static initializer: call this once at startup
void PaymentTypeUtil_staticInitializer(void) {
}


PaymentTypeUtil* PaymentTypeUtil_getInstance(void) {
        return PaymentTypeUtil_instance;
}


void PaymentTypeUtil_init(PaymentTypeUtil* this) {
    PaymentTypeUtil_initFields(this);
        StringMaker* stringBuffer = StringMaker_new();
        const char* sep = AbPathData_getInstance()->SEPARATOR;
        StringMaker_append(stringBuffer, sep);
        StringMaker_append(stringBuffer, "generic");
        StringMaker_append(stringBuffer, sep);
        StringMaker_append(stringBuffer, "user");
        StringMaker_append(stringBuffer, sep);
        StringMaker_append(stringBuffer, "commerce");
        StringMaker_append(stringBuffer, sep);
        StringMaker_append(stringBuffer, "money");
        StringMaker_append(stringBuffer, sep);
        StringMaker_append(stringBuffer, "payment");
        StringMaker_append(stringBuffer, sep);
        StringMaker_append(stringBuffer, "gateway");
        StringMaker_append(stringBuffer, sep);
        this->PAYMENTGATEWAYFILEPATHSTRING = StringMaker_toString(stringBuffer);
}

PaymentTypeUtil* PaymentTypeUtil_new(void) {
    PaymentTypeUtil* this = calloc(1, sizeof(PaymentTypeUtil));
    PaymentTypeUtil_init(this);
    return this;
}


void PaymentTypeUtil_add(PaymentTypeUtil* this, PaymentType* paymentType) {
        BasicArrayList_add(this->paymentTypeVector, paymentType);
}


// throws Exception
PaymentType* PaymentTypeUtil_get(PaymentTypeUtil* this, const char* paymentTypeString) {
        int32_t size = BasicArrayList_size(this->paymentTypeVector);
        for (int32_t i = 0; i < size; i++) {
            PaymentType* paymentType = ((PaymentType*) BasicArrayList_get(this->paymentTypeVector, i));
            if (JAVA_CALL(JAVA_CALL(PaymentType_getBasicPaymentType(paymentType), getName), compareTo, paymentTypeString) == 0) {
                return paymentType;
            }
        }
        java_throw(java_exception_new("Exception", java_concat("Unknown PaymentType: ", paymentTypeString)));
}


// throws Exception
void PaymentTypeUtil_initDefault(PaymentTypeUtil* this, const char* storeName) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PAYMENT)) {
            LogUtil_putF(this->logUtil, java_concat("initDefault Payment: ", this->defaultName), this, "initDefault");
        }
        if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), this->defaultName)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getMainPath));
            StringMaker_append(stringBuffer, JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH);
            StringMaker_append(stringBuffer, storeName);
            StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
            StringMaker_append(stringBuffer, this->PAYMENTGATEWAYFILEPATHSTRING);
            AbPath* abPath = ((AbPath*) AbPath_new(StringMaker_toString(stringBuffer), this->SHIPPINGMETHODSFILENAME));
            const char* data = CryptFileReader_get(CryptFileReader_new(TransformInfoObjectConfigData_getInstance()->UNCRYPTED_EXTENSION, TransformInfoObjectConfigData_getInstance()->ENCRYPTED_EXTENSION), abPath);
            Document* document = DomDocumentHelper_create(data);
            NodeList* nodeList = Document_getElementsByTagName(document, PaymentGatewaysData_NAME);
            for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
                Node* node = NodeList_item(nodeList, index);
                Node* defaultPaymentGatewayNode = DomSearchHelper_getNode(EntryData_getInstance()->DEFAULT, Node_getChildNodes(node));
                const char* defaultPaymentGatewayNodeValue = DomNodeHelper_getTextNodeValue(defaultPaymentGatewayNode);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PAYMENT)) {
                    LogUtil_putF(this->logUtil, java_concat("DefaultPaymentGatewayNodeValue: ", defaultPaymentGatewayNodeValue), this, "initDefault");
                }
                if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), defaultPaymentGatewayNodeValue)) {
                    this->defaultName = defaultPaymentGatewayNodeValue;
                }
            }
        }
}


// throws Exception
PaymentType* PaymentTypeUtil_getDefault(PaymentTypeUtil* this, const char* storeName) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PAYMENT)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "getDefault");
        }
        PaymentTypeUtil_initDefault(this, storeName);
        if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), this->defaultName)) {
            return PaymentTypeUtil_get(this, this->defaultName);
        }
        java_throw(java_exception_new("Exception", java_concat("No Default: ", this->defaultName)));
}


bool PaymentTypeUtil_isContain(PaymentTypeUtil* this, PaymentType* paymentType) {
        return BasicArrayList_contains(this->paymentTypeVector, paymentType);
}


BasicArrayList* PaymentTypeUtil_difference(PaymentTypeUtil* this, BasicArrayList* a_PaymentTypeVector) {
        BasicArrayList* diff = BasicArrayListD_new();
        int32_t size = BasicArrayList_size(this->paymentTypeVector);
        for (int32_t i = 0; i < size; i++) {
            PaymentType* paymentType = ((PaymentType*) BasicArrayList_get(this->paymentTypeVector, i));
            if (!BasicArrayList_contains(a_PaymentTypeVector, paymentType)) {
                BasicArrayList_add(diff, paymentType);
            }
        }
        return diff;
}

