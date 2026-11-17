/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
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
// package org.allbinary.data.tables.generator

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
#include "org/allbinary/business/init/db/UserDbInitInfo.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/data/tables/generator/IdGeneratorEntityInterface.h"

typedef struct IdGeneratorEntity IdGeneratorEntity;
struct IdGeneratorEntity {
    AbSqlBean base;
    IdGeneratorEntityInterface IdGeneratorEntityInterface_interface;
    LogUtil* logUtil;
    const char* tableName;
    const char* tableData;
    const char* NAME;
    const char* VALUE;
};


IdGeneratorEntity* IdGeneratorEntity_new(void);

void IdGeneratorEntity_init(IdGeneratorEntity* this);
int64_t IdGeneratorEntity_get(IdGeneratorEntity* this, const char* name);
void IdGeneratorEntity_insert(IdGeneratorEntity* this, BasicArrayList* values);
void IdGeneratorEntity_delete(IdGeneratorEntity* this, const char* value);
void IdGeneratorEntity_update(IdGeneratorEntity* this, const char* name, int64_t value);
void IdGeneratorEntity_update(IdGeneratorEntity* this, HashMap* hashMap);
const char* IdGeneratorEntity_createTable(IdGeneratorEntity* this);
const char* IdGeneratorEntity_dropTable(IdGeneratorEntity* this);
void IdGeneratorEntity_deleteWhere(IdGeneratorEntity* this, const char* key, const char* value);

static void IdGeneratorEntity_initFields(IdGeneratorEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->tableName = "idgenerator";
    
    this->NAME = "NAME";
    this->VALUE = "VALUE";
}


void IdGeneratorEntity_init(IdGeneratorEntity* this) {
        AbSqlBean_init(&this->base, UserDbInitInfo_new());
        IdGeneratorEntity_initFields(this);
        this->tableData = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->sqlStrings->CREATE_TABLE), append, this->tableName), append, this->sqlStrings->START), append, this->NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, this->VALUE), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, this->sqlStrings->PRIMARY_KEY), append, this->NAME), append, this->sqlStrings->END), toString);
        AbSqlBean_setTableName((&this->base), this->tableName);
}

IdGeneratorEntity* IdGeneratorEntity_new(void) {
    IdGeneratorEntity* this = calloc(1, sizeof(IdGeneratorEntity));
    IdGeneratorEntity_init(this);
    return this;
}


// throws Exception
int64_t IdGeneratorEntity_get(IdGeneratorEntity* this, const char* name) {
        HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(keysAndValues, this->NAME, name);
        HashMap* hashMap = AbSqlBean_getRow((&this->base), keysAndValues);
        if (String_compareTo((((const char*) HashMap_get(hashMap, this->NAME))), name) != 0) {
            java_throw(java_exception_new("Exception", "results do not match"));
        }
        const char* value = ((const char*) HashMap_get(hashMap, this->VALUE));
        return ((int64_t) strtoll(value, nullptr, 10));
}


void IdGeneratorEntity_insert(IdGeneratorEntity* this, BasicArrayList* values) {
        JAVA_TRY {
            AbSqlBean_insert((&this->base), values);
            LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, AbSqlBean_INSERT);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, AbSqlBean_INSERT, e);
        } JAVA_END_TRY;
}


void IdGeneratorEntity_delete(IdGeneratorEntity* this, const char* value) {
        JAVA_TRY {
            AbSqlBean_deleteWhere((&this->base), this->NAME, value);
            LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, this->commonStrings->delete);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->commonStrings->delete, e);
        } JAVA_END_TRY;
}


void IdGeneratorEntity_update(IdGeneratorEntity* this, const char* name, int64_t value) {
        HashMap* map = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(map, this->NAME, name);
        HashMap_put(map, this->VALUE, value);
        IdGeneratorEntity_update(this, map);
}


// Java overloaded method: C needs a different name
void IdGeneratorEntity_update(IdGeneratorEntity* this, HashMap* hashMap) {
        AbSqlBean_updateWhere((&this->base), this->NAME, ((const char*) HashMap_get(hashMap, this->NAME)), hashMap);
}


const char* IdGeneratorEntity_createTable(IdGeneratorEntity* this) {
        const char* returnStr = AbSqlBean_createTable((&this->base), this->tableData);
        return returnStr;
}


const char* IdGeneratorEntity_dropTable(IdGeneratorEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}


void IdGeneratorEntity_deleteWhere(IdGeneratorEntity* this, const char* key, const char* value) {
        AbSqlBean_deleteWhere((&this->base), key, value);
}

