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
// #include "java/util/HashMap.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/http/request/MultipartRequestParams.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/template/customizer/hedges/heading/HeadingValidation.h"
#include "org/allbinary/logic/visual/transform/template/customizer/widgets/logo/LogoData.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#include "views/business/context/modules/storefront/customizer/hedges/header/TopBarView.h"

typedef struct InsertHeaderValidationView InsertHeaderValidationView;
struct InsertHeaderValidationView {
    TopBarView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
    const char* LOGOPATH;
};


InsertHeaderValidationView* InsertHeaderValidationView_new(TransformInfoInterface* transformInfoInterface);

void InsertHeaderValidationView_init(InsertHeaderValidationView* this, TransformInfoInterface* transformInfoInterface);
Document* InsertHeaderValidationView_toXmlDoc(InsertHeaderValidationView* this);
bool InsertHeaderValidationView_isValid(InsertHeaderValidationView* this);
const char* InsertHeaderValidationView_validationInfo(InsertHeaderValidationView* this);
Document* InsertHeaderValidationView_toValidationInfoDoc(InsertHeaderValidationView* this);
Node* InsertHeaderValidationView_toValidationInfoNode(InsertHeaderValidationView* this, Document* document);
TransformInfoInterface* InsertHeaderValidationView_getTransformInfoInterface(InsertHeaderValidationView* this);

static void InsertHeaderValidationView_initFields(InsertHeaderValidationView* this) {
    this->logUtil = LogUtil_getInstance();
    this->LOGOPATH = "logo/";
}


void InsertHeaderValidationView_init(InsertHeaderValidationView* this, TransformInfoInterface* transformInfoInterface) {
        TopBarView_init(&this->base, transformInfoInterface);
        InsertHeaderValidationView_initFields(this);
        HashMap* multipartRequestHashMap = MultipartRequestParams_toHashMap(MultipartRequestParams_new(InsertHeaderValidationView_getPageContext(this)));
        StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(JAVA_CALL(InsertHeaderValidationView_getWeblisketSession(this), getStoreName));
        const char* fullPath = java_concat(java_string_of(JAVA_CALL(TopBarView_URLGLOBALS, getWebappPath) + StoreFrontInterface_getCurrentHostNamePath(storeFrontInterface)), this->LOGOPATH);
        HashMap_put(multipartRequestHashMap, LogoData_getInstance()->IMAGEPATH, fullPath);
        this->heading = HeadingValidation_new(multipartRequestHashMap);
}

InsertHeaderValidationView* InsertHeaderValidationView_new(TransformInfoInterface* transformInfoInterface) {
    InsertHeaderValidationView* this = calloc(1, sizeof(InsertHeaderValidationView));
    InsertHeaderValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Document* InsertHeaderValidationView_toXmlDoc(InsertHeaderValidationView* this) {
        return nullptr;
}


bool InsertHeaderValidationView_isValid(InsertHeaderValidationView* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "topbarValidation", this, this->commonStrings->IS_VALID);
            }
            bool isValid = JAVA_CALL(this->heading, isValid);
            if (isValid == true) {
                CustomizerUtil_insert(CustomizerUtil_getInstance(), InsertHeaderValidationView_getTransformInfoInterface(this), ((DomNodeInterface*) this));
            }
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* InsertHeaderValidationView_validationInfo(InsertHeaderValidationView* this) {
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


Document* InsertHeaderValidationView_toValidationInfoDoc(InsertHeaderValidationView* this) {
        return nullptr;
}


Node* InsertHeaderValidationView_toValidationInfoNode(InsertHeaderValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* InsertHeaderValidationView_getTransformInfoInterface(InsertHeaderValidationView* this) {
        return TopBarView_getTransformInfoInterface((&this->base));
}

