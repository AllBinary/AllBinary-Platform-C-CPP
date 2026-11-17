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
// #include "java/util/HashMap.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/http/request/RequestParams.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/template/customizer/bodies/GenericBodyValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#include "views/business/context/modules/storefront/customizer/StoreCustomizerComponentUtil.h"
#include "views/business/context/modules/storefront/customizer/bodies/generic/GenericBodyCustomizerView.h"

typedef struct InsertGenericBodyValidationView InsertGenericBodyValidationView;
struct InsertGenericBodyValidationView {
    GenericBodyCustomizerView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


InsertGenericBodyValidationView* InsertGenericBodyValidationView_new(TransformInfoInterface* transformInfoInterface);

void InsertGenericBodyValidationView_init(InsertGenericBodyValidationView* this, TransformInfoInterface* transformInfoInterface);
Document* InsertGenericBodyValidationView_toXmlDoc(InsertGenericBodyValidationView* this);
bool InsertGenericBodyValidationView_isValid(InsertGenericBodyValidationView* this);
const char* InsertGenericBodyValidationView_validationInfo(InsertGenericBodyValidationView* this);
Document* InsertGenericBodyValidationView_toValidationInfoDoc(InsertGenericBodyValidationView* this);
Node* InsertGenericBodyValidationView_toValidationInfoNode(InsertGenericBodyValidationView* this, Document* document);
const char* InsertGenericBodyValidationView_view(InsertGenericBodyValidationView* this);
TransformInfoInterface* InsertGenericBodyValidationView_getTransformInfoInterface(InsertGenericBodyValidationView* this);

static void InsertGenericBodyValidationView_initFields(InsertGenericBodyValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void InsertGenericBodyValidationView_init(InsertGenericBodyValidationView* this, TransformInfoInterface* transformInfoInterface) {
        GenericBodyCustomizerView_init(&this->base, transformInfoInterface);
        InsertGenericBodyValidationView_initFields(this);
        HashMap* requestHashMap = RequestParams_toHashMap(RequestParams_new(InsertGenericBodyValidationView_getPageContext(this)));
        this->body = GenericBodyValidation_new(requestHashMap);
}

InsertGenericBodyValidationView* InsertGenericBodyValidationView_new(TransformInfoInterface* transformInfoInterface) {
    InsertGenericBodyValidationView* this = calloc(1, sizeof(InsertGenericBodyValidationView));
    InsertGenericBodyValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Document* InsertGenericBodyValidationView_toXmlDoc(InsertGenericBodyValidationView* this) {
        return nullptr;
}


bool InsertGenericBodyValidationView_isValid(InsertGenericBodyValidationView* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "Started Validation", this, this->commonStrings->IS_VALID);
            }
            bool isValid = JAVA_CALL(this->body, isValid);
            if (isValid == true) {
                CustomizerUtil_insert(CustomizerUtil_getInstance(), InsertGenericBodyValidationView_getTransformInfoInterface(this), ((DomNodeInterface*) this->body));
            }
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* InsertGenericBodyValidationView_validationInfo(InsertGenericBodyValidationView* this) {
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


Document* InsertGenericBodyValidationView_toValidationInfoDoc(InsertGenericBodyValidationView* this) {
        return nullptr;
}


Node* InsertGenericBodyValidationView_toValidationInfoNode(InsertGenericBodyValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* InsertGenericBodyValidationView_view(InsertGenericBodyValidationView* this) {
        JAVA_TRY {
            return StoreCustomizerComponentUtil_generate(StoreCustomizerComponentUtil_getInstance(), this->abeClientInformation, InsertGenericBodyValidationView_getTransformInfoInterface(this));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
TransformInfoInterface* InsertGenericBodyValidationView_getTransformInfoInterface(InsertGenericBodyValidationView* this) {
        return GenericBodyCustomizerView_getTransformInfoInterface((&this->base));
}

