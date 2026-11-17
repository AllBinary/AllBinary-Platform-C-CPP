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
// package org.allbinary.data.tables.user

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
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/UserDbInitInfo.h"
#include "org/allbinary/business/user/CreateUserFactory.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/business/user/modules/User.h"
#include "org/allbinary/business/user/role/UserRole.h"
#include "org/allbinary/business/user/role/UserRoleData.h"
#include "org/allbinary/business/user/role/UserRoleFactory.h"
#include "org/allbinary/globals/GLOBALS2.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/control/crypt/SuperCrypt.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/data/tables/user/UserEntityInterface.h"

typedef struct UserEntity UserEntity;
struct UserEntity {
    AbSqlBean base;
    UserEntityInterface UserEntityInterface_interface;
    LogUtil* logUtil;
    const char* tableName;
    const char* COMMAND_SUCCESS_FOR_USER;
    const char* PASSWORD_LABEL;
    const char* EQUALS;
    const char* COMMAND_SUCCESS_BUT_LOGIN_FAILED;
    const char* INVALID_PASSWORD_LABEL;
    const char* NOT_EQUAL;
    const char* END_QUOTES;
};


UserEntity* UserEntity_new(void);

void UserEntity_init(UserEntity* this);
void UserEntity_insert(UserEntity* this, BasicArrayList* values);
BasicArrayList* UserEntity_getAdministrators(UserEntity* this);
BasicArrayList* UserEntity_getStoreManagers(UserEntity* this, StoreFrontInterface* storeFrontInterface);
BasicArrayList* UserEntity_getCustomers(UserEntity* this);
BasicArrayList* UserEntity_getUsersWithRole(UserEntity* this, UserRole* userRole);
BasicArrayList* UserEntity_getUsers(UserEntity* this, StoreFrontInterface* storeFrontInterface);
UserInterface* UserEntity_getUser(UserEntity* this, const char* userName);
void UserEntity_deleteWhere(UserEntity* this, const char* key, const char* value);
const char* UserEntity_login(UserEntity* this, const char* userName, const char* password);
void UserEntity_update(UserEntity* this, const char* userName, HashMap* updatedValues);
const char* UserEntity_dropTables(UserEntity* this);
const char* UserEntity_createTableStatement(UserEntity* this);
const char* UserEntity_createTable(UserEntity* this);
const char* UserEntity_dropTable(UserEntity* this);

static void UserEntity_initFields(UserEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->tableName = "user";
    this->COMMAND_SUCCESS_FOR_USER = "Command Success for user: ";
    this->PASSWORD_LABEL = " Password: ";
    this->EQUALS = "==";
    this->COMMAND_SUCCESS_BUT_LOGIN_FAILED = "Command Success but login failed for user: ";
    this->INVALID_PASSWORD_LABEL = " Password: \n\"";
    this->NOT_EQUAL = "\"!=\"";
    this->END_QUOTES = CommonSeps_getInstance()->QUOTE;
}


void UserEntity_init(UserEntity* this) {
        AbSqlBean_init(&this->base, UserDbInitInfo_new());
        UserEntity_initFields(this);
        UserEntity_setTableName(this, this->tableName);
}

UserEntity* UserEntity_new(void) {
    UserEntity* this = calloc(1, sizeof(UserEntity));
    UserEntity_init(this);
    return this;
}


void UserEntity_insert(UserEntity* this, BasicArrayList* values) {
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


// throws Exception
BasicArrayList* UserEntity_getAdministrators(UserEntity* this) {
        return UserEntity_getUsersWithRole(this, UserRoleFactory_getInstance()->ADMINISTRATOR);
}


// throws Exception
BasicArrayList* UserEntity_getStoreManagers(UserEntity* this, StoreFrontInterface* storeFrontInterface) {
        HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
        BasicArrayList* usersVector = BasicArrayListD_new();
        HashMap_put(keysAndValues, JAVA_CALL(UserRoleData_NAME, toString), JAVA_CALL(UserRoleFactory_getInstance()->STOREMANAGER, toString));
        HashMap_put(keysAndValues, UserData_PERMISSIONS, StoreFrontInterface_getName(storeFrontInterface));
        BasicArrayList* usersHashMapVector = AbSqlBean_getRows((&this->base), keysAndValues);
        int32_t size = BasicArrayList_size(usersHashMapVector);
        for (int32_t i = 0; i < size; i++) {
            HashMap* userHashMap = ((HashMap*) BasicArrayList_get(usersHashMapVector, i));
            if (userHashMap != nullptr) {
                BasicArrayList_add(usersVector, User_new(userHashMap));
            }
        }
        return usersVector;
}


// throws Exception
BasicArrayList* UserEntity_getCustomers(UserEntity* this) {
        return UserEntity_getUsersWithRole(this, UserRoleFactory_getInstance()->CUSTOMER);
}


// throws Exception
BasicArrayList* UserEntity_getUsersWithRole(UserEntity* this, UserRole* userRole) {
        HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
        BasicArrayList* usersVector = BasicArrayListD_new();
        HashMap_put(keysAndValues, JAVA_CALL(UserRoleData_NAME, toString), UserRole_toString(userRole));
        BasicArrayList* usersHashMapVector = AbSqlBean_getRows((&this->base), keysAndValues);
        int32_t size = BasicArrayList_size(usersHashMapVector);
        for (int32_t index = 0; index < size; index++) {
            HashMap* userHashMap = ((HashMap*) BasicArrayList_get(usersHashMapVector, index));
            if (userHashMap != nullptr) {
                BasicArrayList_add(usersVector, User_new(userHashMap));
            }
        }
        return usersVector;
}


// throws Exception
BasicArrayList* UserEntity_getUsers(UserEntity* this, StoreFrontInterface* storeFrontInterface) {
        HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
        BasicArrayList* usersVector = BasicArrayListD_new();
        HashMap_put(keysAndValues, StoreFrontData_getInstance()->NAME, StoreFrontInterface_getName(storeFrontInterface));
        BasicArrayList* usersHashMapVector = AbSqlBean_getRows((&this->base), keysAndValues);
        int32_t size = BasicArrayList_size(usersHashMapVector);
        for (int32_t index = 0; index < size; index++) {
            HashMap* userHashMap = ((HashMap*) BasicArrayList_get(usersHashMapVector, index));
            if (userHashMap != nullptr) {
                BasicArrayList_add(usersVector, User_new(userHashMap));
            }
        }
        return usersVector;
}


// throws Exception
UserInterface* UserEntity_getUser(UserEntity* this, const char* userName) {
        HashMap* row = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(row, UserData_USERNAME, userName);
        HashMap* userHashMap = AbSqlBean_getRow((&this->base), row);
        if (userHashMap != nullptr) {
            return CreateUserFactory_getInstance(userHashMap);
        } else {
            return nullptr;
        }
}


void UserEntity_deleteWhere(UserEntity* this, const char* key, const char* value) {
        JAVA_TRY {
            AbSqlBean_deleteWhere((&this->base), key, value);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, "deleteWhere");
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "deleteWhere", e);
            }
        } JAVA_END_TRY;
}


