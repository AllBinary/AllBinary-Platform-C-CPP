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
// package views.generic.order

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/user/commerce/inventory/basket/Basket.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketReview.h"
#include "org/allbinary/business/user/commerce/inventory/order/Order.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderData.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistory.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct OrderView OrderView;
struct OrderView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    HttpServletRequest* request;
    Order* order;
    OrderHistory* orderHistory;
    BasketReview* basketReview;
};


OrderView* OrderView_new(TransformInfoInterface* transformInfoInterface);

void OrderView_init(OrderView* this, TransformInfoInterface* transformInfoInterface);
static void OrderView_getFormData(OrderView* this);
Node* OrderView_toXmlNode(OrderView* this, Document* document);
void OrderView_addDomNodeInterfaces(OrderView* this);
const char* OrderView_view(OrderView* this);

static void OrderView_initFields(OrderView* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->order = nullptr;
    this->orderHistory = nullptr;
    this->basketReview = nullptr;
}


void OrderView_init(OrderView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        OrderView_initFields(this);
        this->request = ((HttpServletRequest*) JAVA_CALL(OrderView_getPageContext(this), getRequest));
        OrderView_getFormData(this);
}

OrderView* OrderView_new(TransformInfoInterface* transformInfoInterface) {
    OrderView* this = calloc(1, sizeof(OrderView));
    OrderView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
static void OrderView_getFormData(OrderView* this) {
        const char* id = HttpServletRequest_getParameter(this->request, OrderData_ID);
        if (id == nullptr) {
            id = JAVA_CALL(JAVA_CALL(OrderView_getWeblisketSession(this), getOrder), getId);
        }
        this->order = Order_new(Basket_new());
        Order_setId(this->order, id);
}


Node* OrderView_toXmlNode(OrderView* this, Document* document) {
        JAVA_TRY {
            Node* orderHistoryNode = OrderHistory_toXmlNode(this->orderHistory, document);
            Node* node = Document_createElement(document, OrderHistory_getPaymentMethod(this->orderHistory));
            Node_appendChild(orderHistoryNode, BasketReview_toXmlNode(this->basketReview, document));
            Node_appendChild(node, orderHistoryNode);
            return node;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XSLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "toXmlNode", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


void OrderView_addDomNodeInterfaces(OrderView* this) {
        OrderView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


// throws Exception
const char* OrderView_view(OrderView* this) {
        JAVA_TRY {
            OrderView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

