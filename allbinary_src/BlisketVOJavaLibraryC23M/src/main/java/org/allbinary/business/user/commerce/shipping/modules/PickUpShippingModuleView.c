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
#include "org/allbinary/business/user/commerce/shipping/modules/PickUpShippingModule.h"

typedef struct PickUpShippingModuleView PickUpShippingModuleView;
struct PickUpShippingModuleView {
    PickUpShippingModule base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
};


PickUpShippingModuleView* PickUpShippingModuleView_new(void);

void PickUpShippingModuleView_init(PickUpShippingModuleView* this);
bool PickUpShippingModuleView_isValid(PickUpShippingModuleView* this);
Document* PickUpShippingModuleView_toValidationInfoDoc(PickUpShippingModuleView* this);
Node* PickUpShippingModuleView_toValidationInfoNode(PickUpShippingModuleView* this, Document* document);
Document* PickUpShippingModuleView_toXmlDoc(PickUpShippingModuleView* this);
Node* PickUpShippingModuleView_toXmlNode(PickUpShippingModuleView* this, Document* document);
const char* PickUpShippingModuleView_validationInfo(PickUpShippingModuleView* this);
const char* PickUpShippingModuleView_view(PickUpShippingModuleView* this);

static void PickUpShippingModuleView_initFields(PickUpShippingModuleView* this) {
    this->logUtil = LogUtil_getInstance();
}


void PickUpShippingModuleView_init(PickUpShippingModuleView* this) {
    PickUpShippingModule_init(&this->base);
    PickUpShippingModuleView_initFields(this);
}

PickUpShippingModuleView* PickUpShippingModuleView_new(void) {
    PickUpShippingModuleView* this = calloc(1, sizeof(PickUpShippingModuleView));
    PickUpShippingModuleView_init(this);
    return this;
}


bool PickUpShippingModuleView_isValid(PickUpShippingModuleView* this) {
        return nullptr;
}


Document* PickUpShippingModuleView_toValidationInfoDoc(PickUpShippingModuleView* this) {
        return nullptr;
}


Node* PickUpShippingModuleView_toValidationInfoNode(PickUpShippingModuleView* this, Document* document) {
        return nullptr;
}


Document* PickUpShippingModuleView_toXmlDoc(PickUpShippingModuleView* this) {
        return nullptr;
}


Node* PickUpShippingModuleView_toXmlNode(PickUpShippingModuleView* this, Document* document) {
        JAVA_TRY {
            Node* shippingMethodNode = Document_createElement(document, ShippingMethodData_NAME);
            Node_appendChild(shippingMethodNode, ModDomHelper_createNameValueNodes(document, ShippingMethodData_NAME, PickUpShippingModuleView_getName(this)));
            Node_appendChild(shippingMethodNode, ModDomHelper_createNameValueNodes(document, ShippingMethodData_DESCRIPTION, PickUpShippingModuleView_getDescription(this)));
            return shippingMethodNode;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "toXmlNode", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


const char* PickUpShippingModuleView_validationInfo(PickUpShippingModuleView* this) {
        return nullptr;
}


const char* PickUpShippingModuleView_view(PickUpShippingModuleView* this) {
        return nullptr;
}

