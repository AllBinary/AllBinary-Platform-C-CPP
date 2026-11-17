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
// package org.allbinary.data.tables.user.commerce.inventory.order

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "java/util/ListIterator.h"
// #include "java/util/Set.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/HistoryDbInitInfo.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/address/ShippingAddressData.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketReview.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/Item.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderData.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderInterface.h"
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodData.h"
#include "org/allbinary/data/generator/OrderItemIdGenerator.h"
#include "org/allbinary/data/tables/TableDataFactory.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntityInterface.h"

typedef struct OrderItemsEntity OrderItemsEntity;
struct OrderItemsEntity {
    AbSqlBean base;
    OrderItemsEntityInterface OrderItemsEntityInterface_interface;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
    const char* tableName;
};


OrderItemsEntity* OrderItemsEntity_new(void);

void OrderItemsEntity_init(OrderItemsEntity* this);
void OrderItemsEntity_insert(OrderItemsEntity* this, const char* userName, OrderInterface* order);
void OrderItemsEntity_setStatus(OrderItemsEntity* this, const char* orderId, const char* groupId, const char* status);
bool OrderItemsEntity_isEverythingShipped(OrderItemsEntity* this, const char* orderId);
BasketReview* OrderItemsEntity_getBasketReview(OrderItemsEntity* this, const char* orderId);
const char* OrderItemsEntity_createTableStatement(OrderItemsEntity* this);
const char* OrderItemsEntity_createTable(OrderItemsEntity* this);
const char* OrderItemsEntity_dropTable(OrderItemsEntity* this);
void OrderItemsEntity_insert(OrderItemsEntity* this, BasicArrayList* values);

static void OrderItemsEntity_initFields(OrderItemsEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    this->tableName = "orderitems";
}


void OrderItemsEntity_init(OrderItemsEntity* this) {
        AbSqlBean_init(&this->base, HistoryDbInitInfo_new());
        OrderItemsEntity_initFields(this);
        OrderItemsEntity_setTableName(this, this->tableName);
}

OrderItemsEntity* OrderItemsEntity_new(void) {
    OrderItemsEntity* this = calloc(1, sizeof(OrderItemsEntity));
    OrderItemsEntity_init(this);
    return this;
}


