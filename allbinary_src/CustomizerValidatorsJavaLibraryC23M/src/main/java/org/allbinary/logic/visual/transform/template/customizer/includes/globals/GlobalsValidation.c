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
// package org.allbinary.logic.visual.transform.template.customizer.includes.globals

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontView.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/Validation.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct GlobalsValidation GlobalsValidation;
struct GlobalsValidation {
    Validation base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    StoreFrontInterface* storeFrontInterface;
};


GlobalsValidation* GlobalsValidation_new(const char* storeName);

void GlobalsValidation_init(GlobalsValidation* this, const char* storeName);

GlobalsValidation* GlobalsValidation_new1(Document* document);
void GlobalsValidation_init1(GlobalsValidation* this, Document* document);
bool GlobalsValidation_isValid(GlobalsValidation* this);
const char* GlobalsValidation_validationInfo(GlobalsValidation* this);
Document* GlobalsValidation_toValidationInfoDoc(GlobalsValidation* this);
Node* GlobalsValidation_toValidationInfoNode(GlobalsValidation* this, Document* document);
Node* GlobalsValidation_toXmlNode(GlobalsValidation* this, Document* document);

static void GlobalsValidation_initFields(GlobalsValidation* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void GlobalsValidation_init(GlobalsValidation* this, const char* storeName) {
    Validation_init(&this->base);
    GlobalsValidation_initFields(this);
        this->storeFrontInterface = StoreFrontFactory_getInstance(storeName);
}

GlobalsValidation* GlobalsValidation_new(const char* storeName) {
    GlobalsValidation* this = calloc(1, sizeof(GlobalsValidation));
    GlobalsValidation_init(this, storeName);
    return this;
}


void GlobalsValidation_init1(GlobalsValidation* this, Document* document) {
    Validation_init(&this->base);
    GlobalsValidation_initFields(this);
        java_throw(java_exception_new("Exception", CommonStrings_getInstance()->NOT_IMPLEMENTED));
}

GlobalsValidation* GlobalsValidation_new1(Document* document) {
    GlobalsValidation* this = calloc(1, sizeof(GlobalsValidation));
    GlobalsValidation_init1(this, document);
    return this;
}


bool GlobalsValidation_isValid(GlobalsValidation* this) {
        JAVA_TRY {
            bool valid = true;
            return valid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* GlobalsValidation_validationInfo(GlobalsValidation* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


Document* GlobalsValidation_toValidationInfoDoc(GlobalsValidation* this) {
        return nullptr;
}


Node* GlobalsValidation_toValidationInfoNode(GlobalsValidation* this, Document* document) {
        return nullptr;
}


// throws Exception
Node* GlobalsValidation_toXmlNode(GlobalsValidation* this, Document* document) {
        Node* node = Document_createElement(document, GlobalsData_NAME);
        Node_appendChild(node, StoreFrontView_toXmlNode(StoreFrontView_new(this->storeFrontInterface), document));
        return node;
}

