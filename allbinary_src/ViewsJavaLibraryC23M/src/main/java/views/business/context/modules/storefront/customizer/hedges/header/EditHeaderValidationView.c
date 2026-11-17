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
// package views.business.context.modules.storefront.customizer.hedges.header

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
#include "org/allbinary/logic/visual/transform/template/customizer/hedges/heading/HeadingValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#include "views/business/context/modules/storefront/customizer/hedges/header/TopBarView.h"

typedef struct EditHeaderValidationView EditHeaderValidationView;
struct EditHeaderValidationView {
    TopBarView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


EditHeaderValidationView* EditHeaderValidationView_new(TransformInfoInterface* transformInfoInterface);

void EditHeaderValidationView_init(EditHeaderValidationView* this, TransformInfoInterface* transformInfoInterface);
bool EditHeaderValidationView_isValid(EditHeaderValidationView* this);
const char* EditHeaderValidationView_validationInfo(EditHeaderValidationView* this);
Document* EditHeaderValidationView_toValidationInfoDoc(EditHeaderValidationView* this);
Node* EditHeaderValidationView_toValidationInfoNode(EditHeaderValidationView* this, Document* document);
TransformInfoInterface* EditHeaderValidationView_getTransformInfoInterface(EditHeaderValidationView* this);

static void EditHeaderValidationView_initFields(EditHeaderValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void EditHeaderValidationView_init(EditHeaderValidationView* this, TransformInfoInterface* transformInfoInterface) {
        TopBarView_init(&this->base, transformInfoInterface);
        EditHeaderValidationView_initFields(this);
}

EditHeaderValidationView* EditHeaderValidationView_new(TransformInfoInterface* transformInfoInterface) {
    EditHeaderValidationView* this = calloc(1, sizeof(EditHeaderValidationView));
    EditHeaderValidationView_init(this, transformInfoInterface);
    return this;
}


bool EditHeaderValidationView_isValid(EditHeaderValidationView* this) {
        JAVA_TRY {
            this->heading = HeadingValidation_new(CustomizerUtil_getViewDataForComponentsInObjectConfig(CustomizerUtil_getInstance(), EditHeaderValidationView_getTransformInfoInterface(this)));
            bool isValid = JAVA_CALL(this->heading, isValid);
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* EditHeaderValidationView_validationInfo(EditHeaderValidationView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, JAVA_CALL(this->heading, validationInfo));
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Getting Validation Info";
        } JAVA_END_TRY;
}


Document* EditHeaderValidationView_toValidationInfoDoc(EditHeaderValidationView* this) {
        return nullptr;
}


Node* EditHeaderValidationView_toValidationInfoNode(EditHeaderValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* EditHeaderValidationView_getTransformInfoInterface(EditHeaderValidationView* this) {
        return TopBarView_getTransformInfoInterface((&this->base));
}

