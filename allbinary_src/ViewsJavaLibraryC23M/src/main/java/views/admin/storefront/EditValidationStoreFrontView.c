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
// package views.admin.storefront

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/admin/storefront/StoreFrontComponent.h"

typedef struct EditValidationStoreFrontView EditValidationStoreFrontView;
struct EditValidationStoreFrontView {
    StoreFrontComponent base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


EditValidationStoreFrontView* EditValidationStoreFrontView_new(TransformInfoInterface* transformInfoInterface);

void EditValidationStoreFrontView_init(EditValidationStoreFrontView* this, TransformInfoInterface* transformInfoInterface);
bool EditValidationStoreFrontView_isValid(EditValidationStoreFrontView* this);
const char* EditValidationStoreFrontView_validationInfo(EditValidationStoreFrontView* this);
Document* EditValidationStoreFrontView_toValidationInfoDoc(EditValidationStoreFrontView* this);
Node* EditValidationStoreFrontView_toValidationInfoNode(EditValidationStoreFrontView* this, Document* document);
TransformInfoInterface* EditValidationStoreFrontView_getTransformInfoInterface(EditValidationStoreFrontView* this);

static void EditValidationStoreFrontView_initFields(EditValidationStoreFrontView* this) {
    this->logUtil = LogUtil_getInstance();
}


void EditValidationStoreFrontView_init(EditValidationStoreFrontView* this, TransformInfoInterface* transformInfoInterface) {
        StoreFrontComponent_init(&this->base, transformInfoInterface);
        EditValidationStoreFrontView_initFields(this);
}

EditValidationStoreFrontView* EditValidationStoreFrontView_new(TransformInfoInterface* transformInfoInterface) {
    EditValidationStoreFrontView* this = calloc(1, sizeof(EditValidationStoreFrontView));
    EditValidationStoreFrontView_init(this, transformInfoInterface);
    return this;
}


bool EditValidationStoreFrontView_isValid(EditValidationStoreFrontView* this) {
        JAVA_TRY {
            bool valid = true;
            if (JAVA_CALL(this->newStoreFrontInterface, isNameValid) == false) {
                valid = false;
            }
            if (StoreFrontFactory_getInstance(JAVA_CALL(this->newStoreFrontInterface, getName)) == nullptr) {
                valid = false;
            }
            this->newStoreFrontInterface = StoreFrontFactory_getInstance(JAVA_CALL(this->newStoreFrontInterface, getName));
            return valid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* EditValidationStoreFrontView_validationInfo(EditValidationStoreFrontView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            if (JAVA_CALL(this->newStoreFrontInterface, isNameValid) == false) {
                StringMaker_append(stringBuffer, JAVA_CALL(this->newStoreFrontInterface, nameValidationInfo));
            }
            if (StoreFrontFactory_getInstance(JAVA_CALL(this->newStoreFrontInterface, getName)) == nullptr) {
                StringMaker_append(stringBuffer, java_concat(java_string_of(this->newStoreFrontInterface), " does not exist.<br>"));
            }
            return "Unkown Error";
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


Document* EditValidationStoreFrontView_toValidationInfoDoc(EditValidationStoreFrontView* this) {
        return nullptr;
}


Node* EditValidationStoreFrontView_toValidationInfoNode(EditValidationStoreFrontView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* EditValidationStoreFrontView_getTransformInfoInterface(EditValidationStoreFrontView* this) {
        return StoreFrontComponent_getTransformInfoInterface((&this->base));
}

