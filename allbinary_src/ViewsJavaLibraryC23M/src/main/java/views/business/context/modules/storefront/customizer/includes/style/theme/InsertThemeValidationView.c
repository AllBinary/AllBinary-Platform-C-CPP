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
// package views.business.context.modules.storefront.customizer.includes.style.theme

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
#include "org/allbinary/logic/visual/theme/ThemeValidation.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#include "views/business/context/modules/storefront/customizer/StoreCustomizerComponentUtil.h"
#include "views/business/context/modules/storefront/customizer/includes/style/theme/ThemeCustomizerView.h"

typedef struct InsertThemeValidationView InsertThemeValidationView;
struct InsertThemeValidationView {
    ThemeCustomizerView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
    HashMap* requestHashMap;
};


InsertThemeValidationView* InsertThemeValidationView_new(TransformInfoInterface* transformInfoInterface);

void InsertThemeValidationView_init(InsertThemeValidationView* this, TransformInfoInterface* transformInfoInterface);
Document* InsertThemeValidationView_toXmlDoc(InsertThemeValidationView* this);
bool InsertThemeValidationView_isValid(InsertThemeValidationView* this);
const char* InsertThemeValidationView_validationInfo(InsertThemeValidationView* this);
Document* InsertThemeValidationView_toValidationInfoDoc(InsertThemeValidationView* this);
Node* InsertThemeValidationView_toValidationInfoNode(InsertThemeValidationView* this, Document* document);
const char* InsertThemeValidationView_view(InsertThemeValidationView* this);
TransformInfoInterface* InsertThemeValidationView_getTransformInfoInterface(InsertThemeValidationView* this);

static void InsertThemeValidationView_initFields(InsertThemeValidationView* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void InsertThemeValidationView_init(InsertThemeValidationView* this, TransformInfoInterface* transformInfoInterface) {
        ThemeCustomizerView_init(&this->base, transformInfoInterface);
        InsertThemeValidationView_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, this->commonStrings->CONSTRUCTOR, this, "started");
        }
        this->requestHashMap = NameSpaceRequestParams_toHashMap(NameSpaceRequestParams_new(InsertThemeValidationView_getPageContext(this)));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, this->commonStrings->CONSTRUCTOR, this, "begin loading theme");
        }
}

InsertThemeValidationView* InsertThemeValidationView_new(TransformInfoInterface* transformInfoInterface) {
    InsertThemeValidationView* this = calloc(1, sizeof(InsertThemeValidationView));
    InsertThemeValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Document* InsertThemeValidationView_toXmlDoc(InsertThemeValidationView* this) {
        return nullptr;
}


bool InsertThemeValidationView_isValid(InsertThemeValidationView* this) {
        JAVA_TRY {
            bool isValid = true;
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "Started Validation", this, this->commonStrings->IS_VALID);
            }
            ThemeValidation* themeValidation = ThemeValidation_new(InsertThemeValidationView_getTransformInfoInterface(this), this->requestHashMap);
            if (ThemeValidation_isValid(themeValidation) == false) {
                isValid = false;
            }
            this->validationInterface = ThemeValidation_getCssStyleValidation(themeValidation);
            isValid = JAVA_CALL(this->validationInterface, isValid);
            if (isValid == true) {
                CustomizerUtil_insert(CustomizerUtil_getInstance(), InsertThemeValidationView_getTransformInfoInterface(this), ((DomNodeInterface*) this->validationInterface));
            }
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* InsertThemeValidationView_validationInfo(InsertThemeValidationView* this) {
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


Document* InsertThemeValidationView_toValidationInfoDoc(InsertThemeValidationView* this) {
        return nullptr;
}


Node* InsertThemeValidationView_toValidationInfoNode(InsertThemeValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* InsertThemeValidationView_view(InsertThemeValidationView* this) {
        JAVA_TRY {
            return StoreCustomizerComponentUtil_generate(StoreCustomizerComponentUtil_getInstance(), this->abeClientInformation, InsertThemeValidationView_getTransformInfoInterface(this));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
TransformInfoInterface* InsertThemeValidationView_getTransformInfoInterface(InsertThemeValidationView* this) {
        return ThemeCustomizerView_getTransformInfoInterface((&this->base));
}

