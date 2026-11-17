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

typedef struct TitleNotRequiredValidation TitleNotRequiredValidation;
struct TitleNotRequiredValidation {
    TitleView base;
    ValidationInterface ValidationInterface_interface;
    LogUtil* logUtil;
};


TitleNotRequiredValidation* TitleNotRequiredValidation_new(void);

void TitleNotRequiredValidation_init(TitleNotRequiredValidation* this);

TitleNotRequiredValidation* TitleNotRequiredValidation_new1(Node* node);
void TitleNotRequiredValidation_init1(TitleNotRequiredValidation* this, Node* node);

TitleNotRequiredValidation* TitleNotRequiredValidation_new1(HashMap* hashMap);
void TitleNotRequiredValidation_init1(TitleNotRequiredValidation* this, HashMap* hashMap);
bool TitleNotRequiredValidation_isValid(TitleNotRequiredValidation* this);
const char* TitleNotRequiredValidation_validationInfo(TitleNotRequiredValidation* this);
Document* TitleNotRequiredValidation_toValidationInfoDoc(TitleNotRequiredValidation* this);
Node* TitleNotRequiredValidation_toValidationInfoNode(TitleNotRequiredValidation* this, Document* document);

static void TitleNotRequiredValidation_initFields(TitleNotRequiredValidation* this) {
    this->logUtil = LogUtil_getInstance();
}


void TitleNotRequiredValidation_init(TitleNotRequiredValidation* this) {
        TitleView_init(&this->base);
        TitleNotRequiredValidation_initFields(this);
}

TitleNotRequiredValidation* TitleNotRequiredValidation_new(void) {
    TitleNotRequiredValidation* this = calloc(1, sizeof(TitleNotRequiredValidation));
    TitleNotRequiredValidation_init(this);
    return this;
}


void TitleNotRequiredValidation_init1(TitleNotRequiredValidation* this, Node* node) {
        TitleView_init(&this->base, node);
        TitleNotRequiredValidation_initFields(this);
}

TitleNotRequiredValidation* TitleNotRequiredValidation_new1(Node* node) {
    TitleNotRequiredValidation* this = calloc(1, sizeof(TitleNotRequiredValidation));
    TitleNotRequiredValidation_init1(this, node);
    return this;
}


void TitleNotRequiredValidation_init1(TitleNotRequiredValidation* this, HashMap* hashMap) {
        TitleView_init(&this->base, hashMap);
        TitleNotRequiredValidation_initFields(this);
}

TitleNotRequiredValidation* TitleNotRequiredValidation_new1(HashMap* hashMap) {
    TitleNotRequiredValidation* this = calloc(1, sizeof(TitleNotRequiredValidation));
    TitleNotRequiredValidation_init1(this, hashMap);
    return this;
}


bool TitleNotRequiredValidation_isValid(TitleNotRequiredValidation* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->IS_VALID);
            }
            bool valid = true;
            if (!StringValidationUtil_isValidNotRequired(StringValidationUtil_getInstance(), TitleNotRequiredValidation_getTitle(this), 0, TitleData_getInstance()->MAXLEN)) {
                valid = false;
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Title: ");
                StringMaker_append(stringBuffer, TitleNotRequiredValidation_getTitle(this));
                StringMaker_append(stringBuffer, "End: ");
                StringMaker_appendboolean(stringBuffer, valid);
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->IS_VALID);
            }
            return valid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* TitleNotRequiredValidation_validationInfo(TitleNotRequiredValidation* this) {
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


Document* TitleNotRequiredValidation_toValidationInfoDoc(TitleNotRequiredValidation* this) {
        return nullptr;
}


Node* TitleNotRequiredValidation_toValidationInfoNode(TitleNotRequiredValidation* this, Document* document) {
        return nullptr;
}

