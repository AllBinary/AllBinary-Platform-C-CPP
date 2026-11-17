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
// package org.allbinary.business.installer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "java/util/Map.h"
// #include "java/util/Set.h"
#include "org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h"
#include "org/allbinary/business/init/db/DbConnectionInfo.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct InitializerDatabase InitializerDatabase;
struct InitializerDatabase {
    LogUtil* logUtil;
    const char* adminDbUserName;
    const char* adminDbPassword;
    const char* adminJdbcDriver;
    const char* adminSchema;
    const char* adminServer;
    const char* adminPort;
    DynamicInitDb* initDb;
};

static constexpr int32_t InitializerDatabase_MAXDB = 30;
static constexpr int32_t InitializerDatabase_MAX = 16;
static constexpr int32_t InitializerDatabase_MIN = 4;
static constexpr int32_t InitializerDatabase_MINPASSWORD = 0;

InitializerDatabase* InitializerDatabase_new(AbeClientInformationInterface* abeClientInformation, Map* map);

void InitializerDatabase_init(InitializerDatabase* this, AbeClientInformationInterface* abeClientInformation, Map* map);

InitializerDatabase* InitializerDatabase_new2(AbeClientInformationInterface* abeClientInformation, HashMap* initHashMap);
void InitializerDatabase_init2(InitializerDatabase* this, AbeClientInformationInterface* abeClientInformation, HashMap* initHashMap);
void InitializerDatabase_getFormData(InitializerDatabase* this, AbeClientInformationInterface* abeClientInformation, HashMap* hashMap);
static bool InitializerDatabase_isJdbcDriverValid(InitializerDatabase* this, const char* jdbcDriverClassPathString);
bool InitializerDatabase_isValid(InitializerDatabase* this);
static const char* InitializerDatabase_getJdbcDriverValidationInfo(InitializerDatabase* this, const char* jdbcDriver);
const char* InitializerDatabase_getInvalidInfo(InitializerDatabase* this);
bool InitializerDatabase_createUsers(InitializerDatabase* this);
bool InitializerDatabase_createDatabases(InitializerDatabase* this);
bool InitializerDatabase_createTables(InitializerDatabase* this);
const char* InitializerDatabase_getAdminDbUserName(InitializerDatabase* this);
void InitializerDatabase_setAdminDbUserName(InitializerDatabase* this, const char* adminDbUserName);
const char* InitializerDatabase_getAdminDbPassword(InitializerDatabase* this);
void InitializerDatabase_setAdminDbPassword(InitializerDatabase* this, const char* adminDbPassword);
const char* InitializerDatabase_getAdminJdbcDriver(InitializerDatabase* this);
void InitializerDatabase_setAdminJdbcDriver(InitializerDatabase* this, const char* adminJdbcDriver);
const char* InitializerDatabase_getAdminSchema(InitializerDatabase* this);
void InitializerDatabase_setAdminSchema(InitializerDatabase* this, const char* adminSchema);
const char* InitializerDatabase_getAdminServer(InitializerDatabase* this);
void InitializerDatabase_setAdminServer(InitializerDatabase* this, const char* adminServer);
const char* InitializerDatabase_getAdminPort(InitializerDatabase* this);
void InitializerDatabase_setAdminPort(InitializerDatabase* this, const char* adminPort);

static void InitializerDatabase_initFields(InitializerDatabase* this) {
    this->logUtil = LogUtil_getInstance();
    this->adminDbUserName = nullptr;
    this->adminDbPassword = nullptr;
    this->adminJdbcDriver = nullptr;
    this->adminSchema = nullptr;
    this->adminServer = nullptr;
    this->adminPort = nullptr;
    this->initDb = nullptr;
}


void InitializerDatabase_init(InitializerDatabase* this, AbeClientInformationInterface* abeClientInformation, Map* map) {
    InitializerDatabase_initFields(this);
        StringMaker* stringBuffer = StringMaker_new();
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        Set* keys = Map_keySet(map);
        Any** keyArray = Set_toArray(keys);
        int32_t size = java_array_length(keyArray);
        for (int32_t index = 0; index < size; index++) {
            const char* key = ((const char*) keyArray[index]);
            const char** values = ((const char**) Map_get(map, key));
            HashMap_put(hashMap, java_string_new(key), java_string_new(values[0]));
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, "key: ");
            StringMaker_append(stringBuffer, key);
            StringMaker_append(stringBuffer, " Value: ");
            StringMaker_append(stringBuffer, values[0]);
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "getFormData()");
        }
        InitializerDatabase_getFormData(this, abeClientInformation, hashMap);
}

