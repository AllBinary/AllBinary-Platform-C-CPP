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
#include "org/allbinary/data/tables/workflow/WorkFlowEntityFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/control/workflow/WorkFlowData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/admin/workflow/WorkFlowView.h"

typedef struct DeleteValidationView DeleteValidationView;
struct DeleteValidationView {
    WorkFlowView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
    const char* workFlowName;
};


DeleteValidationView* DeleteValidationView_new(TransformInfoInterface* transformInfoInterface);

void DeleteValidationView_init(DeleteValidationView* this, TransformInfoInterface* transformInfoInterface);
bool DeleteValidationView_isValid(DeleteValidationView* this);
const char* DeleteValidationView_validationInfo(DeleteValidationView* this);
Document* DeleteValidationView_toValidationInfoDoc(DeleteValidationView* this);
Node* DeleteValidationView_toValidationInfoNode(DeleteValidationView* this, Document* document);
TransformInfoInterface* DeleteValidationView_getTransformInfoInterface(DeleteValidationView* this);

static void DeleteValidationView_initFields(DeleteValidationView* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void DeleteValidationView_init(DeleteValidationView* this, TransformInfoInterface* transformInfoInterface) {
        WorkFlowView_init(&this->base, transformInfoInterface);
        DeleteValidationView_initFields(this);
        this->workFlowName = JAVA_CALL(JAVA_CALL(DeleteValidationView_getPageContext(this), getRequest), getParameter, WorkFlowData_getInstance()->NAME);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Name: ", this->workFlowName), this, this->commonStrings->CONSTRUCTOR);
        }
}

DeleteValidationView* DeleteValidationView_new(TransformInfoInterface* transformInfoInterface) {
    DeleteValidationView* this = calloc(1, sizeof(DeleteValidationView));
    DeleteValidationView_init(this, transformInfoInterface);
    return this;
}


bool DeleteValidationView_isValid(DeleteValidationView* this) {
        JAVA_TRY {
            if (this->workFlowName == nullptr) {
                return false;
            }
            if (JAVA_CALL(WorkFlowEntityFactory_create2(WorkFlowEntityFactory_getInstance()), get, this->workFlowName, JAVA_CALL(DeleteValidationView_getWeblisketSession(this), getStoreName)) == nullptr) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "WorkFlow does not exist.", this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* DeleteValidationView_validationInfo(DeleteValidationView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            if (this->workFlowName == nullptr) {
                StringMaker_append(stringBuffer, "WorkFlow name is invalid<br />");
            }
            if (JAVA_CALL(WorkFlowEntityFactory_create2(WorkFlowEntityFactory_getInstance()), get, this->workFlowName, JAVA_CALL(DeleteValidationView_getWeblisketSession(this), getStoreName)) == nullptr) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "WorkFlow does not exist.", this, "validationInfo()");
                }
                StringMaker_append(stringBuffer, "WorkFlow does not exist<br />");
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


Document* DeleteValidationView_toValidationInfoDoc(DeleteValidationView* this) {
        return nullptr;
}


Node* DeleteValidationView_toValidationInfoNode(DeleteValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* DeleteValidationView_getTransformInfoInterface(DeleteValidationView* this) {
        return WorkFlowView_getTransformInfoInterface((&this->base));
}

