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
// #include "java/sql/ResultSet.h"
// #include "java/sql/ResultSetMetaData.h"
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/init/db/DbConnectionInfo.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/string/regex/replace/Replace.h"
#include "org/allbinary/logic/communication/sql/AbSqlColumn.h"

typedef struct AbSqlRow AbSqlRow;
struct AbSqlRow {
    AbSqlColumn base;
    LogUtil* logUtil;
    const char* EQUAL_QUOTE;
    const char* ESCAPE_QUOTES;
    const char* GET_ROW;
    const char* METHOD_GET_ROW;
    const char* METHOD_GET_ROWS;
    const char* METHOD_GET_ALL_ROWS;
    const char* METHOD_UPDATE_WHERE;
    const char* METHOD_GET_ROWS_WHERE_BETWEEN;
    const char* METHOD_DELETE_WHERE;
    const char* ROW_VALUE_LABEL;
    const char* ROW_VALUES_LABEL;
    const char* NO_RESULTS_IN_RESULT_SET;
    const char* COLUMN_NAME_LABEL;
    const char* INSERT_END;
};


AbSqlRow* AbSqlRow_new(DbConnectionInfo* databaseConnectionInfoInterface);

void AbSqlRow_init(AbSqlRow* this, DbConnectionInfo* databaseConnectionInfoInterface);
static const char* AbSqlRow_getValue(AbSqlRow* this, const char* value);
void AbSqlRow_updateWhere(AbSqlRow* this, const char* key, const char* value, HashMap* updatedKeyValuePairs);
void AbSqlRow_updateWhere(AbSqlRow* this, HashMap* whereKeyValuePairs, HashMap* updatedKeyValuePairs);
void AbSqlRow_deleteWhere(AbSqlRow* this, const char* key, const char* value);
void AbSqlRow_deleteWhere(AbSqlRow* this, HashMap* keysAndValues);
void AbSqlRow_insert(AbSqlRow* this, BasicArrayList* values);
HashMap* AbSqlRow_getRow(AbSqlRow* this, HashMap* keysAndValues);
BasicArrayList* AbSqlRow_getRows(AbSqlRow* this, HashMap* keysAndValues);
BasicArrayList* AbSqlRow_getRows(AbSqlRow* this, HashMap* keysAndValues, const char* more);
BasicArrayList* AbSqlRow_getAllRows(AbSqlRow* this);
BasicArrayList* AbSqlRow_getRowsWhereBetween(AbSqlRow* this, HashMap* whereKeyValuePairs, const char* betweenColumn, const char* smallest, const char* largest);
BasicArrayList* AbSqlRow_getRowsWhereBetween(AbSqlRow* this, const char* betweenColumn, const char* smallest, const char* largest);

static void AbSqlRow_initFields(AbSqlRow* this) {
    this->logUtil = LogUtil_getInstance();
    this->EQUAL_QUOTE = "=\"";
    this->ESCAPE_QUOTES = "\\\"";
    this->GET_ROW = "Row Value: ";
    this->METHOD_GET_ROW = "getRow()";
    this->METHOD_GET_ROWS = "getRows()";
    this->METHOD_GET_ALL_ROWS = "getAllRows()";
    this->METHOD_UPDATE_WHERE = "updateWhere()";
    this->METHOD_GET_ROWS_WHERE_BETWEEN = "getRowsWhereBetween()";
    this->METHOD_DELETE_WHERE = "deleteWhere()";
    this->ROW_VALUE_LABEL = "Row Value: ";
    this->ROW_VALUES_LABEL = "Row Values: ";
    this->NO_RESULTS_IN_RESULT_SET = "No Results in ResultSet";
    this->COLUMN_NAME_LABEL = "columnName: ";
    this->INSERT_END = "')";
}


void AbSqlRow_init(AbSqlRow* this, DbConnectionInfo* databaseConnectionInfoInterface) {
        AbSqlColumn_init(&this->base, databaseConnectionInfoInterface);
        AbSqlRow_initFields(this);
}

AbSqlRow* AbSqlRow_new(DbConnectionInfo* databaseConnectionInfoInterface) {
    AbSqlRow* this = calloc(1, sizeof(AbSqlRow));
    AbSqlRow_init(this, databaseConnectionInfoInterface);
    return this;
}


