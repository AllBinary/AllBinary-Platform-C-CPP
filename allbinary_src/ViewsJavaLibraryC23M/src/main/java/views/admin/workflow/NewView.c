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
#include "org/allbinary/business/DynamicObjectData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/control/workflow/NewWorkFlowFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/admin/workflow/WorkFlowView.h"

typedef struct NewView NewView;
struct NewView {
    WorkFlowView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
    AbeClientInformationInterface* abeClientInformation;
};


NewView* NewView_new(TransformInfoInterface* transformInfoInterface);

void NewView_init(NewView* this, TransformInfoInterface* transformInfoInterface);
bool NewView_isValid(NewView* this);
const char* NewView_validationInfo(NewView* this);
Document* NewView_toValidationInfoDoc(NewView* this);
Node* NewView_toValidationInfoNode(NewView* this, Document* document);
TransformInfoInterface* NewView_getTransformInfoInterface(NewView* this);

static void NewView_initFields(NewView* this) {
    this->logUtil = LogUtil_getInstance();
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
}


void NewView_init(NewView* this, TransformInfoInterface* transformInfoInterface) {
        WorkFlowView_init(&this->base, transformInfoInterface);
        NewView_initFields(this);
        TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) NewView_getTransformInfoInterface(this));
        this->workFlowInterface = NewWorkFlowFactory_getInstance(NewWorkFlowFactory_getInstance(), this->abeClientInformation, ((const char*) JAVA_CALL(TransformInfoHttpInterface_getPropertiesHashMap(httpTransformInfoInterface), get, DynamicObjectData_NAME)));
}

NewView* NewView_new(TransformInfoInterface* transformInfoInterface) {
    NewView* this = calloc(1, sizeof(NewView));
    NewView_init(this, transformInfoInterface);
    return this;
}


bool NewView_isValid(NewView* this) {
        JAVA_TRY {
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* NewView_validationInfo(NewView* this) {
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


Document* NewView_toValidationInfoDoc(NewView* this) {
        return nullptr;
}


Node* NewView_toValidationInfoNode(NewView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* NewView_getTransformInfoInterface(NewView* this) {
        return WorkFlowView_getTransformInfoInterface((&this->base));
}

