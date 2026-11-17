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
// package views.admin.payment.gateway

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayPrimaryKey.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpComposite.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"

typedef struct PaymentGatewayViewAbstract PaymentGatewayViewAbstract;
struct PaymentGatewayViewAbstract {
    TransformInfoHttpComposite base;
    PaymentGatewayPrimaryKey* paymentGatewayPrimaryKey;
};


PaymentGatewayViewAbstract* PaymentGatewayViewAbstract_new(TransformInfoInterface* transformInfoInterface);

void PaymentGatewayViewAbstract_init(PaymentGatewayViewAbstract* this, TransformInfoInterface* transformInfoInterface);
void PaymentGatewayViewAbstract_getFormData(PaymentGatewayViewAbstract* this, HttpServletRequest* request);
PaymentGatewayPrimaryKey* PaymentGatewayViewAbstract_getPaymentGatewayPrimaryKey(PaymentGatewayViewAbstract* this);
void PaymentGatewayViewAbstract_setPaymentGatewayPrimaryKey(PaymentGatewayViewAbstract* this, PaymentGatewayPrimaryKey* paymentGatewayPrimaryKey);

static void PaymentGatewayViewAbstract_initFields(PaymentGatewayViewAbstract* this) {
    this->paymentGatewayPrimaryKey = nullptr;
}


void PaymentGatewayViewAbstract_init(PaymentGatewayViewAbstract* this, TransformInfoInterface* transformInfoInterface) {
        TransformInfoHttpComposite_init(&this->base, transformInfoInterface);
        PaymentGatewayViewAbstract_initFields(this);
        PaymentGatewayViewAbstract_getFormData(this, ((HttpServletRequest*) JAVA_CALL(PaymentGatewayViewAbstract_getPageContext(this), getRequest)));
}

PaymentGatewayViewAbstract* PaymentGatewayViewAbstract_new(TransformInfoInterface* transformInfoInterface) {
    PaymentGatewayViewAbstract* this = calloc(1, sizeof(PaymentGatewayViewAbstract));
    PaymentGatewayViewAbstract_init(this, transformInfoInterface);
    return this;
}


void PaymentGatewayViewAbstract_getFormData(PaymentGatewayViewAbstract* this, HttpServletRequest* request) {
        const char* storeName = JAVA_CALL(PaymentGatewayViewAbstract_getWeblisketSession(this), getStoreName);
        const char* gatewayName = HttpServletRequest_getParameter(request, JAVA_CALL(PaymentGatewayData_NAME, toString));
        PaymentGatewayViewAbstract_setPaymentGatewayPrimaryKey(this, PaymentGatewayPrimaryKey_new(storeName, gatewayName));
}


PaymentGatewayPrimaryKey* PaymentGatewayViewAbstract_getPaymentGatewayPrimaryKey(PaymentGatewayViewAbstract* this) {
        return this->paymentGatewayPrimaryKey;
}


void PaymentGatewayViewAbstract_setPaymentGatewayPrimaryKey(PaymentGatewayViewAbstract* this, PaymentGatewayPrimaryKey* paymentGatewayPrimaryKey) {
        this->paymentGatewayPrimaryKey = paymentGatewayPrimaryKey;
}

