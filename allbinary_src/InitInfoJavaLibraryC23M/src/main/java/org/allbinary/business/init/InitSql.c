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
// package org.allbinary.business.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/sql/Connection.h"
// #include "java/sql/DriverManager.h"
// #include "java/sql/ResultSet.h"
// #include "java/sql/ResultSetMetaData.h"
// #include "java/sql/SQLException.h"
// #include "java/sql/Statement.h"
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h"
#include "org/allbinary/business/init/db/DbConnectionInfo.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"
#include "org/allbinary/logic/communication/sql/SqlStrings.h"
#include "org/allbinary/logic/communication/sql/SqlTypeStrings.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct InitSql InitSql;
struct InitSql {
    StringUtil* stringUtil;
    CommonSeps* commonSeps;
    SqlTypeStrings* sqlTypeStrings;
    SqlStrings* sqlStrings;
    StdUtil* stdUtil;
    const char* INSERT;
    const char* UPDATE;
    DbConnectionInfo* databaseConnectionInfoInterface;
    const char* userid;
    const char* password;
    const char* tableName;
    Connection* conn;
    bool useridAndPassword;
    const char* SUCCESS_SQL_STATEMENT;
    const char* FAILED_SQL_STATEMENT;
    const char* INIT_SQL;
    CommonStrings* commonStrings;
    const char* EQUAL_QUOTE;
    const char* METHOD_GET_ROW;
    const char* METHOD_UPDATE_WHERE;
    const char* ROW_VALUE_LABEL;
    const char* NO_RESULTS_IN_RESULT_SET;
    const char* INSERT_END;
};


InitSql* InitSql_new(DbConnectionInfo* databaseConnectionInfoInterface);

void InitSql_init(InitSql* this, DbConnectionInfo* databaseConnectionInfoInterface);
void InitSql_setTable(InitSql* this, const char* tableName);
void InitSql_setDatabaseConnectionInfoInterface(InitSql* this, DbConnectionInfo* databaseConnectionInfoInterface);
bool InitSql_createTable(InitSql* this, const char* tableData);
bool InitSql_dropTable(InitSql* this);
HashMap* InitSql_getRow(InitSql* this, HashMap* keysAndValues);
void InitSql_updateWhere(InitSql* this, const char* key, const char* value, HashMap* updatedKeyValuePairs);
void InitSql_insert(InitSql* this, BasicArrayList* values);
static const char* InitSql_getValue(InitSql* this, const char* value);
ResultSet* InitSql_executeSQLStatement(InitSql* this, const char* statement);
static void InitSql_createConnection(InitSql* this);
static void InitSql_initialize(InitSql* this);
DatabaseConnectionInfoInterface* InitSql_getDatabaseConnectionInfoInterface(InitSql* this);

static void InitSql_initFields(InitSql* this) {
    this->stringUtil = StringUtil_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->sqlTypeStrings = SqlTypeStrings_getInstance();
    this->sqlStrings = SqlStrings_getInstance();
    this->stdUtil = StdUtil_getInstance();
    this->INSERT = "insert";
    this->UPDATE = "update";
    this->databaseConnectionInfoInterface = nullptr;
    this->userid = nullptr;
    this->password = nullptr;
    this->tableName = nullptr;
    this->conn = nullptr;
    this->useridAndPassword = false;
    this->SUCCESS_SQL_STATEMENT = "Success\nSQL Statement: ";
    this->FAILED_SQL_STATEMENT = "Failed\nSQL Statement: ";
    this->INIT_SQL = "InitSql";
    this->commonStrings = CommonStrings_getInstance();
    this->EQUAL_QUOTE = "=\"";
    this->METHOD_GET_ROW = "getRow()";
    this->METHOD_UPDATE_WHERE = "updateWhere()";
    this->ROW_VALUE_LABEL = "Row Value: ";
    this->NO_RESULTS_IN_RESULT_SET = "No Results in ResultSet";
    this->INSERT_END = "')";
}


void InitSql_init(InitSql* this, DbConnectionInfo* databaseConnectionInfoInterface) {
    InitSql_initFields(this);
        InitSql_setDatabaseConnectionInfoInterface(this, databaseConnectionInfoInterface);
}

InitSql* InitSql_new(DbConnectionInfo* databaseConnectionInfoInterface) {
    InitSql* this = calloc(1, sizeof(InitSql));
    InitSql_init(this, databaseConnectionInfoInterface);
    return this;
}


void InitSql_setTable(InitSql* this, const char* tableName) {
        this->tableName = tableName;
}


void InitSql_setDatabaseConnectionInfoInterface(InitSql* this, DbConnectionInfo* databaseConnectionInfoInterface) {
        this->databaseConnectionInfoInterface = databaseConnectionInfoInterface;
}


