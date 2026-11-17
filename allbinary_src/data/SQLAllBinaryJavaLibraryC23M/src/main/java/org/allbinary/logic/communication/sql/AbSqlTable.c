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
// package org.allbinary.logic.communication.sql

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/init/db/DbConnectionInfo.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBasic.h"

typedef struct AbSqlTable AbSqlTable;
struct AbSqlTable {
    AbSqlBasic base;
    LogUtil* logUtil;
    const char* tableName;
    const char* METHOD_CREATED_TABLE;
    const char* METHOD_DROP_TABLE;
    const char* TABLE_CREATION_SUCCESS;
    const char* DROPPED_SUCCESS;
};


AbSqlTable* AbSqlTable_new(DbConnectionInfo* databaseConnectionInfoInterface);

void AbSqlTable_init(AbSqlTable* this, DbConnectionInfo* databaseConnectionInfoInterface);
void AbSqlTable_setTableName(AbSqlTable* this, const char* tableName);
const char* AbSqlTable_getTableName(AbSqlTable* this);
const char* AbSqlTable_createTable(AbSqlTable* this, const char* data);
const char* AbSqlTable_dropTable(AbSqlTable* this);

static void AbSqlTable_initFields(AbSqlTable* this) {
    this->logUtil = LogUtil_getInstance();
    this->tableName = nullptr;
    this->METHOD_CREATED_TABLE = "createTable()";
    this->METHOD_DROP_TABLE = "dropTable()";
    this->TABLE_CREATION_SUCCESS = "Table Creation Successful: ";
    this->DROPPED_SUCCESS = " Dropped Successfully";
}


void AbSqlTable_init(AbSqlTable* this, DbConnectionInfo* databaseConnectionInfoInterface) {
        AbSqlBasic_init(&this->base, databaseConnectionInfoInterface);
        AbSqlTable_initFields(this);
}

AbSqlTable* AbSqlTable_new(DbConnectionInfo* databaseConnectionInfoInterface) {
    AbSqlTable* this = calloc(1, sizeof(AbSqlTable));
    AbSqlTable_init(this, databaseConnectionInfoInterface);
    return this;
}


void AbSqlTable_setTableName(AbSqlTable* this, const char* tableName) {
        this->tableName = tableName;
}


const char* AbSqlTable_getTableName(AbSqlTable* this) {
        return this->tableName;
}


// synchronized
const char* AbSqlTable_createTable(AbSqlTable* this, const char* data) {
        JAVA_TRY {
            AbSqlTable_executeSQLStatement(this, data);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat(this->TABLE_CREATION_SUCCESS, this->tableName), " with statement: "), data), this, this->METHOD_CREATED_TABLE);
            }
            return java_concat(this->tableName, java_string_of(this->sqlStrings->CREATE_RETURN));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, java_concat(java_concat(java_concat("Table Creation Failed: ", this->tableName), " with statement: "), data), this, this->METHOD_CREATED_TABLE, e);
            }
            return java_concat(java_concat("Failed to Create ", this->tableName), " table.");
        } JAVA_END_TRY;
}


// synchronized
const char* AbSqlTable_dropTable(AbSqlTable* this) {
        const char* sqlStatement = java_concat(java_string_of(this->sqlStrings->DROP_TABLE), this->tableName);
        JAVA_TRY {
            AbSqlTable_executeSQLStatement(this, sqlStatement);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->SUCCESS_SQL_STATEMENT), sqlStatement), this, this->METHOD_DROP_TABLE);
            }
            return java_concat(this->tableName, this->DROPPED_SUCCESS);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, java_concat(java_string_of(this->FAILED_SQL_STATEMENT), sqlStatement), this, this->METHOD_DROP_TABLE, e);
            }
            return java_concat(java_concat("Failed to Drop ", this->tableName), " table.");
        } JAVA_END_TRY;
}