void OrderItemsEntity_insert(OrderItemsEntity* this, const char* userName, OrderInterface* order) {
        BasicArrayList* vector = BasicArrayListD_new();
        JAVA_TRY {
            BasketInterface* basket = OrderInterface_getBasket(order);
            Set* items = BasketInterface_getIds(basket);
            const char* ZERO_STRING = TableDataFactory_getInstance()->ZERO_STRING;
            const char* EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
            InventoryEntity* inventoryEntity = InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance());
            Any** itemsArray = Set_toArray(items);
            int32_t itemsSize = java_array_length(itemsArray);
            for (int32_t i = 0; i < itemsSize; i++) {
                const char* item = ((const char*) itemsArray[i]);
                ItemInterface* itemInterface = InventoryEntity_getItem(inventoryEntity, item);
                vector = BasicArrayListD_new();
                BasicArrayList_add(vector, OrderItemIdGenerator_getNext(OrderItemIdGenerator_new()));
                BasicArrayList_add(vector, OrderInterface_getId(order));
                BasicArrayList_add(vector, TableDataFactory_getInstance()->INTEGER_MAX_VALUE_STRING);
                BasicArrayList_add(vector, userName);
                BasicArrayList_add(vector, OrderInterface_getStoreName(order));
                BasicArrayList_add(vector, ItemInterface_getId(itemInterface));
                BasicArrayList_add(vector, JAVA_CALL(BasketInterface_getNumberOf(basket, item), toString));
                BasicArrayList_add(vector, ItemInterface_getNewOrUsed(itemInterface));
                BasicArrayList_add(vector, ItemInterface_getSummary(itemInterface));
                BasicArrayList_add(vector, ItemInterface_getDistributor(itemInterface));
                BasicArrayList_add(vector, ItemInterface_getIdUsedByDistributor(itemInterface));
                BasicArrayList_add(vector, ItemInterface_getProducedBy(itemInterface));
                BasicArrayList_add(vector, ItemInterface_getProductionDate(itemInterface));
                BasicArrayList_add(vector, ItemInterface_getStartProductionDate(itemInterface));
                BasicArrayList_add(vector, ItemInterface_getDescription(itemInterface));
                BasicArrayList_add(vector, ItemInterface_getKeywords(itemInterface));
                BasicArrayList_add(vector, ItemInterface_getCategory(itemInterface));
                BasicArrayList_add(vector, ItemInterface_getType(itemInterface));
                BasicArrayList_add(vector, ItemInterface_getSmallImage(itemInterface));
                BasicArrayList_add(vector, ItemInterface_getMediumImage(itemInterface));
                BasicArrayList_add(vector, ItemInterface_getLargeImage(itemInterface));
                BasicArrayList_add(vector, ItemInterface_getWeight(itemInterface));
                BasicArrayList_add(vector, JAVA_CALL(ItemInterface_getPrice(itemInterface), toString));
                BasicArrayList_add(vector, ItemInterface_getComment(itemInterface));
                BasicArrayList_add(vector, ItemInterface_getCustoms(itemInterface));
                BasicArrayList_add(vector, ItemInterface_getDownloads(itemInterface));
                BasicArrayList_add(vector, EMPTY_STRING);
                BasicArrayList_add(vector, EMPTY_STRING);
                BasicArrayList_add(vector, EMPTY_STRING);
                BasicArrayList_add(vector, EMPTY_STRING);
                BasicArrayList_add(vector, EMPTY_STRING);
                BasicArrayList_add(vector, EMPTY_STRING);
                BasicArrayList_add(vector, EMPTY_STRING);
                BasicArrayList_add(vector, EMPTY_STRING);
                BasicArrayList_add(vector, EMPTY_STRING);
                BasicArrayList_add(vector, EMPTY_STRING);
                BasicArrayList_add(vector, EMPTY_STRING);
                BasicArrayList_add(vector, EMPTY_STRING);
                BasicArrayList_add(vector, EMPTY_STRING);
                BasicArrayList_add(vector, ZERO_STRING);
                BasicArrayList_add(vector, ZERO_STRING);
                BasicArrayList_add(vector, ZERO_STRING);
                BasicArrayList_add(vector, ZERO_STRING);
                OrderItemsEntity_insert(this, vector);
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat("Command Success Added: ", java_string_of(Set_size(items))), this, AbSqlBean_INSERT);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, java_concat("Command Failed: ", BasicArrayList_toString(vector)), this, AbSqlBean_INSERT, e);
            }
        } JAVA_END_TRY;
}


void OrderItemsEntity_setStatus(OrderItemsEntity* this, const char* orderId, const char* groupId, const char* status) {
        JAVA_TRY {
            HashMap* whereHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap* updateHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(whereHashMap, OrderData_ID, orderId);
            HashMap_put(whereHashMap, ShippingMethodData_GROUP, groupId);
            HashMap_put(updateHashMap, OrderHistoryData_STATUS, status);
            AbSqlBean_updateWhere((&this->base), whereHashMap, updateHashMap);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "setStatus", e);
            }
        } JAVA_END_TRY;
}


bool OrderItemsEntity_isEverythingShipped(OrderItemsEntity* this, const char* orderId) {
        JAVA_TRY {
            BasicArrayList* itemStatusVector = AbSqlBean_getColumnWhere((&this->base), OrderHistoryData_STATUS, OrderData_ID, orderId);
            int32_t size = BasicArrayList_size(itemStatusVector);
            for (int32_t index = 0; index < size; index++) {
                const char* status = ((const char*) BasicArrayList_get(itemStatusVector, index));
                if (strcmp(status, OrderHistoryData_SHIPPED) != 0) {
                    return false;
                }
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "isEverythingShipped", e);
            }
            return false;
        } JAVA_END_TRY;
}


