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
// package org.allbinary.data.tables.user.commerce.inventory.item.customs

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
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/InventoryDbInitInfo.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/custom/CustomItemData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/customs/CustomItemsEntityInterface.h"

typedef struct CustomItemsEntity CustomItemsEntity;
struct CustomItemsEntity {
    AbSqlBean base;
    CustomItemsEntityInterface CustomItemsEntityInterface_interface;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
    const char* tableName;
};


CustomItemsEntity* CustomItemsEntity_new(void);

void CustomItemsEntity_init(CustomItemsEntity* this);
void CustomItemsEntity_insert(CustomItemsEntity* this, BasicArrayList* values);
void CustomItemsEntity_delete(CustomItemsEntity* this, const char* value);
const char* CustomItemsEntity_createTableStatement(CustomItemsEntity* this);
const char* CustomItemsEntity_createTable(CustomItemsEntity* this);
void CustomItemsEntity_update(CustomItemsEntity* this, HashMap* updatedValues);
const char* CustomItemsEntity_dropTable(CustomItemsEntity* this);

static void CustomItemsEntity_initFields(CustomItemsEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    this->tableName = "customitems";
}


void CustomItemsEntity_init(CustomItemsEntity* this) {
        AbSqlBean_init(&this->base, InventoryDbInitInfo_new());
        CustomItemsEntity_initFields(this);
        CustomItemsEntity_setTableName(this, this->tableName);
}

CustomItemsEntity* CustomItemsEntity_new(void) {
    CustomItemsEntity* this = calloc(1, sizeof(CustomItemsEntity));
    CustomItemsEntity_init(this);
    return this;
}


void CustomItemsEntity_insert(CustomItemsEntity* this, BasicArrayList* values) {
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


void CustomItemsEntity_delete(CustomItemsEntity* this, const char* value) {
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


const char* CustomItemsEntity_createTableStatement(CustomItemsEntity* this) {
        StringMaker* stringBuffer = StringMaker_new();
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE), append, this->tableName), append, this->sqlStrings->START), append, this->basicItemData->ID), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, DynamicObjectData_NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, CustomItemData_PACKAGE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, EntryData_getInstance()->TIMECREATED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, EntryData_getInstance()->LASTMODIFIED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, this->sqlStrings->PRIMARY_KEY), append, this->basicItemData->ID), append, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* CustomItemsEntity_createTable(CustomItemsEntity* this) {
        return AbSqlBean_createTable((&this->base), CustomItemsEntity_createTableStatement(this));
}


void CustomItemsEntity_update(CustomItemsEntity* this, HashMap* updatedValues) {
        AbSqlBean_updateWhere((&this->base), this->basicItemData->ID, ((const char*) HashMap_get(updatedValues, this->basicItemData->ID)), updatedValues);
}


const char* CustomItemsEntity_dropTable(CustomItemsEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}

