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
// package views.business.context.modules.storefront.customizer.includes.style.css.template.retail

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
#include "org/allbinary/logic/communication/http/request/NameSpaceRequestParams.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/template/customizer/includes/style/css/template/retail/CssStyleValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#include "views/business/context/modules/storefront/customizer/StoreCustomizerComponentUtil.h"
#include "views/business/context/modules/storefront/customizer/includes/style/css/CssCustomizerView.h"

typedef struct InsertCssValidationView InsertCssValidationView;
struct InsertCssValidationView {
    CssCustomizerView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


InsertCssValidationView* InsertCssValidationView_new(TransformInfoInterface* transformInfoInterface);

void InsertCssValidationView_init(InsertCssValidationView* this, TransformInfoInterface* transformInfoInterface);
Document* InsertCssValidationView_toXmlDoc(InsertCssValidationView* this);
bool InsertCssValidationView_isValid(InsertCssValidationView* this);
const char* InsertCssValidationView_validationInfo(InsertCssValidationView* this);
Document* InsertCssValidationView_toValidationInfoDoc(InsertCssValidationView* this);
Node* InsertCssValidationView_toValidationInfoNode(InsertCssValidationView* this, Document* document);
const char* InsertCssValidationView_view(InsertCssValidationView* this);
TransformInfoInterface* InsertCssValidationView_getTransformInfoInterface(InsertCssValidationView* this);

static void InsertCssValidationView_initFields(InsertCssValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void InsertCssValidationView_init(InsertCssValidationView* this, TransformInfoInterface* transformInfoInterface) {
        CssCustomizerView_init(&this->base, transformInfoInterface);
        InsertCssValidationView_initFields(this);
        HashMap* requestHashMap = NameSpaceRequestParams_toHashMap(NameSpaceRequestParams_new(InsertCssValidationView_getPageContext(this)));
        this->styleValidationInterface = CssStyleValidation_new(requestHashMap);
}

InsertCssValidationView* InsertCssValidationView_new(TransformInfoInterface* transformInfoInterface) {
    InsertCssValidationView* this = calloc(1, sizeof(InsertCssValidationView));
    InsertCssValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Document* InsertCssValidationView_toXmlDoc(InsertCssValidationView* this) {
        return nullptr;
}


bool InsertCssValidationView_isValid(InsertCssValidationView* this) {
        JAVA_TRY {
            bool isValid = true;
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "Started Validation", this, this->commonStrings->IS_VALID);
            }
            if (isValid == true) {
                CustomizerUtil_insert(CustomizerUtil_getInstance(), InsertCssValidationView_getTransformInfoInterface(this), ((DomNodeInterface*) this->styleValidationInterface));
            }
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* InsertCssValidationView_validationInfo(InsertCssValidationView* this) {
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


Document* InsertCssValidationView_toValidationInfoDoc(InsertCssValidationView* this) {
        return nullptr;
}


Node* InsertCssValidationView_toValidationInfoNode(InsertCssValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* InsertCssValidationView_view(InsertCssValidationView* this) {
        JAVA_TRY {
            return StoreCustomizerComponentUtil_generate(StoreCustomizerComponentUtil_getInstance(), this->abeClientInformation, InsertCssValidationView_getTransformInfoInterface(this));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
TransformInfoInterface* InsertCssValidationView_getTransformInfoInterface(InsertCssValidationView* this) {
        return CssCustomizerView_getTransformInfoInterface((&this->base));
}

