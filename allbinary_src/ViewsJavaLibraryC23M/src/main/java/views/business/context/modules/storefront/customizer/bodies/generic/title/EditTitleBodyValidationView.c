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
// package views.business.context.modules.storefront.customizer.bodies.generic.title

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
#include "org/allbinary/logic/visual/transform/template/customizer/bodies/title/TitleBodyValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#include "views/business/context/modules/storefront/customizer/bodies/generic/title/TitleBodyCustomizerView.h"

typedef struct EditTitleBodyValidationView EditTitleBodyValidationView;
struct EditTitleBodyValidationView {
    TitleBodyCustomizerView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


EditTitleBodyValidationView* EditTitleBodyValidationView_new(TransformInfoInterface* transformInfoInterface);

void EditTitleBodyValidationView_init(EditTitleBodyValidationView* this, TransformInfoInterface* transformInfoInterface);
bool EditTitleBodyValidationView_isValid(EditTitleBodyValidationView* this);
const char* EditTitleBodyValidationView_validationInfo(EditTitleBodyValidationView* this);
Document* EditTitleBodyValidationView_toValidationInfoDoc(EditTitleBodyValidationView* this);
Node* EditTitleBodyValidationView_toValidationInfoNode(EditTitleBodyValidationView* this, Document* document);
TransformInfoInterface* EditTitleBodyValidationView_getTransformInfoInterface(EditTitleBodyValidationView* this);

static void EditTitleBodyValidationView_initFields(EditTitleBodyValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void EditTitleBodyValidationView_init(EditTitleBodyValidationView* this, TransformInfoInterface* transformInfoInterface) {
        TitleBodyCustomizerView_init(&this->base, transformInfoInterface);
        EditTitleBodyValidationView_initFields(this);
}

EditTitleBodyValidationView* EditTitleBodyValidationView_new(TransformInfoInterface* transformInfoInterface) {
    EditTitleBodyValidationView* this = calloc(1, sizeof(EditTitleBodyValidationView));
    EditTitleBodyValidationView_init(this, transformInfoInterface);
    return this;
}


bool EditTitleBodyValidationView_isValid(EditTitleBodyValidationView* this) {
        JAVA_TRY {
            Document* document = CustomizerUtil_getViewDataForComponentsInObjectConfig(CustomizerUtil_getInstance(), EditTitleBodyValidationView_getTransformInfoInterface(this));
            this->titleBody = TitleBodyValidation_new(document);
            bool isValid = JAVA_CALL(this->titleBody, isValid);
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* EditTitleBodyValidationView_validationInfo(EditTitleBodyValidationView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, JAVA_CALL(this->titleBody, validationInfo));
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Getting Validation Info";
        } JAVA_END_TRY;
}


Document* EditTitleBodyValidationView_toValidationInfoDoc(EditTitleBodyValidationView* this) {
        return nullptr;
}


Node* EditTitleBodyValidationView_toValidationInfoNode(EditTitleBodyValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* EditTitleBodyValidationView_getTransformInfoInterface(EditTitleBodyValidationView* this) {
        return TitleBodyCustomizerView_getTransformInfoInterface((&this->base));
}