// synchronized
static const char* AbSqlRow_getValue(AbSqlRow* this, const char* value) {
        if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), value)) {
            return this->stringUtil->EMPTY_STRING;
        } else {
            return value;
        }
}


// synchronized
void AbSqlRow_updateWhere(AbSqlRow* this, const char* key, const char* value, HashMap* updatedKeyValuePairs) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->UPDATE);
        StringMaker_append(stringBuffer, AbSqlRow_getTableName(this));
        StringMaker_append(stringBuffer, this->sqlStrings->SET);
        JAVA_TRY {
            Any** keyArray = JAVA_CALL(HashMap_keySet(updatedKeyValuePairs), toArray);
            int32_t size = java_array_length(keyArray);
            for (int32_t i = 0; i < size; i++) {
                const char* columnName = JAVA_CALL(keyArray[i], toString);
                StringMaker_append(stringBuffer, this->commonSeps->SPACE);
                StringMaker_append(stringBuffer, columnName);
                StringMaker_append(stringBuffer, this->EQUAL_QUOTE);
                const char* columnValue = ((const char*) HashMap_get(updatedKeyValuePairs, columnName));
                if (columnValue == nullptr) {
                    columnValue = this->stringUtil->EMPTY_STRING;
                } else {
                    columnValue = Replace_all(Replace_new(this->sqlStrings->CLOSE_QUOTE, this->ESCAPE_QUOTES), columnValue);
                }
                StringMaker_append(stringBuffer, AbSqlRow_getValue(this, columnValue));
                StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
                if (i < size - 1) {
                    StringMaker_append(stringBuffer, this->commonSeps->COMMA);
                }
            }
            StringMaker_append(stringBuffer, this->sqlStrings->WHERE);
            StringMaker_append(stringBuffer, key);
            StringMaker_append(stringBuffer, this->sqlStrings->EQUAL_QUOTE);
            StringMaker_append(stringBuffer, AbSqlRow_getValue(this, value));
            StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
            const char* sqlStatement = StringMaker_toString(stringBuffer);
            AbSqlRow_executeSQLStatement(this, sqlStatement);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->SUCCESS_SQL_STATEMENT), sqlStatement), this, this->METHOD_UPDATE_WHERE);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->FAILED_SQL_STATEMENT + stringBuffer, this, this->METHOD_UPDATE_WHERE, e);
            }
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
// synchronized
void AbSqlRow_updateWhere(AbSqlRow* this, HashMap* whereKeyValuePairs, HashMap* updatedKeyValuePairs) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->UPDATE);
        StringMaker_append(stringBuffer, AbSqlRow_getTableName(this));
        StringMaker_append(stringBuffer, this->sqlStrings->SET);
        JAVA_TRY {
            Any** keyArray = JAVA_CALL(HashMap_keySet(updatedKeyValuePairs), toArray);
            int32_t size = java_array_length(keyArray);
            for (int32_t i = 0; i < size; i++) {
                const char* columnName = JAVA_CALL(keyArray[i], toString);
                StringMaker_append(stringBuffer, this->commonSeps->SPACE);
                StringMaker_append(stringBuffer, columnName);
                StringMaker_append(stringBuffer, this->EQUAL_QUOTE);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    LogUtil_putF(this->logUtil, java_concat(this->COLUMN_NAME_LABEL, columnName), this, this->METHOD_UPDATE_WHERE);
                }
                const char* columnValue = ((const char*) HashMap_get(updatedKeyValuePairs, columnName));
                if (columnValue == nullptr) {
                    columnValue = this->stringUtil->EMPTY_STRING;
                } else {
                    columnValue = Replace_all(Replace_new(this->sqlStrings->CLOSE_QUOTE, this->ESCAPE_QUOTES), columnValue);
                }
                StringMaker_append(stringBuffer, AbSqlRow_getValue(this, columnValue));
                StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
                if (i < size - 1) {
                    StringMaker_append(stringBuffer, this->commonSeps->COMMA);
                }
            }
            StringMaker_append(stringBuffer, this->sqlStrings->WHERE);
            Set* set = HashMap_keySet(whereKeyValuePairs);
            Any** keyArray2 = Set_toArray(set);
            int32_t size2 = java_array_length(keyArray2);
            for (int32_t i = 0; i < size2; i++) {
                const char* key = ((const char*) keyArray2[i]);
                const char* value = ((const char*) HashMap_get(whereKeyValuePairs, key));
                {
                    StringMaker_append(stringBuffer, key);
                    StringMaker_append(stringBuffer, this->sqlStrings->EQUAL_QUOTE);
                    StringMaker_append(stringBuffer, AbSqlRow_getValue(this, value));
                    StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
                    if (i < size2 - 1) {
                        StringMaker_append(stringBuffer, this->sqlStrings->AND);
                    }
                }
            }
            const char* sqlStatement = StringMaker_toString(stringBuffer);
            AbSqlRow_executeSQLStatement(this, sqlStatement);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->SUCCESS_SQL_STATEMENT), sqlStatement), this, this->METHOD_UPDATE_WHERE);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->FAILED_SQL_STATEMENT + stringBuffer, this, this->METHOD_UPDATE_WHERE, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// synchronized
