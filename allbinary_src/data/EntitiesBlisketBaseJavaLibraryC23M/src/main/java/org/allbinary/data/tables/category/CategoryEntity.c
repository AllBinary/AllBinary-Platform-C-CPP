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
// package org.allbinary.data.tables.category

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
#include "org/allbinary/business/category/Category.h"
#include "org/allbinary/business/category/CategoryData.h"
#include "org/allbinary/business/category/CategoryFactoryInterface.h"
#include "org/allbinary/business/init/db/InventoryDbInitInfo.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/data/tables/category/CategoryEntityInterface.h"

typedef struct CategoryEntity CategoryEntity;
struct CategoryEntity {
    AbSqlBean base;
    CategoryEntityInterface CategoryEntityInterface_interface;
    LogUtil* logUtil;
    const char* tableName;
};


CategoryEntity* CategoryEntity_new(CategoryFactoryInterface* categoryFactoryInterface);

void CategoryEntity_init(CategoryEntity* this, CategoryFactoryInterface* categoryFactoryInterface);

CategoryEntity* CategoryEntity_new0();
void CategoryEntity_init0(CategoryEntity* this);
void CategoryEntity_insert(CategoryEntity* this, Category* category);
void CategoryEntity_delete(CategoryEntity* this, const char* value);
const char* CategoryEntity_createTableStatement(CategoryEntity* this);
const char* CategoryEntity_createTable(CategoryEntity* this);
void CategoryEntity_update(CategoryEntity* this, HashMap* updatedValues);
const char* CategoryEntity_dropTable(CategoryEntity* this);
void CategoryEntity_insert(CategoryEntity* this, BasicArrayList* values);

static void CategoryEntity_initFields(CategoryEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->tableName = "categories";
}


void CategoryEntity_init(CategoryEntity* this, CategoryFactoryInterface* categoryFactoryInterface) {
        AbSqlBean_init(&this->base, InventoryDbInitInfo_new());
        CategoryEntity_initFields(this);
        CategoryEntity_setTableName(this, this->tableName);
}

CategoryEntity* CategoryEntity_new(CategoryFactoryInterface* categoryFactoryInterface) {
    CategoryEntity* this = calloc(1, sizeof(CategoryEntity));
    CategoryEntity_init(this, categoryFactoryInterface);
    return this;
}


void CategoryEntity_init0(CategoryEntity* this) {
        AbSqlBean_init(&this->base, InventoryDbInitInfo_new());
        CategoryEntity_initFields(this);
        CategoryEntity_setTableName(this, this->tableName);
}

CategoryEntity* CategoryEntity_new0(void) {
    CategoryEntity* this = calloc(1, sizeof(CategoryEntity));
    CategoryEntity_init0(this);
    return this;
}


void CategoryEntity_insert(CategoryEntity* this, Category* category) {
        JAVA_TRY {
            BasicArrayList* categoryVector = Category_toVector(category);
            BasicArrayList* values = BasicArrayListD_new();
            BasicArrayList_add(values, BasicArrayList_get(categoryVector, 0));
            BasicArrayList_add(values, BasicArrayList_get(categoryVector, 1));
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


void CategoryEntity_delete(CategoryEntity* this, const char* value) {
        JAVA_TRY {
            AbSqlBean_deleteWhere((&this->base), CategoryData_getInstance()->NAME, value);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, this->commonStrings->delete);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->commonStrings->delete, e);
            }
        } JAVA_END_TRY;
}


const char* CategoryEntity_createTableStatement(CategoryEntity* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE);
        StringMaker_append(stringBuffer, this->tableName);
        StringMaker_append(stringBuffer, this->sqlStrings->START);
        StringMaker_append(stringBuffer, CategoryData_getInstance()->NAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, CategoryData_getInstance()->LEVEL);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, this->sqlStrings->PRIMARY_KEY);
        StringMaker_append(stringBuffer, CategoryData_getInstance()->NAME);
        StringMaker_append(stringBuffer, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* CategoryEntity_createTable(CategoryEntity* this) {
        return AbSqlBean_createTable((&this->base), CategoryEntity_createTableStatement(this));
}


void CategoryEntity_update(CategoryEntity* this, HashMap* updatedValues) {
        AbSqlBean_updateWhere((&this->base), CategoryData_getInstance()->NAME, ((const char*) HashMap_get(updatedValues, CategoryData_getInstance()->NAME)), updatedValues);
}


const char* CategoryEntity_dropTable(CategoryEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}


// Java overloaded method: C needs a different name
void CategoryEntity_insert(CategoryEntity* this, BasicArrayList* values) {
        AbSqlBean_insert((&this->base), values);
}

