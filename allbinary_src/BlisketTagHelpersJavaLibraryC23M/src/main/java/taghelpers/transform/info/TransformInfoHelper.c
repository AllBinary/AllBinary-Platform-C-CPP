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
// package taghelpers.transform.info

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
#include "admin/taghelpers/BasicTable.h"
#include "org/allbinary/business/installer/Portion.h"
#include "org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlTableUtil.h"

typedef struct TransformInfoHelper TransformInfoHelper;
struct TransformInfoHelper {
    BasicTable base;
    LogUtil* logUtil;
    Portion* portion;
};


TransformInfoHelper* TransformInfoHelper_new(HashMap* hashMap, PageContext* pageContext);

void TransformInfoHelper_init(TransformInfoHelper* this, HashMap* hashMap, PageContext* pageContext);
const char* TransformInfoHelper_drop(TransformInfoHelper* this);
const char* TransformInfoHelper_create(TransformInfoHelper* this);
const char* TransformInfoHelper_restore(TransformInfoHelper* this);
const char* TransformInfoHelper_backup(TransformInfoHelper* this);

static void TransformInfoHelper_initFields(TransformInfoHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void TransformInfoHelper_init(TransformInfoHelper* this, HashMap* hashMap, PageContext* pageContext) {
    BasicTable_init(&this->base);
    TransformInfoHelper_initFields(this);
        this->portion = Portion_new(hashMap);
}

TransformInfoHelper* TransformInfoHelper_new(HashMap* hashMap, PageContext* pageContext) {
    TransformInfoHelper* this = calloc(1, sizeof(TransformInfoHelper));
    TransformInfoHelper_init(this, hashMap, pageContext);
    return this;
}


const char* TransformInfoHelper_drop(TransformInfoHelper* this) {
        JAVA_TRY {
            return TransformInfoEntityBuilder_dropTable(TransformInfoEntityBuilder_getInstance());
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to drop view info table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->DROP, e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* TransformInfoHelper_create(TransformInfoHelper* this) {
        JAVA_TRY {
            return TransformInfoEntityBuilder_createTable(TransformInfoEntityBuilder_getInstance());
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to create view info table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "create()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* TransformInfoHelper_restore(TransformInfoHelper* this) {
        JAVA_TRY {
            const char* success = "Restore Successful";
            const char* result = AbSqlTableUtil_restoreTable(AbSqlTableUtil_getInstance(), TransformInfoEntityBuilder_getInstance(), this->portion);
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


const char* TransformInfoHelper_backup(TransformInfoHelper* this) {
        JAVA_TRY {
            const char* success = "Backup Successful";
            const char* result = AbSqlTableUtil_backupTable(AbSqlTableUtil_getInstance(), TransformInfoEntityBuilder_getInstance());
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