void AbSqlRow_deleteWhere(AbSqlRow* this, const char* key, const char* value) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->DELETE);
        StringMaker_append(stringBuffer, this->sqlStrings->FROM);
        StringMaker_append(stringBuffer, AbSqlRow_getTableName(this));
        StringMaker_append(stringBuffer, this->sqlStrings->WHERE);
        StringMaker_append(stringBuffer, key);
        StringMaker_append(stringBuffer, this->sqlStrings->EQUAL_QUOTE);
        StringMaker_append(stringBuffer, value);
        StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
        JAVA_TRY {
            const char* sqlStatement = StringMaker_toString(stringBuffer);
            AbSqlRow_executeSQLStatement(this, sqlStatement);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->SUCCESS_SQL_STATEMENT), sqlStatement), this, this->METHOD_DELETE_WHERE);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, java_concat(java_string_of(this->FAILED_SQL_STATEMENT), StringMaker_toString(stringBuffer)), this, this->METHOD_DELETE_WHERE, e);
            }
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
// synchronized
void AbSqlRow_deleteWhere(AbSqlRow* this, HashMap* keysAndValues) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->DELETE);
        StringMaker_append(stringBuffer, this->sqlStrings->FROM);
        StringMaker_append(stringBuffer, AbSqlRow_getTableName(this));
        StringMaker_append(stringBuffer, this->sqlStrings->WHERE);
        JAVA_TRY {
            Set* set = HashMap_keySet(keysAndValues);
            Any** keyArray = Set_toArray(set);
            int32_t size = java_array_length(keyArray);
            for (int32_t i = 0; i < size; i++) {
                const char* key = ((const char*) keyArray[i]);
                const char* value = java_string_new(((const char*) HashMap_get(keysAndValues, key)));
                StringMaker_append(stringBuffer, key);
                StringMaker_append(stringBuffer, this->sqlStrings->EQUAL_QUOTE);
                StringMaker_append(stringBuffer, AbSqlRow_getValue(this, value));
                StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
                if (i < size - 1) {
                    StringMaker_append(stringBuffer, this->sqlStrings->AND);
                }
            }
            const char* sqlStatement = StringMaker_toString(stringBuffer);
            AbSqlRow_executeSQLStatement(this, sqlStatement);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->SUCCESS_SQL_STATEMENT), sqlStatement), this, this->METHOD_DELETE_WHERE);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, java_concat(java_string_of(this->FAILED_SQL_STATEMENT), StringMaker_toString(stringBuffer)), this, this->METHOD_DELETE_WHERE, e);
            }
        } JAVA_END_TRY;
}


void AbSqlRow_insert(AbSqlRow* this, BasicArrayList* values) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->INSERT_INTO);
        StringMaker_append(stringBuffer, AbSqlRow_getTableName(this));
        StringMaker_append(stringBuffer, this->sqlStrings->VALUES);
        JAVA_TRY {
            for (int32_t i = 0; i < BasicArrayList_size(values) - 1; i++) {
                const char* value = AbSqlRow_getValue(this, ((const char*) BasicArrayList_get(values, i)));
                value = Replace_all(Replace_new(this->sqlStrings->ESCAPE, this->sqlStrings->DOUBLE_ESCAPE), value);
                StringMaker_append(stringBuffer, value);
                StringMaker_append(stringBuffer, this->sqlStrings->SINGLE_QUOTE_COMMA_SEP);
            }
            const char* value = AbSqlRow_getValue(this, ((const char*) BasicArrayList_get(values, BasicArrayList_size(values) - 1)));
            value = Replace_all(Replace_new(this->sqlStrings->ESCAPE, this->sqlStrings->DOUBLE_ESCAPE), value);
            StringMaker_append(stringBuffer, value);
            StringMaker_append(stringBuffer, this->INSERT_END);
            const char* sqlStatement = StringMaker_toString(stringBuffer);
            AbSqlRow_executeSQLStatement(this, sqlStatement);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->SUCCESS_SQL_STATEMENT), sqlStatement), this, this->INSERT);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, java_concat(java_string_of(this->FAILED_SQL_STATEMENT), StringMaker_toString(stringBuffer)), this, AbSqlColumn_INSERT, e);
            }
        } JAVA_END_TRY;
}


