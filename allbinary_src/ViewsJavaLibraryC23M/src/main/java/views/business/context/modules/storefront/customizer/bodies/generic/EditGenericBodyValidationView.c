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
// package views.business.context.modules.storefront.customizer.bodies.generic

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
#include "org/allbinary/logic/visual/transform/template/customizer/bodies/GenericBodyValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#include "views/business/context/modules/storefront/customizer/bodies/generic/GenericBodyCustomizerView.h"

typedef struct EditGenericBodyValidationView EditGenericBodyValidationView;
struct EditGenericBodyValidationView {
    GenericBodyCustomizerView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


EditGenericBodyValidationView* EditGenericBodyValidationView_new(TransformInfoInterface* transformInfoInterface);

void EditGenericBodyValidationView_init(EditGenericBodyValidationView* this, TransformInfoInterface* transformInfoInterface);
bool EditGenericBodyValidationView_isValid(EditGenericBodyValidationView* this);
const char* EditGenericBodyValidationView_validationInfo(EditGenericBodyValidationView* this);
Document* EditGenericBodyValidationView_toValidationInfoDoc(EditGenericBodyValidationView* this);
Node* EditGenericBodyValidationView_toValidationInfoNode(EditGenericBodyValidationView* this, Document* document);
TransformInfoInterface* EditGenericBodyValidationView_getTransformInfoInterface(EditGenericBodyValidationView* this);

static void EditGenericBodyValidationView_initFields(EditGenericBodyValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void EditGenericBodyValidationView_init(EditGenericBodyValidationView* this, TransformInfoInterface* transformInfoInterface) {
        GenericBodyCustomizerView_init(&this->base, transformInfoInterface);
        EditGenericBodyValidationView_initFields(this);
}

EditGenericBodyValidationView* EditGenericBodyValidationView_new(TransformInfoInterface* transformInfoInterface) {
    EditGenericBodyValidationView* this = calloc(1, sizeof(EditGenericBodyValidationView));
    EditGenericBodyValidationView_init(this, transformInfoInterface);
    return this;
}


bool EditGenericBodyValidationView_isValid(EditGenericBodyValidationView* this) {
        JAVA_TRY {
            Document* document = CustomizerUtil_getViewDataForComponentsInObjectConfig(CustomizerUtil_getInstance(), EditGenericBodyValidationView_getTransformInfoInterface(this));
            this->body = GenericBodyValidation_new(document);
            bool isValid = JAVA_CALL(this->body, isValid);
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* EditGenericBodyValidationView_validationInfo(EditGenericBodyValidationView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, JAVA_CALL(this->body, validationInfo));
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Getting Validation Info";
        } JAVA_END_TRY;
}


Document* EditGenericBodyValidationView_toValidationInfoDoc(EditGenericBodyValidationView* this) {
        return nullptr;
}


Node* EditGenericBodyValidationView_toValidationInfoNode(EditGenericBodyValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* EditGenericBodyValidationView_getTransformInfoInterface(EditGenericBodyValidationView* this) {
        return GenericBodyCustomizerView_getTransformInfoInterface((&this->base));
}

