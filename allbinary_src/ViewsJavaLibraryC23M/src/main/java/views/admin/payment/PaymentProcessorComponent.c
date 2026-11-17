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
// package views.admin.payment

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/processor/PaymentProcessorInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/processor/PaymentProcessorInterfaceFactory.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct PaymentProcessorComponent PaymentProcessorComponent;
struct PaymentProcessorComponent {
    HttpStoreComponentView base;
    LogUtil* logUtil;
};


PaymentProcessorComponent* PaymentProcessorComponent_new(TransformInfoInterface* transformInfoInterface);

void PaymentProcessorComponent_init(PaymentProcessorComponent* this, TransformInfoInterface* transformInfoInterface);
void PaymentProcessorComponent_addDomNodeInterfaces(PaymentProcessorComponent* this);
const char* PaymentProcessorComponent_view(PaymentProcessorComponent* this);

static void PaymentProcessorComponent_initFields(PaymentProcessorComponent* this) {
    this->logUtil = LogUtil_getInstance();
}


void PaymentProcessorComponent_init(PaymentProcessorComponent* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        PaymentProcessorComponent_initFields(this);
}

PaymentProcessorComponent* PaymentProcessorComponent_new(TransformInfoInterface* transformInfoInterface) {
    PaymentProcessorComponent* this = calloc(1, sizeof(PaymentProcessorComponent));
    PaymentProcessorComponent_init(this, transformInfoInterface);
    return this;
}


// throws Exception
void PaymentProcessorComponent_addDomNodeInterfaces(PaymentProcessorComponent* this) {
        PaymentProcessorInterface* paymentProcessorInterface = PaymentProcessorInterfaceFactory_getInstance(PaymentProcessorInterfaceFactory_getInstance(), PaymentProcessorComponent_getTransformInfoInterface(this));
        PaymentProcessorInterface_process(paymentProcessorInterface);
        TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) PaymentProcessorComponent_getTransformInfoInterface(this));
        JAVA_CALL(TransformInfoHttpInterface_getWeblisketSession(httpTransformInfoInterface), removeBasket);
        PaymentProcessorComponent_addDomNodeInterface(this, ((DomNodeInterface*) paymentProcessorInterface));
}


// throws Exception
const char* PaymentProcessorComponent_view(PaymentProcessorComponent* this) {
        JAVA_TRY {
            PaymentProcessorComponent_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