InitializerDatabase* InitializerDatabase_new(AbeClientInformationInterface* abeClientInformation, Map* map) {
    InitializerDatabase* this = calloc(1, sizeof(InitializerDatabase));
    InitializerDatabase_init(this, abeClientInformation, map);
    return this;
}


void InitializerDatabase_init2(InitializerDatabase* this, AbeClientInformationInterface* abeClientInformation, HashMap* initHashMap) {
    InitializerDatabase_initFields(this);
        InitializerDatabase_getFormData(this, abeClientInformation, initHashMap);
}

InitializerDatabase* InitializerDatabase_new2(AbeClientInformationInterface* abeClientInformation, HashMap* initHashMap) {
    InitializerDatabase* this = calloc(1, sizeof(InitializerDatabase));
    InitializerDatabase_init2(this, abeClientInformation, initHashMap);
    return this;
}


void InitializerDatabase_getFormData(InitializerDatabase* this, AbeClientInformationInterface* abeClientInformation, HashMap* hashMap) {
        JAVA_TRY {
            InitializerData* initializerData = InitializerData_getInstance();
            InitializerDatabase_setAdminDbUserName(this, ((const char*) HashMap_get(hashMap, initializerData->DBUSER)));
            InitializerDatabase_setAdminDbPassword(this, ((const char*) HashMap_get(hashMap, initializerData->DBPASSWORD)));
            InitializerDatabase_setAdminJdbcDriver(this, ((const char*) HashMap_get(hashMap, initializerData->ADMINJDBCDRIVER)));
            InitializerDatabase_setAdminSchema(this, ((const char*) HashMap_get(hashMap, initializerData->ADMINSCHEMA)));
            InitializerDatabase_setAdminServer(this, ((const char*) HashMap_get(hashMap, initializerData->ADMINSERVER)));
            InitializerDatabase_setAdminPort(this, ((const char*) HashMap_get(hashMap, initializerData->ADMINPORT)));
            DbConnectionInfo* dbConnectionInfo = DbConnectionInfo_new();
            const char* adminDbName = StringUtil_getInstance()->EMPTY_STRING;
            DbConnectionInfo_setJdbcDriver(dbConnectionInfo, InitializerDatabase_getAdminJdbcDriver(this));
            DbConnectionInfo_setName(dbConnectionInfo, adminDbName);
            DbConnectionInfo_setUserName(dbConnectionInfo, InitializerDatabase_getAdminDbUserName(this));
            DbConnectionInfo_setPassword(dbConnectionInfo, InitializerDatabase_getAdminDbPassword(this));
            DbConnectionInfo_setSchema(dbConnectionInfo, InitializerDatabase_getAdminSchema(this));
            DbConnectionInfo_setServer(dbConnectionInfo, InitializerDatabase_getAdminServer(this));
            DbConnectionInfo_setPort(dbConnectionInfo, InitializerDatabase_getAdminPort(this));
            this->initDb = DynamicInitDb_new(abeClientInformation, ((DatabaseConnectionInfoInterface*) dbConnectionInfo));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, "Unable to get form data", this, "getFormData()", e);
        } JAVA_END_TRY;
}


static bool InitializerDatabase_isJdbcDriverValid(InitializerDatabase* this, const char* jdbcDriverClassPathString) {
        JAVA_TRY {
            JAVA_CALL(Class_forName(jdbcDriverClassPathString), newInstance);
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRELOADERERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


bool InitializerDatabase_isValid(InitializerDatabase* this) {
        bool isValid = true;
        if (!InitializerDatabase_isJdbcDriverValid(this, this->adminJdbcDriver)) {
            isValid = false;
        }
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->adminDbUserName, InitializerDatabase_MIN, InitializerDatabase_MAX)) {
            isValid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->adminDbPassword, InitializerDatabase_MINPASSWORD, InitializerDatabase_MAX)) {
            isValid = false;
        }
        return isValid;
}


