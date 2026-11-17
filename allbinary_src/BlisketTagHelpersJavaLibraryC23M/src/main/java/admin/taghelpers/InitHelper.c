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
#include "org/allbinary/business/init/InitInfoEntity.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "admin/taghelpers/BasicTable.h"

typedef struct InitHelper InitHelper;
struct InitHelper {
    BasicTable base;
    LogUtil* logUtil;
};


InitHelper* InitHelper_new(HashMap* hashMap, PageContext* pageContext);

void InitHelper_init(InitHelper* this, HashMap* hashMap, PageContext* pageContext);
const char* InitHelper_drop(InitHelper* this);
const char* InitHelper_create(InitHelper* this);
const char* InitHelper_view(InitHelper* this);
const char* InitHelper_restore(InitHelper* this);
const char* InitHelper_backup(InitHelper* this);

static void InitHelper_initFields(InitHelper* this) {
    this->logUtil = LogUtil_getInstance();
}


void InitHelper_init(InitHelper* this, HashMap* hashMap, PageContext* pageContext) {
    BasicTable_init(&this->base);
    InitHelper_initFields(this);
}

InitHelper* InitHelper_new(HashMap* hashMap, PageContext* pageContext) {
    InitHelper* this = calloc(1, sizeof(InitHelper));
    InitHelper_init(this, hashMap, pageContext);
    return this;
}


const char* InitHelper_drop(InitHelper* this) {
        JAVA_TRY {
            if (InitInfoEntity_dropTable(InitInfoEntity_new())) {
                return "Table Dropped Successfully";
            } else {
                return "Failed To Drop Table";
            }
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to drop log table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->DROP, e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* InitHelper_create(InitHelper* this) {
        JAVA_TRY {
            return InitInfoEntity_createTable(InitInfoEntity_new());
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to create new log table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "create()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* InitHelper_view(InitHelper* this) {
        JAVA_TRY {
            const char* success = "Fix Me";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "view()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to view Log table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* InitHelper_restore(InitHelper* this) {
        JAVA_TRY {
            const char* success = "Restore Successful";
            const char* result = "Fix Me";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "restore()");
            }
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to restore backup";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "restore()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* InitHelper_backup(InitHelper* this) {
        JAVA_TRY {
            const char* success = "Restore Successful";
            const char* result = "Fix Me";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "backup()");
            }
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to make backup";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "backup()", e);
            }
            return error;
        } JAVA_END_TRY;
}

