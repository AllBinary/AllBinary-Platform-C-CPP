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
// package org.allbinary.data.tables.user.quoterequest

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/UserDbInitInfo.h"
#include "org/allbinary/business/quoterequest/QuoteRequestData.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/quoterequest/QuoteRequest.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/data/tables/user/quoterequest/QuoteRequestEntityInterface.h"

typedef struct QuoteRequestEntity QuoteRequestEntity;
struct QuoteRequestEntity {
    AbSqlBean base;
    QuoteRequestEntityInterface QuoteRequestEntityInterface_interface;
    LogUtil* logUtil;
    const char* tableName;
};


QuoteRequestEntity* QuoteRequestEntity_new(void);

void QuoteRequestEntity_init(QuoteRequestEntity* this);
void QuoteRequestEntity_insert(QuoteRequestEntity* this, BasicArrayList* values);
QuoteRequest* QuoteRequestEntity_get(QuoteRequestEntity* this, const char* userName, int32_t id);
BasicArrayList* QuoteRequestEntity_getIds(QuoteRequestEntity* this, const char* userName);
void QuoteRequestEntity_deleteWhere(QuoteRequestEntity* this, const char* key, const char* value);
const char* QuoteRequestEntity_createTableStatement(QuoteRequestEntity* this);
const char* QuoteRequestEntity_createTable(QuoteRequestEntity* this);
const char* QuoteRequestEntity_dropTable(QuoteRequestEntity* this);
void QuoteRequestEntity_update(QuoteRequestEntity* this, const char* userName, HashMap* updatedValues);

static void QuoteRequestEntity_initFields(QuoteRequestEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->tableName = "quoterequest";
}


void QuoteRequestEntity_init(QuoteRequestEntity* this) {
        AbSqlBean_init(&this->base, UserDbInitInfo_new());
        QuoteRequestEntity_initFields(this);
        QuoteRequestEntity_setTableName(this, this->tableName);
}

QuoteRequestEntity* QuoteRequestEntity_new(void) {
    QuoteRequestEntity* this = calloc(1, sizeof(QuoteRequestEntity));
    QuoteRequestEntity_init(this);
    return this;
}


void QuoteRequestEntity_insert(QuoteRequestEntity* this, BasicArrayList* values) {
        JAVA_TRY {
            AbSqlBean_insert((&this->base), values);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, AbSqlBean_INSERT);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, AbSqlBean_INSERT, e);
            }
        } JAVA_END_TRY;
}


// throws Exception
QuoteRequest* QuoteRequestEntity_get(QuoteRequestEntity* this, const char* userName, int32_t id) {
        HashMap* row = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(row, UserData_USERNAME, userName);
        HashMap_put(row, QuoteRequestData_getInstance()->ID, java_string_of(id));
        HashMap* quoteRequestHashMap = AbSqlBean_getRow((&this->base), row);
        if (quoteRequestHashMap != nullptr) {
            return QuoteRequest_new(quoteRequestHashMap);
        } else {
            return nullptr;
        }
}


BasicArrayList* QuoteRequestEntity_getIds(QuoteRequestEntity* this, const char* userName) {
        return AbSqlBean_getColumnWhere((&this->base), QuoteRequestData_getInstance()->ID, UserData_USERNAME, userName);
}


void QuoteRequestEntity_deleteWhere(QuoteRequestEntity* this, const char* key, const char* value) {
        JAVA_TRY {
            AbSqlBean_deleteWhere((&this->base), key, value);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, "deleteWhere");
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "deleteWhere", e);
            }
        } JAVA_END_TRY;
}


const char* QuoteRequestEntity_createTableStatement(QuoteRequestEntity* this) {
        QuoteRequestData* quoteRequestData = QuoteRequestData_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE), append, this->tableName), append, this->sqlStrings->START);
        JAVA_CALL(StringMaker_append(stringBuffer, quoteRequestData->ID), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, UserData_USERNAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, quoteRequestData->PROJECT_INFO);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->BLOB_NOT_NULL);
        StringMaker_append(stringBuffer, quoteRequestData->CUSTOMER_COMMENTS);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->BLOB_NOT_NULL);
        StringMaker_append(stringBuffer, quoteRequestData->BUDGET);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->BLOB_NOT_NULL);
        StringMaker_append(stringBuffer, quoteRequestData->TIMEFRAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->BLOB_NOT_NULL);
        StringMaker_append(stringBuffer, quoteRequestData->COMMENTS);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->BLOB_NOT_NULL);
        StringMaker_append(stringBuffer, EntryData_getInstance()->TIMECREATED);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, EntryData_getInstance()->LASTMODIFIED);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, this->sqlStrings->PRIMARY_KEY);
        StringMaker_append(stringBuffer, quoteRequestData->ID);
        StringMaker_append(stringBuffer, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* QuoteRequestEntity_createTable(QuoteRequestEntity* this) {
        return AbSqlBean_createTable((&this->base), QuoteRequestEntity_createTableStatement(this));
}


const char* QuoteRequestEntity_dropTable(QuoteRequestEntity* this) {
        const char* result = java_string_new(AbSqlBean_dropTable((&this->base)));
        return result;
}


void QuoteRequestEntity_update(QuoteRequestEntity* this, const char* userName, HashMap* updatedValues) {
        AbSqlBean_updateWhere((&this->base), UserData_USERNAME, userName, updatedValues);
}

