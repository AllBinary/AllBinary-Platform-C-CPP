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
// package org.allbinary.logic.visual.transform.template.customizer.includes.style.css

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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/Validation.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/dhtml/style/StylesData.h"
#include "org/allbinary/logic/visual/transform/template/customizer/bodies/BodyData.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct GenericCssStyleValidation GenericCssStyleValidation;
struct GenericCssStyleValidation {
    Validation base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
};


GenericCssStyleValidation* GenericCssStyleValidation_new(void);

void GenericCssStyleValidation_init(GenericCssStyleValidation* this);

GenericCssStyleValidation* GenericCssStyleValidation_new1(Document* document);
void GenericCssStyleValidation_init1(GenericCssStyleValidation* this, Document* document);

GenericCssStyleValidation* GenericCssStyleValidation_new1(HashMap* hashMap);
void GenericCssStyleValidation_init1(GenericCssStyleValidation* this, HashMap* hashMap);
void GenericCssStyleValidation_getFormData(GenericCssStyleValidation* this, HashMap* hashMap);
bool GenericCssStyleValidation_isValid(GenericCssStyleValidation* this);
const char* GenericCssStyleValidation_validationInfo(GenericCssStyleValidation* this);
Document* GenericCssStyleValidation_toValidationInfoDoc(GenericCssStyleValidation* this);
Node* GenericCssStyleValidation_toValidationInfoNode(GenericCssStyleValidation* this, Document* document);
Node* GenericCssStyleValidation_toXmlNode(GenericCssStyleValidation* this, Document* document);

static void GenericCssStyleValidation_initFields(GenericCssStyleValidation* this) {
    this->logUtil = LogUtil_getInstance();
}


void GenericCssStyleValidation_init(GenericCssStyleValidation* this) {
    Validation_init(&this->base);
    GenericCssStyleValidation_initFields(this);
}

GenericCssStyleValidation* GenericCssStyleValidation_new(void) {
    GenericCssStyleValidation* this = calloc(1, sizeof(GenericCssStyleValidation));
    GenericCssStyleValidation_init(this);
    return this;
}


void GenericCssStyleValidation_init1(GenericCssStyleValidation* this, Document* document) {
    Validation_init(&this->base);
    GenericCssStyleValidation_initFields(this);
        NodeList* nodeList = Document_getElementsByTagName(document, StylesData_getInstance()->NAME);
}

GenericCssStyleValidation* GenericCssStyleValidation_new1(Document* document) {
    GenericCssStyleValidation* this = calloc(1, sizeof(GenericCssStyleValidation));
    GenericCssStyleValidation_init1(this, document);
    return this;
}


void GenericCssStyleValidation_init1(GenericCssStyleValidation* this, HashMap* hashMap) {
    Validation_init(&this->base);
    GenericCssStyleValidation_initFields(this);
        GenericCssStyleValidation_getFormData(this, hashMap);
}

GenericCssStyleValidation* GenericCssStyleValidation_new1(HashMap* hashMap) {
    GenericCssStyleValidation* this = calloc(1, sizeof(GenericCssStyleValidation));
    GenericCssStyleValidation_init1(this, hashMap);
    return this;
}


// throws Exception
void GenericCssStyleValidation_getFormData(GenericCssStyleValidation* this, HashMap* hashMap) {
}


bool GenericCssStyleValidation_isValid(GenericCssStyleValidation* this) {
        JAVA_TRY {
            bool isValid = true;
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->IS_VALID);
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("End: ", java_string_of(isValid)), this, this->commonStrings->IS_VALID);
            }
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* GenericCssStyleValidation_validationInfo(GenericCssStyleValidation* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


Document* GenericCssStyleValidation_toValidationInfoDoc(GenericCssStyleValidation* this) {
        return nullptr;
}


Node* GenericCssStyleValidation_toValidationInfoNode(GenericCssStyleValidation* this, Document* document) {
        return nullptr;
}


// throws Exception
Node* GenericCssStyleValidation_toXmlNode(GenericCssStyleValidation* this, Document* document) {
        Node* node = ModDomHelper_createNameValueNodes(document, BodyData_getInstance()->NAME, StringUtil_getInstance()->EMPTY_STRING);
        return node;
}

