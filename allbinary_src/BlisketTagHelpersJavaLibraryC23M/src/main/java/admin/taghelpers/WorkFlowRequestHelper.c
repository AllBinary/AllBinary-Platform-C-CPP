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
// package admin.taghelpers

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
#include "org/allbinary/data/tables/workflow/WorkFlowEntityFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/workflow/NewWorkFlowFactory.h"
#include "org/allbinary/logic/control/workflow/WorkFlowData.h"
#include "org/allbinary/logic/control/workflow/WorkFlowInterface.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "admin/taghelpers/ModifyTable.h"

typedef struct WorkFlowRequestHelper WorkFlowRequestHelper;
struct WorkFlowRequestHelper {
    ModifyTable base;
    LogUtil* logUtil;
    AbeClientInformationInterface* abeClientInformation;
    WorkFlowInterface* workFlowInterface;
};


WorkFlowRequestHelper* WorkFlowRequestHelper_new(HashMap* hashMap, PageContext* pageContext);

void WorkFlowRequestHelper_init(WorkFlowRequestHelper* this, HashMap* hashMap, PageContext* pageContext);
const char* WorkFlowRequestHelper_delete(WorkFlowRequestHelper* this);
const char* WorkFlowRequestHelper_insert(WorkFlowRequestHelper* this);
const char* WorkFlowRequestHelper_update(WorkFlowRequestHelper* this);

static void WorkFlowRequestHelper_initFields(WorkFlowRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
    
}


void WorkFlowRequestHelper_init(WorkFlowRequestHelper* this, HashMap* hashMap, PageContext* pageContext) {
    ModifyTable_init(&this->base);
    WorkFlowRequestHelper_initFields(this);
        this->workFlowInterface = NewWorkFlowFactory_getInstance(NewWorkFlowFactory_getInstance(), this->abeClientInformation, hashMap, pageContext);
}

WorkFlowRequestHelper* WorkFlowRequestHelper_new(HashMap* hashMap, PageContext* pageContext) {
    WorkFlowRequestHelper* this = calloc(1, sizeof(WorkFlowRequestHelper));
    WorkFlowRequestHelper_init(this, hashMap, pageContext);
    return this;
}


// throws Exception
const char* WorkFlowRequestHelper_delete(WorkFlowRequestHelper* this) {
        JAVA_TRY {
            StringUtil* stringUtil = StringUtil_getInstance();
            JAVA_CALL(WorkFlowEntityFactory_create2(WorkFlowEntityFactory_getInstance()), delete, WorkFlowInterface_getName(this->workFlowInterface), stringUtil->EMPTY_STRING);
            const char* success = java_concat(java_concat(java_concat(java_concat("Successfully Removed the workflow with ", java_string_of(WorkFlowData_getInstance()->NAME)), "= "), WorkFlowInterface_getName(this->workFlowInterface)), " from ");
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "delete()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            JAVA_TRY {
                const char* error = java_concat(java_concat(java_concat(java_concat("Failed to remove workflow with ", java_string_of(WorkFlowData_getInstance()->NAME)), "= "), WorkFlowInterface_getName(this->workFlowInterface)), " from ");
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                    LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "delete()", e);
                }
                java_throw(java_exception_new("Exception", e));
            } JAVA_CATCH(Exception, e2) {
                const char* error = "Failed to get data from workflowinterface to set error string";
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                    LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "delete()", e2);
                }
                return error;
            } JAVA_END_TRY;
        } JAVA_END_TRY;
}


const char* WorkFlowRequestHelper_insert(WorkFlowRequestHelper* this) {
        JAVA_TRY {
            const char* success = "New User Successfully added to the Users Table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "add()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to add User";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "add()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* WorkFlowRequestHelper_update(WorkFlowRequestHelper* this) {
        JAVA_TRY {
            const char* success = "Updated WorkFlow Successfully";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "update()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to update WorkFlow";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "update()", e);
            }
            return error;
        } JAVA_END_TRY;
}

