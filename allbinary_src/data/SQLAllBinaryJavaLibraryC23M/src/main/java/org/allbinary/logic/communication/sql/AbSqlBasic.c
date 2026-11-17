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
// #include "java/sql/Connection.h"
// #include "java/sql/ResultSet.h"
// #include "java/sql/SQLException.h"
// #include "java/sql/Statement.h"
#include "org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h"
#include "org/allbinary/business/init/db/DbConnectionInfo.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/connection/pool/SqlConnectionPool.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct AbSqlBasic AbSqlBasic;
struct AbSqlBasic {
    LogUtil* logUtil;
    SqlConnectionPool* sqlConnectionPool;
    DbConnectionInfo* databaseConnectionInfoInterface;
    int32_t connectAttemptCounter;
    Connection* conn;
    StringUtil* stringUtil;
    CommonStrings* commonStrings;
    CommonSeps* commonSeps;
    StdUtil* stdUtil;
    SqlTypeStrings* sqlTypeStrings;
    SqlStrings* sqlStrings;
    const char* INSERT;
    const char* UPDATE;
    const char* FAILED_SQL_STATEMENT;
    const char* SUCCESS_SQL_STATEMENT;
    const char* METHOD_EXECUTED_SQL_STATEMENT;
    const char* METHOD_CREATE;
    const char* DATABASE_CREATED_LABEL;
    const char* DATABASE_CREATION_FAILED_LABEL;
    const char* SQL_CONNECTION_FAILED;
    const char* SQL_CONNECTION_RETRYING;
    const char* SQL_CONNECTION_RETRY;
    const char* METHOD_CREATE_CONNECTION;
    const char* METHOD_INITIALIZE;
    const char* LOAD_JDBC_DRIVER_FAILED_LABEL;
};


AbSqlBasic* AbSqlBasic_new(DbConnectionInfo* databaseConnectionInfoInterface);

void AbSqlBasic_init(AbSqlBasic* this, DbConnectionInfo* databaseConnectionInfoInterface);
ResultSet* AbSqlBasic_executeSQLStatement(AbSqlBasic* this, const char* statement);
const char* AbSqlBasic_create(AbSqlBasic* this, const char* databaseName);
static void AbSqlBasic_createConnection(AbSqlBasic* this);
static void AbSqlBasic_initialize(AbSqlBasic* this);
DatabaseConnectionInfoInterface* AbSqlBasic_getDatabaseConnectionInfoInterface(AbSqlBasic* this);
void AbSqlBasic_setDatabaseConnectionInfoInterface(AbSqlBasic* this, DbConnectionInfo* databaseConnectionInfoInterface);

static void AbSqlBasic_initFields(AbSqlBasic* this) {
    this->logUtil = LogUtil_getInstance();
    this->sqlConnectionPool = SqlConnectionPool_getInstance();
    
    
    
    this->stringUtil = StringUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->stdUtil = StdUtil_getInstance();
    this->sqlTypeStrings = SqlTypeStrings_getInstance();
    this->sqlStrings = SqlStrings_getInstance();
    this->INSERT = "insert";
    this->UPDATE = "update";
    this->FAILED_SQL_STATEMENT = "Failed\nSQL Statement: ";
    this->SUCCESS_SQL_STATEMENT = "Success\nSQL Statement: ";
    this->METHOD_EXECUTED_SQL_STATEMENT = "executedSQLStatement";
    this->METHOD_CREATE = "create";
    this->DATABASE_CREATED_LABEL = "Database Created: ";
    this->DATABASE_CREATION_FAILED_LABEL = "Database Creation Failed: ";
    this->SQL_CONNECTION_FAILED = "SQL Connection Failed";
    this->SQL_CONNECTION_RETRYING = "SQL Connection Retrying";
    this->SQL_CONNECTION_RETRY = "SQL Connection Retry";
    this->METHOD_CREATE_CONNECTION = "createConnection()";
    this->METHOD_INITIALIZE = "initialize";
    this->LOAD_JDBC_DRIVER_FAILED_LABEL = "Load JDBC Driver Failed: ";
}


void AbSqlBasic_init(AbSqlBasic* this, DbConnectionInfo* databaseConnectionInfoInterface) {
    AbSqlBasic_initFields(this);
        this->databaseConnectionInfoInterface = databaseConnectionInfoInterface;
        this->connectAttemptCounter = 0;
        this->conn = nullptr;
}

