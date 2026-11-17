/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 leIIgal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.logic.visual.transform.template.customizer.bodies.title

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
#include "org/allbinary/logic/visual/transform/template/customizer/bodies/BodyData.h"
#include "org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h"
#include "org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleNotRequiredValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct TitleBodyValidation TitleBodyValidation;
struct TitleBodyValidation {
    Validation base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    const char* body;
    TitleNotRequiredValidation* titleValidation;
};


TitleBodyValidation* TitleBodyValidation_new(void);

void TitleBodyValidation_init(TitleBodyValidation* this);

TitleBodyValidation* TitleBodyValidation_new1(Document* document);
void TitleBodyValidation_init1(TitleBodyValidation* this, Document* document);

TitleBodyValidation* TitleBodyValidation_new1(HashMap* hashMap);
void TitleBodyValidation_init1(TitleBodyValidation* this, HashMap* hashMap);
void TitleBodyValidation_getFormData(TitleBodyValidation* this, HashMap* hashMap);
bool TitleBodyValidation_isValid(TitleBodyValidation* this);
const char* TitleBodyValidation_validationInfo(TitleBodyValidation* this);
Document* TitleBodyValidation_toValidationInfoDoc(TitleBodyValidation* this);
Node* TitleBodyValidation_toValidationInfoNode(TitleBodyValidation* this, Document* document);
Node* TitleBodyValidation_toXmlNode(TitleBodyValidation* this, Document* document);

static void TitleBodyValidation_initFields(TitleBodyValidation* this) {
    this->logUtil = LogUtil_getInstance();
    
    
}


void TitleBodyValidation_init(TitleBodyValidation* this) {
    Validation_init(&this->base);
    TitleBodyValidation_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        }
        StringUtil* stringUtil = StringUtil_getInstance();
        this->body = stringUtil->EMPTY_STRING;
        this->titleValidation = TitleNotRequiredValidation_new();
}

TitleBodyValidation* TitleBodyValidation_new(void) {
    TitleBodyValidation* this = calloc(1, sizeof(TitleBodyValidation));
    TitleBodyValidation_init(this);
    return this;
}


void TitleBodyValidation_init1(TitleBodyValidation* this, Document* document) {
    Validation_init(&this->base);
    TitleBodyValidation_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, this->commonStrings->CONSTRUCTOR, this, "Constructor(document)");
        }
        NodeList* nodeList = Document_getElementsByTagName(document, BodyData_getInstance()->NAME);
        for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
            Node* aBodyNode = NodeList_item(nodeList, index);
            Node* aBodyValueNode = DomSearchHelper_getNode(DomData_VALUE, Node_getChildNodes(aBodyNode));
            this->body = DomNodeHelper_getTextNodeValue(aBodyValueNode);
            Node* titleNode = DomSearchHelper_getNode(TitleData_getInstance()->NAME, Node_getChildNodes(aBodyNode));
            this->titleValidation = TitleNotRequiredValidation_new(titleNode);
            if (index > 1) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "To Many Body Nodes", this, this->commonStrings->CONSTRUCTOR);
                }
            }
        }
}

TitleBodyValidation* TitleBodyValidation_new1(Document* document) {
    TitleBodyValidation* this = calloc(1, sizeof(TitleBodyValidation));
    TitleBodyValidation_init1(this, document);
    return this;
}


void TitleBodyValidation_init1(TitleBodyValidation* this, HashMap* hashMap) {
    Validation_init(&this->base);
    TitleBodyValidation_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "Constructor(hashmap)");
        }
        TitleBodyValidation_getFormData(this, hashMap);
}

TitleBodyValidation* TitleBodyValidation_new1(HashMap* hashMap) {
    TitleBodyValidation* this = calloc(1, sizeof(TitleBodyValidation));
    TitleBodyValidation_init1(this, hashMap);
    return this;
}


// throws Exception
void TitleBodyValidation_getFormData(TitleBodyValidation* this, HashMap* hashMap) {
        this->body = ((const char*) HashMap_get(hashMap, BodyData_getInstance()->NAME));
        this->titleValidation = TitleNotRequiredValidation_new(hashMap);
}


bool TitleBodyValidation_isValid(TitleBodyValidation* this) {
        JAVA_TRY {
            bool isValid = true;
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "TitleBodyValidation", this, this->commonStrings->IS_VALID);
            }
            if (!StringValidationUtil_isValidNotRequired(StringValidationUtil_getInstance(), this->body, BodyData_getInstance()->MIN, AbSqlData_MAXBLOB)) {
                isValid = false;
            }
            if (!JAVA_CALL(TitleNotRequiredValidation_isValid(this->titleValidation), booleanValue)) {
                isValid = false;
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("TitleBodyValidation: ", java_string_of(isValid)), this, this->commonStrings->IS_VALID);
            }
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* TitleBodyValidation_validationInfo(TitleBodyValidation* this) {
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
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


Document* TitleBodyValidation_toValidationInfoDoc(TitleBodyValidation* this) {
        return nullptr;
}


Node* TitleBodyValidation_toValidationInfoNode(TitleBodyValidation* this, Document* document) {
        return nullptr;
}


// throws Exception
Node* TitleBodyValidation_toXmlNode(TitleBodyValidation* this, Document* document) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Title Body: ", this->body), this, "toXmlNode(document)");
        }
        Node* node = ModDomHelper_createNameValueNodes(document, BodyData_getInstance()->NAME, this->body);
        Node_appendChild(node, TitleNotRequiredValidation_toXmlNode(this->titleValidation, document));
        return node;
}

