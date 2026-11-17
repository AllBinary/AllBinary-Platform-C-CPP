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
// package views.business.context.modules.storefront.customizer.includes.globals

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#include "views/business/context/modules/storefront/customizer/includes/globals/GlobalsView.h"

typedef struct InsertGlobalsValidationView InsertGlobalsValidationView;
struct InsertGlobalsValidationView {
    GlobalsView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


InsertGlobalsValidationView* InsertGlobalsValidationView_new(TransformInfoInterface* transformInfoInterface);

void InsertGlobalsValidationView_init(InsertGlobalsValidationView* this, TransformInfoInterface* transformInfoInterface);
Document* InsertGlobalsValidationView_toXmlDoc(InsertGlobalsValidationView* this);
bool InsertGlobalsValidationView_isValid(InsertGlobalsValidationView* this);
const char* InsertGlobalsValidationView_validationInfo(InsertGlobalsValidationView* this);
Document* InsertGlobalsValidationView_toValidationInfoDoc(InsertGlobalsValidationView* this);
Node* InsertGlobalsValidationView_toValidationInfoNode(InsertGlobalsValidationView* this, Document* document);
TransformInfoInterface* InsertGlobalsValidationView_getTransformInfoInterface(InsertGlobalsValidationView* this);

static void InsertGlobalsValidationView_initFields(InsertGlobalsValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void InsertGlobalsValidationView_init(InsertGlobalsValidationView* this, TransformInfoInterface* transformInfoInterface) {
        GlobalsView_init(&this->base, transformInfoInterface);
        InsertGlobalsValidationView_initFields(this);
}

InsertGlobalsValidationView* InsertGlobalsValidationView_new(TransformInfoInterface* transformInfoInterface) {
    InsertGlobalsValidationView* this = calloc(1, sizeof(InsertGlobalsValidationView));
    InsertGlobalsValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Document* InsertGlobalsValidationView_toXmlDoc(InsertGlobalsValidationView* this) {
        return nullptr;
}


bool InsertGlobalsValidationView_isValid(InsertGlobalsValidationView* this) {
        JAVA_TRY {
            bool isValid = true;
            CustomizerUtil_insert(CustomizerUtil_getInstance(), InsertGlobalsValidationView_getTransformInfoInterface(this), ((DomNodeInterface*) this));
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* InsertGlobalsValidationView_validationInfo(InsertGlobalsValidationView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Getting Validation Info";
        } JAVA_END_TRY;
}


Document* InsertGlobalsValidationView_toValidationInfoDoc(InsertGlobalsValidationView* this) {
        return nullptr;
}


Node* InsertGlobalsValidationView_toValidationInfoNode(InsertGlobalsValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* InsertGlobalsValidationView_getTransformInfoInterface(InsertGlobalsValidationView* this) {
        return GlobalsView_getTransformInfoInterface((&this->base));
}

