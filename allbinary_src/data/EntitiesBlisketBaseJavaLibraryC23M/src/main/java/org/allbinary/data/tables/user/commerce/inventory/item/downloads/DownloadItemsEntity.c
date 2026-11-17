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
// package org.allbinary.data.tables.user.commerce.inventory.item.downloads

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
#include "org/allbinary/business/init/db/InventoryDbInitInfo.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/download/DownloadItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntityInterface.h"

typedef struct DownloadItemsEntity DownloadItemsEntity;
struct DownloadItemsEntity {
    AbSqlBean base;
    DownloadItemsEntityInterface DownloadItemsEntityInterface_interface;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
    const char* tableName;
};


DownloadItemsEntity* DownloadItemsEntity_new(void);

void DownloadItemsEntity_init(DownloadItemsEntity* this);
void DownloadItemsEntity_insert(DownloadItemsEntity* this, BasicArrayList* values);
void DownloadItemsEntity_delete(DownloadItemsEntity* this, const char* value);
void DownloadItemsEntity_update(DownloadItemsEntity* this, HashMap* updatedValues);
BasicArrayList* DownloadItemsEntity_getForItem(DownloadItemsEntity* this, const char* id);
BasicArrayList* DownloadItemsEntity_getForItem(DownloadItemsEntity* this, const char* id, const char* downloadItemId);
const char* DownloadItemsEntity_createTableStatement(DownloadItemsEntity* this);
const char* DownloadItemsEntity_createTable(DownloadItemsEntity* this);
const char* DownloadItemsEntity_dropTable(DownloadItemsEntity* this);

static void DownloadItemsEntity_initFields(DownloadItemsEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    this->tableName = "downloaditems";
}


void DownloadItemsEntity_init(DownloadItemsEntity* this) {
        AbSqlBean_init(&this->base, InventoryDbInitInfo_new());
        DownloadItemsEntity_initFields(this);
        DownloadItemsEntity_setTableName(this, this->tableName);
}

DownloadItemsEntity* DownloadItemsEntity_new(void) {
    DownloadItemsEntity* this = calloc(1, sizeof(DownloadItemsEntity));
    DownloadItemsEntity_init(this);
    return this;
}


void DownloadItemsEntity_insert(DownloadItemsEntity* this, BasicArrayList* values) {
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


void DownloadItemsEntity_delete(DownloadItemsEntity* this, const char* value) {
        JAVA_TRY {
            AbSqlBean_deleteWhere((&this->base), DownloadItemData_ID, value);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, this->commonStrings->delete);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->commonStrings->delete, e);
            }
        } JAVA_END_TRY;
}


void DownloadItemsEntity_update(DownloadItemsEntity* this, HashMap* updatedValues) {
        AbSqlBean_updateWhere((&this->base), DownloadItemData_ID, ((const char*) HashMap_get(updatedValues, DownloadItemData_ID)), updatedValues);
}


BasicArrayList* DownloadItemsEntity_getForItem(DownloadItemsEntity* this, const char* id) {
        BasicArrayList* returnVector = BasicArrayListD_new();
        HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(keysAndValues, this->basicItemData->ID, id);
        BasicArrayList* vector = AbSqlBean_getRows((&this->base), keysAndValues);
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            HashMap* hashMap = ((HashMap*) BasicArrayList_get(vector, index));
            BasicArrayList_add(returnVector, DownloadableItem_new(hashMap));
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
            LogUtil_putF(this->logUtil, java_concat("Found: ", java_string_of(size)), this, "getForItem");
        }
        return returnVector;
}


// Java overloaded method: C needs a different name
BasicArrayList* DownloadItemsEntity_getForItem(DownloadItemsEntity* this, const char* id, const char* downloadItemId) {
        BasicArrayList* returnVector = BasicArrayListD_new();
        HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(keysAndValues, this->basicItemData->ID, id);
        HashMap_put(keysAndValues, DownloadItemData_ID, downloadItemId);
        BasicArrayList* vector = AbSqlBean_getRows((&this->base), keysAndValues);
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            HashMap* hashMap = ((HashMap*) BasicArrayList_get(vector, index));
            BasicArrayList_add(returnVector, DownloadableItem_new(hashMap));
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
            LogUtil_putF(this->logUtil, java_concat("Found: ", java_string_of(size)), this, "getForItem");
        }
        return returnVector;
}


const char* DownloadItemsEntity_createTableStatement(DownloadItemsEntity* this) {
        StringMaker* stringBuffer = StringMaker_new();
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE), append, this->tableName), append, this->sqlStrings->START), append, DownloadItemData_ID), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, this->basicItemData->ID), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, EntryData_getInstance()->ENABLE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, DownloadItemData_SPECIAL_NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, DownloadItemData_VERSION), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, DownloadItemData_CHANGES), append, this->sqlTypeStrings->BLOB_NOT_NULL), append, DownloadItemData_SYSTEM), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, DownloadItemData_PLATFORM), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, DownloadItemData_LICENSE_FILE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, DownloadItemData_FILE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, DownloadItemData_SIZE), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, DownloadItemData_VALID_TIME), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, DownloadItemData_RETRIES), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, EntryData_getInstance()->TIMECREATED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, EntryData_getInstance()->LASTMODIFIED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, this->sqlStrings->PRIMARY_KEY), append, DownloadItemData_ID), append, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* DownloadItemsEntity_createTable(DownloadItemsEntity* this) {
        return AbSqlBean_createTable((&this->base), DownloadItemsEntity_createTableStatement(this));
}


const char* DownloadItemsEntity_dropTable(DownloadItemsEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}