BasketReview* OrderItemsEntity_getBasketReview(OrderItemsEntity* this, const char* orderId) {
        JAVA_TRY {
            BasketReview* basketReview = BasketReview_new();
            HashMap* keyValues = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(keyValues, OrderData_ID, orderId);
            BasicArrayList* items = AbSqlBean_getRows((&this->base), keyValues);
            EntryData* entryData = EntryData_getInstance();
            if (items != nullptr && Set_size(items) > 0) {
                const char* EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
                Any** itemsArray = Set_toArray(items);
                int32_t itemsSize = java_array_length(itemsArray);
                for (int32_t i = 0; i < itemsSize; i++) {
                    HashMap* itemHashMap = ((HashMap*) itemsArray[i]);
                    HashMap_put(itemHashMap, this->basicItemData->INBASKETS, EMPTY_STRING);
                    HashMap_put(itemHashMap, entryData->ENABLE, EMPTY_STRING);
                    HashMap_put(itemHashMap, entryData->TIMECREATED, EMPTY_STRING);
                    HashMap_put(itemHashMap, entryData->LASTMODIFIED, EMPTY_STRING);
                    HashMap_put(itemHashMap, this->basicItemData->GROUPS, EMPTY_STRING);
                    HashMap_put(itemHashMap, this->basicItemData->OPTIONS, EMPTY_STRING);
                    HashMap_put(itemHashMap, this->basicItemData->PERMISSIONS, EMPTY_STRING);
                    HashMap_put(itemHashMap, this->basicItemData->SPECIALS, EMPTY_STRING);
                    Item* item = Item_new(itemHashMap);
                    BasketReview_addItem(basketReview, item);
                }
                return basketReview;
            } else {
                return nullptr;
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "getBasketReview", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


const char* OrderItemsEntity_createTableStatement(OrderItemsEntity* this) {
        EntryData* entryData = EntryData_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "CREATE TABLE ");
        StringMaker_append(stringBuffer, this->tableName);
        StringMaker_append(stringBuffer, " (");
        StringMaker_append(stringBuffer, entryData->ID);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, OrderData_ID);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, ShippingMethodData_GROUP);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, UserData_USERNAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, StoreFrontData_getInstance()->NAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->ID);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->NUMBER);
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
        StringMaker_append(stringBuffer, this->basicItemData->WEIGHT);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->PRICE);
        StringMaker_append(stringBuffer, " VARCHAR(20) NOT NULL,");
        StringMaker_append(stringBuffer, this->basicItemData->COMMENT);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->BLOB_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->CUSTOMS);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, this->basicItemData->DOWNLOADS);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, ShippingMethodData_COST);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, OrderHistoryData_TAX);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, ShippingAddressData_NAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, ShippingAddressData_STREET);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, ShippingAddressData_CITY);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, ShippingAddressData_STATE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, ShippingAddressData_CODE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, ShippingAddressData_COUNTRY);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, ShippingMethodData_NAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, entryData->SPECIAL);
        StringMaker_append(stringBuffer, " VARCHAR(255) ,");
        StringMaker_append(stringBuffer, OrderHistoryData_STATUS);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, OrderHistoryData_CANCELINFO);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, OrderHistoryData_CANCELTYPE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, OrderHistoryData_SHIPPEDDATE);
        StringMaker_append(stringBuffer, " BIGINT(19) UNSIGNED ,");
        StringMaker_append(stringBuffer, OrderHistoryData_ORDERDATE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, OrderHistoryData_TRANSDATE);
        StringMaker_append(stringBuffer, " BIGINT(19) UNSIGNED ,");
        StringMaker_append(stringBuffer, OrderHistoryData_CANCELDATE);
        StringMaker_append(stringBuffer, " BIGINT(19) UNSIGNED ,");
        StringMaker_append(stringBuffer, "PRIMARY KEY(");
        StringMaker_append(stringBuffer, entryData->ID);
        StringMaker_append(stringBuffer, ") )");
        return StringMaker_toString(stringBuffer);
}


const char* OrderItemsEntity_createTable(OrderItemsEntity* this) {
        return AbSqlBean_createTable((&this->base), OrderItemsEntity_createTableStatement(this));
}


const char* OrderItemsEntity_dropTable(OrderItemsEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}


// Java overloaded method: C needs a different name
void OrderItemsEntity_insert(OrderItemsEntity* this, BasicArrayList* values) {
        AbSqlBean_insert((&this->base), values);
}

