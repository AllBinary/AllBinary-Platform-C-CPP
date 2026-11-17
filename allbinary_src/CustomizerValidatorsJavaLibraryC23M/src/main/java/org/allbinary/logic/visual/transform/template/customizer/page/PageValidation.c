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
// package org.allbinary.logic.visual.transform.template.customizer.page

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/page/PageData.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/Validation.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h"
#include "org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct PageValidation PageValidation;
struct PageValidation {
    Validation base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    TitleValidation* title;
};


PageValidation* PageValidation_new(void);

void PageValidation_init(PageValidation* this);

PageValidation* PageValidation_new1(Document* document);
void PageValidation_init1(PageValidation* this, Document* document);

PageValidation* PageValidation_new1(HashMap* hashMap);
void PageValidation_init1(PageValidation* this, HashMap* hashMap);
void PageValidation_getFormData(PageValidation* this, HashMap* hashMap);
bool PageValidation_isValid(PageValidation* this);
const char* PageValidation_validationInfo(PageValidation* this);
Document* PageValidation_toValidationInfoDoc(PageValidation* this);
Node* PageValidation_toValidationInfoNode(PageValidation* this, Document* document);
Node* PageValidation_toXmlNode(PageValidation* this, Document* document);

static void PageValidation_initFields(PageValidation* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void PageValidation_init(PageValidation* this) {
    Validation_init(&this->base);
    PageValidation_initFields(this);
        this->title = TitleValidation_new();
}

PageValidation* PageValidation_new(void) {
    PageValidation* this = calloc(1, sizeof(PageValidation));
    PageValidation_init(this);
    return this;
}


void PageValidation_init1(PageValidation* this, Document* document) {
    Validation_init(&this->base);
    PageValidation_initFields(this);
        Node* node = DomSearchHelper_getNode(TitleData_getInstance()->NAME, Document_getElementsByTagName(document, PageData_getInstance()->NAME));
        this->title = TitleValidation_new(node);
}

PageValidation* PageValidation_new1(Document* document) {
    PageValidation* this = calloc(1, sizeof(PageValidation));
    PageValidation_init1(this, document);
    return this;
}


void PageValidation_init1(PageValidation* this, HashMap* hashMap) {
    Validation_init(&this->base);
    PageValidation_initFields(this);
        PageValidation_getFormData(this, hashMap);
}

PageValidation* PageValidation_new1(HashMap* hashMap) {
    PageValidation* this = calloc(1, sizeof(PageValidation));
    PageValidation_init1(this, hashMap);
    return this;
}


void PageValidation_getFormData(PageValidation* this, HashMap* hashMap) {
        this->title = TitleValidation_new(hashMap);
}


bool PageValidation_isValid(PageValidation* this) {
        JAVA_TRY {
            bool valid = true;
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "PageValidation", this, this->commonStrings->IS_VALID);
            }
            if (!JAVA_CALL(TitleValidation_isValid(this->title), booleanValue)) {
                valid = false;
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("PageValidation: ", java_string_of(valid)), this, this->commonStrings->IS_VALID);
            }
            return valid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* PageValidation_validationInfo(PageValidation* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            if (!JAVA_CALL(TitleValidation_isValid(this->title), booleanValue)) {
                StringMaker_append(stringBuffer, TitleValidation_validationInfo(this->title));
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


Document* PageValidation_toValidationInfoDoc(PageValidation* this) {
        return nullptr;
}


Node* PageValidation_toValidationInfoNode(PageValidation* this, Document* document) {
        return nullptr;
}


// throws Exception
Node* PageValidation_toXmlNode(PageValidation* this, Document* document) {
        Node* node = Document_createElement(document, PageData_getInstance()->NAME);
        Node_appendChild(node, TitleValidation_toXmlNode(this->title, document));
        return node;
}

