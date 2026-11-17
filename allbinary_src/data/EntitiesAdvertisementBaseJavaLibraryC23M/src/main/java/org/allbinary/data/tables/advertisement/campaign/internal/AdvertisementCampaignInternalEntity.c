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
// package org.allbinary.data.tables.advertisement.campaign.internal

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
#include "org/allbinary/business/advertisement/campaign/AdvertisementCampaign.h"
#include "org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h"
#include "org/allbinary/business/advertisement/campaign/AdvertisementCampaignInterface.h"
#include "org/allbinary/business/advertisement/campaign/AdvertisementCampaigns.h"
#include "org/allbinary/business/advertisement/campaign/AdvertisementCampaignsInterface.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/UserDbInitInfo.h"
#include "org/allbinary/business/time/TimeData.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/data/tables/advertisement/campaign/internal/AdvertisementCampaignInternalEntityInterface.h"

typedef struct AdvertisementCampaignInternalEntity AdvertisementCampaignInternalEntity;
struct AdvertisementCampaignInternalEntity {
    AbSqlBean base;
    AdvertisementCampaignInternalEntityInterface AdvertisementCampaignInternalEntityInterface_interface;
    LogUtil* logUtil;
    const char* tableName;
};


AdvertisementCampaignInternalEntity* AdvertisementCampaignInternalEntity_new(void);

void AdvertisementCampaignInternalEntity_init(AdvertisementCampaignInternalEntity* this);
void AdvertisementCampaignInternalEntity_delete(AdvertisementCampaignInternalEntity* this, const char* value);
AdvertisementCampaignsInterface* AdvertisementCampaignInternalEntity_getCampaignsInStore(AdvertisementCampaignInternalEntity* this, const char* storeName);
AdvertisementCampaignInterface* AdvertisementCampaignInternalEntity_get(AdvertisementCampaignInternalEntity* this, const char* storeName, const char* name);
void AdvertisementCampaignInternalEntity_update(AdvertisementCampaignInternalEntity* this, HashMap* updatedValues);
const char* AdvertisementCampaignInternalEntity_createTableStatement(AdvertisementCampaignInternalEntity* this);
const char* AdvertisementCampaignInternalEntity_createTable(AdvertisementCampaignInternalEntity* this);
const char* AdvertisementCampaignInternalEntity_dropTable(AdvertisementCampaignInternalEntity* this);
void AdvertisementCampaignInternalEntity_insert(AdvertisementCampaignInternalEntity* this, BasicArrayList* values);

static void AdvertisementCampaignInternalEntity_initFields(AdvertisementCampaignInternalEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->tableName = "adCampaignInternal";
}


void AdvertisementCampaignInternalEntity_init(AdvertisementCampaignInternalEntity* this) {
        AbSqlBean_init(&this->base, UserDbInitInfo_new());
        AdvertisementCampaignInternalEntity_initFields(this);
        AdvertisementCampaignInternalEntity_setTableName(this, this->tableName);
}

AdvertisementCampaignInternalEntity* AdvertisementCampaignInternalEntity_new(void) {
    AdvertisementCampaignInternalEntity* this = calloc(1, sizeof(AdvertisementCampaignInternalEntity));
    AdvertisementCampaignInternalEntity_init(this);
    return this;
}


void AdvertisementCampaignInternalEntity_delete(AdvertisementCampaignInternalEntity* this, const char* value) {
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


AdvertisementCampaignsInterface* AdvertisementCampaignInternalEntity_getCampaignsInStore(AdvertisementCampaignInternalEntity* this, const char* storeName) {
        HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(keysAndValues, StoreFrontData_getInstance()->NAME, storeName);
        BasicArrayList* hashMapVector = AbSqlBean_getRows((&this->base), keysAndValues);
        BasicArrayList* vector = BasicArrayListD_new();
        int32_t size = BasicArrayList_size(hashMapVector);
        for (int32_t index = 0; index < size; index++) {
            HashMap* hashMap = ((HashMap*) BasicArrayList_get(hashMapVector, index));
            if (hashMap != nullptr) {
                BasicArrayList_add(vector, ((AdvertisementCampaignInterface*) AdvertisementCampaign_new(hashMap)));
            }
        }
        return ((AdvertisementCampaignsInterface*) AdvertisementCampaigns_new(vector));
}


AdvertisementCampaignInterface* AdvertisementCampaignInternalEntity_get(AdvertisementCampaignInternalEntity* this, const char* storeName, const char* name) {
        HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(keysAndValues, StoreFrontData_getInstance()->NAME, storeName);
        HashMap_put(keysAndValues, AdvertisementCampaignData_getInstance()->NAME, name);
        HashMap* hashMap = AbSqlBean_getRow((&this->base), keysAndValues);
        if (hashMap != nullptr) {
            return ((AdvertisementCampaignInterface*) AdvertisementCampaign_new(hashMap));
        } else {
            return nullptr;
        }
}


void AdvertisementCampaignInternalEntity_update(AdvertisementCampaignInternalEntity* this, HashMap* updatedValues) {
        AbSqlBean_updateWhere((&this->base), EntryData_getInstance(EntryData_getInstance())->ID, ((const char*) HashMap_get(updatedValues, EntryData_getInstance(EntryData_getInstance())->ID)), updatedValues);
}


const char* AdvertisementCampaignInternalEntity_createTableStatement(AdvertisementCampaignInternalEntity* this) {
        EntryData* entryData = EntryData_getInstance(EntryData_getInstance());
        AdvertisementCampaignData* advertisementCampaignData = AdvertisementCampaignData_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE);
        StringMaker_append(stringBuffer, AdvertisementCampaignInternalEntity_getTableName(this));
        StringMaker_append(stringBuffer, this->sqlStrings->START);
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, entryData->ID), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, StoreFrontData_getInstance()->NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, advertisementCampaignData->NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, advertisementCampaignData->DESCRIPTION), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, advertisementCampaignData->CONFIG), append, this->sqlTypeStrings->BLOB_NOT_NULL), append, TimeData_getInstance()->START), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, TimeData_getInstance()->END), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, entryData->TIMECREATED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, entryData->LASTMODIFIED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, this->sqlStrings->PRIMARY_KEY), append, entryData->ID), append, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* AdvertisementCampaignInternalEntity_createTable(AdvertisementCampaignInternalEntity* this) {
        const char* returnStr = AbSqlBean_createTable((&this->base), AdvertisementCampaignInternalEntity_createTableStatement(this));
        return returnStr;
}


const char* AdvertisementCampaignInternalEntity_dropTable(AdvertisementCampaignInternalEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}


void AdvertisementCampaignInternalEntity_insert(AdvertisementCampaignInternalEntity* this, BasicArrayList* values) {
        AbSqlBean_insert((&this->base), values);
}

