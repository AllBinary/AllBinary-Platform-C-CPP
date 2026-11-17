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
// package taghelpers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "taghelpers/ViewHelper.h"

typedef struct ValidationViewHelper ValidationViewHelper;
struct ValidationViewHelper {
    ViewHelper base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
    ValidationComponentInterface* viewInterface;
};


ValidationViewHelper* ValidationViewHelper_new(HashMap* hashMap, PageContext* pageContext);

void ValidationViewHelper_init(ValidationViewHelper* this, HashMap* hashMap, PageContext* pageContext);
bool ValidationViewHelper_isValid(ValidationViewHelper* this);
const char* ValidationViewHelper_validationInfo(ValidationViewHelper* this);
Document* ValidationViewHelper_toValidationInfoDoc(ValidationViewHelper* this);
Node* ValidationViewHelper_toValidationInfoNode(ValidationViewHelper* this, Document* document);

static void ValidationViewHelper_initFields(ValidationViewHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void ValidationViewHelper_init(ValidationViewHelper* this, HashMap* hashMap, PageContext* pageContext) {
        ViewHelper_init(&this->base, hashMap, pageContext);
        ValidationViewHelper_initFields(this);
        this->viewInterface = ((ValidationComponentInterface*) ValidationViewHelper_getViewObject(this));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        }
}

ValidationViewHelper* ValidationViewHelper_new(HashMap* hashMap, PageContext* pageContext) {
    ValidationViewHelper* this = calloc(1, sizeof(ValidationViewHelper));
    ValidationViewHelper_init(this, hashMap, pageContext);
    return this;
}


bool ValidationViewHelper_isValid(ValidationViewHelper* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                LogUtil_putF(this->logUtil, "Started", this, this->commonStrings->IS_VALID);
            }
            return ValidationComponentInterface_isValid(this->viewInterface);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* ValidationViewHelper_validationInfo(ValidationViewHelper* this) {
        JAVA_TRY {
            return ValidationComponentInterface_validationInfo(this->viewInterface);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "validationInfo()", e);
            }
            return "Unknown Validation Error";
        } JAVA_END_TRY;
}


Document* ValidationViewHelper_toValidationInfoDoc(ValidationViewHelper* this) {
        JAVA_TRY {
            return ValidationComponentInterface_toValidationInfoDoc(this->viewInterface);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "toValidationInfoDoc()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


Node* ValidationViewHelper_toValidationInfoNode(ValidationViewHelper* this, Document* document) {
        JAVA_TRY {
            return ValidationComponentInterface_toValidationInfoNode(this->viewInterface, document);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "toValidationInfoNode()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

