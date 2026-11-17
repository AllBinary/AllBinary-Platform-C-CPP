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
// package views.business.context.modules.storefront.customizer.includes.meta

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
#include "views/business/context/modules/storefront/customizer/includes/meta/MetaView.h"

typedef struct EditMetaValidationView EditMetaValidationView;
struct EditMetaValidationView {
    MetaView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


EditMetaValidationView* EditMetaValidationView_new(TransformInfoInterface* transformInfoInterface);

void EditMetaValidationView_init(EditMetaValidationView* this, TransformInfoInterface* transformInfoInterface);
bool EditMetaValidationView_isValid(EditMetaValidationView* this);
const char* EditMetaValidationView_validationInfo(EditMetaValidationView* this);
Document* EditMetaValidationView_toValidationInfoDoc(EditMetaValidationView* this);
Node* EditMetaValidationView_toValidationInfoNode(EditMetaValidationView* this, Document* document);
TransformInfoInterface* EditMetaValidationView_getTransformInfoInterface(EditMetaValidationView* this);

static void EditMetaValidationView_initFields(EditMetaValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void EditMetaValidationView_init(EditMetaValidationView* this, TransformInfoInterface* transformInfoInterface) {
        MetaView_init(&this->base, transformInfoInterface);
        EditMetaValidationView_initFields(this);
}

EditMetaValidationView* EditMetaValidationView_new(TransformInfoInterface* transformInfoInterface) {
    EditMetaValidationView* this = calloc(1, sizeof(EditMetaValidationView));
    EditMetaValidationView_init(this, transformInfoInterface);
    return this;
}


bool EditMetaValidationView_isValid(EditMetaValidationView* this) {
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


const char* EditMetaValidationView_validationInfo(EditMetaValidationView* this) {
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


Document* EditMetaValidationView_toValidationInfoDoc(EditMetaValidationView* this) {
        return nullptr;
}


Node* EditMetaValidationView_toValidationInfoNode(EditMetaValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* EditMetaValidationView_getTransformInfoInterface(EditMetaValidationView* this) {
        return MetaView_getTransformInfoInterface((&this->base));
}

