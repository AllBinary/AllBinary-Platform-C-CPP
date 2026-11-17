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
// package taghelpers

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
#include "admin/taghelpers/TagHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/workflow/StoreTagWorkFlowFactory.h"
#include "org/allbinary/logic/control/workflow/StoreWorkFlowInterface.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"

typedef struct StoreTagWorkFlowHelper StoreTagWorkFlowHelper;
struct StoreTagWorkFlowHelper {
    TagHelper base;
    LogUtil* logUtil;
    AbeClientInformationInterface* abeClientInformation;
    StoreWorkFlowInterface* storeWorkFlowInterface;
};


StoreTagWorkFlowHelper* StoreTagWorkFlowHelper_new(HashMap* hashMap, PageContext* pageContext);

void StoreTagWorkFlowHelper_init(StoreTagWorkFlowHelper* this, HashMap* hashMap, PageContext* pageContext);
int32_t StoreTagWorkFlowHelper_process(StoreTagWorkFlowHelper* this);

static void StoreTagWorkFlowHelper_initFields(StoreTagWorkFlowHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
    
}


void StoreTagWorkFlowHelper_init(StoreTagWorkFlowHelper* this, HashMap* hashMap, PageContext* pageContext) {
    TagHelper_init(&this->base);
    StoreTagWorkFlowHelper_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
            LogUtil_putF(this->logUtil, java_concat("Properties: ", HashMap_toString(hashMap)), this, "StoreTagWorkFlowHelper()");
        }
        this->storeWorkFlowInterface = StoreTagWorkFlowFactory_getInstance(StoreTagWorkFlowFactory_getInstance(), this->abeClientInformation, hashMap, pageContext);
}

StoreTagWorkFlowHelper* StoreTagWorkFlowHelper_new(HashMap* hashMap, PageContext* pageContext) {
    StoreTagWorkFlowHelper* this = calloc(1, sizeof(StoreTagWorkFlowHelper));
    StoreTagWorkFlowHelper_init(this, hashMap, pageContext);
    return this;
}


// throws Exception
int32_t StoreTagWorkFlowHelper_process(StoreTagWorkFlowHelper* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                LogUtil_putF(this->logUtil, "Process", this, this->commonStrings->PROCESS);
            }
            return StoreWorkFlowInterface_process(this->storeWorkFlowInterface);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to process workflow: ";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

