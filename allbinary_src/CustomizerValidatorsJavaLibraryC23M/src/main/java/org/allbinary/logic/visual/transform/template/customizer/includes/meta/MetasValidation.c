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
 * II
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.logic.visual.transform.template.customizer.includes.meta

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
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/Validation.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeDataFactory.h"
#include "org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeValuesData.h"
#include "org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetasData.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct MetasValidation MetasValidation;
struct MetasValidation {
    Validation base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    StoreFrontInterface* storeFrontInterface;
    BasicArrayList* metaValidationVector;
};


MetasValidation* MetasValidation_new(const char* storeName);

void MetasValidation_init(MetasValidation* this, const char* storeName);

MetasValidation* MetasValidation_new1(Document* document);
void MetasValidation_init1(MetasValidation* this, Document* document);
bool MetasValidation_isValid(MetasValidation* this);
const char* MetasValidation_validationInfo(MetasValidation* this);
Document* MetasValidation_toValidationInfoDoc(MetasValidation* this);
Node* MetasValidation_toValidationInfoNode(MetasValidation* this, Document* document);
Node* MetasValidation_toXmlNode(MetasValidation* this, Document* document);

static void MetasValidation_initFields(MetasValidation* this) {
    this->logUtil = LogUtil_getInstance();
    
    
}


void MetasValidation_init(MetasValidation* this, const char* storeName) {
    Validation_init(&this->base);
    MetasValidation_initFields(this);
        this->storeFrontInterface = StoreFrontFactory_getInstance(storeName);
        this->metaValidationVector = BasicArrayListD_new();
        const char* contentValue = java_concat(StoreFrontInterface_getName(this->storeFrontInterface), " E-Commerce Site");
        MetaValidation* keywordsMetaValidation = MetaValidation_new(HtmlMetaAttributeDataFactory_getInstance()->NAME, "Keywords", HtmlMetaAttributeValuesData_getInstance()->KEYWORDS, contentValue);
        MetaValidation* abstractMetaValidation = MetaValidation_new(HtmlMetaAttributeDataFactory_getInstance()->NAME, "Abstract", HtmlMetaAttributeValuesData_getInstance()->ABSTRACT, contentValue);
        MetaValidation* descriptionMetaValidation = MetaValidation_new(HtmlMetaAttributeDataFactory_getInstance()->NAME, "Description", HtmlMetaAttributeValuesData_getInstance()->DESCRIPTION, contentValue);
        BasicArrayList_add(this->metaValidationVector, keywordsMetaValidation);
        BasicArrayList_add(this->metaValidationVector, abstractMetaValidation);
        BasicArrayList_add(this->metaValidationVector, descriptionMetaValidation);
}

MetasValidation* MetasValidation_new(const char* storeName) {
    MetasValidation* this = calloc(1, sizeof(MetasValidation));
    MetasValidation_init(this, storeName);
    return this;
}


void MetasValidation_init1(MetasValidation* this, Document* document) {
    Validation_init(&this->base);
    MetasValidation_initFields(this);
        java_throw(java_exception_new("Exception", CommonStrings_getInstance()->NOT_IMPLEMENTED));
}

MetasValidation* MetasValidation_new1(Document* document) {
    MetasValidation* this = calloc(1, sizeof(MetasValidation));
    MetasValidation_init1(this, document);
    return this;
}


bool MetasValidation_isValid(MetasValidation* this) {
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


const char* MetasValidation_validationInfo(MetasValidation* this) {
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


Document* MetasValidation_toValidationInfoDoc(MetasValidation* this) {
        return nullptr;
}


Node* MetasValidation_toValidationInfoNode(MetasValidation* this, Document* document) {
        return nullptr;
}


// throws Exception
Node* MetasValidation_toXmlNode(MetasValidation* this, Document* document) {
        Node* node = Document_createElement(document, HtmlMetasData_getInstance()->NAME);
        MetaValidation** metaArray = ((MetaValidation**) BasicArrayList_toArrayType(this->metaValidationVector, ((MetaValidation**) java_array_new(sizeof(MetaValidation*), BasicArrayList_size(this->metaValidationVector)))));
        int32_t size = java_array_length(metaArray);
        for (int32_t i = 0; i < size; i++) {
            MetaValidation* metaValidation = metaArray[i];
            Node_appendChild(node, MetaValidation_toXmlNode(metaValidation, document));
        }
        return node;
}

