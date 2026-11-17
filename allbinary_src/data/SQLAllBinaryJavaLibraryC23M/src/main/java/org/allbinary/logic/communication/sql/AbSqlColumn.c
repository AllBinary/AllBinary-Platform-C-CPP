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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/init/db/DbConnectionInfo.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/communication/sql/AbSqlTable.h"

typedef struct AbSqlColumn AbSqlColumn;
struct AbSqlColumn {
    AbSqlTable base;
    LogUtil* logUtil;
    const char* LARGEST_INT_VALUE_IN_COLUMN;
    const char* METHOD_GET_LARGETS_INTEGER_IN_COLUMN;
    const char* METHOD_GET_COLUMN;
    const char* METHOD_GET_COLUMN_WHERE;
    const char* INVALID_RESULT;
};


AbSqlColumn* AbSqlColumn_new(DbConnectionInfo* databaseConnectionInfoInterface);

void AbSqlColumn_init(AbSqlColumn* this, DbConnectionInfo* databaseConnectionInfoInterface);
const char* AbSqlColumn_getLargestIntegerInColumnWhere(AbSqlColumn* this, const char* columnName, const char* key, const char* value);
BasicArrayList* AbSqlColumn_getColumn(AbSqlColumn* this, const char* columnName);
BasicArrayList* AbSqlColumn_getColumnWhere(AbSqlColumn* this, const char* columnName, const char* key, const char* value);

static void AbSqlColumn_initFields(AbSqlColumn* this) {
    this->logUtil = LogUtil_getInstance();
    this->LARGEST_INT_VALUE_IN_COLUMN = "\nLargest Int Value in column: ";
    this->METHOD_GET_LARGETS_INTEGER_IN_COLUMN = "getLargestIntegerInColumn";
    this->METHOD_GET_COLUMN = "getColumn";
    this->METHOD_GET_COLUMN_WHERE = "getColumnWhere";
    this->INVALID_RESULT = "-1";
}


void AbSqlColumn_init(AbSqlColumn* this, DbConnectionInfo* databaseConnectionInfoInterface) {
        AbSqlTable_init(&this->base, databaseConnectionInfoInterface);
        AbSqlColumn_initFields(this);
}

AbSqlColumn* AbSqlColumn_new(DbConnectionInfo* databaseConnectionInfoInterface) {
    AbSqlColumn* this = calloc(1, sizeof(AbSqlColumn));
    AbSqlColumn_init(this, databaseConnectionInfoInterface);
    return this;
}


const char* AbSqlColumn_getLargestIntegerInColumnWhere(AbSqlColumn* this, const char* columnName, const char* key, const char* value) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->SELECT);
        StringMaker_append(stringBuffer, columnName);
        StringMaker_append(stringBuffer, this->sqlStrings->FROM);
        StringMaker_append(stringBuffer, AbSqlColumn_getTableName(this));
        StringMaker_append(stringBuffer, this->sqlStrings->WHERE);
        StringMaker_append(stringBuffer, key);
        StringMaker_append(stringBuffer, this->sqlStrings->EQUAL_QUOTE);
        StringMaker_append(stringBuffer, value);
        StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
        const char* sqlStatement = StringMaker_toString(stringBuffer);
        JAVA_TRY {
            int32_t largest = 0;
            ResultSet* rset = AbSqlColumn_executeSQLStatement(this, sqlStatement);
            while (ResultSet_next(rset)) {
                int32_t intValue = ResultSet_getInt(rset, columnName);
                if (intValue > largest) {
                    largest = intValue;
                }
            }
            const char* largestAsString = Integer_toString(largest);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, this->sqlStrings->SQL_STATEMENT_LABEL);
                StringMaker_append(stringBuffer, sqlStatement);
                StringMaker_append(stringBuffer, this->LARGEST_INT_VALUE_IN_COLUMN);
                StringMaker_append(stringBuffer, largestAsString);
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->METHOD_GET_LARGETS_INTEGER_IN_COLUMN);
            }
            return largestAsString;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, java_concat(java_string_of(this->FAILED_SQL_STATEMENT), sqlStatement), this, this->METHOD_GET_LARGETS_INTEGER_IN_COLUMN, e);
            }
            return this->INVALID_RESULT;
        } JAVA_END_TRY;
}


BasicArrayList* AbSqlColumn_getColumn(AbSqlColumn* this, const char* columnName) {
        BasicArrayList* column = BasicArrayListD_new();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->SELECT);
        StringMaker_append(stringBuffer, columnName);
        StringMaker_append(stringBuffer, this->sqlStrings->FROM);
        StringMaker_append(stringBuffer, AbSqlColumn_getTableName(this));
        const char* sqlStatement = StringMaker_toString(stringBuffer);
        JAVA_TRY {
            ResultSet* rset = AbSqlColumn_executeSQLStatement(this, sqlStatement);
            while (ResultSet_next(rset)) {
                const char* field = JAVA_CALL(ResultSet_getObject(rset, columnName), toString);
                BasicArrayList_add(column, field);
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, this->sqlStrings->SQL_STATEMENT_LABEL);
                StringMaker_append(stringBuffer, sqlStatement);
                StringMaker_append(stringBuffer, this->sqlStrings->COLUMN_VALUE);
                StringMaker_append(stringBuffer, BasicArrayList_toString(column));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->METHOD_GET_COLUMN);
            }
            return column;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, java_concat(java_string_of(this->FAILED_SQL_STATEMENT), sqlStatement), this, this->METHOD_GET_COLUMN, e);
            }
            return column;
        } JAVA_END_TRY;
}


BasicArrayList* AbSqlColumn_getColumnWhere(AbSqlColumn* this, const char* columnName, const char* key, const char* value) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->SELECT);
        StringMaker_append(stringBuffer, columnName);
        StringMaker_append(stringBuffer, this->sqlStrings->FROM);
        StringMaker_append(stringBuffer, AbSqlColumn_getTableName(this));
        StringMaker_append(stringBuffer, this->sqlStrings->WHERE);
        StringMaker_append(stringBuffer, key);
        StringMaker_append(stringBuffer, this->sqlStrings->EQUAL_QUOTE);
        StringMaker_append(stringBuffer, value);
        StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
        const char* sqlStatement = StringMaker_toString(stringBuffer);
        BasicArrayList* column = BasicArrayListD_new();
        ResultSet* rset = nullptr;
        const char* field = nullptr;
        JAVA_TRY {
            rset = AbSqlColumn_executeSQLStatement(this, sqlStatement);
            while (ResultSet_next(rset)) {
                field = JAVA_CALL(ResultSet_getObject(rset, columnName), toString);
                BasicArrayList_add(column, field);
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, this->sqlStrings->SQL_STATEMENT_LABEL);
                StringMaker_append(stringBuffer, sqlStatement);
                StringMaker_append(stringBuffer, this->sqlStrings->COLUMN_VALUE);
                StringMaker_append(stringBuffer, BasicArrayList_toString(column));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->METHOD_GET_COLUMN_WHERE);
            }
            return column;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, java_concat(java_string_of(this->FAILED_SQL_STATEMENT), sqlStatement), this, this->METHOD_GET_COLUMN_WHERE, e);
            }
            return column;
        } JAVA_END_TRY;
}

