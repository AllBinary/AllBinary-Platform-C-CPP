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
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct PaymentGatewayView PaymentGatewayView;
struct PaymentGatewayView {
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    PaymentGatewayInterface* paymentGatewayInterface;
};


PaymentGatewayView* PaymentGatewayView_new(PaymentGatewayInterface* paymentGatewayInterface);

void PaymentGatewayView_init(PaymentGatewayView* this, PaymentGatewayInterface* paymentGatewayInterface);
PaymentGatewayInterface* PaymentGatewayView_getPaymentGatewayInterface(PaymentGatewayView* this);
HashMap* PaymentGatewayView_toHashMap(PaymentGatewayView* this);
Node* PaymentGatewayView_toXmlNode(PaymentGatewayView* this, Document* document);

static void PaymentGatewayView_initFields(PaymentGatewayView* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
}


void PaymentGatewayView_init(PaymentGatewayView* this, PaymentGatewayInterface* paymentGatewayInterface) {
    PaymentGatewayView_initFields(this);
        this->paymentGatewayInterface = paymentGatewayInterface;
}

PaymentGatewayView* PaymentGatewayView_new(PaymentGatewayInterface* paymentGatewayInterface) {
    PaymentGatewayView* this = calloc(1, sizeof(PaymentGatewayView));
    PaymentGatewayView_init(this, paymentGatewayInterface);
    return this;
}


PaymentGatewayInterface* PaymentGatewayView_getPaymentGatewayInterface(PaymentGatewayView* this) {
        return this->paymentGatewayInterface;
}


// throws Exception
HashMap* PaymentGatewayView_toHashMap(PaymentGatewayView* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        return hashMap;
}


// throws Exception
Node* PaymentGatewayView_toXmlNode(PaymentGatewayView* this, Document* document) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, "toXmlNode");
            }
            HashMap* hashMap = PaymentGatewayMapping_toHashMap(PaymentGatewayMapping_new(this->paymentGatewayInterface));
            HashMap_putAll(hashMap, PaymentGatewayView_toHashMap(this));
            Node* paymentGatewayNode = ModDomHelper_createNodeWithValueNodes(document, JAVA_CALL(PaymentGatewayData_NAME, toString), hashMap);
            return paymentGatewayNode;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XSLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "toXmlNode", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

