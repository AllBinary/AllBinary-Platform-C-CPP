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
// package org.allbinary.data.tables.advertisement.areas

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
#include "org/allbinary/business/advertisement/area/AdvertisementArea.h"
#include "org/allbinary/business/advertisement/area/AdvertisementAreaData.h"
#include "org/allbinary/business/advertisement/area/AdvertisementAreaInterface.h"
#include "org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/UserDbInitInfo.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/data/tables/advertisement/areas/AdvertisementAreasEntityInterface.h"

typedef struct AdvertisementAreasEntity AdvertisementAreasEntity;
struct AdvertisementAreasEntity {
    AbSqlBean base;
    AdvertisementAreasEntityInterface AdvertisementAreasEntityInterface_interface;
    LogUtil* logUtil;
    const char* tableName;
};


AdvertisementAreasEntity* AdvertisementAreasEntity_new(void);

void AdvertisementAreasEntity_init(AdvertisementAreasEntity* this);
void AdvertisementAreasEntity_delete(AdvertisementAreasEntity* this, const char* value);
BasicArrayList* AdvertisementAreasEntity_get(AdvertisementAreasEntity* this, const char* storeName);
AdvertisementAreaInterface* AdvertisementAreasEntity_get(AdvertisementAreasEntity* this, const char* storeName, const char* advertisementAreaName);
const char* AdvertisementAreasEntity_createTableStatement(AdvertisementAreasEntity* this);
const char* AdvertisementAreasEntity_createTable(AdvertisementAreasEntity* this);
void AdvertisementAreasEntity_update(AdvertisementAreasEntity* this, HashMap* updatedValues);
const char* AdvertisementAreasEntity_dropTable(AdvertisementAreasEntity* this);
void AdvertisementAreasEntity_insert(AdvertisementAreasEntity* this, BasicArrayList* values);

static void AdvertisementAreasEntity_initFields(AdvertisementAreasEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->tableName = "advertisements";
}


void AdvertisementAreasEntity_init(AdvertisementAreasEntity* this) {
        AbSqlBean_init(&this->base, UserDbInitInfo_new());
        AdvertisementAreasEntity_initFields(this);
        AdvertisementAreasEntity_setTableName(this, this->tableName);
}

AdvertisementAreasEntity* AdvertisementAreasEntity_new(void) {
    AdvertisementAreasEntity* this = calloc(1, sizeof(AdvertisementAreasEntity));
    AdvertisementAreasEntity_init(this);
    return this;
}


void AdvertisementAreasEntity_delete(AdvertisementAreasEntity* this, const char* value) {
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


// throws Exception
BasicArrayList* AdvertisementAreasEntity_get(AdvertisementAreasEntity* this, const char* storeName) {
        HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(keysAndValues, StoreFrontData_getInstance()->NAME, storeName);
        BasicArrayList* hashMapVector = AbSqlBean_getRows((&this->base), keysAndValues);
        BasicArrayList* vector = BasicArrayListD_new();
        int32_t size = BasicArrayList_size(hashMapVector);
        for (int32_t index = 0; index < size; index++) {
            HashMap* hashMap = ((HashMap*) BasicArrayList_get(hashMapVector, index));
            if (hashMap != nullptr) {
                BasicArrayList_add(vector, ((AdvertisementAreaInterface*) AdvertisementArea_new(hashMap)));
            }
        }
        return vector;
}


// throws Exception
// Java overloaded method: C needs a different name
AdvertisementAreaInterface* AdvertisementAreasEntity_get(AdvertisementAreasEntity* this, const char* storeName, const char* advertisementAreaName) {
        HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(keysAndValues, StoreFrontData_getInstance()->NAME, storeName);
        HashMap_put(keysAndValues, AdvertisementAreaData_getInstance()->NAME, advertisementAreaName);
        HashMap* hashMap = AbSqlBean_getRow((&this->base), keysAndValues);
        if (hashMap != nullptr) {
            return ((AdvertisementAreaInterface*) AdvertisementArea_new(hashMap));
        } else {
            return nullptr;
        }
}


const char* AdvertisementAreasEntity_createTableStatement(AdvertisementAreasEntity* this) {
        AdvertisementAreaData* advertisementAreaData = AdvertisementAreaData_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE);
        StringMaker_append(stringBuffer, AdvertisementAreasEntity_getTableName(this));
        StringMaker_append(stringBuffer, this->sqlStrings->START);
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, advertisementAreaData->NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, StoreFrontData_getInstance()->NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, advertisementAreaData->DESCRIPTION), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, advertisementAreaData->CONSTRAINTS), append, this->sqlTypeStrings->BLOB_NOT_NULL), append, AdvertisementCampaignData_getInstance()->NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, EntryData_getInstance()->TIMECREATED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, EntryData_getInstance()->LASTMODIFIED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, this->sqlStrings->PRIMARY_KEY), append, advertisementAreaData->NAME), append, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* AdvertisementAreasEntity_createTable(AdvertisementAreasEntity* this) {
        const char* returnStr = AbSqlBean_createTable((&this->base), AdvertisementAreasEntity_createTableStatement(this));
        return returnStr;
}


void AdvertisementAreasEntity_update(AdvertisementAreasEntity* this, HashMap* updatedValues) {
        AbSqlBean_updateWhere((&this->base), AdvertisementAreaData_getInstance()->NAME, ((const char*) HashMap_get(updatedValues, AdvertisementAreaData_getInstance()->NAME)), updatedValues);
}


const char* AdvertisementAreasEntity_dropTable(AdvertisementAreasEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}


void AdvertisementAreasEntity_insert(AdvertisementAreasEntity* this, BasicArrayList* values) {
        AbSqlBean_insert((&this->base), values);
}

