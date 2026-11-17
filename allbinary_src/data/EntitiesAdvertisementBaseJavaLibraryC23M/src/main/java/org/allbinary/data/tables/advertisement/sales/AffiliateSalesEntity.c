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
// package org.allbinary.data.tables.advertisement.sales

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/DynamicObjectData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/UserDbInitInfo.h"
#include "org/allbinary/business/user/group/GroupData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/data/tables/advertisement/sales/AffiliateSalesEntityInterface.h"

typedef struct AffiliateSalesEntity AffiliateSalesEntity;
struct AffiliateSalesEntity {
    AbSqlBean base;
    AffiliateSalesEntityInterface AffiliateSalesEntityInterface_interface;
    LogUtil* logUtil;
    const char* tableName;
};


AffiliateSalesEntity* AffiliateSalesEntity_new(void);

void AffiliateSalesEntity_init(AffiliateSalesEntity* this);
void AffiliateSalesEntity_delete(AffiliateSalesEntity* this, const char* value);
const char* AffiliateSalesEntity_createTableStatement(AffiliateSalesEntity* this);
const char* AffiliateSalesEntity_createTable(AffiliateSalesEntity* this);
void AffiliateSalesEntity_update(AffiliateSalesEntity* this, HashMap* updatedValues);
const char* AffiliateSalesEntity_dropTable(AffiliateSalesEntity* this);
void AffiliateSalesEntity_insert(AffiliateSalesEntity* this, BasicArrayList* values);

static void AffiliateSalesEntity_initFields(AffiliateSalesEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->tableName = "affiliate";
}


void AffiliateSalesEntity_init(AffiliateSalesEntity* this) {
        AbSqlBean_init(&this->base, UserDbInitInfo_new());
        AffiliateSalesEntity_initFields(this);
        AffiliateSalesEntity_setTableName(this, this->tableName);
}

AffiliateSalesEntity* AffiliateSalesEntity_new(void) {
    AffiliateSalesEntity* this = calloc(1, sizeof(AffiliateSalesEntity));
    AffiliateSalesEntity_init(this);
    return this;
}


void AffiliateSalesEntity_delete(AffiliateSalesEntity* this, const char* value) {
        JAVA_TRY {
            AbSqlBean_deleteWhere((&this->base), StoreFrontData_getInstance()->NAME, value);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, this->commonStrings->delete);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->commonStrings->delete, e);
            }
        } JAVA_END_TRY;
}


const char* AffiliateSalesEntity_createTableStatement(AffiliateSalesEntity* this) {
        EntryData* entryData = EntryData_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE);
        StringMaker_append(stringBuffer, AffiliateSalesEntity_getTableName(this));
        StringMaker_append(stringBuffer, this->sqlStrings->START);
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, entryData->ID), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, StoreFrontData_getInstance()->NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, GroupData_NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, DynamicObjectData_NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, entryData->TIMECREATED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, entryData->LASTMODIFIED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, this->sqlStrings->PRIMARY_KEY), append, entryData->ID), append, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* AffiliateSalesEntity_createTable(AffiliateSalesEntity* this) {
        const char* returnStr = AbSqlBean_createTable((&this->base), AffiliateSalesEntity_createTableStatement(this));
        return returnStr;
}


void AffiliateSalesEntity_update(AffiliateSalesEntity* this, HashMap* updatedValues) {
        AbSqlBean_updateWhere((&this->base), EntryData_getInstance()->ID, ((const char*) HashMap_get(updatedValues, EntryData_getInstance()->ID)), updatedValues);
}


const char* AffiliateSalesEntity_dropTable(AffiliateSalesEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}


void AffiliateSalesEntity_insert(AffiliateSalesEntity* this, BasicArrayList* values) {
        AbSqlBean_insert((&this->base), values);
}

