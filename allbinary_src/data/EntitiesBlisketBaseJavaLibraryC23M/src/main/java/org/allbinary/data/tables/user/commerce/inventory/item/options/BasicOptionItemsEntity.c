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
// package org.allbinary.data.tables.user.commerce.inventory.item.options

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
#include "org/allbinary/business/user/commerce/inventory/item/option/BasicOptionItemData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/options/BasicOptionItemsEntityInterface.h"

typedef struct BasicOptionItemsEntity BasicOptionItemsEntity;
struct BasicOptionItemsEntity {
    AbSqlBean base;
    BasicOptionItemsEntityInterface BasicOptionItemsEntityInterface_interface;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
    const char* tableName;
};


BasicOptionItemsEntity* BasicOptionItemsEntity_new(void);

void BasicOptionItemsEntity_init(BasicOptionItemsEntity* this);
void BasicOptionItemsEntity_insert(BasicOptionItemsEntity* this, BasicArrayList* values);
void BasicOptionItemsEntity_delete(BasicOptionItemsEntity* this, const char* value);
const char* BasicOptionItemsEntity_createTableStatement(BasicOptionItemsEntity* this);
const char* BasicOptionItemsEntity_createTable(BasicOptionItemsEntity* this);
void BasicOptionItemsEntity_update(BasicOptionItemsEntity* this, HashMap* updatedValues);
const char* BasicOptionItemsEntity_dropTable(BasicOptionItemsEntity* this);

static void BasicOptionItemsEntity_initFields(BasicOptionItemsEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    this->tableName = "basicoptionitems";
}


void BasicOptionItemsEntity_init(BasicOptionItemsEntity* this) {
        AbSqlBean_init(&this->base, InventoryDbInitInfo_new());
        BasicOptionItemsEntity_initFields(this);
        BasicOptionItemsEntity_setTableName(this, this->tableName);
}

BasicOptionItemsEntity* BasicOptionItemsEntity_new(void) {
    BasicOptionItemsEntity* this = calloc(1, sizeof(BasicOptionItemsEntity));
    BasicOptionItemsEntity_init(this);
    return this;
}


void BasicOptionItemsEntity_insert(BasicOptionItemsEntity* this, BasicArrayList* values) {
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


void BasicOptionItemsEntity_delete(BasicOptionItemsEntity* this, const char* value) {
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


const char* BasicOptionItemsEntity_createTableStatement(BasicOptionItemsEntity* this) {
        StringMaker* stringBuffer = StringMaker_new();
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE), append, this->tableName), append, this->sqlStrings->START), append, this->basicItemData->ID), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, BasicOptionItemData_OPTION_ONE_TITLE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, BasicOptionItemData_DEFAULT_OPTION_ITEM), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, BasicOptionItemData_DEFAULT_OPTION_VALUE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, BasicOptionItemData_OPTION_ONE_ONE_ITEM), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, BasicOptionItemData_OPTION_ONE_ONE_VALUE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, BasicOptionItemData_OPTION_ONE_TWO_ITEM), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, BasicOptionItemData_OPTION_ONE_TWO_VALUE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, BasicOptionItemData_OPTION_ONE_THREE_ITEM), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, BasicOptionItemData_OPTION_ONE_THREE_VALUE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, BasicOptionItemData_OPTION_ONE_FOUR_ITEM), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, BasicOptionItemData_OPTION_ONE_FOUR_VALUE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, BasicOptionItemData_OPTION_ONE_FIVE_ITEM), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, BasicOptionItemData_OPTION_ONE_FIVE_VALUE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, BasicOptionItemData_OPTION_ONE_SIX_ITEM), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, BasicOptionItemData_OPTION_ONE_SIX_VALUE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, BasicOptionItemData_OPTION_ONE_SEVEN_ITEM), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, BasicOptionItemData_OPTION_ONE_SEVEN_VALUE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, BasicOptionItemData_OPTION_ONE_EIGHT_ITEM), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, BasicOptionItemData_OPTION_ONE_EIGHT_VALUE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, BasicOptionItemData_OPTION_ONE_NINE_ITEM), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, BasicOptionItemData_OPTION_ONE_NINE_VALUE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, EntryData_getInstance()->TIMECREATED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, EntryData_getInstance()->LASTMODIFIED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, this->sqlStrings->PRIMARY_KEY), append, this->basicItemData->ID), append, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* BasicOptionItemsEntity_createTable(BasicOptionItemsEntity* this) {
        return AbSqlBean_createTable((&this->base), BasicOptionItemsEntity_createTableStatement(this));
}


void BasicOptionItemsEntity_update(BasicOptionItemsEntity* this, HashMap* updatedValues) {
        AbSqlBean_updateWhere((&this->base), this->basicItemData->ID, ((const char*) HashMap_get(updatedValues, this->basicItemData->ID)), updatedValues);
}


const char* BasicOptionItemsEntity_dropTable(BasicOptionItemsEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}