static const char* InitializerDatabase_getJdbcDriverValidationInfo(InitializerDatabase* this, const char* jdbcDriver) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "The JDBC driver (");
        StringMaker_append(stringBuffer, jdbcDriver);
        StringMaker_append(stringBuffer, ") you have provided is not valid.<br/>");
        return StringMaker_toString(stringBuffer);
}


const char* InitializerDatabase_getInvalidInfo(InitializerDatabase* this) {
        bool isValid = true;
        bool isJdbcDriversValid = true;
        StringMaker* stringBuffer = StringMaker_new();
        if (!InitializerDatabase_isJdbcDriverValid(this, this->adminJdbcDriver)) {
            isJdbcDriversValid = false;
            StringMaker_append(stringBuffer, InitializerDatabase_getJdbcDriverValidationInfo(this, InitializerDatabase_getAdminJdbcDriver(this)));
        }
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->adminDbUserName, InitializerDatabase_MIN, InitializerDatabase_MAX)) {
            StringMaker_append(stringBuffer, java_concat(java_concat(java_concat(java_concat("Admin username should be < ", java_string_of(InitializerDatabase_MAX)), " and > "), java_string_of(InitializerDatabase_MIN)), " characters in length.<br />"));
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->adminDbPassword, InitializerDatabase_MINPASSWORD, InitializerDatabase_MAX)) {
            StringMaker_append(stringBuffer, java_concat(java_concat(java_concat(java_concat("Admin password should be < ", java_string_of(InitializerDatabase_MAX)), " and > "), java_string_of(InitializerDatabase_MINPASSWORD)), " characters in length.<br />"));
        }
        if (!isJdbcDriversValid) {
            StringMaker_append(stringBuffer, InitializerData_getJdbcDriverSolutionInfo(InitializerData_getInstance()));
        }
        return StringMaker_toString(stringBuffer);
}


bool InitializerDatabase_createUsers(InitializerDatabase* this) {
        JAVA_TRY {
            DynamicInitDb_addUsers(this->initDb);
            return true;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, "Unable to Create Users", this, "createUsers()", e);
            return false;
        } JAVA_END_TRY;
}


bool InitializerDatabase_createDatabases(InitializerDatabase* this) {
        JAVA_TRY {
            DynamicInitDb_addDatabases(this->initDb);
            return true;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, "Unable to Create Databases", this, "createDatabases()", e);
            return false;
        } JAVA_END_TRY;
}


bool InitializerDatabase_createTables(InitializerDatabase* this) {
        JAVA_TRY {
            DynamicInitDb_addTables(this->initDb);
            return true;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, "Unable to Create Tables", this, "createTables()", e);
            return false;
        } JAVA_END_TRY;
}


const char* InitializerDatabase_getAdminDbUserName(InitializerDatabase* this) {
        return this->adminDbUserName;
}


void InitializerDatabase_setAdminDbUserName(InitializerDatabase* this, const char* adminDbUserName) {
        this->adminDbUserName = adminDbUserName;
}


const char* InitializerDatabase_getAdminDbPassword(InitializerDatabase* this) {
        return this->adminDbPassword;
}


void InitializerDatabase_setAdminDbPassword(InitializerDatabase* this, const char* adminDbPassword) {
        this->adminDbPassword = adminDbPassword;
}


const char* InitializerDatabase_getAdminJdbcDriver(InitializerDatabase* this) {
        return this->adminJdbcDriver;
}


void InitializerDatabase_setAdminJdbcDriver(InitializerDatabase* this, const char* adminJdbcDriver) {
        this->adminJdbcDriver = adminJdbcDriver;
}


const char* InitializerDatabase_getAdminSchema(InitializerDatabase* this) {
        return this->adminSchema;
}


void InitializerDatabase_setAdminSchema(InitializerDatabase* this, const char* adminSchema) {
        this->adminSchema = adminSchema;
}


const char* InitializerDatabase_getAdminServer(InitializerDatabase* this) {
        return this->adminServer;
}


void InitializerDatabase_setAdminServer(InitializerDatabase* this, const char* adminServer) {
        this->adminServer = adminServer;
}


const char* InitializerDatabase_getAdminPort(InitializerDatabase* this) {
        return this->adminPort;
}


void InitializerDatabase_setAdminPort(InitializerDatabase* this, const char* adminPort) {
        this->adminPort = adminPort;
}

