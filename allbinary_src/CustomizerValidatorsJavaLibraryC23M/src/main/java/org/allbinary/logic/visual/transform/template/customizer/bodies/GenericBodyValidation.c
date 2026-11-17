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
// package org.allbinary.logic.visual.transform.template.customizer.bodies

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/data/tree/dom/DomData.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlData.h"
#include "org/allbinary/logic/control/validate/Validation.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct GenericBodyValidation GenericBodyValidation;
struct GenericBodyValidation {
    Validation base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    const char* body;
};


GenericBodyValidation* GenericBodyValidation_new(void);

void GenericBodyValidation_init(GenericBodyValidation* this);

GenericBodyValidation* GenericBodyValidation_new1(Document* document);
void GenericBodyValidation_init1(GenericBodyValidation* this, Document* document);

GenericBodyValidation* GenericBodyValidation_new1(HashMap* hashMap);
void GenericBodyValidation_init1(GenericBodyValidation* this, HashMap* hashMap);
void GenericBodyValidation_getFormData(GenericBodyValidation* this, HashMap* hashMap);
bool GenericBodyValidation_isValid(GenericBodyValidation* this);
const char* GenericBodyValidation_validationInfo(GenericBodyValidation* this);
Document* GenericBodyValidation_toValidationInfoDoc(GenericBodyValidation* this);
Node* GenericBodyValidation_toValidationInfoNode(GenericBodyValidation* this, Document* document);
Node* GenericBodyValidation_toXmlNode(GenericBodyValidation* this, Document* document);

static void GenericBodyValidation_initFields(GenericBodyValidation* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void GenericBodyValidation_init(GenericBodyValidation* this) {
    Validation_init(&this->base);
    GenericBodyValidation_initFields(this);
        this->body = StringUtil_getInstance()->EMPTY_STRING;
}

GenericBodyValidation* GenericBodyValidation_new(void) {
    GenericBodyValidation* this = calloc(1, sizeof(GenericBodyValidation));
    GenericBodyValidation_init(this);
    return this;
}


void GenericBodyValidation_init1(GenericBodyValidation* this, Document* document) {
    Validation_init(&this->base);
    GenericBodyValidation_initFields(this);
        NodeList* nodeList = Document_getElementsByTagName(document, BodyData_getInstance()->NAME);
        for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
            Node* aBodyNode = NodeList_item(nodeList, index);
            Node* aBodyValueNode = DomSearchHelper_getNode(DomData_VALUE, Node_getChildNodes(aBodyNode));
            this->body = DomNodeHelper_getTextNodeValue(aBodyValueNode);
        }
}

GenericBodyValidation* GenericBodyValidation_new1(Document* document) {
    GenericBodyValidation* this = calloc(1, sizeof(GenericBodyValidation));
    GenericBodyValidation_init1(this, document);
    return this;
}


void GenericBodyValidation_init1(GenericBodyValidation* this, HashMap* hashMap) {
    Validation_init(&this->base);
    GenericBodyValidation_initFields(this);
        GenericBodyValidation_getFormData(this, hashMap);
}

GenericBodyValidation* GenericBodyValidation_new1(HashMap* hashMap) {
    GenericBodyValidation* this = calloc(1, sizeof(GenericBodyValidation));
    GenericBodyValidation_init1(this, hashMap);
    return this;
}


// throws Exception
void GenericBodyValidation_getFormData(GenericBodyValidation* this, HashMap* hashMap) {
        this->body = ((const char*) HashMap_get(hashMap, BodyData_getInstance()->NAME));
}


bool GenericBodyValidation_isValid(GenericBodyValidation* this) {
        JAVA_TRY {
            bool isValid = true;
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->IS_VALID);
            }
            if (!StringValidationUtil_isValidNotRequired(StringValidationUtil_getInstance(), this->body, BodyData_getInstance()->MIN, AbSqlData_MAXBLOB)) {
                isValid = false;
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("BodyValidation: ", java_string_of(isValid)), this, this->commonStrings->IS_VALID);
            }
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* GenericBodyValidation_validationInfo(GenericBodyValidation* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            {
                StringMaker_append(stringBuffer, "Error: Data submitted is < ");
                StringMaker_appendint(stringBuffer, ((int32_t) BodyData_getInstance()->MIN));
                StringMaker_append(stringBuffer, " or > ");
                StringMaker_appendint(stringBuffer, ((int32_t) AbSqlData_MAXBLOB));
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


Document* GenericBodyValidation_toValidationInfoDoc(GenericBodyValidation* this) {
        return nullptr;
}


Node* GenericBodyValidation_toValidationInfoNode(GenericBodyValidation* this, Document* document) {
        return nullptr;
}


// throws Exception
Node* GenericBodyValidation_toXmlNode(GenericBodyValidation* this, Document* document) {
        Node* node = ModDomHelper_createNameValueNodes(document, BodyData_getInstance()->NAME, this->body);
        return node;
}

