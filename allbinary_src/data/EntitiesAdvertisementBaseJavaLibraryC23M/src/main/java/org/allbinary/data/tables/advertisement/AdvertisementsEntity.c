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
// package org.allbinary.data.tables.advertisement

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
#include "org/allbinary/business/DynamicObjectData.h"
#include "org/allbinary/business/advertisement/AdvertisementData.h"
#include "org/allbinary/business/advertisement/AdvertisementInterface.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/UserDbInitInfo.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/data/tables/advertisement/AdvertisementsEntityInterface.h"

typedef struct AdvertisementsEntity AdvertisementsEntity;
struct AdvertisementsEntity {
    AbSqlBean base;
    AdvertisementsEntityInterface AdvertisementsEntityInterface_interface;
    LogUtil* logUtil;
    const char* tableName;
    const char* _INDEX;
};


AdvertisementsEntity* AdvertisementsEntity_new(void);

void AdvertisementsEntity_init(AdvertisementsEntity* this);
void AdvertisementsEntity_delete(AdvertisementsEntity* this, const char* value);
BasicArrayList* AdvertisementsEntity_get(AdvertisementsEntity* this, const char* storeName);
AdvertisementInterface* AdvertisementsEntity_get(AdvertisementsEntity* this, const char* storeName, const char* advertismentName);
const char* AdvertisementsEntity_createTableStatement(AdvertisementsEntity* this);
const char* AdvertisementsEntity_createTable(AdvertisementsEntity* this);
void AdvertisementsEntity_update(AdvertisementsEntity* this, HashMap* updatedValues);
const char* AdvertisementsEntity_dropTable(AdvertisementsEntity* this);
void AdvertisementsEntity_insert(AdvertisementsEntity* this, BasicArrayList* values);

static void AdvertisementsEntity_initFields(AdvertisementsEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->tableName = "advertisements";
    this->_INDEX = "_index";
}


void AdvertisementsEntity_init(AdvertisementsEntity* this) {
        AbSqlBean_init(&this->base, UserDbInitInfo_new());
        AdvertisementsEntity_initFields(this);
        AdvertisementsEntity_setTableName(this, this->tableName);
}

AdvertisementsEntity* AdvertisementsEntity_new(void) {
    AdvertisementsEntity* this = calloc(1, sizeof(AdvertisementsEntity));
    AdvertisementsEntity_init(this);
    return this;
}


void AdvertisementsEntity_delete(AdvertisementsEntity* this, const char* value) {
        JAVA_TRY {
            AbSqlBean_deleteWhere((&this->base), EntryData_getInstance()->ID, value);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, this->commonStrings->delete);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->commonStrings->delete, e);
            }
        } JAVA_END_TRY;
}


BasicArrayList* AdvertisementsEntity_get(AdvertisementsEntity* this, const char* storeName) {
        HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(keysAndValues, StoreFrontData_getInstance()->NAME, storeName);
        BasicArrayList* hashMapVector = AbSqlBean_getRows((&this->base), keysAndValues);
        BasicArrayList* vector = BasicArrayListD_new();
        int32_t size = BasicArrayList_size(hashMapVector);
        for (int32_t index = 0; index < size; index++) {
            HashMap* hashMap = ((HashMap*) BasicArrayList_get(hashMapVector, index));
        }
        return vector;
}


// Java overloaded method: C needs a different name
AdvertisementInterface* AdvertisementsEntity_get(AdvertisementsEntity* this, const char* storeName, const char* advertismentName) {
        HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(keysAndValues, StoreFrontData_getInstance()->NAME, storeName);
        HashMap_put(keysAndValues, AdvertisementData_getInstance()->NAME, advertismentName);
        HashMap* hashMap = AbSqlBean_getRow((&this->base), keysAndValues);
        return nullptr;
}


const char* AdvertisementsEntity_createTableStatement(AdvertisementsEntity* this) {
        AdvertisementData* advertisementData = AdvertisementData_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE);
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, AdvertisementsEntity_getTableName(this)), append, this->sqlStrings->START), append, advertisementData->NAME), append, this->_INDEX), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, advertisementData->NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, StoreFrontData_getInstance()->NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, advertisementData->DESCRIPTION), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, DynamicObjectData_NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, EntryData_getInstance()->TIMECREATED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, EntryData_getInstance()->LASTMODIFIED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, this->sqlStrings->PRIMARY_KEY), append, advertisementData->NAME), append, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* AdvertisementsEntity_createTable(AdvertisementsEntity* this) {
        const char* returnStr = AbSqlBean_createTable((&this->base), AdvertisementsEntity_createTableStatement(this));
        return returnStr;
}


void AdvertisementsEntity_update(AdvertisementsEntity* this, HashMap* updatedValues) {
        AbSqlBean_updateWhere((&this->base), EntryData_getInstance()->ID, ((const char*) HashMap_get(updatedValues, EntryData_getInstance()->ID)), updatedValues);
}


const char* AdvertisementsEntity_dropTable(AdvertisementsEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}


void AdvertisementsEntity_insert(AdvertisementsEntity* this, BasicArrayList* values) {
        AbSqlBean_insert((&this->base), values);
}

