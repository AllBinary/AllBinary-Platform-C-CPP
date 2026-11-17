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
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/template/customizer/includes/style/css/template/retail/CssStyleValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#include "views/business/context/modules/storefront/customizer/includes/style/css/CssCustomizerView.h"

typedef struct NewThemeValidationView NewThemeValidationView;
struct NewThemeValidationView {
    CssCustomizerView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


NewThemeValidationView* NewThemeValidationView_new(TransformInfoInterface* transformInfoInterface);

void NewThemeValidationView_init(NewThemeValidationView* this, TransformInfoInterface* transformInfoInterface);
Document* NewThemeValidationView_toXmlDoc(NewThemeValidationView* this);
bool NewThemeValidationView_isValid(NewThemeValidationView* this);
const char* NewThemeValidationView_validationInfo(NewThemeValidationView* this);
Document* NewThemeValidationView_toValidationInfoDoc(NewThemeValidationView* this);
Node* NewThemeValidationView_toValidationInfoNode(NewThemeValidationView* this, Document* document);
const char* NewThemeValidationView_view(NewThemeValidationView* this);
TransformInfoInterface* NewThemeValidationView_getTransformInfoInterface(NewThemeValidationView* this);

static void NewThemeValidationView_initFields(NewThemeValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void NewThemeValidationView_init(NewThemeValidationView* this, TransformInfoInterface* transformInfoInterface) {
        CssCustomizerView_init(&this->base, transformInfoInterface);
        NewThemeValidationView_initFields(this);
        this->styleValidationInterface = CssStyleValidation_new();
}

NewThemeValidationView* NewThemeValidationView_new(TransformInfoInterface* transformInfoInterface) {
    NewThemeValidationView* this = calloc(1, sizeof(NewThemeValidationView));
    NewThemeValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Document* NewThemeValidationView_toXmlDoc(NewThemeValidationView* this) {
        return nullptr;
}


bool NewThemeValidationView_isValid(NewThemeValidationView* this) {
        JAVA_TRY {
            CustomizerUtil_insert(CustomizerUtil_getInstance(), NewThemeValidationView_getTransformInfoInterface(this), ((DomNodeInterface*) this->styleValidationInterface));
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* NewThemeValidationView_validationInfo(NewThemeValidationView* this) {
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


Document* NewThemeValidationView_toValidationInfoDoc(NewThemeValidationView* this) {
        return nullptr;
}


Node* NewThemeValidationView_toValidationInfoNode(NewThemeValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* NewThemeValidationView_view(NewThemeValidationView* this) {
        return JAVA_CALL(JAVA_CALL(this->base.views->ValidationOnlyTempUtil, getInstance), view, this);
}


// throws Exception
TransformInfoInterface* NewThemeValidationView_getTransformInfoInterface(NewThemeValidationView* this) {
        return CssCustomizerView_getTransformInfoInterface((&this->base));
}

