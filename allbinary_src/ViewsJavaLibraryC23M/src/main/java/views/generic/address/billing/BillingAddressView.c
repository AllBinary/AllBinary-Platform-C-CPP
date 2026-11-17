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
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/user/address/StreetAddress.h"
#include "org/allbinary/business/user/address/StreetAddressData.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"
#include "views/generic/address/StatesView.h"

typedef struct BillingAddressView BillingAddressView;
struct BillingAddressView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    HttpServletRequest* request;
    StreetAddress* streetAddress;
};


BillingAddressView* BillingAddressView_new(TransformInfoInterface* transformInfoInterface);

void BillingAddressView_init(BillingAddressView* this, TransformInfoInterface* transformInfoInterface);
HttpServletRequest* BillingAddressView_getRequest(BillingAddressView* this);
Node* BillingAddressView_toXmlNode(BillingAddressView* this, Document* document);
void BillingAddressView_addDomNodeInterfaces(BillingAddressView* this);
const char* BillingAddressView_view(BillingAddressView* this);

static void BillingAddressView_initFields(BillingAddressView* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->streetAddress = nullptr;
}


void BillingAddressView_init(BillingAddressView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        BillingAddressView_initFields(this);
        this->request = ((HttpServletRequest*) JAVA_CALL(BillingAddressView_getPageContext(this), getRequest));
}

BillingAddressView* BillingAddressView_new(TransformInfoInterface* transformInfoInterface) {
    BillingAddressView* this = calloc(1, sizeof(BillingAddressView));
    BillingAddressView_init(this, transformInfoInterface);
    return this;
}


HttpServletRequest* BillingAddressView_getRequest(BillingAddressView* this) {
        return this->request;
}


// throws Exception
Node* BillingAddressView_toXmlNode(BillingAddressView* this, Document* document) {
        JAVA_TRY {
            Node* formNode = Document_createElement(document, StreetAddressData_FORM);
            Node_appendChild(formNode, StreetAddress_toXmlNode(this->streetAddress, document));
            return formNode;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XSLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "toXmlNode", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


void BillingAddressView_addDomNodeInterfaces(BillingAddressView* this) {
        BillingAddressView_addDomNodeInterface(this, ((DomNodeInterface*) this));
        BillingAddressView_addDomNodeInterface(this, ((DomNodeInterface*) StatesView_new()));
}


// throws Exception
const char* BillingAddressView_view(BillingAddressView* this) {
        JAVA_TRY {
            BillingAddressView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

