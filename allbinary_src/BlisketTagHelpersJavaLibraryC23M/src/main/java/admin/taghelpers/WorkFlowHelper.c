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
#include "org/allbinary/data/tables/workflow/WorkFlowEntityFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlTableUtil.h"
#include "admin/taghelpers/BasicTable.h"

typedef struct WorkFlowHelper WorkFlowHelper;
struct WorkFlowHelper {
    BasicTable base;
    LogUtil* logUtil;
    HashMap* hashMap;
    PageContext* pageContext;
    Portion* portion;
};


WorkFlowHelper* WorkFlowHelper_new(HashMap* hashMap, PageContext* pageContext);

void WorkFlowHelper_init(WorkFlowHelper* this, HashMap* hashMap, PageContext* pageContext);
const char* WorkFlowHelper_drop(WorkFlowHelper* this);
const char* WorkFlowHelper_create(WorkFlowHelper* this);
const char* WorkFlowHelper_restore(WorkFlowHelper* this);
const char* WorkFlowHelper_backup(WorkFlowHelper* this);

static void WorkFlowHelper_initFields(WorkFlowHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
}


void WorkFlowHelper_init(WorkFlowHelper* this, HashMap* hashMap, PageContext* pageContext) {
    BasicTable_init(&this->base);
    WorkFlowHelper_initFields(this);
        this->hashMap = hashMap;
        this->pageContext = pageContext;
        this->portion = Portion_new(hashMap);
}

WorkFlowHelper* WorkFlowHelper_new(HashMap* hashMap, PageContext* pageContext) {
    WorkFlowHelper* this = calloc(1, sizeof(WorkFlowHelper));
    WorkFlowHelper_init(this, hashMap, pageContext);
    return this;
}


const char* WorkFlowHelper_drop(WorkFlowHelper* this) {
        JAVA_TRY {
            return JAVA_CALL(WorkFlowEntityFactory_create2(WorkFlowEntityFactory_getInstance()), dropTable);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to drop view info table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->DROP, e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* WorkFlowHelper_create(WorkFlowHelper* this) {
        JAVA_TRY {
            return JAVA_CALL(WorkFlowEntityFactory_create2(WorkFlowEntityFactory_getInstance()), createTable);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to create workflow table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "create()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* WorkFlowHelper_restore(WorkFlowHelper* this) {
        JAVA_TRY {
            const char* success = "Restore Successful";
            const char* result = AbSqlTableUtil_restoreTable(AbSqlTableUtil_getInstance(), WorkFlowEntityFactory_create2(WorkFlowEntityFactory_getInstance()), this->portion);
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


const char* WorkFlowHelper_backup(WorkFlowHelper* this) {
        JAVA_TRY {
            const char* success = "Restore Successful";
            const char* result = AbSqlTableUtil_backupTable(AbSqlTableUtil_getInstance(), WorkFlowEntityFactory_create2(WorkFlowEntityFactory_getInstance()));
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

