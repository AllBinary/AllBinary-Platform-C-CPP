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
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
#include "org/allbinary/business/init/db/DbConnectionInfo.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/communication/sql/AbSqlRow.h"

typedef struct AbSqlBean AbSqlBean;
struct AbSqlBean {
    AbSqlRow base;
    LogUtil* logUtil;
    const char* METHOD_GET_FIELD;
    const char* METHOD_IS_SUBSET_OF_ENTRY;
};


AbSqlBean* AbSqlBean_new(DbConnectionInfo* databaseConnectionInfoInterface);

void AbSqlBean_init(AbSqlBean* this, DbConnectionInfo* databaseConnectionInfoInterface);
const char* AbSqlBean_getField(AbSqlBean* this, const char* key, const char* value, const char* requestedField);
const char* AbSqlBean_getField(AbSqlBean* this, HashMap* keysAndValues, const char* requestedField);
const char* AbSqlBean_isSubsetOfEntry(AbSqlBean* this, const char* key, const char* value, HashMap* columnsAndValues);

static void AbSqlBean_initFields(AbSqlBean* this) {
    this->logUtil = LogUtil_getInstance();
    this->METHOD_GET_FIELD = "getField";
    this->METHOD_IS_SUBSET_OF_ENTRY = "isSubsetOfEntry";
}


void AbSqlBean_init(AbSqlBean* this, DbConnectionInfo* databaseConnectionInfoInterface) {
        AbSqlRow_init(&this->base, databaseConnectionInfoInterface);
        AbSqlBean_initFields(this);
}

AbSqlBean* AbSqlBean_new(DbConnectionInfo* databaseConnectionInfoInterface) {
    AbSqlBean* this = calloc(1, sizeof(AbSqlBean));
    AbSqlBean_init(this, databaseConnectionInfoInterface);
    return this;
}


const char* AbSqlBean_getField(AbSqlBean* this, const char* key, const char* value, const char* requestedField) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->SELECT);
        StringMaker_append(stringBuffer, requestedField);
        StringMaker_append(stringBuffer, this->sqlStrings->FROM);
        StringMaker_append(stringBuffer, AbSqlBean_getTableName(this));
        StringMaker_append(stringBuffer, this->sqlStrings->WHERE);
        StringMaker_append(stringBuffer, key);
        StringMaker_append(stringBuffer, this->sqlStrings->EQUAL_QUOTE);
        StringMaker_append(stringBuffer, value);
        StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
        const char* sqlStatement = StringMaker_toString(stringBuffer);
        JAVA_TRY {
            const char* field = this->stringUtil->EMPTY_STRING;
            ResultSet* rset = AbSqlBean_executeSQLStatement(this, sqlStatement);
            while (ResultSet_next(rset)) {
                field = ResultSet_getString(rset, requestedField);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                    StringMaker_append(stringBuffer, this->sqlStrings->SQL_STATEMENT_LABEL);
                    StringMaker_append(stringBuffer, sqlStatement);
                    StringMaker_append(stringBuffer, this->sqlStrings->FIELD_VALUE);
                    StringMaker_append(stringBuffer, field);
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->METHOD_GET_FIELD);
                }
                return field;
            }
            return nullptr;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, java_concat(java_string_of(this->FAILED_SQL_STATEMENT), sqlStatement), this, this->METHOD_GET_FIELD, e);
            }
            return java_concat(java_string_of(this->FAILED_SQL_STATEMENT), sqlStatement);
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
const char* AbSqlBean_getField(AbSqlBean* this, HashMap* keysAndValues, const char* requestedField) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->SELECT);
        StringMaker_append(stringBuffer, requestedField);
        StringMaker_append(stringBuffer, this->sqlStrings->FROM);
        StringMaker_append(stringBuffer, AbSqlBean_getTableName(this));
        StringMaker_append(stringBuffer, this->sqlStrings->WHERE);
        JAVA_TRY {
            const char* field = this->stringUtil->EMPTY_STRING;
            Set* set = HashMap_keySet(keysAndValues);
            Any** keyArray = Set_toArray(set);
            int32_t size = java_array_length(keyArray);
            const char* key = nullptr;
            const char* value = nullptr;
            for (int32_t i = 0; i < size; i++) {
                key = ((const char*) keyArray[i]);
                value = java_string_new(((const char*) HashMap_get(keysAndValues, key)));
                StringMaker_append(stringBuffer, key);
                StringMaker_append(stringBuffer, this->sqlStrings->EQUAL_QUOTE);
                StringMaker_append(stringBuffer, value);
                StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
                if (i < size - 1) {
                    StringMaker_append(stringBuffer, this->sqlStrings->AND);
                }
            }
            const char* sqlStatement = StringMaker_toString(stringBuffer);
            ResultSet* rset = AbSqlBean_executeSQLStatement(this, sqlStatement);
            while (ResultSet_next(rset)) {
                field = ResultSet_getString(rset, requestedField);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                    StringMaker_append(stringBuffer, this->sqlStrings->SQL_STATEMENT_LABEL);
                    StringMaker_append(stringBuffer, sqlStatement);
                    StringMaker_append(stringBuffer, this->sqlStrings->FIELD_VALUE);
                    StringMaker_append(stringBuffer, field);
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->METHOD_GET_FIELD);
                }
                return field;
            }
            return nullptr;
        } JAVA_CATCH(Exception, e) {
            const char* sqlStatement = StringMaker_toString(stringBuffer);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, java_concat(java_string_of(this->FAILED_SQL_STATEMENT), sqlStatement), this, this->METHOD_GET_FIELD, e);
            }
            return java_concat(java_string_of(this->FAILED_SQL_STATEMENT), sqlStatement);
        } JAVA_END_TRY;
}


