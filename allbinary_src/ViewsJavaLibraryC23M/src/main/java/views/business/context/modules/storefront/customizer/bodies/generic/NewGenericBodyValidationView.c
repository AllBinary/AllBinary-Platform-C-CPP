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
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/template/customizer/bodies/GenericBodyValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#include "views/business/context/modules/storefront/customizer/bodies/generic/GenericBodyCustomizerView.h"

typedef struct NewGenericBodyValidationView NewGenericBodyValidationView;
struct NewGenericBodyValidationView {
    GenericBodyCustomizerView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


NewGenericBodyValidationView* NewGenericBodyValidationView_new(TransformInfoInterface* transformInfoInterface);

void NewGenericBodyValidationView_init(NewGenericBodyValidationView* this, TransformInfoInterface* transformInfoInterface);
Document* NewGenericBodyValidationView_toXmlDoc(NewGenericBodyValidationView* this);
bool NewGenericBodyValidationView_isValid(NewGenericBodyValidationView* this);
const char* NewGenericBodyValidationView_validationInfo(NewGenericBodyValidationView* this);
Document* NewGenericBodyValidationView_toValidationInfoDoc(NewGenericBodyValidationView* this);
Node* NewGenericBodyValidationView_toValidationInfoNode(NewGenericBodyValidationView* this, Document* document);
const char* NewGenericBodyValidationView_view(NewGenericBodyValidationView* this);
TransformInfoInterface* NewGenericBodyValidationView_getTransformInfoInterface(NewGenericBodyValidationView* this);

static void NewGenericBodyValidationView_initFields(NewGenericBodyValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void NewGenericBodyValidationView_init(NewGenericBodyValidationView* this, TransformInfoInterface* transformInfoInterface) {
        GenericBodyCustomizerView_init(&this->base, transformInfoInterface);
        NewGenericBodyValidationView_initFields(this);
        this->body = GenericBodyValidation_new();
}

NewGenericBodyValidationView* NewGenericBodyValidationView_new(TransformInfoInterface* transformInfoInterface) {
    NewGenericBodyValidationView* this = calloc(1, sizeof(NewGenericBodyValidationView));
    NewGenericBodyValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Document* NewGenericBodyValidationView_toXmlDoc(NewGenericBodyValidationView* this) {
        return nullptr;
}


bool NewGenericBodyValidationView_isValid(NewGenericBodyValidationView* this) {
        JAVA_TRY {
            {
                CustomizerUtil_insert(CustomizerUtil_getInstance(), NewGenericBodyValidationView_getTransformInfoInterface(this), ((DomNodeInterface*) this->body));
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* NewGenericBodyValidationView_validationInfo(NewGenericBodyValidationView* this) {
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


Document* NewGenericBodyValidationView_toValidationInfoDoc(NewGenericBodyValidationView* this) {
        return nullptr;
}


Node* NewGenericBodyValidationView_toValidationInfoNode(NewGenericBodyValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* NewGenericBodyValidationView_view(NewGenericBodyValidationView* this) {
        return JAVA_CALL(JAVA_CALL(this->base.views->ValidationOnlyTempUtil, getInstance), view, this);
}


// throws Exception
TransformInfoInterface* NewGenericBodyValidationView_getTransformInfoInterface(NewGenericBodyValidationView* this) {
        return GenericBodyCustomizerView_getTransformInfoInterface((&this->base));
}

