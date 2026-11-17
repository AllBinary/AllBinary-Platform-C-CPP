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
// package views.generic.address.billing

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
#include "org/allbinary/business/user/address/BillingAddressData.h"
#include "org/allbinary/business/user/address/StreetAddress.h"
#include "org/allbinary/business/user/address/StreetAddressData.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct BillingAddressesView BillingAddressesView;
struct BillingAddressesView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    HttpServletRequest* request;
    BasicArrayList* streetAddresses;
};


BillingAddressesView* BillingAddressesView_new(TransformInfoInterface* transformInfoInterface);

void BillingAddressesView_init(BillingAddressesView* this, TransformInfoInterface* transformInfoInterface);
HttpServletRequest* BillingAddressesView_getRequest(BillingAddressesView* this);
Node* BillingAddressesView_toXmlNode(BillingAddressesView* this, Document* document);
void BillingAddressesView_addDomNodeInterfaces(BillingAddressesView* this);
const char* BillingAddressesView_view(BillingAddressesView* this);

static void BillingAddressesView_initFields(BillingAddressesView* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->streetAddresses = nullptr;
}


void BillingAddressesView_init(BillingAddressesView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        BillingAddressesView_initFields(this);
        TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) BillingAddressesView_getTransformInfoInterface(this));
        this->request = ((HttpServletRequest*) JAVA_CALL(TransformInfoHttpInterface_getPageContext(httpTransformInfoInterface), getRequest));
}

BillingAddressesView* BillingAddressesView_new(TransformInfoInterface* transformInfoInterface) {
    BillingAddressesView* this = calloc(1, sizeof(BillingAddressesView));
    BillingAddressesView_init(this, transformInfoInterface);
    return this;
}


HttpServletRequest* BillingAddressesView_getRequest(BillingAddressesView* this) {
        return this->request;
}


Node* BillingAddressesView_toXmlNode(BillingAddressesView* this, Document* document) {
        JAVA_TRY {
            Node* billingAddressesNode = Document_createElement(document, BillingAddressData_MULTIPLE);
            int32_t size = BasicArrayList_size(this->streetAddresses);
            for (int32_t index = 0; index < size; index++) {
                StreetAddress* streetAddress = ((StreetAddress*) BasicArrayList_get(this->streetAddresses, index));
                Node_appendChild(billingAddressesNode, StreetAddress_toXmlNode(streetAddress, document));
            }
            Node_appendChild(billingAddressesNode, ModDomHelper_createNameValueNodes(document, StreetAddressData_NUMBEROFADDRESSES, Integer_toString(BasicArrayList_size(this->streetAddresses))));
            return billingAddressesNode;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XSLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "toXmlNode", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


void BillingAddressesView_addDomNodeInterfaces(BillingAddressesView* this) {
        BillingAddressesView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


// throws Exception
const char* BillingAddressesView_view(BillingAddressesView* this) {
        JAVA_TRY {
            BillingAddressesView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

