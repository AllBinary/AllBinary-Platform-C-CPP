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
// package views.generic.order.history

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
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderData.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistory.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntity.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/globals/GLOBALS2.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct OrderHistoryView OrderHistoryView;
struct OrderHistoryView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    HttpServletRequest* request;
    const char* shipped;
    const char* partiallyShipped;
    const char* processing;
    const char* preprocessing;
    const char* cancelled;
};


OrderHistoryView* OrderHistoryView_new(TransformInfoInterface* transformInfoInterface);

void OrderHistoryView_init(OrderHistoryView* this, TransformInfoInterface* transformInfoInterface);
Node* OrderHistoryView_toXmlNode(OrderHistoryView* this, Document* document);
void OrderHistoryView_addDomNodeInterfaces(OrderHistoryView* this);
const char* OrderHistoryView_view(OrderHistoryView* this);

static void OrderHistoryView_initFields(OrderHistoryView* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    
    
    
}


void OrderHistoryView_init(OrderHistoryView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        OrderHistoryView_initFields(this);
        this->request = ((HttpServletRequest*) JAVA_CALL(OrderHistoryView_getPageContext(this), getRequest));
        this->preprocessing = HttpServletRequest_getParameter(this->request, OrderHistoryData_PREPROCESSINGNAME);
        this->shipped = HttpServletRequest_getParameter(this->request, OrderHistoryData_SHIPPEDNAME);
        this->partiallyShipped = HttpServletRequest_getParameter(this->request, OrderHistoryData_PARTIALLYSHIPPEDNAME);
        this->processing = HttpServletRequest_getParameter(this->request, OrderHistoryData_PROCESSINGNAME);
        this->cancelled = HttpServletRequest_getParameter(this->request, OrderHistoryData_CANCELLEDNAME);
}

OrderHistoryView* OrderHistoryView_new(TransformInfoInterface* transformInfoInterface) {
    OrderHistoryView* this = calloc(1, sizeof(OrderHistoryView));
    OrderHistoryView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Node* OrderHistoryView_toXmlNode(OrderHistoryView* this, Document* document) {
        JAVA_TRY {
            Node* node = Document_createElement(document, OrderData_ORDERS);
            OrderHistoryEntity* orderHistoryEntity = OrderHistoryEntity_new();
            BasicArrayList* orderReviewVector = OrderHistoryEntity_getOrders(orderHistoryEntity, JAVA_CALL(OrderHistoryView_getWeblisketSession(this), getUserName));
            int32_t size = BasicArrayList_size(orderReviewVector);
            for (int32_t index = 0; index < size; index++) {
                OrderHistory* orderHistory = ((OrderHistory*) BasicArrayList_get(orderReviewVector, index));
                Node* orderHistoryNode = OrderHistory_toXmlNode(orderHistory, document);
                Node* orderNode = Document_createElement(document, OrderHistory_getPaymentMethod(orderHistory));
                Node_appendChild(node, OrderHistory_toXmlNode(orderHistory, document));
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "Attempt to View a users order history", this, "view");
            }
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, OrderHistoryData_PREPROCESSINGNAME, OrderHistoryData_PREPROCESSING));
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, OrderHistoryData_PROCESSINGNAME, OrderHistoryData_PROCESSING));
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, OrderHistoryData_CANCELLEDNAME, OrderHistoryData_CANCELLED));
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, OrderHistoryData_PARTIALLYSHIPPEDNAME, OrderHistoryData_PARTIALLYSHIPPED));
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, OrderHistoryData_SHIPPEDNAME, OrderHistoryData_SHIPPED));
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, HttpStoreComponentView_GLOBALS2->VIEWNAME, HttpStoreComponentView_GLOBALS2->VIEW));
            return node;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XSLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "toXmlNode", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


void OrderHistoryView_addDomNodeInterfaces(OrderHistoryView* this) {
        OrderHistoryView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


// throws Exception
const char* OrderHistoryView_view(OrderHistoryView* this) {
        JAVA_TRY {
            OrderHistoryView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

