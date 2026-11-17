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
// package views.admin.payment.gateways

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewaysData.h"
#include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h"
#include "org/allbinary/business/user/commerce/money/payment/types/PaymentTypeUtil.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct PaymentGatewaysView PaymentGatewaysView;
struct PaymentGatewaysView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    BasicArrayList* paymentGatewayVector;
};


PaymentGatewaysView* PaymentGatewaysView_new(TransformInfoInterface* transformInfoInterface, BasicArrayList* gatewayVector);

void PaymentGatewaysView_init(PaymentGatewaysView* this, TransformInfoInterface* transformInfoInterface, BasicArrayList* gatewayVector);
Node* PaymentGatewaysView_toXmlNode(PaymentGatewaysView* this, Document* document);
void PaymentGatewaysView_addDomNodeInterfaces(PaymentGatewaysView* this);
const char* PaymentGatewaysView_view(PaymentGatewaysView* this);

static void PaymentGatewaysView_initFields(PaymentGatewaysView* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void PaymentGatewaysView_init(PaymentGatewaysView* this, TransformInfoInterface* transformInfoInterface, BasicArrayList* gatewayVector) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        PaymentGatewaysView_initFields(this);
        this->paymentGatewayVector = gatewayVector;
}

PaymentGatewaysView* PaymentGatewaysView_new(TransformInfoInterface* transformInfoInterface, BasicArrayList* gatewayVector) {
    PaymentGatewaysView* this = calloc(1, sizeof(PaymentGatewaysView));
    PaymentGatewaysView_init(this, transformInfoInterface, gatewayVector);
    return this;
}


// throws Exception
Node* PaymentGatewaysView_toXmlNode(PaymentGatewaysView* this, Document* document) {
        JAVA_TRY {
            const char* storeName = JAVA_CALL(PaymentGatewaysView_getTransformInfoInterface(this), getStoreName);
            Node* paymentGatewaysNode = Document_createElement(document, PaymentGatewaysData_NAME);
            int32_t size = BasicArrayList_size(this->paymentGatewayVector);
            for (int32_t index = 0; index < size; index++) {
                BasicPaymentType* paymentType = ((BasicPaymentType*) BasicArrayList_get(this->paymentGatewayVector, index));
                HashMap* hashMap = BasicPaymentType_toHashMap(paymentType);
                HashMap_put(hashMap, EntryData_getInstance()->DEFAULT, JAVA_CALL(JAVA_CALL(PaymentTypeUtil_getDefault(PaymentTypeUtil_getInstance(), storeName), getBasicPaymentType), getName));
                Node* paymentGatewayNode = ModDomHelper_createNodeWithValueNodes(document, JAVA_CALL(PaymentGatewayData_NAME, toString), hashMap);
                Node_appendChild(paymentGatewaysNode, paymentGatewayNode);
            }
            return paymentGatewaysNode;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XSLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "toXmlNode", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


void PaymentGatewaysView_addDomNodeInterfaces(PaymentGatewaysView* this) {
        PaymentGatewaysView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


const char* PaymentGatewaysView_view(PaymentGatewaysView* this) {
        JAVA_TRY {
            PaymentGatewaysView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to view payment gateways";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            return error;
        } JAVA_END_TRY;
}

