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
// package org.allbinary.logic.visual.dhtml.style.css.property.font

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
#include "org/allbinary/logic/visual/dhtml/style/css/property/font/FontFamilyView.h"

typedef struct FontFamilyValidation FontFamilyValidation;
struct FontFamilyValidation {
    FontFamilyView base;
    ValidationInterface ValidationInterface_interface;
    LogUtil* logUtil;
};


FontFamilyValidation* FontFamilyValidation_new(void);

void FontFamilyValidation_init(FontFamilyValidation* this);

FontFamilyValidation* FontFamilyValidation_new1(Node* node);
void FontFamilyValidation_init1(FontFamilyValidation* this, Node* node);
bool FontFamilyValidation_isValid(FontFamilyValidation* this);
const char* FontFamilyValidation_validationInfo(FontFamilyValidation* this);
Document* FontFamilyValidation_toValidationInfoDoc(FontFamilyValidation* this);
Node* FontFamilyValidation_toValidationInfoNode(FontFamilyValidation* this, Document* document);

static void FontFamilyValidation_initFields(FontFamilyValidation* this) {
    this->logUtil = LogUtil_getInstance();
}


void FontFamilyValidation_init(FontFamilyValidation* this) {
        FontFamilyView_init(&this->base);
        FontFamilyValidation_initFields(this);
}

FontFamilyValidation* FontFamilyValidation_new(void) {
    FontFamilyValidation* this = calloc(1, sizeof(FontFamilyValidation));
    FontFamilyValidation_init(this);
    return this;
}


void FontFamilyValidation_init1(FontFamilyValidation* this, Node* node) {
        FontFamilyView_init(&this->base, node);
        FontFamilyValidation_initFields(this);
}

FontFamilyValidation* FontFamilyValidation_new1(Node* node) {
    FontFamilyValidation* this = calloc(1, sizeof(FontFamilyValidation));
    FontFamilyValidation_init1(this, node);
    return this;
}


// throws Exception
bool FontFamilyValidation_isValid(FontFamilyValidation* this) {
        JAVA_TRY {
            bool valid = true;
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "FontFamilyValidation", this, this->commonStrings->IS_VALID);
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("CssValidation: ", java_string_of(valid)), this, this->commonStrings->IS_VALID);
            }
            return valid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate data", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws Exception
const char* FontFamilyValidation_validationInfo(FontFamilyValidation* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Css Font Family Property Validation Error");
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation info error", this, "validationInfo()", e);
            }
            return "Error Validating Data";
        } JAVA_END_TRY;
}


// throws Exception
Document* FontFamilyValidation_toValidationInfoDoc(FontFamilyValidation* this) {
        return nullptr;
}


// throws Exception
Node* FontFamilyValidation_toValidationInfoNode(FontFamilyValidation* this, Document* document) {
        return nullptr;
}

