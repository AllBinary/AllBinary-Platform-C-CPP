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
// package views.business.context.modules.storefront.customizer.includes.meta

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
#include "views/business/context/modules/storefront/customizer/includes/meta/MetaView.h"

typedef struct NewMetaValidationView NewMetaValidationView;
struct NewMetaValidationView {
    MetaView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


NewMetaValidationView* NewMetaValidationView_new(TransformInfoInterface* transformInfoInterface);

void NewMetaValidationView_init(NewMetaValidationView* this, TransformInfoInterface* transformInfoInterface);
Document* NewMetaValidationView_toXmlDoc(NewMetaValidationView* this);
bool NewMetaValidationView_isValid(NewMetaValidationView* this);
const char* NewMetaValidationView_validationInfo(NewMetaValidationView* this);
Document* NewMetaValidationView_toValidationInfoDoc(NewMetaValidationView* this);
Node* NewMetaValidationView_toValidationInfoNode(NewMetaValidationView* this, Document* document);
const char* NewMetaValidationView_view(NewMetaValidationView* this);
TransformInfoInterface* NewMetaValidationView_getTransformInfoInterface(NewMetaValidationView* this);

static void NewMetaValidationView_initFields(NewMetaValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void NewMetaValidationView_init(NewMetaValidationView* this, TransformInfoInterface* transformInfoInterface) {
        MetaView_init(&this->base, transformInfoInterface);
        NewMetaValidationView_initFields(this);
}

NewMetaValidationView* NewMetaValidationView_new(TransformInfoInterface* transformInfoInterface) {
    NewMetaValidationView* this = calloc(1, sizeof(NewMetaValidationView));
    NewMetaValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Document* NewMetaValidationView_toXmlDoc(NewMetaValidationView* this) {
        return nullptr;
}


bool NewMetaValidationView_isValid(NewMetaValidationView* this) {
        JAVA_TRY {
            {
                CustomizerUtil_insert(CustomizerUtil_getInstance(), NewMetaValidationView_getTransformInfoInterface(this), ((DomNodeInterface*) this));
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* NewMetaValidationView_validationInfo(NewMetaValidationView* this) {
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


Document* NewMetaValidationView_toValidationInfoDoc(NewMetaValidationView* this) {
        return nullptr;
}


Node* NewMetaValidationView_toValidationInfoNode(NewMetaValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* NewMetaValidationView_view(NewMetaValidationView* this) {
        return JAVA_CALL(JAVA_CALL(this->base.views->ValidationOnlyTempUtil, getInstance), view, this);
}


// throws Exception
TransformInfoInterface* NewMetaValidationView_getTransformInfoInterface(NewMetaValidationView* this) {
        return MetaView_getTransformInfoInterface((&this->base));
}

