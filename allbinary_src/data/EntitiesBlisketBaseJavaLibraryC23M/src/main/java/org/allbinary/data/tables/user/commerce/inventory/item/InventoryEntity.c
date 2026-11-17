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
// package org.allbinary.data.tables.user.commerce.inventory.item

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
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/InventoryDbInitInfo.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItem.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"
#include "org/allbinary/business/user/commerce/money/MoneyException.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityInterface.h"

typedef struct InventoryEntity InventoryEntity;
struct InventoryEntity {
    AbSqlBean base;
    InventoryEntityInterface InventoryEntityInterface_interface;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
    const char* tableName;
};


InventoryEntity* InventoryEntity_new(void);

void InventoryEntity_init(InventoryEntity* this);
void InventoryEntity_insert(InventoryEntity* this, BasicArrayList* values);
void InventoryEntity_delete(InventoryEntity* this, const char* value);
BasicArrayList* InventoryEntity_getItems(InventoryEntity* this, StoreFrontInterface* storeFrontInterface);
ItemInterface* InventoryEntity_getItem(InventoryEntity* this, const char* id);
const char* InventoryEntity_getWeight(InventoryEntity* this, const char* id);
const char* InventoryEntity_createTableStatement(InventoryEntity* this);
const char* InventoryEntity_createTable(InventoryEntity* this);
void InventoryEntity_update(InventoryEntity* this, HashMap* updatedValues);
const char* InventoryEntity_dropTable(InventoryEntity* this);
void InventoryEntity_deleteWhere(InventoryEntity* this, const char* key, const char* value);

static void InventoryEntity_initFields(InventoryEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    this->tableName = "basicinventory";
}


void InventoryEntity_init(InventoryEntity* this) {
        AbSqlBean_init(&this->base, InventoryDbInitInfo_new());
        InventoryEntity_initFields(this);
        InventoryEntity_setTableName(this, this->tableName);
}

InventoryEntity* InventoryEntity_new(void) {
    InventoryEntity* this = calloc(1, sizeof(InventoryEntity));
    InventoryEntity_init(this);
    return this;
}


void InventoryEntity_insert(InventoryEntity* this, BasicArrayList* values) {
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


void InventoryEntity_delete(InventoryEntity* this, const char* value) {
        JAVA_TRY {
            AbSqlBean_deleteWhere((&this->base), this->basicItemData->ID, value);
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
BasicArrayList* InventoryEntity_getItems(InventoryEntity* this, StoreFrontInterface* storeFrontInterface) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
            LogUtil_putF(this->logUtil, java_concat("Getting Items For: ", StoreFrontInterface_getName(storeFrontInterface)), this, "getItems");
        }
        BasicArrayList* itemVector = BasicArrayListD_new();
        HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
        BasicArrayList* itemHashMapVector = AbSqlBean_getRows((&this->base), keysAndValues);
        int32_t size = BasicArrayList_size(itemHashMapVector);
        for (int32_t i = 0; i < size; i++) {
            HashMap* itemHashMap = ((HashMap*) BasicArrayList_get(itemHashMapVector, i));
            if (itemHashMap != nullptr) {
                const char* category = ((const char*) HashMap_get(itemHashMap, this->basicItemData->CATEGORY));
                if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), category) && (strncmp(category, StoreFrontInterface_getCategoryPath(storeFrontInterface), strlen(StoreFrontInterface_getCategoryPath(storeFrontInterface))) == 0)) {
                    BasicArrayList_add(itemVector, BasicItem_new(itemHashMap));
                }
            }
        }
        return itemVector;
}


// throws MoneyException
ItemInterface* InventoryEntity_getItem(InventoryEntity* this, const char* id) {
        HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(keysAndValues, this->basicItemData->ID, id);
        HashMap* itemHashMap = AbSqlBean_getRow((&this->base), keysAndValues);
        if (itemHashMap != nullptr) {
            return BasicItem_new(itemHashMap);
        } else {
            return nullptr;
        }
}


const char* InventoryEntity_getWeight(InventoryEntity* this, const char* id) {
        return AbSqlBean_getField((&this->base), this->basicItemData->ID, id, this->basicItemData->WEIGHT);
}


const char* InventoryEntity_createTableStatement(InventoryEntity* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE);
        StringMaker_append(stringBuffer, this->tableName);
        StringMaker_append(stringBuffer, this->sqlStrings->START);
        StringMaker_append(stringBuffer, this->basicItemData->ID);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->NUMBER);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->INBASKETS);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->WEIGHT);
        StringMaker_append(stringBuffer, " VARCHAR(20) NOT NULL,");
        StringMaker_append(stringBuffer, EntryData_getInstance()->ENABLE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->NEWORUSED);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->SUMMARY);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->DISTRIBUTOR);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->IDUSEDBYDISTRIBUTOR);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->PRODUCEDBY);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->PRODUCTIONDATE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->STARTPRODUCTIONDATE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->DESCRIPTION);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->BLOB_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->KEYWORDS);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->CATEGORY);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->TYPE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->SMALLIMAGE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->MEDIUMIMAGE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->LARGEIMAGE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, EntryData_getInstance()->LASTMODIFIED);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, EntryData_getInstance()->TIMECREATED);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->PRICE);
        StringMaker_append(stringBuffer, " VARCHAR(20) NOT NULL,");
        StringMaker_append(stringBuffer, this->basicItemData->COMMENT);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->BLOB_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->CUSTOMS);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->DOWNLOADS);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->GROUPS);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->OPTIONS);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->PERMISSIONS);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->SPECIALS);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, this->sqlStrings->PRIMARY_KEY);
        StringMaker_append(stringBuffer, this->basicItemData->ID);
        StringMaker_append(stringBuffer, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* InventoryEntity_createTable(InventoryEntity* this) {
        return AbSqlBean_createTable((&this->base), InventoryEntity_createTableStatement(this));
}


void InventoryEntity_update(InventoryEntity* this, HashMap* updatedValues) {
        AbSqlBean_updateWhere((&this->base), this->basicItemData->ID, ((const char*) HashMap_get(updatedValues, this->basicItemData->ID)), updatedValues);
}


const char* InventoryEntity_dropTable(InventoryEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}


void InventoryEntity_deleteWhere(InventoryEntity* this, const char* key, const char* value) {
        AbSqlBean_deleteWhere((&this->base), key, value);
}

