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
// package views.admin.workflow

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/admin/workflow/WorkFlowView.h"

typedef struct UpdateView UpdateView;
struct UpdateView {
    WorkFlowView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


UpdateView* UpdateView_new(TransformInfoInterface* transformInfoInterface);

void UpdateView_init(UpdateView* this, TransformInfoInterface* transformInfoInterface);
bool UpdateView_isValid(UpdateView* this);
const char* UpdateView_validationInfo(UpdateView* this);
Document* UpdateView_toValidationInfoDoc(UpdateView* this);
Node* UpdateView_toValidationInfoNode(UpdateView* this, Document* document);
TransformInfoInterface* UpdateView_getTransformInfoInterface(UpdateView* this);

static void UpdateView_initFields(UpdateView* this) {
    this->logUtil = LogUtil_getInstance();
}


void UpdateView_init(UpdateView* this, TransformInfoInterface* transformInfoInterface) {
        WorkFlowView_init(&this->base, transformInfoInterface);
        UpdateView_initFields(this);
}

UpdateView* UpdateView_new(TransformInfoInterface* transformInfoInterface) {
    UpdateView* this = calloc(1, sizeof(UpdateView));
    UpdateView_init(this, transformInfoInterface);
    return this;
}


bool UpdateView_isValid(UpdateView* this) {
        JAVA_TRY {
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* UpdateView_validationInfo(UpdateView* this) {
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


Document* UpdateView_toValidationInfoDoc(UpdateView* this) {
        return nullptr;
}


Node* UpdateView_toValidationInfoNode(UpdateView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* UpdateView_getTransformInfoInterface(UpdateView* this) {
        return WorkFlowView_getTransformInfoInterface((&this->base));
}

