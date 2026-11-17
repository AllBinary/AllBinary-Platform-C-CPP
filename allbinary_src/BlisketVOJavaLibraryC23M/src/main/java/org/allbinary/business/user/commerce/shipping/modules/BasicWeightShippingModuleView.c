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
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/business/user/commerce/shipping/modules/BasicWeightShippingModule.h"

typedef struct BasicWeightShippingModuleView BasicWeightShippingModuleView;
struct BasicWeightShippingModuleView {
    BasicWeightShippingModule base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
};


BasicWeightShippingModuleView* BasicWeightShippingModuleView_new(void);

void BasicWeightShippingModuleView_init(BasicWeightShippingModuleView* this);
bool BasicWeightShippingModuleView_isValid(BasicWeightShippingModuleView* this);
Document* BasicWeightShippingModuleView_toValidationInfoDoc(BasicWeightShippingModuleView* this);
Node* BasicWeightShippingModuleView_toValidationInfoNode(BasicWeightShippingModuleView* this, Document* document);
const char* BasicWeightShippingModuleView_validationInfo(BasicWeightShippingModuleView* this);
Node* BasicWeightShippingModuleView_toXmlNode(BasicWeightShippingModuleView* this, Document* document);
Document* BasicWeightShippingModuleView_toXmlDoc(BasicWeightShippingModuleView* this);
const char* BasicWeightShippingModuleView_view(BasicWeightShippingModuleView* this);

static void BasicWeightShippingModuleView_initFields(BasicWeightShippingModuleView* this) {
    this->logUtil = LogUtil_getInstance();
}


void BasicWeightShippingModuleView_init(BasicWeightShippingModuleView* this) {
    BasicWeightShippingModule_init(&this->base);
    BasicWeightShippingModuleView_initFields(this);
}

BasicWeightShippingModuleView* BasicWeightShippingModuleView_new(void) {
    BasicWeightShippingModuleView* this = calloc(1, sizeof(BasicWeightShippingModuleView));
    BasicWeightShippingModuleView_init(this);
    return this;
}


bool BasicWeightShippingModuleView_isValid(BasicWeightShippingModuleView* this) {
        return nullptr;
}


Document* BasicWeightShippingModuleView_toValidationInfoDoc(BasicWeightShippingModuleView* this) {
        return nullptr;
}


Node* BasicWeightShippingModuleView_toValidationInfoNode(BasicWeightShippingModuleView* this, Document* document) {
        return nullptr;
}


const char* BasicWeightShippingModuleView_validationInfo(BasicWeightShippingModuleView* this) {
        return nullptr;
}


Node* BasicWeightShippingModuleView_toXmlNode(BasicWeightShippingModuleView* this, Document* document) {
        JAVA_TRY {
            Node* shippingMethodNode = Document_createElement(document, ShippingMethodData_NAME);
            Node_appendChild(shippingMethodNode, ModDomHelper_createNameValueNodes(document, ShippingMethodData_NAME, BasicWeightShippingModuleView_getName(this)));
            Node_appendChild(shippingMethodNode, ModDomHelper_createNameValueNodes(document, ShippingMethodData_DESCRIPTION, BasicWeightShippingModuleView_getDescription(this)));
            return shippingMethodNode;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "toXmlNode", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


Document* BasicWeightShippingModuleView_toXmlDoc(BasicWeightShippingModuleView* this) {
        JAVA_TRY {
            Document* document = DomDocumentHelper_create();
            return document;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "toXmlDoc", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


const char* BasicWeightShippingModuleView_view(BasicWeightShippingModuleView* this) {
        JAVA_TRY {
            return this->base.commonStrings->NOT_IMPLEMENTED;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

