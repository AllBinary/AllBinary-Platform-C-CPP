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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/includes/globals/GlobalsView.h"

typedef struct EditGlobalsValidationView EditGlobalsValidationView;
struct EditGlobalsValidationView {
    GlobalsView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


EditGlobalsValidationView* EditGlobalsValidationView_new(TransformInfoInterface* transformInfoInterface);

void EditGlobalsValidationView_init(EditGlobalsValidationView* this, TransformInfoInterface* transformInfoInterface);
bool EditGlobalsValidationView_isValid(EditGlobalsValidationView* this);
const char* EditGlobalsValidationView_validationInfo(EditGlobalsValidationView* this);
Document* EditGlobalsValidationView_toValidationInfoDoc(EditGlobalsValidationView* this);
Node* EditGlobalsValidationView_toValidationInfoNode(EditGlobalsValidationView* this, Document* document);
TransformInfoInterface* EditGlobalsValidationView_getTransformInfoInterface(EditGlobalsValidationView* this);

static void EditGlobalsValidationView_initFields(EditGlobalsValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void EditGlobalsValidationView_init(EditGlobalsValidationView* this, TransformInfoInterface* transformInfoInterface) {
        GlobalsView_init(&this->base, transformInfoInterface);
        EditGlobalsValidationView_initFields(this);
}

EditGlobalsValidationView* EditGlobalsValidationView_new(TransformInfoInterface* transformInfoInterface) {
    EditGlobalsValidationView* this = calloc(1, sizeof(EditGlobalsValidationView));
    EditGlobalsValidationView_init(this, transformInfoInterface);
    return this;
}


bool EditGlobalsValidationView_isValid(EditGlobalsValidationView* this) {
        JAVA_TRY {
            bool isValid = true;
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* EditGlobalsValidationView_validationInfo(EditGlobalsValidationView* this) {
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


Document* EditGlobalsValidationView_toValidationInfoDoc(EditGlobalsValidationView* this) {
        return nullptr;
}


Node* EditGlobalsValidationView_toValidationInfoNode(EditGlobalsValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* EditGlobalsValidationView_getTransformInfoInterface(EditGlobalsValidationView* this) {
        return GlobalsView_getTransformInfoInterface((&this->base));
}

