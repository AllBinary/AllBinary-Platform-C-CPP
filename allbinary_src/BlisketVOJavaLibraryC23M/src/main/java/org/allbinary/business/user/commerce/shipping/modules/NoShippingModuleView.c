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
// package org.allbinary.business.user.commerce.shipping.modules

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodData.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/business/user/commerce/shipping/modules/NoShippingModule.h"

typedef struct NoShippingModuleView NoShippingModuleView;
struct NoShippingModuleView {
    NoShippingModule base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
};


NoShippingModuleView* NoShippingModuleView_new(void);

void NoShippingModuleView_init(NoShippingModuleView* this);
bool NoShippingModuleView_isValid(NoShippingModuleView* this);
Document* NoShippingModuleView_toValidationInfoDoc(NoShippingModuleView* this);
Node* NoShippingModuleView_toValidationInfoNode(NoShippingModuleView* this, Document* document);
Document* NoShippingModuleView_toXmlDoc(NoShippingModuleView* this);
Node* NoShippingModuleView_toXmlNode(NoShippingModuleView* this, Document* document);
const char* NoShippingModuleView_validationInfo(NoShippingModuleView* this);
const char* NoShippingModuleView_view(NoShippingModuleView* this);

static void NoShippingModuleView_initFields(NoShippingModuleView* this) {
    this->logUtil = LogUtil_getInstance();
}


void NoShippingModuleView_init(NoShippingModuleView* this) {
    NoShippingModule_init(&this->base);
    NoShippingModuleView_initFields(this);
}

NoShippingModuleView* NoShippingModuleView_new(void) {
    NoShippingModuleView* this = calloc(1, sizeof(NoShippingModuleView));
    NoShippingModuleView_init(this);
    return this;
}


bool NoShippingModuleView_isValid(NoShippingModuleView* this) {
        return nullptr;
}


Document* NoShippingModuleView_toValidationInfoDoc(NoShippingModuleView* this) {
        return nullptr;
}


Node* NoShippingModuleView_toValidationInfoNode(NoShippingModuleView* this, Document* document) {
        return nullptr;
}


Document* NoShippingModuleView_toXmlDoc(NoShippingModuleView* this) {
        return nullptr;
}


Node* NoShippingModuleView_toXmlNode(NoShippingModuleView* this, Document* document) {
        JAVA_TRY {
            Node* shippingMethodNode = Document_createElement(document, ShippingMethodData_NAME);
            Node_appendChild(shippingMethodNode, ModDomHelper_createNameValueNodes(document, ShippingMethodData_NAME, NoShippingModuleView_getName(this)));
            Node_appendChild(shippingMethodNode, ModDomHelper_createNameValueNodes(document, ShippingMethodData_DESCRIPTION, NoShippingModuleView_getDescription(this)));
            return shippingMethodNode;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "toXmlNode", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


const char* NoShippingModuleView_validationInfo(NoShippingModuleView* this) {
        return nullptr;
}


const char* NoShippingModuleView_view(NoShippingModuleView* this) {
        return nullptr;
}