bool InitSql_createTable(InitSql* this, const char* tableData) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Creating Table: ");
            StringMaker_append(stringBuffer, tableData);
            PreLogUtil_put(StringMaker_toString(stringBuffer), this->INIT_SQL, "createTable()");
            InitSql_executeSQLStatement(this, tableData);
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->SQLLOGGINGERROR)) {
                PreLogUtil_putOE(this->commonStrings->EXCEPTION, this->INIT_SQL, "createTable()", e);
            }
            return false;
        } JAVA_END_TRY;
}


bool InitSql_dropTable(InitSql* this) {
        const char* sqlStatement = java_concat(java_string_of(this->sqlStrings->DROP_TABLE), this->tableName);
        JAVA_TRY {
            InitSql_executeSQLStatement(this, sqlStatement);
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->SQLLOGGINGERROR)) {
                PreLogUtil_putOE(this->commonStrings->EXCEPTION, this->INIT_SQL, "dropTables()", e);
            }
            return false;
        } JAVA_END_TRY;
}


HashMap* InitSql_getRow(InitSql* this, HashMap* keysAndValues) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->SELECT_ALL_FROM);
        StringMaker_append(stringBuffer, this->tableName);
        StringMaker_append(stringBuffer, this->sqlStrings->WHERE);
        JAVA_TRY {
            HashMap* result = nullptr;
            Set* set = HashMap_keySet(keysAndValues);
            Any** keyArray = Set_toArray(set);
            int32_t size = java_array_length(keyArray);
            for (int32_t i = 0; i < size; i++) {
                const char* key = ((const char*) keyArray[i]);
                const char* value = java_string_new(((const char*) HashMap_get(keysAndValues, key)));
                StringMaker_append(stringBuffer, key);
                StringMaker_append(stringBuffer, this->sqlStrings->EQUAL_QUOTE);
                StringMaker_append(stringBuffer, InitSql_getValue(this, value));
                StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
                if (i < size - 1) {
                    StringMaker_append(stringBuffer, this->sqlStrings->AND);
                }
            }
            const char* sqlStatement = StringMaker_toString(stringBuffer);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                PreLogUtil_put(java_concat(java_string_of(this->sqlStrings->SQL_STATEMENT_LABEL), sqlStatement), this->INIT_SQL, this->METHOD_GET_ROW);
            }
            ResultSet* rset = InitSql_executeSQLStatement(this, sqlStatement);
            ResultSetMetaData* resultSetMetaData = ResultSet_getMetaData(rset);
            while (ResultSet_next(rset)) {
                result = StdUtil_createHashMap(this->stdUtil);
                int32_t columnCount = ResultSetMetaData_getColumnCount(resultSetMetaData);
                for (int32_t index = 1; index <= columnCount; index++) {
                    const char* columnName = ResultSetMetaData_getColumnName(resultSetMetaData, index);
                    const char* field = ResultSet_getString(rset, columnName);
                    HashMap_put(result, columnName, field);
                }
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    PreLogUtil_put(java_concat(this->ROW_VALUE_LABEL, HashMap_toString(result)), this->INIT_SQL, this->METHOD_GET_ROW);
                }
                return result;
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                PreLogUtil_put(this->NO_RESULTS_IN_RESULT_SET, this->INIT_SQL, this->METHOD_GET_ROW);
            }
            return nullptr;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                PreLogUtil_putOE(java_concat(this->FAILED_SQL_STATEMENT, java_string_of(stringBuffer)), this->INIT_SQL, this->METHOD_GET_ROW, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// synchronized
void InitSql_updateWhere(InitSql* this, const char* key, const char* value, HashMap* updatedKeyValuePairs) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->UPDATE);
        StringMaker_append(stringBuffer, this->tableName);
        StringMaker_append(stringBuffer, this->sqlStrings->SET);
        JAVA_TRY {
            Any** columnArray = JAVA_CALL(HashMap_keySet(updatedKeyValuePairs), toArray);
            int32_t size = java_array_length(columnArray);
            for (int32_t i = 0; i < size; i++) {
                const char* columnName = JAVA_CALL(columnArray[i], toString);
                StringMaker_append(stringBuffer, this->commonSeps->SPACE);
                StringMaker_append(stringBuffer, columnName);
                StringMaker_append(stringBuffer, this->EQUAL_QUOTE);
                const char* columnValue = ((const char*) HashMap_get(updatedKeyValuePairs, columnName));
                if (columnValue == nullptr) {
                    columnValue = this->stringUtil->EMPTY_STRING;
                } else {
                }
                StringMaker_append(stringBuffer, InitSql_getValue(this, columnValue));
                StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
                if (i < size - 1) {
                    StringMaker_append(stringBuffer, this->commonSeps->COMMA);
                }
            }
            StringMaker_append(stringBuffer, this->sqlStrings->WHERE);
            StringMaker_append(stringBuffer, key);
            StringMaker_append(stringBuffer, this->sqlStrings->EQUAL_QUOTE);
            StringMaker_append(stringBuffer, InitSql_getValue(this, value));
            StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
            const char* sqlStatement = StringMaker_toString(stringBuffer);
            InitSql_executeSQLStatement(this, sqlStatement);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                PreLogUtil_put(java_concat(this->SUCCESS_SQL_STATEMENT, sqlStatement), this->INIT_SQL, this->METHOD_UPDATE_WHERE);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                PreLogUtil_putOE(java_concat(this->FAILED_SQL_STATEMENT, java_string_of(stringBuffer)), this->INIT_SQL, this->METHOD_UPDATE_WHERE, e);
            }
        } JAVA_END_TRY;
}