HashMap* AbSqlRow_getRow(AbSqlRow* this, HashMap* keysAndValues) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->SELECT_ALL_FROM);
        StringMaker_append(stringBuffer, AbSqlRow_getTableName(this));
        StringMaker_append(stringBuffer, this->sqlStrings->WHERE);
        JAVA_TRY {
            HashMap* result = nullptr;
            Set* set = HashMap_keySet(keysAndValues);
            Any** keyArray = Set_toArray(set);
            int32_t size = java_array_length(keyArray);
            for (int32_t index = 0; index < size; index++) {
                const char* key = ((const char*) keyArray[index]);
                const char* value = java_string_new(((const char*) HashMap_get(keysAndValues, key)));
                StringMaker_append(stringBuffer, key);
                StringMaker_append(stringBuffer, this->sqlStrings->EQUAL_QUOTE);
                StringMaker_append(stringBuffer, AbSqlRow_getValue(this, value));
                StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
                if (index < size - 1) {
                    StringMaker_append(stringBuffer, this->sqlStrings->AND);
                }
            }
            const char* sqlStatement = StringMaker_toString(stringBuffer);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->sqlStrings->SQL_STATEMENT_LABEL), sqlStatement), this, this->METHOD_GET_ROW);
            }
            ResultSet* rset = AbSqlRow_executeSQLStatement(this, sqlStatement);
            ResultSetMetaData* resultSetMetaData = ResultSet_getMetaData(rset);
            while (ResultSet_next(rset)) {
                result = JAVA_CALL(this->stdUtil, createHashMap);
                int32_t columnCount = ResultSetMetaData_getColumnCount(resultSetMetaData);
                for (int32_t index = 1; index <= columnCount; index++) {
                    const char* columnName = ResultSetMetaData_getColumnName(resultSetMetaData, index);
                    const char* field = ResultSet_getString(rset, columnName);
                    HashMap_put(result, columnName, field);
                }
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    LogUtil_putF(this->logUtil, java_concat(this->ROW_VALUE_LABEL, HashMap_toString(result)), this, this->METHOD_GET_ROW);
                }
                return result;
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_putF(this->logUtil, this->NO_RESULTS_IN_RESULT_SET, this, this->METHOD_GET_ROW);
            }
            return nullptr;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->FAILED_SQL_STATEMENT + stringBuffer, this, this->METHOD_GET_ROW, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


BasicArrayList* AbSqlRow_getRows(AbSqlRow* this, HashMap* keysAndValues) {
        return AbSqlRow_getRows(this, keysAndValues, StringUtil_getInstance()->EMPTY_STRING);
}


