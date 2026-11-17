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
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/template/customizer/hedges/heading/HeadingValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#include "views/business/context/modules/storefront/customizer/hedges/header/TopBarView.h"

typedef struct NewHeaderValidationView NewHeaderValidationView;
struct NewHeaderValidationView {
    TopBarView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


NewHeaderValidationView* NewHeaderValidationView_new(TransformInfoInterface* transformInfoInterface);

void NewHeaderValidationView_init(NewHeaderValidationView* this, TransformInfoInterface* transformInfoInterface);
Document* NewHeaderValidationView_toXmlDoc(NewHeaderValidationView* this);
bool NewHeaderValidationView_isValid(NewHeaderValidationView* this);
const char* NewHeaderValidationView_validationInfo(NewHeaderValidationView* this);
Document* NewHeaderValidationView_toValidationInfoDoc(NewHeaderValidationView* this);
Node* NewHeaderValidationView_toValidationInfoNode(NewHeaderValidationView* this, Document* document);
TransformInfoInterface* NewHeaderValidationView_getTransformInfoInterface(NewHeaderValidationView* this);

static void NewHeaderValidationView_initFields(NewHeaderValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void NewHeaderValidationView_init(NewHeaderValidationView* this, TransformInfoInterface* transformInfoInterface) {
        TopBarView_init(&this->base, transformInfoInterface);
        NewHeaderValidationView_initFields(this);
        this->heading = HeadingValidation_new();
}

NewHeaderValidationView* NewHeaderValidationView_new(TransformInfoInterface* transformInfoInterface) {
    NewHeaderValidationView* this = calloc(1, sizeof(NewHeaderValidationView));
    NewHeaderValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Document* NewHeaderValidationView_toXmlDoc(NewHeaderValidationView* this) {
        return nullptr;
}


bool NewHeaderValidationView_isValid(NewHeaderValidationView* this) {
        JAVA_TRY {
            CustomizerUtil_insert(CustomizerUtil_getInstance(), NewHeaderValidationView_getTransformInfoInterface(this), ((DomNodeInterface*) this));
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* NewHeaderValidationView_validationInfo(NewHeaderValidationView* this) {
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


Document* NewHeaderValidationView_toValidationInfoDoc(NewHeaderValidationView* this) {
        return nullptr;
}


Node* NewHeaderValidationView_toValidationInfoNode(NewHeaderValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* NewHeaderValidationView_getTransformInfoInterface(NewHeaderValidationView* this) {
        return TopBarView_getTransformInfoInterface((&this->base));
}

