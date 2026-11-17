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
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/template/customizer/includes/style/css/GenericCssStyleValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#include "views/business/context/modules/storefront/customizer/includes/style/css/CssCustomizerView.h"

typedef struct NewCssValidationView NewCssValidationView;
struct NewCssValidationView {
    CssCustomizerView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


NewCssValidationView* NewCssValidationView_new(TransformInfoInterface* transformInfoInterface);

void NewCssValidationView_init(NewCssValidationView* this, TransformInfoInterface* transformInfoInterface);
Document* NewCssValidationView_toXmlDoc(NewCssValidationView* this);
bool NewCssValidationView_isValid(NewCssValidationView* this);
const char* NewCssValidationView_validationInfo(NewCssValidationView* this);
Document* NewCssValidationView_toValidationInfoDoc(NewCssValidationView* this);
Node* NewCssValidationView_toValidationInfoNode(NewCssValidationView* this, Document* document);
const char* NewCssValidationView_view(NewCssValidationView* this);
TransformInfoInterface* NewCssValidationView_getTransformInfoInterface(NewCssValidationView* this);

static void NewCssValidationView_initFields(NewCssValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void NewCssValidationView_init(NewCssValidationView* this, TransformInfoInterface* transformInfoInterface) {
        CssCustomizerView_init(&this->base, transformInfoInterface);
        NewCssValidationView_initFields(this);
        this->styleValidationInterface = GenericCssStyleValidation_new();
}

NewCssValidationView* NewCssValidationView_new(TransformInfoInterface* transformInfoInterface) {
    NewCssValidationView* this = calloc(1, sizeof(NewCssValidationView));
    NewCssValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Document* NewCssValidationView_toXmlDoc(NewCssValidationView* this) {
        return nullptr;
}


bool NewCssValidationView_isValid(NewCssValidationView* this) {
        JAVA_TRY {
            {
                CustomizerUtil_insert(CustomizerUtil_getInstance(), NewCssValidationView_getTransformInfoInterface(this), ((DomNodeInterface*) this->styleValidationInterface));
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* NewCssValidationView_validationInfo(NewCssValidationView* this) {
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


Document* NewCssValidationView_toValidationInfoDoc(NewCssValidationView* this) {
        return nullptr;
}


Node* NewCssValidationView_toValidationInfoNode(NewCssValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* NewCssValidationView_view(NewCssValidationView* this) {
        return JAVA_CALL(JAVA_CALL(this->base.views->ValidationOnlyTempUtil, getInstance), view, this);
}


// throws Exception
TransformInfoInterface* NewCssValidationView_getTransformInfoInterface(NewCssValidationView* this) {
        return CssCustomizerView_getTransformInfoInterface((&this->base));
}

