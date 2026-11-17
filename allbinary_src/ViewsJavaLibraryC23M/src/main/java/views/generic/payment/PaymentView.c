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
// package views.generic.payment

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
#include "org/allbinary/business/user/commerce/money/payment/Payment.h"
#include "org/allbinary/business/user/commerce/money/payment/PaymentData.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/PaymentEntityFactory.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct PaymentView PaymentView;
struct PaymentView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
};


PaymentView* PaymentView_new(TransformInfoInterface* transformInfoInterface);

void PaymentView_init(PaymentView* this, TransformInfoInterface* transformInfoInterface);
Node* PaymentView_toXmlNode(PaymentView* this, Document* document);
void PaymentView_addDomNodeInterfaces(PaymentView* this);
const char* PaymentView_view(PaymentView* this);

static void PaymentView_initFields(PaymentView* this) {
    this->logUtil = LogUtil_getInstance();
}


void PaymentView_init(PaymentView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        PaymentView_initFields(this);
}

PaymentView* PaymentView_new(TransformInfoInterface* transformInfoInterface) {
    PaymentView* this = calloc(1, sizeof(PaymentView));
    PaymentView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Node* PaymentView_toXmlNode(PaymentView* this, Document* document) {
        JAVA_TRY {
            Node* paymentNode = Document_createElement(document, PaymentData_PAYMENT);
            Document_appendChild(document, paymentNode);
            BasicArrayList* paymentVector = JAVA_CALL(PaymentEntityFactory_getPaymentEntityInstance(PaymentEntityFactory_getInstance()), get, JAVA_CALL(PaymentView_getWeblisketSession(this), getUserName));
            int32_t size = BasicArrayList_size(paymentVector);
            for (int32_t index = 0; index < size; index++) {
                Payment* payment = ((Payment*) BasicArrayList_get(paymentVector, index));
                Node_appendChild(paymentNode, Payment_toXmlNode(payment, document));
            }
            return paymentNode;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "toXmlNode", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


void PaymentView_addDomNodeInterfaces(PaymentView* this) {
        PaymentView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


const char* PaymentView_view(PaymentView* this) {
        JAVA_TRY {
            PaymentView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to view Payment";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            return error;
        } JAVA_END_TRY;
}

