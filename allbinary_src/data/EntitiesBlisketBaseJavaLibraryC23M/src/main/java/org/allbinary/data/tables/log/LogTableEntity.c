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
// package org.allbinary.data.tables.log

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/LogDbInitInfo.h"
#include "org/allbinary/logic/communication/http/request/AbeHttpRequestInfoData.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/data/tables/log/LogTableEntityInterface.h"

typedef struct LogTableEntity LogTableEntity;
struct LogTableEntity {
    AbSqlBean base;
    LogTableEntityInterface LogTableEntityInterface_interface;
    const char* tableName;
};


LogTableEntity* LogTableEntity_new(void);

void LogTableEntity_init(LogTableEntity* this);
const char* LogTableEntity_createTableStatement(LogTableEntity* this);
const char* LogTableEntity_createTable(LogTableEntity* this);
void LogTableEntity_deleteWhere(LogTableEntity* this, const char* key, const char* value);
void LogTableEntity_insert(LogTableEntity* this, BasicArrayList* values);
const char* LogTableEntity_dropTable(LogTableEntity* this);

static void LogTableEntity_initFields(LogTableEntity* this) {
    this->tableName = "log";
}


void LogTableEntity_init(LogTableEntity* this) {
        AbSqlBean_init(&this->base, LogDbInitInfo_new());
        LogTableEntity_initFields(this);
        LogTableEntity_setTableName(this, this->tableName);
}

LogTableEntity* LogTableEntity_new(void) {
    LogTableEntity* this = calloc(1, sizeof(LogTableEntity));
    LogTableEntity_init(this);
    return this;
}


const char* LogTableEntity_createTableStatement(LogTableEntity* this) {
        AbeHttpRequestInfoData* abeHttpRequestInfoData = AbeHttpRequestInfoData_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE), append, this->tableName), append, this->sqlStrings->START), append, this->sqlStrings->ID), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, abeHttpRequestInfoData->HTTP_USER_AGENT), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, abeHttpRequestInfoData->REMOTE_HOST), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, abeHttpRequestInfoData->REMOTE_ADDRESS), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, abeHttpRequestInfoData->REQUEST_FILE_PATH), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, abeHttpRequestInfoData->REMOTE_PORT), append, this->sqlTypeStrings->MAX_INT_UNSIGNED_NOT_NULL), append, EntryData_getInstance()->TIMECREATED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, this->sqlStrings->PRIMARY_KEY), append, this->sqlStrings->ID), append, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* LogTableEntity_createTable(LogTableEntity* this) {
        return AbSqlBean_createTable((&this->base), LogTableEntity_createTableStatement(this));
}


void LogTableEntity_deleteWhere(LogTableEntity* this, const char* key, const char* value) {
        AbSqlBean_deleteWhere((&this->base), key, value);
}


void LogTableEntity_insert(LogTableEntity* this, BasicArrayList* values) {
        AbSqlBean_insert((&this->base), values);
}


const char* LogTableEntity_dropTable(LogTableEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}

