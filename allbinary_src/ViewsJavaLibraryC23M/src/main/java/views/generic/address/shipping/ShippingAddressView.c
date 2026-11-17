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
// package views.generic.address.shipping

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
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"
#include "views/generic/address/StatesView.h"

typedef struct ShippingAddressView ShippingAddressView;
struct ShippingAddressView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    HttpServletRequest* request;
    StreetAddress* streetAddress;
};


ShippingAddressView* ShippingAddressView_new(TransformInfoInterface* transformInfoInterface);

void ShippingAddressView_init(ShippingAddressView* this, TransformInfoInterface* transformInfoInterface);
HttpServletRequest* ShippingAddressView_getRequest(ShippingAddressView* this);
Node* ShippingAddressView_toXmlNode(ShippingAddressView* this, Document* document);
void ShippingAddressView_addDomNodeInterfaces(ShippingAddressView* this);
const char* ShippingAddressView_view(ShippingAddressView* this);

static void ShippingAddressView_initFields(ShippingAddressView* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->streetAddress = nullptr;
}


void ShippingAddressView_init(ShippingAddressView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        ShippingAddressView_initFields(this);
        TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) ShippingAddressView_getTransformInfoInterface(this));
        this->request = ((HttpServletRequest*) JAVA_CALL(TransformInfoHttpInterface_getPageContext(httpTransformInfoInterface), getRequest));
}

ShippingAddressView* ShippingAddressView_new(TransformInfoInterface* transformInfoInterface) {
    ShippingAddressView* this = calloc(1, sizeof(ShippingAddressView));
    ShippingAddressView_init(this, transformInfoInterface);
    return this;
}


HttpServletRequest* ShippingAddressView_getRequest(ShippingAddressView* this) {
        return this->request;
}


// throws Exception
Node* ShippingAddressView_toXmlNode(ShippingAddressView* this, Document* document) {
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


void ShippingAddressView_addDomNodeInterfaces(ShippingAddressView* this) {
        ShippingAddressView_addDomNodeInterface(this, ((DomNodeInterface*) this));
        ShippingAddressView_addDomNodeInterface(this, ((DomNodeInterface*) StatesView_new()));
}


// throws Exception
const char* ShippingAddressView_view(ShippingAddressView* this) {
        JAVA_TRY {
            ShippingAddressView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

