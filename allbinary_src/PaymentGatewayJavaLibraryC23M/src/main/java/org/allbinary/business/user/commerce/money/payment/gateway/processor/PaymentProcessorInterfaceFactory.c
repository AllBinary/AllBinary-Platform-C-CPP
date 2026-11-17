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
// package org.allbinary.business.user.commerce.money.payment.gateway.processor

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterfaceRequestFactory.h"
#include "org/allbinary/business/user/commerce/money/payment/types/PaymentType.h"
#include "org/allbinary/business/user/commerce/money/payment/types/PaymentTypeUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct PaymentProcessorInterfaceFactory PaymentProcessorInterfaceFactory;
struct PaymentProcessorInterfaceFactory {
    LogUtil* logUtil;
};

static PaymentProcessorInterfaceFactory* PaymentProcessorInterfaceFactory_instance;

PaymentProcessorInterfaceFactory* PaymentProcessorInterfaceFactory_new(void);
PaymentProcessorInterfaceFactory* PaymentProcessorInterfaceFactory_getInstance(void);

void PaymentProcessorInterfaceFactory_init(PaymentProcessorInterfaceFactory* this);
PaymentProcessorInterface* PaymentProcessorInterfaceFactory_getInstance(PaymentProcessorInterfaceFactory* this, TransformInfoInterface* transformInfoInterface);

// Static fields with runtime initializers: call this once at startup
void PaymentProcessorInterfaceFactory_staticInit(void) {
    PaymentProcessorInterfaceFactory_instance = PaymentProcessorInterfaceFactory_new();
}

static void PaymentProcessorInterfaceFactory_initFields(PaymentProcessorInterfaceFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


PaymentProcessorInterfaceFactory* PaymentProcessorInterfaceFactory_getInstance(void) {
        return PaymentProcessorInterfaceFactory_instance;
}


void PaymentProcessorInterfaceFactory_init(PaymentProcessorInterfaceFactory* this) {
    PaymentProcessorInterfaceFactory_initFields(this);
}

PaymentProcessorInterfaceFactory* PaymentProcessorInterfaceFactory_new(void) {
    PaymentProcessorInterfaceFactory* this = calloc(1, sizeof(PaymentProcessorInterfaceFactory));
    PaymentProcessorInterfaceFactory_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
// synchronized
PaymentProcessorInterface* PaymentProcessorInterfaceFactory_getInstance(PaymentProcessorInterfaceFactory* this, TransformInfoInterface* transformInfoInterface) {
        JAVA_TRY {
            PaymentTransactionInterface* paymentTransactionInterface = PaymentTransactionInterfaceRequestFactory_getInstance(PaymentTransactionInterfaceRequestFactory_getInstance(), transformInfoInterface);
            const char* gatewayName = JAVA_CALL(PaymentTransactionInterface_getOrderHistory(paymentTransactionInterface), getPaymentMethod);
            if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), gatewayName)) {
                PaymentType* paymentType = PaymentTypeUtil_get(PaymentTypeUtil_getInstance(), gatewayName);
                PaymentProcessorInterfaceFactoryInterface* paymentProcessorInterfaceFactoryInterface = PaymentType_getPaymentProcessorInterfaceFactoryInterface(paymentType);
                return ((PaymentProcessorInterface*) PaymentProcessorInterfaceFactoryInterface_getInstance(paymentProcessorInterfaceFactoryInterface, transformInfoInterface, paymentTransactionInterface));
            }
            java_throw(java_exception_new("Exception", "Error Getting PaymentProcessorInterface"));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PAYMENTERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

