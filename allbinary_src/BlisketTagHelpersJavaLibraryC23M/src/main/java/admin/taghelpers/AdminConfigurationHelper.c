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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "admin/taghelpers/BasicTable.h"

typedef struct AdminConfigurationHelper AdminConfigurationHelper;
struct AdminConfigurationHelper {
    BasicTable base;
    LogUtil* logUtil;
};


AdminConfigurationHelper* AdminConfigurationHelper_new(HashMap* hashMap, PageContext* pageContext);

void AdminConfigurationHelper_init(AdminConfigurationHelper* this, HashMap* hashMap, PageContext* pageContext);
const char* AdminConfigurationHelper_create(AdminConfigurationHelper* this);
const char* AdminConfigurationHelper_drop(AdminConfigurationHelper* this);
const char* AdminConfigurationHelper_restore(AdminConfigurationHelper* this);
const char* AdminConfigurationHelper_backup(AdminConfigurationHelper* this);

static void AdminConfigurationHelper_initFields(AdminConfigurationHelper* this) {
    this->logUtil = LogUtil_getInstance();
}


void AdminConfigurationHelper_init(AdminConfigurationHelper* this, HashMap* hashMap, PageContext* pageContext) {
    BasicTable_init(&this->base);
    AdminConfigurationHelper_initFields(this);
}

AdminConfigurationHelper* AdminConfigurationHelper_new(HashMap* hashMap, PageContext* pageContext) {
    AdminConfigurationHelper* this = calloc(1, sizeof(AdminConfigurationHelper));
    AdminConfigurationHelper_init(this, hashMap, pageContext);
    return this;
}


const char* AdminConfigurationHelper_create(AdminConfigurationHelper* this) {
        JAVA_TRY {
            const char* success = "No Imp";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "create()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to create table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "create()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* AdminConfigurationHelper_drop(AdminConfigurationHelper* this) {
        JAVA_TRY {
            const char* success = "No Imp";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, this->commonStrings->DROP);
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to drop table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->DROP, e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* AdminConfigurationHelper_restore(AdminConfigurationHelper* this) {
        JAVA_TRY {
            const char* success = "No Imp";
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to restore backup";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "restore()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* AdminConfigurationHelper_backup(AdminConfigurationHelper* this) {
        JAVA_TRY {
            const char* success = "Backup Successful";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "backup()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to make backup";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "backup()", e);
            }
            return error;
        } JAVA_END_TRY;
}