AbSqlBasic* AbSqlBasic_new(DbConnectionInfo* databaseConnectionInfoInterface) {
    AbSqlBasic* this = calloc(1, sizeof(AbSqlBasic));
    AbSqlBasic_init(this, databaseConnectionInfoInterface);
    return this;
}


// throws SQLException
ResultSet* AbSqlBasic_executeSQLStatement(AbSqlBasic* this, const char* statement) {
        JAVA_TRY {
            AbSqlBasic_initialize(this);
            Statement* stmt = Connection_createStatement(this->conn);
            Statement_execute(stmt, statement);
            ResultSet* rset = Statement_getResultSet(stmt);
            Statement_close(stmt);
            Connection* tempConnection = this->conn;
            this->conn = nullptr;
            SqlConnectionPool_add(this->sqlConnectionPool, JAVA_CALL(AbSqlBasic_getDatabaseConnectionInfoInterface(this), getUrl), tempConnection);
            return rset;
        } JAVA_CATCH(SQLException, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, java_concat(this->FAILED_SQL_STATEMENT, statement), this, this->METHOD_EXECUTED_SQL_STATEMENT, e);
            }
            Connection_close(this->conn);
            this->conn = nullptr;
            java_throw(e);
        } JAVA_END_TRY;
}


const char* AbSqlBasic_create(AbSqlBasic* this, const char* databaseName) {
        JAVA_TRY {
            AbSqlBasic_executeSQLStatement(this, java_concat(java_string_of(this->sqlStrings->CREATE_DATABASE), databaseName));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat(this->DATABASE_CREATED_LABEL, databaseName), this, this->METHOD_CREATE);
            }
            return java_concat(databaseName, java_string_of(this->sqlStrings->CREATE_RETURN));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, java_concat(this->DATABASE_CREATION_FAILED_LABEL, databaseName), this, this->METHOD_CREATE, e);
            }
            return java_concat(this->DATABASE_CREATION_FAILED_LABEL, databaseName);
        } JAVA_END_TRY;
}


static void AbSqlBasic_createConnection(AbSqlBasic* this) {
        JAVA_TRY {
            this->conn = SqlConnectionPool_get(this->sqlConnectionPool, JAVA_CALL(AbSqlBasic_getDatabaseConnectionInfoInterface(this), getUrl));
        } JAVA_CATCH(SQLException, se) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->SQL_CONNECTION_RETRYING, this, this->METHOD_CREATE_CONNECTION, se);
            }
            JAVA_TRY {
                JAVA_CALL(Thread_currentThread(), sleep, 2000);
                if (this->connectAttemptCounter < 10) {
                    this->connectAttemptCounter++;
                    AbSqlBasic_initialize(this);
                }
            } JAVA_CATCH(Exception, e) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                    LogUtil_put(this->logUtil, java_concat(this->SQL_CONNECTION_RETRY, java_exception_message(se)), this, this->METHOD_CREATE_CONNECTION, e);
                }
            } JAVA_END_TRY;
        } JAVA_END_TRY;
}


static void AbSqlBasic_initialize(AbSqlBasic* this) {
        JAVA_TRY {
            {
                JAVA_TRY {
                    ClassLoader* loader = JAVA_CALL(Thread_currentThread(), getContextClassLoader);
                    const char* jdbcDriverClass = ClassLoader_loadClass(loader, JAVA_CALL(AbSqlBasic_getDatabaseConnectionInfoInterface(this), getJdbcDriver));
                    Class_newInstance(jdbcDriverClass);
                } JAVA_CATCH(Exception, e) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                        LogUtil_put(this->logUtil, java_concat(this->LOAD_JDBC_DRIVER_FAILED_LABEL, java_string_of(JAVA_CALL(AbSqlBasic_getDatabaseConnectionInfoInterface(this), getJdbcDriver))), this, this->METHOD_INITIALIZE, e);
                    }
                } JAVA_END_TRY;
            }
            AbSqlBasic_createConnection(this);
        } JAVA_CATCH(Exception, se) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->SQL_CONNECTION_FAILED, this, this->METHOD_INITIALIZE, se);
            }
        } JAVA_END_TRY;
}


DatabaseConnectionInfoInterface* AbSqlBasic_getDatabaseConnectionInfoInterface(AbSqlBasic* this) {
        return this->databaseConnectionInfoInterface;
}


void AbSqlBasic_setDatabaseConnectionInfoInterface(AbSqlBasic* this, DbConnectionInfo* databaseConnectionInfoInterface) {
        this->databaseConnectionInfoInterface = databaseConnectionInfoInterface;
}

