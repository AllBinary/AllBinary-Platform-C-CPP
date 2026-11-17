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

typedef struct InsertMetaValidationView InsertMetaValidationView;
struct InsertMetaValidationView {
    MetaView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


InsertMetaValidationView* InsertMetaValidationView_new(TransformInfoInterface* transformInfoInterface);

void InsertMetaValidationView_init(InsertMetaValidationView* this, TransformInfoInterface* transformInfoInterface);
Document* InsertMetaValidationView_toXmlDoc(InsertMetaValidationView* this);
bool InsertMetaValidationView_isValid(InsertMetaValidationView* this);
const char* InsertMetaValidationView_validationInfo(InsertMetaValidationView* this);
Document* InsertMetaValidationView_toValidationInfoDoc(InsertMetaValidationView* this);
Node* InsertMetaValidationView_toValidationInfoNode(InsertMetaValidationView* this, Document* document);
TransformInfoInterface* InsertMetaValidationView_getTransformInfoInterface(InsertMetaValidationView* this);

static void InsertMetaValidationView_initFields(InsertMetaValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void InsertMetaValidationView_init(InsertMetaValidationView* this, TransformInfoInterface* transformInfoInterface) {
        MetaView_init(&this->base, transformInfoInterface);
        InsertMetaValidationView_initFields(this);
}

InsertMetaValidationView* InsertMetaValidationView_new(TransformInfoInterface* transformInfoInterface) {
    InsertMetaValidationView* this = calloc(1, sizeof(InsertMetaValidationView));
    InsertMetaValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Document* InsertMetaValidationView_toXmlDoc(InsertMetaValidationView* this) {
        return nullptr;
}


bool InsertMetaValidationView_isValid(InsertMetaValidationView* this) {
        JAVA_TRY {
            bool isValid = true;
            CustomizerUtil_insert(CustomizerUtil_getInstance(), InsertMetaValidationView_getTransformInfoInterface(this), ((DomNodeInterface*) this));
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* InsertMetaValidationView_validationInfo(InsertMetaValidationView* this) {
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


Document* InsertMetaValidationView_toValidationInfoDoc(InsertMetaValidationView* this) {
        return nullptr;
}


Node* InsertMetaValidationView_toValidationInfoNode(InsertMetaValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* InsertMetaValidationView_getTransformInfoInterface(InsertMetaValidationView* this) {
        return MetaView_getTransformInfoInterface((&this->base));
}

