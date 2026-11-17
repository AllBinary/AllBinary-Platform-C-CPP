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
// package org.allbinary.logic.visual.transform.template.customizer.includes.style.css.template.retail

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/Validation.h"
#include "org/allbinary/logic/control/validate/ValidationInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/dhtml/style/StyleData.h"
#include "org/allbinary/logic/visual/dhtml/style/StylesData.h"
#include "org/allbinary/logic/visual/dhtml/style/StylesValidationFactory.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct CssStyleValidation CssStyleValidation;
struct CssStyleValidation {
    Validation base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    BasicArrayList* cssStyleElementVector;
};


CssStyleValidation* CssStyleValidation_new(void);

void CssStyleValidation_init(CssStyleValidation* this);

CssStyleValidation* CssStyleValidation_new1(Document* document);
void CssStyleValidation_init1(CssStyleValidation* this, Document* document);

CssStyleValidation* CssStyleValidation_new1(HashMap* hashMap);
void CssStyleValidation_init1(CssStyleValidation* this, HashMap* hashMap);
bool CssStyleValidation_isValid(CssStyleValidation* this);
const char* CssStyleValidation_validationInfo(CssStyleValidation* this);
Document* CssStyleValidation_toValidationInfoDoc(CssStyleValidation* this);
Node* CssStyleValidation_toValidationInfoNode(CssStyleValidation* this, Document* document);
Node* CssStyleValidation_toXmlNode(CssStyleValidation* this, Document* document);

static void CssStyleValidation_initFields(CssStyleValidation* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void CssStyleValidation_init(CssStyleValidation* this) {
    Validation_init(&this->base);
    CssStyleValidation_initFields(this);
        this->cssStyleElementVector = BasicArrayListD_new();
}

CssStyleValidation* CssStyleValidation_new(void) {
    CssStyleValidation* this = calloc(1, sizeof(CssStyleValidation));
    CssStyleValidation_init(this);
    return this;
}


void CssStyleValidation_init1(CssStyleValidation* this, Document* document) {
    Validation_init(&this->base);
    CssStyleValidation_initFields(this);
        this->cssStyleElementVector = StylesValidationFactory_getInstance(StylesValidationFactory_getInstance(), document);
}

CssStyleValidation* CssStyleValidation_new1(Document* document) {
    CssStyleValidation* this = calloc(1, sizeof(CssStyleValidation));
    CssStyleValidation_init1(this, document);
    return this;
}


void CssStyleValidation_init1(CssStyleValidation* this, HashMap* hashMap) {
    Validation_init(&this->base);
    CssStyleValidation_initFields(this);
        this->cssStyleElementVector = StylesValidationFactory_getInstance(hashMap);
}

CssStyleValidation* CssStyleValidation_new1(HashMap* hashMap) {
    CssStyleValidation* this = calloc(1, sizeof(CssStyleValidation));
    CssStyleValidation_init1(this, hashMap);
    return this;
}


bool CssStyleValidation_isValid(CssStyleValidation* this) {
        JAVA_TRY {
            bool isValid = true;
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->IS_VALID);
            }
            int32_t size = BasicArrayList_size(this->cssStyleElementVector);
            for (int32_t i = 0; i < size; i++) {
                ValidationInterface* styleValidationInterface = ((ValidationInterface*) BasicArrayList_get(this->cssStyleElementVector, i));
                if (!JAVA_CALL(ValidationInterface_isValid(styleValidationInterface), booleanValue)) {
                    isValid = false;
                }
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


const char* CssStyleValidation_validationInfo(CssStyleValidation* this) {
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


Document* CssStyleValidation_toValidationInfoDoc(CssStyleValidation* this) {
        return nullptr;
}


Node* CssStyleValidation_toValidationInfoNode(CssStyleValidation* this, Document* document) {
        return nullptr;
}


// throws Exception
Node* CssStyleValidation_toXmlNode(CssStyleValidation* this, Document* document) {
        Node* node = Document_createElement(document, StylesData_getInstance()->NAME);
        Node* styleNode = Document_createElement(document, StyleData_getInstance()->NAME);
        Node_appendChild(node, styleNode);
        int32_t size = BasicArrayList_size(this->cssStyleElementVector);
        for (int32_t i = 0; i < size; i++) {
            DomNodeInterface* styleDomNodeInterface = ((DomNodeInterface*) BasicArrayList_get(this->cssStyleElementVector, i));
            Node_appendChild(styleNode, DomNodeInterface_toXmlNode(styleDomNodeInterface, document));
        }
        return node;
}

