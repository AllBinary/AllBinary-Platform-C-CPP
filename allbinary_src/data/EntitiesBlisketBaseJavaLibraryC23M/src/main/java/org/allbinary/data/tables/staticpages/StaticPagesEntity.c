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
// package org.allbinary.data.tables.staticpages

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
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/init/db/StaticPagesDbInitInfo.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/control/search/SearchData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/data/tables/staticpages/StaticPagesEntityInterface.h"

typedef struct StaticPagesEntity StaticPagesEntity;
struct StaticPagesEntity {
    AbSqlBean base;
    StaticPagesEntityInterface StaticPagesEntityInterface_interface;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
    const char* TABLENAME;
};


StaticPagesEntity* StaticPagesEntity_new(void);

void StaticPagesEntity_init(StaticPagesEntity* this);
void StaticPagesEntity_insert(StaticPagesEntity* this, BasicArrayList* values);
const char* StaticPagesEntity_getFile(StaticPagesEntity* this, const char* store, const char* keywords);
void StaticPagesEntity_delete(StaticPagesEntity* this, const char* keywords);
const char* StaticPagesEntity_dropTable(StaticPagesEntity* this);
void StaticPagesEntity_update(StaticPagesEntity* this, HashMap* updatedValues);
const char* StaticPagesEntity_createTableStatement(StaticPagesEntity* this);
const char* StaticPagesEntity_createTable(StaticPagesEntity* this);

static void StaticPagesEntity_initFields(StaticPagesEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    this->TABLENAME = "staticpages";
}


void StaticPagesEntity_init(StaticPagesEntity* this) {
        AbSqlBean_init(&this->base, StaticPagesDbInitInfo_new());
        StaticPagesEntity_initFields(this);
        StaticPagesEntity_setTableName(this, this->TABLENAME);
}

StaticPagesEntity* StaticPagesEntity_new(void) {
    StaticPagesEntity* this = calloc(1, sizeof(StaticPagesEntity));
    StaticPagesEntity_init(this);
    return this;
}


void StaticPagesEntity_insert(StaticPagesEntity* this, BasicArrayList* values) {
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


const char* StaticPagesEntity_getFile(StaticPagesEntity* this, const char* store, const char* keywords) {
        HashMap* whereHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(whereHashMap, StoreFrontData_getInstance()->NAME, store);
        HashMap_put(whereHashMap, this->basicItemData->KEYWORDS, keywords);
        const char* file = AbSqlBean_getField((&this->base), whereHashMap, SearchData_PAGE);
        return file;
}


void StaticPagesEntity_delete(StaticPagesEntity* this, const char* keywords) {
        AbSqlBean_deleteWhere((&this->base), this->basicItemData->KEYWORDS, keywords);
}


const char* StaticPagesEntity_dropTable(StaticPagesEntity* this) {
        const char* returnStr = AbSqlBean_dropTable((&this->base));
        return returnStr;
}


void StaticPagesEntity_update(StaticPagesEntity* this, HashMap* updatedValues) {
        AbSqlBean_updateWhere((&this->base), this->basicItemData->KEYWORDS, ((const char*) HashMap_get(updatedValues, this->basicItemData->KEYWORDS)), updatedValues);
}


const char* StaticPagesEntity_createTableStatement(StaticPagesEntity* this) {
        StringMaker* stringBuffer = StringMaker_new();
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE), append, this->TABLENAME), append, this->sqlStrings->START), append, StoreFrontData_getInstance()->NAME), append, this->sqlTypeStrings->SIXTY_CHAR_COLUMN_NOT_NULL), append, this->basicItemData->KEYWORDS), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, SearchData_PAGE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, this->sqlStrings->PRIMARY_KEY), append, StoreFrontData_getInstance()->NAME), append, CommonSeps_getInstance()->COMMA_SEP), append, this->basicItemData->KEYWORDS), append, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* StaticPagesEntity_createTable(StaticPagesEntity* this) {
        return AbSqlBean_createTable((&this->base), StaticPagesEntity_createTableStatement(this));
}

