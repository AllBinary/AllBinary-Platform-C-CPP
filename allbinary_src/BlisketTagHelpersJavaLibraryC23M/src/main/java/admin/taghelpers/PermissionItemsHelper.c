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
#include "org/allbinary/business/installer/Portion.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/permissions/PermissionItemsEntityFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlTableUtil.h"
#include "admin/taghelpers/BasicTable.h"

typedef struct PermissionItemsHelper PermissionItemsHelper;
struct PermissionItemsHelper {
    BasicTable base;
    LogUtil* logUtil;
    Portion* portion;
};


PermissionItemsHelper* PermissionItemsHelper_new(HashMap* hashMap, PageContext* pageContext);

void PermissionItemsHelper_init(PermissionItemsHelper* this, HashMap* hashMap, PageContext* pageContext);
const char* PermissionItemsHelper_create(PermissionItemsHelper* this);
const char* PermissionItemsHelper_drop(PermissionItemsHelper* this);
const char* PermissionItemsHelper_restore(PermissionItemsHelper* this);
const char* PermissionItemsHelper_backup(PermissionItemsHelper* this);

static void PermissionItemsHelper_initFields(PermissionItemsHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void PermissionItemsHelper_init(PermissionItemsHelper* this, HashMap* hashMap, PageContext* pageContext) {
    BasicTable_init(&this->base);
    PermissionItemsHelper_initFields(this);
        this->portion = Portion_new(hashMap);
}

PermissionItemsHelper* PermissionItemsHelper_new(HashMap* hashMap, PageContext* pageContext) {
    PermissionItemsHelper* this = calloc(1, sizeof(PermissionItemsHelper));
    PermissionItemsHelper_init(this, hashMap, pageContext);
    return this;
}


const char* PermissionItemsHelper_create(PermissionItemsHelper* this) {
        JAVA_TRY {
            const char* success = JAVA_CALL(PermissionItemsEntityFactory_getPermissionItemsEntityInstance(PermissionItemsEntityFactory_getInstance()), createTable);
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


const char* PermissionItemsHelper_drop(PermissionItemsHelper* this) {
        JAVA_TRY {
            const char* success = JAVA_CALL(PermissionItemsEntityFactory_getPermissionItemsEntityInstance(PermissionItemsEntityFactory_getInstance()), dropTable);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, this->commonStrings->DROP);
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to drop pricing tables";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->DROP, e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* PermissionItemsHelper_restore(PermissionItemsHelper* this) {
        JAVA_TRY {
            const char* success = "Restore Successful";
            const char* result = AbSqlTableUtil_restoreTable(AbSqlTableUtil_getInstance(), PermissionItemsEntityFactory_getPermissionItemsEntityInstance(PermissionItemsEntityFactory_getInstance()), this->portion);
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


const char* PermissionItemsHelper_backup(PermissionItemsHelper* this) {
        JAVA_TRY {
            const char* success = "Backup Successful";
            const char* result = AbSqlTableUtil_backupTable(AbSqlTableUtil_getInstance(), PermissionItemsEntityFactory_getPermissionItemsEntityInstance(PermissionItemsEntityFactory_getInstance()));
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

