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
// #include "java/util/HashMap.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/http/request/RequestParams.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/template/customizer/bodies/title/TitleBodyValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#include "views/business/context/modules/storefront/customizer/StoreCustomizerComponentUtil.h"
#include "views/business/context/modules/storefront/customizer/bodies/generic/title/TitleBodyCustomizerView.h"

typedef struct InsertTitleBodyValidationView InsertTitleBodyValidationView;
struct InsertTitleBodyValidationView {
    TitleBodyCustomizerView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


InsertTitleBodyValidationView* InsertTitleBodyValidationView_new(TransformInfoInterface* transformInfoInterface);

void InsertTitleBodyValidationView_init(InsertTitleBodyValidationView* this, TransformInfoInterface* transformInfoInterface);
Document* InsertTitleBodyValidationView_toXmlDoc(InsertTitleBodyValidationView* this);
bool InsertTitleBodyValidationView_isValid(InsertTitleBodyValidationView* this);
const char* InsertTitleBodyValidationView_validationInfo(InsertTitleBodyValidationView* this);
Document* InsertTitleBodyValidationView_toValidationInfoDoc(InsertTitleBodyValidationView* this);
Node* InsertTitleBodyValidationView_toValidationInfoNode(InsertTitleBodyValidationView* this, Document* document);
const char* InsertTitleBodyValidationView_view(InsertTitleBodyValidationView* this);
TransformInfoInterface* InsertTitleBodyValidationView_getTransformInfoInterface(InsertTitleBodyValidationView* this);

static void InsertTitleBodyValidationView_initFields(InsertTitleBodyValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void InsertTitleBodyValidationView_init(InsertTitleBodyValidationView* this, TransformInfoInterface* transformInfoInterface) {
        TitleBodyCustomizerView_init(&this->base, transformInfoInterface);
        InsertTitleBodyValidationView_initFields(this);
        HashMap* requestHashMap = RequestParams_toHashMap(RequestParams_new(InsertTitleBodyValidationView_getPageContext(this)));
        this->titleBody = TitleBodyValidation_new(requestHashMap);
}

InsertTitleBodyValidationView* InsertTitleBodyValidationView_new(TransformInfoInterface* transformInfoInterface) {
    InsertTitleBodyValidationView* this = calloc(1, sizeof(InsertTitleBodyValidationView));
    InsertTitleBodyValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Document* InsertTitleBodyValidationView_toXmlDoc(InsertTitleBodyValidationView* this) {
        return nullptr;
}


bool InsertTitleBodyValidationView_isValid(InsertTitleBodyValidationView* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "Started Validation", this, this->commonStrings->IS_VALID);
            }
            bool isValid = JAVA_CALL(this->titleBody, isValid);
            if (isValid == true) {
                CustomizerUtil_insert(CustomizerUtil_getInstance(), InsertTitleBodyValidationView_getTransformInfoInterface(this), ((DomNodeInterface*) this->titleBody));
            }
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* InsertTitleBodyValidationView_validationInfo(InsertTitleBodyValidationView* this) {
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


Document* InsertTitleBodyValidationView_toValidationInfoDoc(InsertTitleBodyValidationView* this) {
        return nullptr;
}


Node* InsertTitleBodyValidationView_toValidationInfoNode(InsertTitleBodyValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* InsertTitleBodyValidationView_view(InsertTitleBodyValidationView* this) {
        JAVA_TRY {
            return StoreCustomizerComponentUtil_generate(StoreCustomizerComponentUtil_getInstance(), this->abeClientInformation, InsertTitleBodyValidationView_getTransformInfoInterface(this));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
TransformInfoInterface* InsertTitleBodyValidationView_getTransformInfoInterface(InsertTitleBodyValidationView* this) {
        return TitleBodyCustomizerView_getTransformInfoInterface((&this->base));
}

