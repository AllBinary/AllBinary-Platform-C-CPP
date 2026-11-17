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
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/template/customizer/bodies/title/TitleBodyValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#include "views/business/context/modules/storefront/customizer/bodies/generic/title/TitleBodyCustomizerView.h"

typedef struct NewTitleBodyValidationView NewTitleBodyValidationView;
struct NewTitleBodyValidationView {
    TitleBodyCustomizerView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


NewTitleBodyValidationView* NewTitleBodyValidationView_new(TransformInfoInterface* transformInfoInterface);

void NewTitleBodyValidationView_init(NewTitleBodyValidationView* this, TransformInfoInterface* transformInfoInterface);
Document* NewTitleBodyValidationView_toXmlDoc(NewTitleBodyValidationView* this);
bool NewTitleBodyValidationView_isValid(NewTitleBodyValidationView* this);
const char* NewTitleBodyValidationView_validationInfo(NewTitleBodyValidationView* this);
Document* NewTitleBodyValidationView_toValidationInfoDoc(NewTitleBodyValidationView* this);
Node* NewTitleBodyValidationView_toValidationInfoNode(NewTitleBodyValidationView* this, Document* document);
const char* NewTitleBodyValidationView_view(NewTitleBodyValidationView* this);
TransformInfoInterface* NewTitleBodyValidationView_getTransformInfoInterface(NewTitleBodyValidationView* this);

static void NewTitleBodyValidationView_initFields(NewTitleBodyValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void NewTitleBodyValidationView_init(NewTitleBodyValidationView* this, TransformInfoInterface* transformInfoInterface) {
        TitleBodyCustomizerView_init(&this->base, transformInfoInterface);
        NewTitleBodyValidationView_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(transformInfoInterface)), this, "NewTitleBodyValidationView()");
        }
        this->titleBody = TitleBodyValidation_new();
}

NewTitleBodyValidationView* NewTitleBodyValidationView_new(TransformInfoInterface* transformInfoInterface) {
    NewTitleBodyValidationView* this = calloc(1, sizeof(NewTitleBodyValidationView));
    NewTitleBodyValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Document* NewTitleBodyValidationView_toXmlDoc(NewTitleBodyValidationView* this) {
        return nullptr;
}


bool NewTitleBodyValidationView_isValid(NewTitleBodyValidationView* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("View Name: ", JAVA_CALL(NewTitleBodyValidationView_getTransformInfoInterface(this), getName)), this, this->commonStrings->IS_VALID);
            }
            {
                CustomizerUtil_insert(CustomizerUtil_getInstance(), NewTitleBodyValidationView_getTransformInfoInterface(this), ((DomNodeInterface*) this->titleBody));
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* NewTitleBodyValidationView_validationInfo(NewTitleBodyValidationView* this) {
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


Document* NewTitleBodyValidationView_toValidationInfoDoc(NewTitleBodyValidationView* this) {
        return nullptr;
}


Node* NewTitleBodyValidationView_toValidationInfoNode(NewTitleBodyValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* NewTitleBodyValidationView_view(NewTitleBodyValidationView* this) {
        return JAVA_CALL(JAVA_CALL(this->base.views->ValidationOnlyTempUtil, getInstance), view, this);
}


// throws Exception
TransformInfoInterface* NewTitleBodyValidationView_getTransformInfoInterface(NewTitleBodyValidationView* this) {
        return TitleBodyCustomizerView_getTransformInfoInterface((&this->base));
}

