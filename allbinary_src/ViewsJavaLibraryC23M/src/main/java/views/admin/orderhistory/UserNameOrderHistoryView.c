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
// package views.admin.orderhistory

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
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderData.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistory.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h"
#include "org/allbinary/business/user/username/UserName.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntity.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/globals/GLOBALS2.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct UserNameOrderHistoryView UserNameOrderHistoryView;
struct UserNameOrderHistoryView {
    HttpStoreComponentView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    HttpServletRequest* request;
    const char* userName;
    const char* shipped;
    const char* partiallyShipped;
    const char* processing;
    const char* preprocessing;
    const char* cancelled;
    const char* ON;
};


UserNameOrderHistoryView* UserNameOrderHistoryView_new(TransformInfoInterface* transformInfoInterface);

void UserNameOrderHistoryView_init(UserNameOrderHistoryView* this, TransformInfoInterface* transformInfoInterface);
void UserNameOrderHistoryView_addDomNodeInterfaces(UserNameOrderHistoryView* this);
const char* UserNameOrderHistoryView_view(UserNameOrderHistoryView* this);
Node* UserNameOrderHistoryView_toXmlNode(UserNameOrderHistoryView* this, Document* document);
bool UserNameOrderHistoryView_isValid(UserNameOrderHistoryView* this);
Document* UserNameOrderHistoryView_toValidationInfoDoc(UserNameOrderHistoryView* this);
Node* UserNameOrderHistoryView_toValidationInfoNode(UserNameOrderHistoryView* this, Document* document);
const char* UserNameOrderHistoryView_validationInfo(UserNameOrderHistoryView* this);
TransformInfoInterface* UserNameOrderHistoryView_getTransformInfoInterface(UserNameOrderHistoryView* this);

static void UserNameOrderHistoryView_initFields(UserNameOrderHistoryView* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    
    
    
    
    this->ON = "on";
}


void UserNameOrderHistoryView_init(UserNameOrderHistoryView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        UserNameOrderHistoryView_initFields(this);
        this->request = ((HttpServletRequest*) JAVA_CALL(UserNameOrderHistoryView_getPageContext(this), getRequest));
        this->userName = HttpServletRequest_getParameter(this->request, UserData_USERNAME);
        this->preprocessing = HttpServletRequest_getParameter(this->request, OrderHistoryData_PREPROCESSINGNAME);
        this->shipped = HttpServletRequest_getParameter(this->request, OrderHistoryData_SHIPPEDNAME);
        this->partiallyShipped = HttpServletRequest_getParameter(this->request, OrderHistoryData_PARTIALLYSHIPPEDNAME);
        this->processing = HttpServletRequest_getParameter(this->request, OrderHistoryData_PROCESSINGNAME);
        this->cancelled = HttpServletRequest_getParameter(this->request, OrderHistoryData_CANCELLEDNAME);
}

UserNameOrderHistoryView* UserNameOrderHistoryView_new(TransformInfoInterface* transformInfoInterface) {
    UserNameOrderHistoryView* this = calloc(1, sizeof(UserNameOrderHistoryView));
    UserNameOrderHistoryView_init(this, transformInfoInterface);
    return this;
}


void UserNameOrderHistoryView_addDomNodeInterfaces(UserNameOrderHistoryView* this) {
        UserNameOrderHistoryView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


// throws Exception
const char* UserNameOrderHistoryView_view(UserNameOrderHistoryView* this) {
        JAVA_TRY {
            UserNameOrderHistoryView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


Node* UserNameOrderHistoryView_toXmlNode(UserNameOrderHistoryView* this, Document* document) {
        JAVA_TRY {
            Node* node = Document_createElement(document, OrderData_ORDERS);
            OrderHistoryEntity* orderHistoryEntity = OrderHistoryEntity_new();
            BasicArrayList* orderReviewVector = OrderHistoryEntity_getOrders(orderHistoryEntity, this->userName);
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
            return nullptr;
        } JAVA_END_TRY;
}


bool UserNameOrderHistoryView_isValid(UserNameOrderHistoryView* this) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, "Started", this, this->commonStrings->IS_VALID);
        }
        if (UserName_isValid(UserName_getInstance(), this->userName) == true) {
            return true;
        }
        return false;
}


Document* UserNameOrderHistoryView_toValidationInfoDoc(UserNameOrderHistoryView* this) {
        return nullptr;
}


Node* UserNameOrderHistoryView_toValidationInfoNode(UserNameOrderHistoryView* this, Document* document) {
        return nullptr;
}


const char* UserNameOrderHistoryView_validationInfo(UserNameOrderHistoryView* this) {
        if (this->userName == nullptr) {
            return "No User Name Specified<br />";
        }
        if (UserName_isValid(UserName_getInstance(), this->userName) == false) {
            return "Invalid User Name<br />";
        }
        return "Unknown Error<br />";
}


// throws Exception
TransformInfoInterface* UserNameOrderHistoryView_getTransformInfoInterface(UserNameOrderHistoryView* this) {
        return HttpStoreComponentView_getTransformInfoInterface((&this->base));
}