// Java overloaded method: C needs a different name
BasicArrayList* AbSqlRow_getRows(AbSqlRow* this, HashMap* keysAndValues, const char* more) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->SELECT_ALL_FROM);
        StringMaker_append(stringBuffer, AbSqlRow_getTableName(this));
        StringMaker_append(stringBuffer, this->sqlStrings->WHERE);
        JAVA_TRY {
            BasicArrayList* rows = BasicArrayListD_new();
            Set* set = HashMap_keySet(keysAndValues);
            Any** keyArray = Set_toArray(set);
            int32_t size = java_array_length(keyArray);
            for (int32_t index = 0; index < size; index++) {
                const char* key = ((const char*) keyArray[index]);
                const char* value = java_string_new(((const char*) HashMap_get(keysAndValues, key)));
                StringMaker_append(stringBuffer, key);
                StringMaker_append(stringBuffer, this->sqlStrings->EQUAL_QUOTE);
                StringMaker_append(stringBuffer, AbSqlRow_getValue(this, value));
                StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
                if (index < size - 1) {
                    StringMaker_append(stringBuffer, this->sqlStrings->AND);
                }
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->sqlStrings->SQL_STATEMENT_LABEL + stringBuffer, this, this->METHOD_GET_ROWS);
            }
            StringMaker_append(stringBuffer, more);
            const char* sqlStatement = StringMaker_toString(stringBuffer);
            ResultSet* rset = AbSqlRow_executeSQLStatement(this, sqlStatement);
            ResultSetMetaData* resultSetMetaData = ResultSet_getMetaData(rset);
            while (ResultSet_next(rset)) {
                HashMap* result = JAVA_CALL(this->stdUtil, createHashMap);
                int32_t columnCount = ResultSetMetaData_getColumnCount(resultSetMetaData);
                for (int32_t index = 1; index <= columnCount; index++) {
                    const char* columnName = ResultSetMetaData_getColumnName(resultSetMetaData, index);
                    const char* field = ResultSet_getString(rset, columnName);
                    HashMap_put(result, columnName, field);
                }
                const char* resultAsString = HashMap_toString(result);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    LogUtil_putF(this->logUtil, java_concat(this->GET_ROW, resultAsString), this, this->METHOD_GET_ROWS);
                }
                BasicArrayList_add(rows, result);
            }
            return rows;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->FAILED_SQL_STATEMENT + stringBuffer, this, this->METHOD_GET_ROWS, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


BasicArrayList* AbSqlRow_getAllRows(AbSqlRow* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->SELECT_ALL_FROM);
        StringMaker_append(stringBuffer, AbSqlRow_getTableName(this));
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->sqlStrings->SQL_STATEMENT_LABEL + stringBuffer, this, this->METHOD_GET_ALL_ROWS);
            }
            BasicArrayList* rows = BasicArrayListD_new();
            const char* sqlStatement = StringMaker_toString(stringBuffer);
            ResultSet* rset = AbSqlRow_executeSQLStatement(this, sqlStatement);
            ResultSetMetaData* resultSetMetaData = ResultSet_getMetaData(rset);
            while (ResultSet_next(rset)) {
                HashMap* result = JAVA_CALL(this->stdUtil, createHashMap);
                int32_t columnCount = ResultSetMetaData_getColumnCount(resultSetMetaData);
                for (int32_t index = 1; index <= columnCount; index++) {
                    const char* columnName = ResultSetMetaData_getColumnName(resultSetMetaData, index);
                    const char* field = ResultSet_getString(rset, columnName);
                    HashMap_put(result, columnName, field);
                }
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    LogUtil_putF(this->logUtil, java_concat(this->ROW_VALUES_LABEL, HashMap_toString(result)), this, this->METHOD_GET_ALL_ROWS);
                }
                BasicArrayList_add(rows, result);
            }
            return rows;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->FAILED_SQL_STATEMENT + stringBuffer, this, this->METHOD_GET_ALL_ROWS, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


