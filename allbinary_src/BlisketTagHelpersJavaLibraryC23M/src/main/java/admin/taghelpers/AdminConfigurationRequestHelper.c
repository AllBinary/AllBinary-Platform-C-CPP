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
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/user/modules/admin/configuration/AdminConfiguration.h"
#include "org/allbinary/business/user/modules/admin/configuration/AdminConfigurationInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "admin/taghelpers/ModifyTable.h"

typedef struct AdminConfigurationRequestHelper AdminConfigurationRequestHelper;
struct AdminConfigurationRequestHelper {
    ModifyTable base;
    LogUtil* logUtil;
    HttpServletRequest* request;
};


AdminConfigurationRequestHelper* AdminConfigurationRequestHelper_new(HashMap* hashMap, PageContext* pageContext);

void AdminConfigurationRequestHelper_init(AdminConfigurationRequestHelper* this, HashMap* hashMap, PageContext* pageContext);
const char* AdminConfigurationRequestHelper_insert(AdminConfigurationRequestHelper* this);
const char* AdminConfigurationRequestHelper_delete(AdminConfigurationRequestHelper* this);
const char* AdminConfigurationRequestHelper_update(AdminConfigurationRequestHelper* this);

static void AdminConfigurationRequestHelper_initFields(AdminConfigurationRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void AdminConfigurationRequestHelper_init(AdminConfigurationRequestHelper* this, HashMap* hashMap, PageContext* pageContext) {
    ModifyTable_init(&this->base);
    AdminConfigurationRequestHelper_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
            LogUtil_putF(this->logUtil, this->commonStrings->CONSTRUCTOR, this, this->commonStrings->CONSTRUCTOR);
        }
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
}

AdminConfigurationRequestHelper* AdminConfigurationRequestHelper_new(HashMap* hashMap, PageContext* pageContext) {
    AdminConfigurationRequestHelper* this = calloc(1, sizeof(AdminConfigurationRequestHelper));
    AdminConfigurationRequestHelper_init(this, hashMap, pageContext);
    return this;
}


const char* AdminConfigurationRequestHelper_insert(AdminConfigurationRequestHelper* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, "insert()");
            }
            const char* success = "Successfully inserted AdminConfiguration";
            AdminConfigurationInterface* adminConfigurationInterface = ((AdminConfigurationInterface*) AdminConfiguration_new(this->request));
            AdminConfigurationInterface_write(adminConfigurationInterface);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "insert()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to created AdminConfiguration";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "insert()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* AdminConfigurationRequestHelper_delete(AdminConfigurationRequestHelper* this) {
        JAVA_TRY {
            const char* success = "Successfully deleted AdminConfiguration";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "delete()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to delete";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "delete()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* AdminConfigurationRequestHelper_update(AdminConfigurationRequestHelper* this) {
        JAVA_TRY {
            const char* success = "Updated AdminConfiguration Successful";
            AdminConfigurationInterface* adminConfigurationInterface = ((AdminConfigurationInterface*) AdminConfiguration_new(this->request));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "update()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to update";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "update()", e);
            }
            return error;
        } JAVA_END_TRY;
}

