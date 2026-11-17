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
#include "views/admin/workflow/WorkFlowsView.h"

typedef struct WorkflowsValidationView WorkflowsValidationView;
struct WorkflowsValidationView {
    WorkFlowsView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


WorkflowsValidationView* WorkflowsValidationView_new(TransformInfoInterface* transformInfoInterface);

void WorkflowsValidationView_init(WorkflowsValidationView* this, TransformInfoInterface* transformInfoInterface);
bool WorkflowsValidationView_isValid(WorkflowsValidationView* this);
const char* WorkflowsValidationView_validationInfo(WorkflowsValidationView* this);
Document* WorkflowsValidationView_toValidationInfoDoc(WorkflowsValidationView* this);
Node* WorkflowsValidationView_toValidationInfoNode(WorkflowsValidationView* this, Document* document);
TransformInfoInterface* WorkflowsValidationView_getTransformInfoInterface(WorkflowsValidationView* this);

static void WorkflowsValidationView_initFields(WorkflowsValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void WorkflowsValidationView_init(WorkflowsValidationView* this, TransformInfoInterface* transformInfoInterface) {
        WorkFlowsView_init(&this->base, transformInfoInterface);
        WorkflowsValidationView_initFields(this);
}

WorkflowsValidationView* WorkflowsValidationView_new(TransformInfoInterface* transformInfoInterface) {
    WorkflowsValidationView* this = calloc(1, sizeof(WorkflowsValidationView));
    WorkflowsValidationView_init(this, transformInfoInterface);
    return this;
}


bool WorkflowsValidationView_isValid(WorkflowsValidationView* this) {
        JAVA_TRY {
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* WorkflowsValidationView_validationInfo(WorkflowsValidationView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Please Contact Administrator");
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Getting Validation Info";
        } JAVA_END_TRY;
}


Document* WorkflowsValidationView_toValidationInfoDoc(WorkflowsValidationView* this) {
        return nullptr;
}


Node* WorkflowsValidationView_toValidationInfoNode(WorkflowsValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* WorkflowsValidationView_getTransformInfoInterface(WorkflowsValidationView* this) {
        return WorkFlowsView_getTransformInfoInterface((&this->base));
}

