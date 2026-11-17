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
// package org.allbinary.data.tables.context.module.storefronts

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
#include "org/allbinary/business/context/modules/storefront/StoreFront.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/UserDbInitInfo.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityInterface.h"

typedef struct StoreFrontsEntity StoreFrontsEntity;
struct StoreFrontsEntity {
    AbSqlBean base;
    StoreFrontsEntityInterface StoreFrontsEntityInterface_interface;
    LogUtil* logUtil;
    const char* tableName;
};


StoreFrontsEntity* StoreFrontsEntity_new(void);

void StoreFrontsEntity_init(StoreFrontsEntity* this);
void StoreFrontsEntity_insert(StoreFrontsEntity* this, BasicArrayList* values);
void StoreFrontsEntity_delete(StoreFrontsEntity* this, const char* value);
StoreFront* StoreFrontsEntity_getStoreFrontInterface(StoreFrontsEntity* this, const char* name);
BasicArrayList* StoreFrontsEntity_getStoreFrontNames(StoreFrontsEntity* this);
void StoreFrontsEntity_update(StoreFrontsEntity* this, HashMap* updatedValues);
const char* StoreFrontsEntity_createTableStatement(StoreFrontsEntity* this);
const char* StoreFrontsEntity_createTable(StoreFrontsEntity* this);
const char* StoreFrontsEntity_dropTable(StoreFrontsEntity* this);

static void StoreFrontsEntity_initFields(StoreFrontsEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->tableName = "storefronts";
}


void StoreFrontsEntity_init(StoreFrontsEntity* this) {
        AbSqlBean_init(&this->base, UserDbInitInfo_new());
        StoreFrontsEntity_initFields(this);
        StoreFrontsEntity_setTableName(this, this->tableName);
}

StoreFrontsEntity* StoreFrontsEntity_new(void) {
    StoreFrontsEntity* this = calloc(1, sizeof(StoreFrontsEntity));
    StoreFrontsEntity_init(this);
    return this;
}


void StoreFrontsEntity_insert(StoreFrontsEntity* this, BasicArrayList* values) {
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


void StoreFrontsEntity_delete(StoreFrontsEntity* this, const char* value) {
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


// throws Exception
StoreFront* StoreFrontsEntity_getStoreFrontInterface(StoreFrontsEntity* this, const char* name) {
        HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(keysAndValues, StoreFrontData_getInstance()->NAME, name);
        HashMap* storeHashMap = AbSqlBean_getRow((&this->base), keysAndValues);
        if (storeHashMap != nullptr) {
            return StoreFront_new(storeHashMap);
        } else {
            return StoreFront_new();
        }
}


BasicArrayList* StoreFrontsEntity_getStoreFrontNames(StoreFrontsEntity* this) {
        BasicArrayList* storeFrontNames = AbSqlBean_getColumn((&this->base), StoreFrontData_getInstance()->NAME);
        return storeFrontNames;
}


void StoreFrontsEntity_update(StoreFrontsEntity* this, HashMap* updatedValues) {
        AbSqlBean_updateWhere((&this->base), StoreFrontData_getInstance()->NAME, ((const char*) HashMap_get(updatedValues, StoreFrontData_getInstance()->NAME)), updatedValues);
}


const char* StoreFrontsEntity_createTableStatement(StoreFrontsEntity* this) {
        StoreFrontData* storeFrontData = StoreFrontData_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE);
        StringMaker_append(stringBuffer, this->tableName);
        StringMaker_append(stringBuffer, this->sqlStrings->START);
        StringMaker_append(stringBuffer, storeFrontData->NAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->SIXTY_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->HOMEHOSTNAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->HOMEHOSTNAMEPATH);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->HOSTNAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->HOSTNAMEPATH);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->TESTHOMEHOSTNAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->TESTHOMEHOSTNAMEPATH);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->TESTHOSTNAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->TESTHOSTNAMEPATH);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->IMAGEPATH);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->STATICPATH);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->CATEGORYPATH);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->INVENTORYCONTROL);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->CONFIGURATION);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->BLOB_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->SUBSTORES);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->TAGLOCATION);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->PACKAGELOCATION);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->FTP);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->FTPPATH);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->FTPUSERNAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->FTPPASSWORD);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->TESTFTP);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->TESTFTPPATH);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->TESTFTPUSERNAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, storeFrontData->TESTFTPPASSWORD);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, EntryData_getInstance()->TIMECREATED);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, EntryData_getInstance(EntryData_getInstance())->LASTMODIFIED);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, this->sqlStrings->PRIMARY_KEY);
        StringMaker_append(stringBuffer, storeFrontData->NAME);
        StringMaker_append(stringBuffer, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* StoreFrontsEntity_createTable(StoreFrontsEntity* this) {
        return AbSqlBean_createTable((&this->base), StoreFrontsEntity_createTableStatement(this));
}


const char* StoreFrontsEntity_dropTable(StoreFrontsEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}