BasicArrayList* AbSqlRow_getRowsWhereBetween(AbSqlRow* this, HashMap* whereKeyValuePairs, const char* betweenColumn, const char* smallest, const char* largest) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->SELECT_ALL_FROM);
        StringMaker_append(stringBuffer, AbSqlRow_getTableName(this));
        JAVA_TRY {
            BasicArrayList* rows = BasicArrayListD_new();
            StringMaker_append(stringBuffer, this->sqlStrings->WHERE);
            Set* set = HashMap_keySet(whereKeyValuePairs);
            const char* key = nullptr;
            const char* value = nullptr;
            Any** keyArray = Set_toArray(set);
            int32_t size = java_array_length(keyArray);
            for (int32_t index = 0; index < size; index++) {
                key = ((const char*) keyArray[index]);
                value = ((const char*) HashMap_get(whereKeyValuePairs, key));
                StringMaker_append(stringBuffer, key);
                StringMaker_append(stringBuffer, this->sqlStrings->EQUAL_QUOTE);
                StringMaker_append(stringBuffer, AbSqlRow_getValue(this, value));
                StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
                StringMaker_append(stringBuffer, this->sqlStrings->AND);
            }
            StringMaker_append(stringBuffer, betweenColumn);
            StringMaker_append(stringBuffer, this->sqlStrings->MORE_THAN_QUOTE);
            StringMaker_append(stringBuffer, smallest);
            StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
            StringMaker_append(stringBuffer, this->sqlStrings->AND);
            StringMaker_append(stringBuffer, betweenColumn);
            StringMaker_append(stringBuffer, this->sqlStrings->LESS_THAN_QUOTE);
            StringMaker_append(stringBuffer, largest);
            StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
            const char* sqlStatement = StringMaker_toString(stringBuffer);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->sqlStrings->SQL_STATEMENT_LABEL), sqlStatement), this, this->METHOD_GET_ROWS_WHERE_BETWEEN);
            }
            ResultSet* rset = AbSqlRow_executeSQLStatement(this, sqlStatement);
            ResultSetMetaData* resultSetMetaData = ResultSet_getMetaData(rset);
            HashMap* result = nullptr;
            BasicArrayList* columnNames = nullptr;
            int32_t columnCount = 0;
            const char* columnName = nullptr;
            const char* field = nullptr;
            while (ResultSet_next(rset)) {
                result = JAVA_CALL(this->stdUtil, createHashMap);
                columnNames = BasicArrayListD_new();
                columnCount = ResultSetMetaData_getColumnCount(resultSetMetaData);
                for (int32_t index = 1; index <= columnCount; index++) {
                    columnName = ResultSetMetaData_getColumnName(resultSetMetaData, index);
                    field = ResultSet_getString(rset, columnName);
                    HashMap_put(result, columnName, field);
                }
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    LogUtil_putF(this->logUtil, java_concat(this->ROW_VALUE_LABEL, HashMap_toString(result)), this, this->METHOD_GET_ROWS_WHERE_BETWEEN);
                }
                BasicArrayList_add(rows, result);
            }
            return rows;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->FAILED_SQL_STATEMENT + stringBuffer, this, this->METHOD_GET_ROWS_WHERE_BETWEEN, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
BasicArrayList* AbSqlRow_getRowsWhereBetween(AbSqlRow* this, const char* betweenColumn, const char* smallest, const char* largest) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->SELECT_ALL_FROM);
        StringMaker_append(stringBuffer, AbSqlRow_getTableName(this));
        JAVA_TRY {
            BasicArrayList* rows = BasicArrayListD_new();
            StringMaker_append(stringBuffer, this->sqlStrings->WHERE);
            StringMaker_append(stringBuffer, betweenColumn);
            StringMaker_append(stringBuffer, this->sqlStrings->MORE_THAN_QUOTE);
            StringMaker_append(stringBuffer, smallest);
            StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
            StringMaker_append(stringBuffer, this->sqlStrings->AND);
            StringMaker_append(stringBuffer, betweenColumn);
            StringMaker_append(stringBuffer, this->sqlStrings->LESS_THAN_QUOTE);
            StringMaker_append(stringBuffer, largest);
            StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
            const char* sqlStatement = StringMaker_toString(stringBuffer);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->sqlStrings->SQL_STATEMENT_LABEL), sqlStatement), this, this->METHOD_GET_ROWS_WHERE_BETWEEN);
            }
            ResultSet* rset = AbSqlRow_executeSQLStatement(this, sqlStatement);
            ResultSetMetaData* resultSetMetaData = ResultSet_getMetaData(rset);
            const char* columnName = nullptr;
            const char* field = nullptr;
            HashMap* result = nullptr;
            BasicArrayList* columnNames = nullptr;
            int32_t columnCount = 0;
            while (ResultSet_next(rset)) {
                result = JAVA_CALL(this->stdUtil, createHashMap);
                columnNames = BasicArrayListD_new();
                columnCount = ResultSetMetaData_getColumnCount(resultSetMetaData);
                for (int32_t index = 1; index <= columnCount; index++) {
                    columnName = ResultSetMetaData_getColumnName(resultSetMetaData, index);
                    field = ResultSet_getString(rset, columnName);
                    HashMap_put(result, columnName, field);
                }
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    LogUtil_putF(this->logUtil, java_concat(this->ROW_VALUE_LABEL, HashMap_toString(result)), this, this->METHOD_GET_ROWS_WHERE_BETWEEN);
                }
                BasicArrayList_add(rows, result);
            }
            return rows;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->FAILED_SQL_STATEMENT + stringBuffer, this, this->METHOD_GET_ROWS_WHERE_BETWEEN, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

