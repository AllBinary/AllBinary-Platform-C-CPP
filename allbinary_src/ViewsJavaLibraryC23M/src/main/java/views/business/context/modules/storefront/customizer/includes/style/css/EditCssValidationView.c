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
// package views.business.context.modules.storefront.customizer.includes.style.css

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
#include "org/allbinary/logic/visual/transform/template/customizer/includes/style/css/GenericCssStyleValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#include "views/business/context/modules/storefront/customizer/includes/style/css/CssCustomizerView.h"

typedef struct EditCssValidationView EditCssValidationView;
struct EditCssValidationView {
    CssCustomizerView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


EditCssValidationView* EditCssValidationView_new(TransformInfoInterface* transformInfoInterface);

void EditCssValidationView_init(EditCssValidationView* this, TransformInfoInterface* transformInfoInterface);
bool EditCssValidationView_isValid(EditCssValidationView* this);
const char* EditCssValidationView_validationInfo(EditCssValidationView* this);
Document* EditCssValidationView_toValidationInfoDoc(EditCssValidationView* this);
Node* EditCssValidationView_toValidationInfoNode(EditCssValidationView* this, Document* document);
TransformInfoInterface* EditCssValidationView_getTransformInfoInterface(EditCssValidationView* this);

static void EditCssValidationView_initFields(EditCssValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void EditCssValidationView_init(EditCssValidationView* this, TransformInfoInterface* transformInfoInterface) {
        CssCustomizerView_init(&this->base, transformInfoInterface);
        EditCssValidationView_initFields(this);
}

EditCssValidationView* EditCssValidationView_new(TransformInfoInterface* transformInfoInterface) {
    EditCssValidationView* this = calloc(1, sizeof(EditCssValidationView));
    EditCssValidationView_init(this, transformInfoInterface);
    return this;
}


bool EditCssValidationView_isValid(EditCssValidationView* this) {
        JAVA_TRY {
            Document* document = CustomizerUtil_getViewDataForComponentsInObjectConfig(CustomizerUtil_getInstance(), EditCssValidationView_getTransformInfoInterface(this));
            this->styleValidationInterface = GenericCssStyleValidation_new(document);
            bool isValid = JAVA_CALL(this->styleValidationInterface, isValid);
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* EditCssValidationView_validationInfo(EditCssValidationView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, JAVA_CALL(this->styleValidationInterface, validationInfo));
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Getting Validation Info";
        } JAVA_END_TRY;
}


Document* EditCssValidationView_toValidationInfoDoc(EditCssValidationView* this) {
        return nullptr;
}


Node* EditCssValidationView_toValidationInfoNode(EditCssValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* EditCssValidationView_getTransformInfoInterface(EditCssValidationView* this) {
        return CssCustomizerView_getTransformInfoInterface((&this->base));
}

