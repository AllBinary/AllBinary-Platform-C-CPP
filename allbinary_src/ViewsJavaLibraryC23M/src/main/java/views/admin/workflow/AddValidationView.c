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
#include "org/allbinary/logic/control/workflow/NewWorkFlowFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/admin/workflow/WorkFlowView.h"

typedef struct AddValidationView AddValidationView;
struct AddValidationView {
    WorkFlowView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
    AbeClientInformationInterface* abeClientInformation;
};


AddValidationView* AddValidationView_new(TransformInfoInterface* transformInfoInterface);

void AddValidationView_init(AddValidationView* this, TransformInfoInterface* transformInfoInterface);
bool AddValidationView_isValid(AddValidationView* this);
const char* AddValidationView_validationInfo(AddValidationView* this);
Document* AddValidationView_toValidationInfoDoc(AddValidationView* this);
Node* AddValidationView_toValidationInfoNode(AddValidationView* this, Document* document);
TransformInfoInterface* AddValidationView_getTransformInfoInterface(AddValidationView* this);

static void AddValidationView_initFields(AddValidationView* this) {
    this->logUtil = LogUtil_getInstance();
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
}


void AddValidationView_init(AddValidationView* this, TransformInfoInterface* transformInfoInterface) {
        WorkFlowView_init(&this->base, transformInfoInterface);
        AddValidationView_initFields(this);
        this->workFlowInterface = NewWorkFlowFactory_getInstance(NewWorkFlowFactory_getInstance(), this->abeClientInformation, AddValidationView_getPropertiesHashMap(this), AddValidationView_getPageContext(this));
}

AddValidationView* AddValidationView_new(TransformInfoInterface* transformInfoInterface) {
    AddValidationView* this = calloc(1, sizeof(AddValidationView));
    AddValidationView_init(this, transformInfoInterface);
    return this;
}


bool AddValidationView_isValid(AddValidationView* this) {
        JAVA_TRY {
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* AddValidationView_validationInfo(AddValidationView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            if (JAVA_CALL(WorkFlowEntityFactory_create2(WorkFlowEntityFactory_getInstance()), get, JAVA_CALL(this->workFlowInterface, getName), JAVA_CALL(AddValidationView_getTransformInfoInterface(this), getStoreName)) != nullptr) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "Workflow already exist", this, "validationInfo()");
                }
                StringMaker_append(stringBuffer, "The WorkFlow name you selected is already in use.<br/>  Please select another Name.<br />");
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Getting Validation Info";
        } JAVA_END_TRY;
}


Document* AddValidationView_toValidationInfoDoc(AddValidationView* this) {
        return nullptr;
}


Node* AddValidationView_toValidationInfoNode(AddValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* AddValidationView_getTransformInfoInterface(AddValidationView* this) {
        return WorkFlowView_getTransformInfoInterface((&this->base));
}