void InitSql_insert(InitSql* this, BasicArrayList* values) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->INSERT_INTO);
        StringMaker_append(stringBuffer, this->tableName);
        StringMaker_append(stringBuffer, this->sqlStrings->VALUES);
        JAVA_TRY {
            int32_t size = BasicArrayList_size(values);
            for (int32_t i = 0; i < size - 1; i++) {
                const char* value = InitSql_getValue(this, ((const char*) BasicArrayList_get(values, i)));
                StringMaker_append(stringBuffer, value);
                StringMaker_append(stringBuffer, this->sqlStrings->SINGLE_QUOTE_COMMA_SEP);
            }
            const char* value = InitSql_getValue(this, ((const char*) BasicArrayList_get(values, BasicArrayList_size(values) - 1)));
            StringMaker_append(stringBuffer, value);
            StringMaker_append(stringBuffer, this->INSERT_END);
            const char* sqlStatement = StringMaker_toString(stringBuffer);
            InitSql_executeSQLStatement(this, sqlStatement);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                PreLogUtil_put(java_concat(this->SUCCESS_SQL_STATEMENT, sqlStatement), this->INIT_SQL, this->INSERT);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                PreLogUtil_putOE(java_concat(this->FAILED_SQL_STATEMENT, StringMaker_toString(stringBuffer)), this->INIT_SQL, this->INSERT, e);
            }
        } JAVA_END_TRY;
}


// synchronized
static const char* InitSql_getValue(InitSql* this, const char* value) {
        if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), value)) {
            return this->stringUtil->EMPTY_STRING;
        } else {
            return value;
        }
}


// throws Exception, SQLException
ResultSet* InitSql_executeSQLStatement(InitSql* this, const char* statement) {
        JAVA_TRY {
            if (this->conn == nullptr) {
                InitSql_initialize(this);
            }
            Statement* stmt = Connection_createStatement(this->conn);
            Statement_execute(stmt, statement);
            ResultSet* rset = Statement_getResultSet(stmt);
            Statement_close(stmt);
            return rset;
        } JAVA_CATCH(SQLException, e) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->SQLLOGGINGERROR)) {
                PreLogUtil_putOE(this->commonStrings->EXCEPTION, this->INIT_SQL, "executeSQLStatement()", e);
            }
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->SQLLOGGINGERROR)) {
                PreLogUtil_putOE(this->commonStrings->EXCEPTION, this->INIT_SQL, "executeSQLStatement()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws SQLException
static void InitSql_createConnection(InitSql* this) {
        JAVA_TRY {
            if (this->useridAndPassword == true) {
                this->conn = DriverManager_getConnection(DbConnectionInfo_getUrl(this->databaseConnectionInfoInterface), this->userid, this->password);
            } else {
                this->conn = DriverManager_getConnection(DbConnectionInfo_getUrl(this->databaseConnectionInfoInterface));
            }
        } JAVA_CATCH(SQLException, se) {
            PreLogUtil_putOE(this->commonStrings->EXCEPTION, this->INIT_SQL, "createConnection()", se);
            java_throw(se);
        } JAVA_END_TRY;
}


// throws Exception
static void InitSql_initialize(InitSql* this) {
        JAVA_TRY {
            JAVA_TRY {
                const char* jdbcDriver = DbConnectionInfo_getJdbcDriver(this->databaseConnectionInfoInterface);
                PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Loading DbConnnectionInfo: "), append, java_class_of(this->databaseConnectionInfoInterface)), append, " Driver: "), append, jdbcDriver), toString), this->INIT_SQL, "initialize()");
                JAVA_CALL(Class_forName(jdbcDriver), newInstance);
            } JAVA_CATCH(Exception, e) {
                if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->SQLLOGGINGERROR)) {
                    PreLogUtil_putOE(java_concat("LoadDriver Failed: ", java_string_of(DbConnectionInfo_getJdbcDriver(this->databaseConnectionInfoInterface))), this->INIT_SQL, "initialize()", e);
                }
                java_throw(e);
            } JAVA_END_TRY;
            if (this->userid == nullptr && this->password == nullptr) {
                this->useridAndPassword = true;
            }
            InitSql_createConnection(this);
        } JAVA_CATCH(Exception, se) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->SQLLOGGINGERROR)) {
                PreLogUtil_putOE(this->commonStrings->EXCEPTION, this->INIT_SQL, "initialize()", se);
            }
            java_throw(se);
        } JAVA_END_TRY;
}


DatabaseConnectionInfoInterface* InitSql_getDatabaseConnectionInfoInterface(InitSql* this) {
        return this->databaseConnectionInfoInterface;
}

