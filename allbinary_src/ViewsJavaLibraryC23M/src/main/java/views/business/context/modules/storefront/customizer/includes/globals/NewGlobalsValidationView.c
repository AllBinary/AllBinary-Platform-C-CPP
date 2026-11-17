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
// package views.business.context.modules.storefront.customizer.includes.globals

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
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#include "views/business/context/modules/storefront/customizer/includes/globals/GlobalsView.h"

typedef struct NewGlobalsValidationView NewGlobalsValidationView;
struct NewGlobalsValidationView {
    GlobalsView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


NewGlobalsValidationView* NewGlobalsValidationView_new(TransformInfoInterface* transformInfoInterface);

void NewGlobalsValidationView_init(NewGlobalsValidationView* this, TransformInfoInterface* transformInfoInterface);
Document* NewGlobalsValidationView_toXmlDoc(NewGlobalsValidationView* this);
bool NewGlobalsValidationView_isValid(NewGlobalsValidationView* this);
const char* NewGlobalsValidationView_validationInfo(NewGlobalsValidationView* this);
Document* NewGlobalsValidationView_toValidationInfoDoc(NewGlobalsValidationView* this);
Node* NewGlobalsValidationView_toValidationInfoNode(NewGlobalsValidationView* this, Document* document);
const char* NewGlobalsValidationView_view(NewGlobalsValidationView* this);
TransformInfoInterface* NewGlobalsValidationView_getTransformInfoInterface(NewGlobalsValidationView* this);

static void NewGlobalsValidationView_initFields(NewGlobalsValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void NewGlobalsValidationView_init(NewGlobalsValidationView* this, TransformInfoInterface* transformInfoInterface) {
        GlobalsView_init(&this->base, transformInfoInterface);
        NewGlobalsValidationView_initFields(this);
}

NewGlobalsValidationView* NewGlobalsValidationView_new(TransformInfoInterface* transformInfoInterface) {
    NewGlobalsValidationView* this = calloc(1, sizeof(NewGlobalsValidationView));
    NewGlobalsValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Document* NewGlobalsValidationView_toXmlDoc(NewGlobalsValidationView* this) {
        return nullptr;
}


bool NewGlobalsValidationView_isValid(NewGlobalsValidationView* this) {
        JAVA_TRY {
            {
                CustomizerUtil_insert(CustomizerUtil_getInstance(), NewGlobalsValidationView_getTransformInfoInterface(this), ((DomNodeInterface*) this));
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* NewGlobalsValidationView_validationInfo(NewGlobalsValidationView* this) {
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


Document* NewGlobalsValidationView_toValidationInfoDoc(NewGlobalsValidationView* this) {
        return nullptr;
}


Node* NewGlobalsValidationView_toValidationInfoNode(NewGlobalsValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* NewGlobalsValidationView_view(NewGlobalsValidationView* this) {
        return JAVA_CALL(JAVA_CALL(this->base.views->ValidationOnlyTempUtil, getInstance), view, this);
}


// throws Exception
TransformInfoInterface* NewGlobalsValidationView_getTransformInfoInterface(NewGlobalsValidationView* this) {
        return GlobalsView_getTransformInfoInterface((&this->base));
}

