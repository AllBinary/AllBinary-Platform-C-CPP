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
// package org.allbinary.data.tables.user.address

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Calendar.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/UserDbInitInfo.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/address/StreetAddress.h"
#include "org/allbinary/business/user/address/StreetAddressData.h"
#include "org/allbinary/data/tables/TableDataFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/data/tables/user/address/StreetAddressesEntityInterface.h"

typedef struct StreetAddressesEntity StreetAddressesEntity;
struct StreetAddressesEntity {
    AbSqlBean base;
    StreetAddressesEntityInterface StreetAddressesEntityInterface_interface;
    LogUtil* logUtil;
    const char* userName;
};


StreetAddressesEntity* StreetAddressesEntity_new(void);

void StreetAddressesEntity_init(StreetAddressesEntity* this);

StreetAddressesEntity* StreetAddressesEntity_new1(const char* userName);
void StreetAddressesEntity_init1(StreetAddressesEntity* this, const char* userName);
void StreetAddressesEntity_remove(StreetAddressesEntity* this, int32_t index);
void StreetAddressesEntity_add(StreetAddressesEntity* this, StreetAddress* address);
static void StreetAddressesEntity_add(StreetAddressesEntity* this, StreetAddress* address, const char* index);
void StreetAddressesEntity_update(StreetAddressesEntity* this, StreetAddress* address);
const char* StreetAddressesEntity_getLastId(StreetAddressesEntity* this);
BasicArrayList* StreetAddressesEntity_get(StreetAddressesEntity* this);
StreetAddress* StreetAddressesEntity_get(StreetAddressesEntity* this, int32_t index);
StreetAddress* StreetAddressesEntity_getDefault(StreetAddressesEntity* this);
void StreetAddressesEntity_setDefault(StreetAddressesEntity* this, const char* value);
const char* StreetAddressesEntity_getUserName(StreetAddressesEntity* this);
const char* StreetAddressesEntity_createTableStatement(StreetAddressesEntity* this);
const char* StreetAddressesEntity_createTable(StreetAddressesEntity* this);
const char* StreetAddressesEntity_drop(StreetAddressesEntity* this);
const char* StreetAddressesEntity_dropTable(StreetAddressesEntity* this);

static void StreetAddressesEntity_initFields(StreetAddressesEntity* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void StreetAddressesEntity_init(StreetAddressesEntity* this) {
        AbSqlBean_init(&this->base, UserDbInitInfo_new());
        StreetAddressesEntity_initFields(this);
}

StreetAddressesEntity* StreetAddressesEntity_new(void) {
    StreetAddressesEntity* this = calloc(1, sizeof(StreetAddressesEntity));
    StreetAddressesEntity_init(this);
    return this;
}


void StreetAddressesEntity_init1(StreetAddressesEntity* this, const char* userName) {
        AbSqlBean_init(&this->base, UserDbInitInfo_new());
        StreetAddressesEntity_initFields(this);
        this->userName = userName;
}

StreetAddressesEntity* StreetAddressesEntity_new1(const char* userName) {
    StreetAddressesEntity* this = calloc(1, sizeof(StreetAddressesEntity));
    StreetAddressesEntity_init1(this, userName);
    return this;
}


void StreetAddressesEntity_remove(StreetAddressesEntity* this, int32_t index) {
        JAVA_TRY {
            HashMap* whereHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(whereHashMap, UserData_USERNAME, this->userName);
            HashMap_put(whereHashMap, StreetAddressData_ID, ((const char*) Integer_toString(index)));
            AbSqlBean_deleteWhere((&this->base), whereHashMap);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, "remove");
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "remove", e);
            }
        } JAVA_END_TRY;
}


void StreetAddressesEntity_add(StreetAddressesEntity* this, StreetAddress* address) {
        StreetAddressesEntity_add(this, address, TableDataFactory_getInstance()->INTEGER_MAX_VALUE_STRING);
}


// Java overloaded method: C needs a different name
static void StreetAddressesEntity_add(StreetAddressesEntity* this, StreetAddress* address, const char* index) {
        JAVA_TRY {
            BasicArrayList* values = BasicArrayListD_new();
            BasicArrayList_add(values, index);
            BasicArrayList_add(values, this->userName);
            BasicArrayList_add(values, StringUtil_getInstance()->EMPTY_STRING);
            BasicArrayList_add(values, StreetAddress_getName(address));
            BasicArrayList_add(values, StreetAddress_getStreet(address));
            BasicArrayList_add(values, StreetAddress_getCity(address));
            BasicArrayList_add(values, StreetAddress_getState(address));
            BasicArrayList_add(values, StreetAddress_getCode(address));
            BasicArrayList_add(values, StreetAddress_getCountry(address));
            Calendar* calendar = Calendar_getInstance();
            const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
            BasicArrayList_add(values, time);
            AbSqlBean_insert((&this->base), values);
            StreetAddressesEntity_setDefault(this, StreetAddressesEntity_getLastId(this));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, "add");
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "add", e);
            }
        } JAVA_END_TRY;
}


