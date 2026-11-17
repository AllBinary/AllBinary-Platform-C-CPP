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
// package org.allbinary.business.init

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
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/business/init/InitSql.h"

typedef struct InitInfoEntity InitInfoEntity;
struct InitInfoEntity {
    InitSql base;
    const char* NAME;
    const char* NOTHING;
    const char* tableName;
    const char* tableData;
    const char* NOT_IN_DB;
    const char* METHOD_GET;
    const char* METHOD_IS;
    const char* METHOD_ADD;
    const char* CREATED_SUCCESS;
    const char* FAILED_TO_CREATE;
};


InitInfoEntity* InitInfoEntity_new(void);

void InitInfoEntity_init(InitInfoEntity* this);
bool InitInfoEntity_get(InitInfoEntity* this);
bool InitInfoEntity_is(InitInfoEntity* this);
void InitInfoEntity_update(InitInfoEntity* this);
void InitInfoEntity_add(InitInfoEntity* this);
const char* InitInfoEntity_createTable(InitInfoEntity* this);

static void InitInfoEntity_initFields(InitInfoEntity* this) {
    this->NAME = "InitInfoEntity";
    this->NOTHING = "NOTHING";
    this->tableName = "initdata";
    
    this->NOT_IN_DB = "Not In DB";
    this->METHOD_GET = "get()";
    this->METHOD_IS = "is()";
    this->METHOD_ADD = "add()";
    this->CREATED_SUCCESS = " Created Successfully";
    this->FAILED_TO_CREATE = "Failed to create ";
}


void InitInfoEntity_init(InitInfoEntity* this) {
        InitSql_init(&this->base, UserDbInitInfo_new());
        InitInfoEntity_initFields(this);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE);
        StringMaker_append(stringBuffer, this->tableName);
        StringMaker_append(stringBuffer, this->sqlStrings->START);
        StringMaker_append(stringBuffer, this->NOTHING);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, InitInfo_getInstance()->TESTING);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, InitInfo_getInstance()->TESTHTMLPATH);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, InitInfo_getInstance()->MAINPATH);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, this->sqlStrings->PRIMARY_KEY);
        StringMaker_append(stringBuffer, this->NOTHING);
        StringMaker_append(stringBuffer, this->sqlStrings->END);
        this->tableData = StringMaker_toString(stringBuffer);
        InitInfoEntity_setTable(this, this->tableName);
}

InitInfoEntity* InitInfoEntity_new(void) {
    InitInfoEntity* this = calloc(1, sizeof(InitInfoEntity));
    InitInfoEntity_init(this);
    return this;
}


bool InitInfoEntity_get(InitInfoEntity* this) {
        JAVA_TRY {
            HashMap* keyAndValue = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(keyAndValue, this->NOTHING, this->NOTHING);
            HashMap* hashMap = InitInfoEntity_getRow(this, keyAndValue);
            if (hashMap != nullptr) {
                InitInfo_set(InitInfo_getInstance(), hashMap);
                return true;
            } else {
                if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADER)) {
                    PreLogUtil_put(this->NOT_IN_DB, this->NAME, this->METHOD_GET);
                }
                return false;
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADERERROR)) {
                PreLogUtil_putOE(this->commonStrings->EXCEPTION, this->NAME, this->METHOD_GET, e);
            }
            return false;
        } JAVA_END_TRY;
}


bool InitInfoEntity_is(InitInfoEntity* this) {
        JAVA_TRY {
            HashMap* keyAndValue = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(keyAndValue, this->NOTHING, this->NOTHING);
            HashMap* hashMap = InitInfoEntity_getRow(this, keyAndValue);
            if (hashMap != nullptr) {
                return true;
            } else {
                if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADER)) {
                    PreLogUtil_put(this->NOT_IN_DB, this->NAME, this->METHOD_IS);
                }
                return false;
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADERERROR)) {
                PreLogUtil_putOE(this->commonStrings->EXCEPTION, this->NAME, this->METHOD_IS, e);
            }
            return false;
        } JAVA_END_TRY;
}


void InitInfoEntity_update(InitInfoEntity* this) {
        InitInfoEntity_updateWhere(this, this->NOTHING, this->NOTHING, InitInfo_toHashMap(InitInfo_getInstance()));
}


void InitInfoEntity_add(InitInfoEntity* this) {
        JAVA_TRY {
            BasicArrayList* values = BasicArrayListD_new();
            BasicArrayList_add(values, this->NOTHING);
            BasicArrayList_add(values, InitInfo_getTesting(InitInfo_getInstance()));
            BasicArrayList_add(values, InitInfo_getTestHtmlPath(InitInfo_getInstance()));
            BasicArrayList_add(values, InitInfo_getMainPath(InitInfo_getInstance()));
            InitInfoEntity_insert(this, values);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADERERROR)) {
                PreLogUtil_putOE(this->commonStrings->EXCEPTION, this->NAME, this->METHOD_ADD, e);
            }
        } JAVA_END_TRY;
}


const char* InitInfoEntity_createTable(InitInfoEntity* this) {
        if (InitSql_createTable((&this->base), this->tableData)) {
            return java_concat(this->tableName, this->CREATED_SUCCESS);
        } else {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, this->FAILED_TO_CREATE);
            StringMaker_append(stringBuffer, this->tableData);
            StringMaker_append(stringBuffer, AbPathData_getInstance()->EXTENSION_SEP);
            return StringMaker_toString(stringBuffer);
        }
}

