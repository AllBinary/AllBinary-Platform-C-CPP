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
// package org.allbinary.logic.visual.transform.template.customizer.widgets.title

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleView.h"

typedef struct TitleValidation TitleValidation;
struct TitleValidation {
    TitleView base;
    ValidationInterface ValidationInterface_interface;
    LogUtil* logUtil;
};


TitleValidation* TitleValidation_new(void);

void TitleValidation_init(TitleValidation* this);

TitleValidation* TitleValidation_new1(Node* node);
void TitleValidation_init1(TitleValidation* this, Node* node);

TitleValidation* TitleValidation_new1(HashMap* hashMap);
void TitleValidation_init1(TitleValidation* this, HashMap* hashMap);
bool TitleValidation_isValid(TitleValidation* this);
const char* TitleValidation_validationInfo(TitleValidation* this);
Document* TitleValidation_toValidationInfoDoc(TitleValidation* this);
Node* TitleValidation_toValidationInfoNode(TitleValidation* this, Document* document);

static void TitleValidation_initFields(TitleValidation* this) {
    this->logUtil = LogUtil_getInstance();
}


void TitleValidation_init(TitleValidation* this) {
        TitleView_init(&this->base);
        TitleValidation_initFields(this);
}

TitleValidation* TitleValidation_new(void) {
    TitleValidation* this = calloc(1, sizeof(TitleValidation));
    TitleValidation_init(this);
    return this;
}


void TitleValidation_init1(TitleValidation* this, Node* node) {
        TitleView_init(&this->base, node);
        TitleValidation_initFields(this);
}

TitleValidation* TitleValidation_new1(Node* node) {
    TitleValidation* this = calloc(1, sizeof(TitleValidation));
    TitleValidation_init1(this, node);
    return this;
}


void TitleValidation_init1(TitleValidation* this, HashMap* hashMap) {
        TitleView_init(&this->base, hashMap);
        TitleValidation_initFields(this);
}

TitleValidation* TitleValidation_new1(HashMap* hashMap) {
    TitleValidation* this = calloc(1, sizeof(TitleValidation));
    TitleValidation_init1(this, hashMap);
    return this;
}


bool TitleValidation_isValid(TitleValidation* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "TitleValidation", this, this->commonStrings->IS_VALID);
            }
            bool valid = true;
            if (!StringValidationUtil_isValidRequired(StringValidationUtil_getInstance(), TitleValidation_getTitle(this), 1, TitleData_getInstance()->MAXLEN)) {
                valid = false;
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("TitleValidation: ", java_string_of(valid)), this, this->commonStrings->IS_VALID);
            }
            return valid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* TitleValidation_validationInfo(TitleValidation* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Title is not valid.");
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


Document* TitleValidation_toValidationInfoDoc(TitleValidation* this) {
        return nullptr;
}


Node* TitleValidation_toValidationInfoNode(TitleValidation* this, Document* document) {
        return nullptr;
}

