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
// package org.allbinary.logic.visual.dhtml.style.css

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/logic/visual/dhtml/style/css/CssElementView.h"

typedef struct CssElementValidation CssElementValidation;
struct CssElementValidation {
    CssElementView base;
    ValidationInterface ValidationInterface_interface;
    LogUtil* logUtil;
};


CssElementValidation* CssElementValidation_new(void);

void CssElementValidation_init(CssElementValidation* this);

CssElementValidation* CssElementValidation_new1(Node* node);
void CssElementValidation_init1(CssElementValidation* this, Node* node);
bool CssElementValidation_isValid(CssElementValidation* this);
const char* CssElementValidation_validationInfo(CssElementValidation* this);
Document* CssElementValidation_toValidationInfoDoc(CssElementValidation* this);
Node* CssElementValidation_toValidationInfoNode(CssElementValidation* this, Document* document);

static void CssElementValidation_initFields(CssElementValidation* this) {
    this->logUtil = LogUtil_getInstance();
}


void CssElementValidation_init(CssElementValidation* this) {
        CssElementView_init(&this->base);
        CssElementValidation_initFields(this);
}

CssElementValidation* CssElementValidation_new(void) {
    CssElementValidation* this = calloc(1, sizeof(CssElementValidation));
    CssElementValidation_init(this);
    return this;
}


void CssElementValidation_init1(CssElementValidation* this, Node* node) {
        CssElementView_init(&this->base, node);
        CssElementValidation_initFields(this);
}

CssElementValidation* CssElementValidation_new1(Node* node) {
    CssElementValidation* this = calloc(1, sizeof(CssElementValidation));
    CssElementValidation_init1(this, node);
    return this;
}


bool CssElementValidation_isValid(CssElementValidation* this) {
        JAVA_TRY {
            bool valid = true;
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "CssElementValidation", this, this->commonStrings->IS_VALID);
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("CssElementValidation: ", java_string_of(valid)), this, this->commonStrings->IS_VALID);
            }
            return valid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate data", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* CssElementValidation_validationInfo(CssElementValidation* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, CssElementValidation_getValue(this));
            StringMaker_append(stringBuffer, " Css Style is not valid.");
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation info error", this, "validationInfo()", e);
            }
            return "Error Validating Data";
        } JAVA_END_TRY;
}


Document* CssElementValidation_toValidationInfoDoc(CssElementValidation* this) {
        return nullptr;
}


Node* CssElementValidation_toValidationInfoNode(CssElementValidation* this, Document* document) {
        return nullptr;
}

