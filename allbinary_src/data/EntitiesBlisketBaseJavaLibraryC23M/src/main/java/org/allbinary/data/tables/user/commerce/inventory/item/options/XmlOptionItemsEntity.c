/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2011 AllBinary 
 *  
 * By agreeing to this license you and any business entity you represent are 
 * legally bound to the AllBinary Open License Version 1 legal agreement. 
 * ` 
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
#include "org/allbinary/business/user/commerce/inventory/item/option/XmlOptionItemData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/options/XmlOptionItemsEntityInterface.h"

typedef struct XmlOptionItemsEntity XmlOptionItemsEntity;
struct XmlOptionItemsEntity {
    AbSqlBean base;
    XmlOptionItemsEntityInterface XmlOptionItemsEntityInterface_interface;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
    const char* tableName;
};


XmlOptionItemsEntity* XmlOptionItemsEntity_new(void);

void XmlOptionItemsEntity_init(XmlOptionItemsEntity* this);
void XmlOptionItemsEntity_insert(XmlOptionItemsEntity* this, BasicArrayList* values);
void XmlOptionItemsEntity_delete(XmlOptionItemsEntity* this, const char* value);
const char* XmlOptionItemsEntity_createTableStatement(XmlOptionItemsEntity* this);
const char* XmlOptionItemsEntity_createTable(XmlOptionItemsEntity* this);
void XmlOptionItemsEntity_update(XmlOptionItemsEntity* this, HashMap* updatedValues);
const char* XmlOptionItemsEntity_dropTable(XmlOptionItemsEntity* this);

static void XmlOptionItemsEntity_initFields(XmlOptionItemsEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    this->tableName = "xmloptionitems";
}


void XmlOptionItemsEntity_init(XmlOptionItemsEntity* this) {
        AbSqlBean_init(&this->base, InventoryDbInitInfo_new());
        XmlOptionItemsEntity_initFields(this);
        XmlOptionItemsEntity_setTableName(this, this->tableName);
}

XmlOptionItemsEntity* XmlOptionItemsEntity_new(void) {
    XmlOptionItemsEntity* this = calloc(1, sizeof(XmlOptionItemsEntity));
    XmlOptionItemsEntity_init(this);
    return this;
}


void XmlOptionItemsEntity_insert(XmlOptionItemsEntity* this, BasicArrayList* values) {
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


void XmlOptionItemsEntity_delete(XmlOptionItemsEntity* this, const char* value) {
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


const char* XmlOptionItemsEntity_createTableStatement(XmlOptionItemsEntity* this) {
        StringMaker* stringBuffer = StringMaker_new();
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE), append, this->tableName), append, this->sqlStrings->START), append, this->basicItemData->ID), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, XmlOptionItemData_XML_FILE_STATUS), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, XmlOptionItemData_OPTION_XML_FILE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, EntryData_getInstance()->TIMECREATED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, EntryData_getInstance()->LASTMODIFIED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, this->sqlStrings->PRIMARY_KEY), append, this->basicItemData->ID), append, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* XmlOptionItemsEntity_createTable(XmlOptionItemsEntity* this) {
        return AbSqlBean_createTable((&this->base), XmlOptionItemsEntity_createTableStatement(this));
}


void XmlOptionItemsEntity_update(XmlOptionItemsEntity* this, HashMap* updatedValues) {
        AbSqlBean_updateWhere((&this->base), this->basicItemData->ID, ((const char*) HashMap_get(updatedValues, this->basicItemData->ID)), updatedValues);
}


const char* XmlOptionItemsEntity_dropTable(XmlOptionItemsEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}