void StreetAddressesEntity_update(StreetAddressesEntity* this, StreetAddress* address) {
        JAVA_TRY {
            HashMap* addressHashMap = StreetAddress_toHashMap(address);
            HashMap* whereKeyValuePairs = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(whereKeyValuePairs, StreetAddressData_ID, StreetAddress_getId(address));
            HashMap_put(whereKeyValuePairs, UserData_USERNAME, this->userName);
            AbSqlBean_updateWhere((&this->base), whereKeyValuePairs, addressHashMap);
            StreetAddressesEntity_setDefault(this, StreetAddress_getId(address));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, "update");
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "add", e);
            }
        } JAVA_END_TRY;
}


const char* StreetAddressesEntity_getLastId(StreetAddressesEntity* this) {
        return AbSqlBean_getLargestIntegerInColumnWhere((&this->base), StreetAddressData_ID, UserData_USERNAME, this->userName);
}


BasicArrayList* StreetAddressesEntity_get(StreetAddressesEntity* this) {
        JAVA_TRY {
            BasicArrayList* streetAddressVector = BasicArrayListD_new();
            HashMap* keyAndValue = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(keyAndValue, UserData_USERNAME, this->userName);
            BasicArrayList* addressList = AbSqlBean_getRows((&this->base), keyAndValue);
            int32_t size = BasicArrayList_size(addressList);
            for (int32_t index = 0; index < size; index++) {
                HashMap* addressHashMap = ((HashMap*) BasicArrayList_get(addressList, index));
                StreetAddress* streetAddress = StreetAddress_new(addressHashMap);
                if (streetAddress != nullptr) {
                    BasicArrayList_add(streetAddressVector, streetAddress);
                }
            }
            return streetAddressVector;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->commonStrings->GET, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
StreetAddress* StreetAddressesEntity_get(StreetAddressesEntity* this, int32_t index) {
        JAVA_TRY {
            HashMap* keyAndValue = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(keyAndValue, UserData_USERNAME, this->userName);
            HashMap_put(keyAndValue, StreetAddressData_ID, Integer_toString(index));
            HashMap* addressHashMap = AbSqlBean_getRow((&this->base), keyAndValue);
            if (addressHashMap != nullptr) {
                return StreetAddress_new(addressHashMap);
            } else {
                return nullptr;
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->commonStrings->GET, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


StreetAddress* StreetAddressesEntity_getDefault(StreetAddressesEntity* this) {
        JAVA_TRY {
            HashMap* addressHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap* updateKeyAndValue = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(updateKeyAndValue, StreetAddressData_DEFAULT, StreetAddressData_DEFAULT);
            HashMap_put(updateKeyAndValue, UserData_USERNAME, this->userName);
            addressHashMap = AbSqlBean_getRow((&this->base), updateKeyAndValue);
            if (addressHashMap != nullptr) {
                StreetAddress* streetAddress = StreetAddress_new(addressHashMap);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, "getDefault");
                }
                return streetAddress;
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    LogUtil_putF(this->logUtil, "No Default Address Found", this, "getDefault");
                }
                return nullptr;
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "getDefault", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


void StreetAddressesEntity_setDefault(StreetAddressesEntity* this, const char* value) {
        JAVA_TRY {
            HashMap* updateKeyAndValue = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap* whereKeyAndValue = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(whereKeyAndValue, UserData_USERNAME, this->userName);
            StreetAddress* streetAddress = StreetAddressesEntity_getDefault(this);
            if (streetAddress != nullptr) {
                HashMap_put(updateKeyAndValue, StreetAddressData_DEFAULT, StringUtil_getInstance()->EMPTY_STRING);
                HashMap_put(whereKeyAndValue, StreetAddressData_ID, StreetAddress_getId(streetAddress));
                AbSqlBean_updateWhere((&this->base), whereKeyAndValue, updateKeyAndValue);
            }
            HashMap_put(whereKeyAndValue, StreetAddressData_ID, value);
            HashMap_put(updateKeyAndValue, StreetAddressData_DEFAULT, StreetAddressData_DEFAULT);
            AbSqlBean_updateWhere((&this->base), whereKeyAndValue, updateKeyAndValue);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, "setDefault");
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "setShippingAddress", e);
            }
        } JAVA_END_TRY;
}


const char* StreetAddressesEntity_getUserName(StreetAddressesEntity* this) {
        return this->userName;
}


const char* StreetAddressesEntity_createTableStatement(StreetAddressesEntity* this) {
        StringMaker* stringBuffer = StringMaker_new();
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE), append, StreetAddressesEntity_getTableName(this)), append, this->sqlStrings->START), append, StreetAddressData_ID), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_AUTO_INCREMENT_NOT_NULL), append, UserData_USERNAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, StreetAddressData_DEFAULT), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, StreetAddressData_NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, StreetAddressData_STREET), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, StreetAddressData_CITY), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, StreetAddressData_STATE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, StreetAddressData_CODE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, StreetAddressData_COUNTRY), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, EntryData_getInstance()->TIMECREATED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, this->sqlStrings->PRIMARY_KEY), append, StreetAddressData_ID), append, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* StreetAddressesEntity_createTable(StreetAddressesEntity* this) {
        return AbSqlBean_createTable((&this->base), StreetAddressesEntity_createTableStatement(this));
}


const char* StreetAddressesEntity_drop(StreetAddressesEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}


const char* StreetAddressesEntity_dropTable(StreetAddressesEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}

