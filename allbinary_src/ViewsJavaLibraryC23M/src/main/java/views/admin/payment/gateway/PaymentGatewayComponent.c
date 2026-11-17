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
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/modules/gateway/PaymentGatewayDomNodeFactoryInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h"
#include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct PaymentGatewayComponent PaymentGatewayComponent;
struct PaymentGatewayComponent {
    HttpStoreComponentView base;
    LogUtil* logUtil;
    PaymentGatewayInterface* paymentGatewayInterface;
};


PaymentGatewayComponent* PaymentGatewayComponent_new(TransformInfoInterface* transformInfoInterface, PaymentGatewayInterface* paymentGatewayInterface);

void PaymentGatewayComponent_init(PaymentGatewayComponent* this, TransformInfoInterface* transformInfoInterface, PaymentGatewayInterface* paymentGatewayInterface);
void PaymentGatewayComponent_addDomNodeInterfaces(PaymentGatewayComponent* this);
const char* PaymentGatewayComponent_view(PaymentGatewayComponent* this);

static void PaymentGatewayComponent_initFields(PaymentGatewayComponent* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void PaymentGatewayComponent_init(PaymentGatewayComponent* this, TransformInfoInterface* transformInfoInterface, PaymentGatewayInterface* paymentGatewayInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        PaymentGatewayComponent_initFields(this);
        this->paymentGatewayInterface = paymentGatewayInterface;
}

PaymentGatewayComponent* PaymentGatewayComponent_new(TransformInfoInterface* transformInfoInterface, PaymentGatewayInterface* paymentGatewayInterface) {
    PaymentGatewayComponent* this = calloc(1, sizeof(PaymentGatewayComponent));
    PaymentGatewayComponent_init(this, transformInfoInterface, paymentGatewayInterface);
    return this;
}


// throws Exception
void PaymentGatewayComponent_addDomNodeInterfaces(PaymentGatewayComponent* this) {
        BasicPaymentType* paymentType = BasicPaymentTypeUtil_get(BasicPaymentTypeUtil_getInstance(), PaymentGatewayInterface_getName(this->paymentGatewayInterface));
        PaymentGatewayDomNodeFactoryInterface* paymentGatewayDomNodeFactoryInterface = BasicPaymentType_getPaymentGatewayDomNodeFactoryInterface(paymentType);
        DomNodeInterface* domNodeInterface = ((DomNodeInterface*) PaymentGatewayDomNodeFactoryInterface_getInstance(paymentGatewayDomNodeFactoryInterface, this->paymentGatewayInterface));
        PaymentGatewayComponent_addDomNodeInterface(this, domNodeInterface);
}


const char* PaymentGatewayComponent_view(PaymentGatewayComponent* this) {
        JAVA_TRY {
            PaymentGatewayComponent_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to view payment gateway";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            return error;
        } JAVA_END_TRY;
}