const char* AbSqlBean_isSubsetOfEntry(AbSqlBean* this, const char* key, const char* value, HashMap* columnsAndValues) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->SELECT);
        JAVA_TRY {
            Any** keyArray = JAVA_CALL(HashMap_keySet(columnsAndValues), toArray);
            int32_t size = java_array_length(keyArray);
            StringMaker_append(stringBuffer, this->commonSeps->SPACE);
            StringMaker_append(stringBuffer, key);
            for (int32_t i = 0; i < size; i++) {
                StringMaker_append(stringBuffer, this->commonSeps->SPACE);
                StringMaker_append(stringBuffer, JAVA_CALL(keyArray[i], toString));
            }
            StringMaker_append(stringBuffer, this->sqlStrings->FROM);
            StringMaker_append(stringBuffer, AbSqlBean_getTableName(this));
            StringMaker_append(stringBuffer, this->sqlStrings->WHERE);
            StringMaker_append(stringBuffer, key);
            StringMaker_append(stringBuffer, this->sqlStrings->EQUAL_QUOTE);
            StringMaker_append(stringBuffer, value);
            StringMaker_append(stringBuffer, this->sqlStrings->CLOSE_QUOTE);
            const char* sqlStatement = StringMaker_toString(stringBuffer);
            ResultSet* rset = AbSqlBean_executeSQLStatement(this, sqlStatement);
            const char* columnName = nullptr;
            const char* field = nullptr;
            while (ResultSet_next(rset)) {
                Any** keyArray2 = JAVA_CALL(HashMap_keySet(columnsAndValues), toArray);
                int32_t size2 = java_array_length(keyArray2);
                for (int32_t i = 0; i < size2; i++) {
                    columnName = JAVA_CALL(keyArray2[i], toString);
                    field = JAVA_CALL(ResultSet_getObject(rset, columnName), toString);
                    if (strcmp(field, ((const char*) HashMap_get(columnsAndValues, columnName))) != 0) {
                        return org_allbinary->globals->GLOBALS2->NOTASUBSET;
                    }
                }
            }
            if (ResultSet_getRow(rset) != 1) {
                return org_allbinary->globals->GLOBALS2->NOTASUBSET;
            } else {
                return org_allbinary->globals->GLOBALS2->ISASUBSET;
            }
        } JAVA_CATCH(Exception, e) {
            const char* sqlStatement = StringMaker_toString(stringBuffer);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, java_concat(java_string_of(this->FAILED_SQL_STATEMENT), sqlStatement), this, this->METHOD_IS_SUBSET_OF_ENTRY, e);
            }
            return java_concat(java_string_of(this->FAILED_SQL_STATEMENT), sqlStatement);
        } JAVA_END_TRY;
}

