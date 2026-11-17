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
// package org.allbinary.logic.visual.transform.template.customizer.hedges.heading

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
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/Validation.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/template/customizer/widgets/logo/LogoData.h"
#include "org/allbinary/logic/visual/transform/template/customizer/widgets/logo/LogoValidation.h"
#include "org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h"
#include "org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct HeadingValidation HeadingValidation;
struct HeadingValidation {
    Validation base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    TitleValidation* title;
    LogoValidation* logo;
};


HeadingValidation* HeadingValidation_new(void);

void HeadingValidation_init(HeadingValidation* this);

HeadingValidation* HeadingValidation_new1(Document* document);
void HeadingValidation_init1(HeadingValidation* this, Document* document);

HeadingValidation* HeadingValidation_new1(HashMap* hashMap);
void HeadingValidation_init1(HeadingValidation* this, HashMap* hashMap);
void HeadingValidation_getFormData(HeadingValidation* this, HashMap* hashMap);
bool HeadingValidation_isValid(HeadingValidation* this);
const char* HeadingValidation_validationInfo(HeadingValidation* this);
Document* HeadingValidation_toValidationInfoDoc(HeadingValidation* this);
Node* HeadingValidation_toValidationInfoNode(HeadingValidation* this, Document* document);
Node* HeadingValidation_toXmlNode(HeadingValidation* this, Document* document);

static void HeadingValidation_initFields(HeadingValidation* this) {
    this->logUtil = LogUtil_getInstance();
    
    
}


void HeadingValidation_init(HeadingValidation* this) {
    Validation_init(&this->base);
    HeadingValidation_initFields(this);
        this->title = TitleValidation_new();
        this->logo = LogoValidation_new();
}

HeadingValidation* HeadingValidation_new(void) {
    HeadingValidation* this = calloc(1, sizeof(HeadingValidation));
    HeadingValidation_init(this);
    return this;
}


void HeadingValidation_init1(HeadingValidation* this, Document* document) {
    Validation_init(&this->base);
    HeadingValidation_initFields(this);
        NodeList* headingNodeList = Document_getElementsByTagName(document, HeadingData_NAME);
        Node* titleNode = DomSearchHelper_getNode(TitleData_getInstance()->NAME, JAVA_CALL(NodeList_item(headingNodeList, 0), getChildNodes));
        Node* logoNode = DomSearchHelper_getNode(LogoData_getInstance()->NAME, JAVA_CALL(NodeList_item(headingNodeList, 0), getChildNodes));
        this->title = TitleValidation_new(titleNode);
        this->logo = LogoValidation_new(logoNode);
}

HeadingValidation* HeadingValidation_new1(Document* document) {
    HeadingValidation* this = calloc(1, sizeof(HeadingValidation));
    HeadingValidation_init1(this, document);
    return this;
}


void HeadingValidation_init1(HeadingValidation* this, HashMap* hashMap) {
    Validation_init(&this->base);
    HeadingValidation_initFields(this);
        HeadingValidation_getFormData(this, hashMap);
}

HeadingValidation* HeadingValidation_new1(HashMap* hashMap) {
    HeadingValidation* this = calloc(1, sizeof(HeadingValidation));
    HeadingValidation_init1(this, hashMap);
    return this;
}


// throws Exception
void HeadingValidation_getFormData(HeadingValidation* this, HashMap* hashMap) {
        this->title = TitleValidation_new(hashMap);
        this->logo = LogoValidation_new(hashMap);
}


bool HeadingValidation_isValid(HeadingValidation* this) {
        JAVA_TRY {
            bool valid = true;
            bool titleValid = true;
            bool logoValid = true;
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->IS_VALID);
            }
            if (!JAVA_CALL(TitleValidation_isValid(this->title), booleanValue)) {
                titleValid = false;
            }
            if (!JAVA_CALL(LogoValidation_isValid(this->logo), booleanValue)) {
                logoValid = false;
            } else {
                LogoValidation_processLogoFile(this->logo);
            }
            if (!Boolean_booleanValue(titleValid) && !Boolean_booleanValue(logoValid)) {
                valid = false;
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("HeadingValidation: ", java_string_of(valid)), this, this->commonStrings->IS_VALID);
            }
            return valid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* HeadingValidation_validationInfo(HeadingValidation* this) {
        JAVA_TRY {
            bool valid = true;
            bool titleValid = true;
            bool logoValid = true;
            StringMaker* stringBuffer = StringMaker_new();
            if (!JAVA_CALL(TitleValidation_isValid(this->title), booleanValue)) {
                titleValid = false;
            }
            if (!JAVA_CALL(LogoValidation_isValid(this->logo), booleanValue)) {
                logoValid = false;
            }
            if (!Boolean_booleanValue(titleValid) && !Boolean_booleanValue(logoValid)) {
                valid = false;
            }
            if (!Boolean_booleanValue(valid)) {
                StringMaker_append(stringBuffer, "Include a title and/or logo for the header.");
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


Document* HeadingValidation_toValidationInfoDoc(HeadingValidation* this) {
        return nullptr;
}


Node* HeadingValidation_toValidationInfoNode(HeadingValidation* this, Document* document) {
        return nullptr;
}


// throws Exception
Node* HeadingValidation_toXmlNode(HeadingValidation* this, Document* document) {
        Node* node = Document_createElement(document, HeadingData_NAME);
        Node_appendChild(node, LogoValidation_toXmlNode(this->logo, document));
        Node_appendChild(node, TitleValidation_toXmlNode(this->title, document));
        return node;
}

