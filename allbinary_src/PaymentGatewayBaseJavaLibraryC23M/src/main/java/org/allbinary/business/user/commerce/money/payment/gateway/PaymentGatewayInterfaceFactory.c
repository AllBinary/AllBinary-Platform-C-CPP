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
// package org.allbinary.business.user.commerce.money.payment.gateway

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
#include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h"
#include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/request/RequestParams.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactoryInterface.h"

typedef struct PaymentGatewayInterfaceFactory PaymentGatewayInterfaceFactory;
struct PaymentGatewayInterfaceFactory {
    PaymentGatewayInterfaceFactoryInterface PaymentGatewayInterfaceFactoryInterface_interface;
    LogUtil* logUtil;
};


PaymentGatewayInterfaceFactory* PaymentGatewayInterfaceFactory_new(void);

void PaymentGatewayInterfaceFactory_init(PaymentGatewayInterfaceFactory* this);
PaymentGatewayInterface* PaymentGatewayInterfaceFactory_getInstance(PaymentGatewayInterfaceFactory* this, HttpServletRequest* httpServletRequest);
PaymentGatewayInterface* PaymentGatewayInterfaceFactory_getInstance(PaymentGatewayInterfaceFactory* this, BasicPaymentType* paymentType);
PaymentGatewayInterface* PaymentGatewayInterfaceFactory_getInstance(PaymentGatewayInterfaceFactory* this, HashMap* hashMap);

static void PaymentGatewayInterfaceFactory_initFields(PaymentGatewayInterfaceFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


void PaymentGatewayInterfaceFactory_init(PaymentGatewayInterfaceFactory* this) {
    PaymentGatewayInterfaceFactory_initFields(this);
}

PaymentGatewayInterfaceFactory* PaymentGatewayInterfaceFactory_new(void) {
    PaymentGatewayInterfaceFactory* this = calloc(1, sizeof(PaymentGatewayInterfaceFactory));
    PaymentGatewayInterfaceFactory_init(this);
    return this;
}


// throws Exception
PaymentGatewayInterface* PaymentGatewayInterfaceFactory_getInstance(PaymentGatewayInterfaceFactory* this, HttpServletRequest* httpServletRequest) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PAYMENT)) {
                LogUtil_putF(this->logUtil, "Getting", this, commonStrings->GET_INSTANCE);
            }
            return PaymentGatewayInterfaceFactory_getInstance(this, RequestParams_toHashMap(RequestParams_new(httpServletRequest)));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PAYMENTERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "getInstance(HttpServletRequest)", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
PaymentGatewayInterface* PaymentGatewayInterfaceFactory_getInstance(PaymentGatewayInterfaceFactory* this, BasicPaymentType* paymentType) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, JAVA_CALL(PaymentGatewayData_NAME, toString), BasicPaymentType_getName(paymentType));
        return PaymentGatewayInterfaceFactory_getInstance(this, hashMap);
}


// throws Exception
// Java overloaded method: C needs a different name
PaymentGatewayInterface* PaymentGatewayInterfaceFactory_getInstance(PaymentGatewayInterfaceFactory* this, HashMap* hashMap) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            const char* gatewayName = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_NAME, toString)));
            BasicPaymentType* paymentType = BasicPaymentTypeUtil_get(BasicPaymentTypeUtil_getInstance(), gatewayName);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PAYMENT)) {
                LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("Getting PaymentGatewayInterface for PaymentType: ", BasicPaymentType_getName(paymentType)), " with: "), java_string_of(hashMap)), this, commonStrings->GET_INSTANCE);
            }
            PaymentGatewayInterfaceFactoryInterface* paymentGatewayInterfaceFactoryInterface = BasicPaymentType_getPaymentGatewayInterfaceFactoryInterface(paymentType);
            return PaymentGatewayInterfaceFactoryInterface_getInstance(paymentGatewayInterfaceFactoryInterface, hashMap);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PAYMENTERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