const char* UserEntity_login(UserEntity* this, const char* userName, const char* password) {
        JAVA_TRY {
            int32_t isUserNameAndPasswordCorrect = 0;
            const char* result = AbSqlBean_getField((&this->base), UserData_USERNAME, userName, UserData_PASSWORD);
            const char* encryption = AbSqlBean_getField((&this->base), UserData_USERNAME, userName, EntryData_getInstance()->ENCRYPTION);
            if (encryption != nullptr && strcmp(encryption, this->stringUtil->EMPTY_STRING) != 0) {
                isUserNameAndPasswordCorrect = strcmp(result, SuperCrypt_encrypt(SuperCrypt_new(Integer_intValue(encryption)), password));
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    LogUtil_putF(this->logUtil, java_concat(java_concat("Command Success but login failed for user: ", userName), " because user did not exist"), this, "login");
                }
                return AbSqlBean_GLOBALS2->LOGINFAILED;
            }
            if (isUserNameAndPasswordCorrect == 0) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, this->COMMAND_SUCCESS_FOR_USER);
                    StringMaker_append(stringBuffer, userName);
                    StringMaker_append(stringBuffer, this->PASSWORD_LABEL);
                    StringMaker_append(stringBuffer, password);
                    StringMaker_append(stringBuffer, this->EQUALS);
                    StringMaker_append(stringBuffer, result);
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "login");
                }
                return AbSqlBean_GLOBALS2->LOGINSUCCESS;
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, this->COMMAND_SUCCESS_BUT_LOGIN_FAILED);
                    StringMaker_append(stringBuffer, userName);
                    StringMaker_append(stringBuffer, this->INVALID_PASSWORD_LABEL);
                    StringMaker_append(stringBuffer, SuperCrypt_encrypt(SuperCrypt_new(Integer_intValue(encryption)), password));
                    StringMaker_append(stringBuffer, this->NOT_EQUAL);
                    StringMaker_append(stringBuffer, result);
                    StringMaker_append(stringBuffer, this->END_QUOTES);
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "login");
                }
                return AbSqlBean_GLOBALS2->LOGINFAILED;
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "login", e);
            }
            return "Error";
        } JAVA_END_TRY;
}


void UserEntity_update(UserEntity* this, const char* userName, HashMap* updatedValues) {
        AbSqlBean_updateWhere((&this->base), UserData_USERNAME, userName, updatedValues);
}


const char* UserEntity_dropTables(UserEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}


const char* UserEntity_createTableStatement(UserEntity* this) {
        EntryData* entryData = EntryData_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE), append, this->tableName), append, this->sqlStrings->START), append, UserData_USERNAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, UserData_PREFIXNAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, UserData_FIRSTNAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, UserData_LASTNAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, UserData_MIDDLENAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, UserData_SUFFIXNAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, UserData_COMPANY), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, UserData_POSITIONATCOMPANY), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, UserData_MAINEMAIL), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, UserData_SECONDARYEMAIL), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, UserData_HOMEPHONE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, UserData_CELLPHONE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, UserData_WORKPHONE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, UserData_OTHERCONTACT), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, UserData_ELECTRONICDEVICE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, UserData_FAX), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, JAVA_CALL(UserRoleData_NAME, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, UserData_CONFIGURATION), append, this->sqlTypeStrings->BLOB_NOT_NULL), append, UserData_PERMISSIONS), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, entryData->ENCRYPTION), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, UserData_SECRET), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, UserData_PASSWORD), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, entryData->ENABLE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN), append, entryData->TIMECREATED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, entryData->LASTMODIFIED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, this->sqlStrings->PRIMARY_KEY), append, UserData_USERNAME), append, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* UserEntity_createTable(UserEntity* this) {
        return AbSqlBean_createTable((&this->base), UserEntity_createTableStatement(this));
}


const char* UserEntity_dropTable(UserEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}

