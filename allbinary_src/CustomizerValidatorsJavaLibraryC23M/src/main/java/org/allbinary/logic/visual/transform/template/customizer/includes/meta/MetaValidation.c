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
 * III
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
// #include "java/util/HashMap.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/Validation.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeData.h"
#include "org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeDataFactory.h"
#include "org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaData.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct MetaValidation MetaValidation;
struct MetaValidation {
    Validation base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    const char* label;
    const char* name;
    const char* httpEquiv;
    const char* content;
};


MetaValidation* MetaValidation_new(HtmlMetaAttributeData* htmlMetaAttributeData, const char* label, const char* attributeValue, const char* contentValue);

void MetaValidation_init(MetaValidation* this, HtmlMetaAttributeData* htmlMetaAttributeData, const char* label, const char* attributeValue, const char* contentValue);

MetaValidation* MetaValidation_new1(Document* document);
void MetaValidation_init1(MetaValidation* this, Document* document);
bool MetaValidation_isValid(MetaValidation* this);
const char* MetaValidation_validationInfo(MetaValidation* this);
Document* MetaValidation_toValidationInfoDoc(MetaValidation* this);
Node* MetaValidation_toValidationInfoNode(MetaValidation* this, Document* document);
HashMap* MetaValidation_toHashMap(MetaValidation* this);
Node* MetaValidation_toXmlNode(MetaValidation* this, Document* document);

static void MetaValidation_initFields(MetaValidation* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->name = nullptr;
    this->httpEquiv = nullptr;
    
}


void MetaValidation_init(MetaValidation* this, HtmlMetaAttributeData* htmlMetaAttributeData, const char* label, const char* attributeValue, const char* contentValue) {
    Validation_init(&this->base);
    MetaValidation_initFields(this);
        this->label = label;
        if (HtmlMetaAttributeData_equals(htmlMetaAttributeData, HtmlMetaAttributeDataFactory_getInstance()->HTTP_EQUIV)) {
            this->httpEquiv = attributeValue;
        } else if (HtmlMetaAttributeData_equals(htmlMetaAttributeData, HtmlMetaAttributeDataFactory_getInstance()->NAME)) {
            this->name = attributeValue;
        }
        this->content = contentValue;
}

MetaValidation* MetaValidation_new(HtmlMetaAttributeData* htmlMetaAttributeData, const char* label, const char* attributeValue, const char* contentValue) {
    MetaValidation* this = calloc(1, sizeof(MetaValidation));
    MetaValidation_init(this, htmlMetaAttributeData, label, attributeValue, contentValue);
    return this;
}


void MetaValidation_init1(MetaValidation* this, Document* document) {
    Validation_init(&this->base);
    MetaValidation_initFields(this);
        java_throw(java_exception_new("Exception", CommonStrings_getInstance()->NOT_IMPLEMENTED));
}

MetaValidation* MetaValidation_new1(Document* document) {
    MetaValidation* this = calloc(1, sizeof(MetaValidation));
    MetaValidation_init1(this, document);
    return this;
}


bool MetaValidation_isValid(MetaValidation* this) {
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


const char* MetaValidation_validationInfo(MetaValidation* this) {
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


Document* MetaValidation_toValidationInfoDoc(MetaValidation* this) {
        return nullptr;
}


Node* MetaValidation_toValidationInfoNode(MetaValidation* this, Document* document) {
        return nullptr;
}


HashMap* MetaValidation_toHashMap(MetaValidation* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HtmlMetaAttributeDataFactory* htmlMetaAttributeDataFactory = HtmlMetaAttributeDataFactory_getInstance();
        HashMap_put(hashMap, JAVA_CALL(HtmlMetaData_getInstance()->LABEL, toString), this->label);
        HashMap_put(hashMap, JAVA_CALL(htmlMetaAttributeDataFactory->NAME, toString), this->name);
        HashMap_put(hashMap, JAVA_CALL(htmlMetaAttributeDataFactory->HTTP_EQUIV, toString), this->httpEquiv);
        HashMap_put(hashMap, JAVA_CALL(htmlMetaAttributeDataFactory->CONTENT, toString), this->content);
        return hashMap;
}


// throws Exception
Node* MetaValidation_toXmlNode(MetaValidation* this, Document* document) {
        Node* node = ModDomHelper_createNameValueNodes(document, JAVA_CALL(HtmlMetaData_getInstance()->NAME, toString), MetaValidation_toHashMap(this));
        return node;
}

