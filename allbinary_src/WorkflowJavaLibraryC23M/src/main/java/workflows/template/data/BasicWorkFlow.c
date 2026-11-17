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
// package workflows.template.data

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/jsp/PageContext.h"
// #include "javax/servlet/jsp/tagext/TagSupport.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/control/workflow/WorkFlowData.h"
#include "org/allbinary/logic/control/workflow/WorkFlowInterface.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "org/allbinary/logic/visual/transform/TransformFactory.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct BasicWorkFlow BasicWorkFlow;
struct BasicWorkFlow {
    WorkFlowInterface WorkFlowInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    AbeClientInformationInterface* abeClientInformation;
    ValidationComponentInterface* validationDomNodeInterface;
    HashMap* propertiesHashMap;
    PageContext* pageContext;
};


BasicWorkFlow* BasicWorkFlow_new(HashMap* propertiesHashMap, PageContext* pageContext);

void BasicWorkFlow_init(BasicWorkFlow* this, HashMap* propertiesHashMap, PageContext* pageContext);
const char* BasicWorkFlow_getName(BasicWorkFlow* this);
HashMap* BasicWorkFlow_getPropertiesHashMap(BasicWorkFlow* this);
PageContext* BasicWorkFlow_getPageContext(BasicWorkFlow* this);
int32_t BasicWorkFlow_process(BasicWorkFlow* this);

static void BasicWorkFlow_initFields(BasicWorkFlow* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
    
    
    
}


void BasicWorkFlow_init(BasicWorkFlow* this, HashMap* propertiesHashMap, PageContext* pageContext) {
    BasicWorkFlow_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->WORKFLOW)) {
            LogUtil_putF(this->logUtil, java_concat("Properties: ", HashMap_toString(propertiesHashMap)), this, "BasicWorkFlow()");
        }
        this->propertiesHashMap = propertiesHashMap;
        this->pageContext = pageContext;
        this->validationDomNodeInterface = ((ValidationComponentInterface*) TransformFactory_getInstance(TransformFactory_getInstance(), this->abeClientInformation, propertiesHashMap, pageContext));
}

BasicWorkFlow* BasicWorkFlow_new(HashMap* propertiesHashMap, PageContext* pageContext) {
    BasicWorkFlow* this = calloc(1, sizeof(BasicWorkFlow));
    BasicWorkFlow_init(this, propertiesHashMap, pageContext);
    return this;
}


// throws Exception
const char* BasicWorkFlow_getName(BasicWorkFlow* this) {
        return ((const char*) JAVA_CALL(BasicWorkFlow_getPropertiesHashMap(this), get, WorkFlowData_getInstance()->NAME));
}


HashMap* BasicWorkFlow_getPropertiesHashMap(BasicWorkFlow* this) {
        return this->propertiesHashMap;
}


PageContext* BasicWorkFlow_getPageContext(BasicWorkFlow* this) {
        return this->pageContext;
}


// throws Exception
int32_t BasicWorkFlow_process(BasicWorkFlow* this) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->WORKFLOW)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->PROCESS);
        }
        if (JAVA_CALL(ValidationComponentInterface_isValid(this->validationDomNodeInterface), booleanValue)) {
            JAVA_CALL(PageContext_getOut(this->pageContext), print, ValidationComponentInterface_view(this->validationDomNodeInterface));
            return java_string_of(TagSupport_EVAL_BODY_INCLUDE);
        } else {
            JAVA_CALL(PageContext_getOut(this->pageContext), print, ValidationComponentInterface_validationInfo(this->validationDomNodeInterface));
            return java_string_of(TagSupport_SKIP_BODY);
        }
}

