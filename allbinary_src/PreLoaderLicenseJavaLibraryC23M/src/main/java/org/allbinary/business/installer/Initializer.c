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
#include "org/allbinary/business/init/db/HistoryDbInitInfo.h"
#include "org/allbinary/business/init/db/InventoryDbInitInfo.h"
#include "org/allbinary/business/init/db/LogDbInitInfo.h"
#include "org/allbinary/business/init/db/StaticPagesDbInitInfo.h"
#include "org/allbinary/business/init/db/UserDbInitInfo.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct Initializer Initializer;
struct Initializer {
    LogUtil* logUtil;
    const char* userJdbcDriver;
    const char* userName;
    const char* userUserName;
    const char* userPassword;
    const char* userSchema;
    const char* userServer;
    const char* userPort;
    const char* historyJdbcDriver;
    const char* historyName;
    const char* historyUserName;
    const char* historyPassword;
    const char* historySchema;
    const char* historyServer;
    const char* historyPort;
    const char* logJdbcDriver;
    const char* logName;
    const char* logUserName;
    const char* logPassword;
    const char* logSchema;
    const char* logServer;
    const char* logPort;
    const char* inventoryJdbcDriver;
    const char* inventoryName;
    const char* inventoryUserName;
    const char* inventoryPassword;
    const char* inventorySchema;
    const char* inventoryServer;
    const char* inventoryPort;
    const char* staticPagesJdbcDriver;
    const char* staticPagesName;
    const char* staticPagesUserName;
    const char* staticPagesPassword;
    const char* staticPagesSchema;
    const char* staticPagesServer;
    const char* staticPagesPort;
};

static constexpr int32_t Initializer_MAXDB = 30;
static constexpr int32_t Initializer_MAX = 16;
static constexpr int32_t Initializer_MIN = 4;
static constexpr int32_t Initializer_MINPASSWORD = 0;

Initializer* Initializer_new(Map* map);

void Initializer_init(Initializer* this, Map* map);

Initializer* Initializer_new1(HashMap* initHashMap);
void Initializer_init1(Initializer* this, HashMap* initHashMap);
void Initializer_getFormData(Initializer* this, HashMap* hashMap);
static bool Initializer_isJdbcDriverValid(Initializer* this, const char* jdbcDriverClassPathString);
bool Initializer_isValid(Initializer* this);
static const char* Initializer_getJdbcDriverValidationInfo(Initializer* this, const char* jdbcDriver);
static const char* Initializer_getJdbcDriverSolutionInfo(Initializer* this);
const char* Initializer_getInvalidInfo(Initializer* this);
void Initializer_set(Initializer* this);

static void Initializer_initFields(Initializer* this) {
    this->logUtil = LogUtil_getInstance();
    this->userJdbcDriver = nullptr;
    this->userName = nullptr;
    this->userUserName = nullptr;
    this->userPassword = nullptr;
    this->userSchema = nullptr;
    this->userServer = nullptr;
    this->userPort = nullptr;
    this->historyJdbcDriver = nullptr;
    this->historyName = nullptr;
    this->historyUserName = nullptr;
    this->historyPassword = nullptr;
    this->historySchema = nullptr;
    this->historyServer = nullptr;
    this->historyPort = nullptr;
    this->logJdbcDriver = nullptr;
    this->logName = nullptr;
    this->logUserName = nullptr;
    this->logPassword = nullptr;
    this->logSchema = nullptr;
    this->logServer = nullptr;
    this->logPort = nullptr;
    this->inventoryJdbcDriver = nullptr;
    this->inventoryName = nullptr;
    this->inventoryUserName = nullptr;
    this->inventoryPassword = nullptr;
    this->inventorySchema = nullptr;
    this->inventoryServer = nullptr;
    this->inventoryPort = nullptr;
    this->staticPagesJdbcDriver = nullptr;
    this->staticPagesName = nullptr;
    this->staticPagesUserName = nullptr;
    this->staticPagesPassword = nullptr;
    this->staticPagesSchema = nullptr;
    this->staticPagesServer = nullptr;
    this->staticPagesPort = nullptr;
}


void Initializer_init(Initializer* this, Map* map) {
    Initializer_initFields(this);
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
        Initializer_getFormData(this, hashMap);
}

Initializer* Initializer_new(Map* map) {
    Initializer* this = calloc(1, sizeof(Initializer));
    Initializer_init(this, map);
    return this;
}


void Initializer_init1(Initializer* this, HashMap* initHashMap) {
    Initializer_initFields(this);
        Initializer_getFormData(this, initHashMap);
}

Initializer* Initializer_new1(HashMap* initHashMap) {
    Initializer* this = calloc(1, sizeof(Initializer));
    Initializer_init1(this, initHashMap);
    return this;
}


void Initializer_getFormData(Initializer* this, HashMap* hashMap) {
        JAVA_TRY {
            InitializerData* initializerData = InitializerData_getInstance();
            this->userJdbcDriver = ((const char*) HashMap_get(hashMap, initializerData->CUSTOMERJDBCDRIVER));
            this->userName = ((const char*) HashMap_get(hashMap, initializerData->CUSTOMERNAME));
            this->userUserName = ((const char*) HashMap_get(hashMap, initializerData->CUSTOMERUSERNAME));
            this->userPassword = ((const char*) HashMap_get(hashMap, initializerData->CUSTOMERPASSWORD));
            this->userSchema = ((const char*) HashMap_get(hashMap, initializerData->CUSTOMERSCHEMA));
            this->userServer = ((const char*) HashMap_get(hashMap, initializerData->CUSTOMERSERVER));
            this->userPort = ((const char*) HashMap_get(hashMap, initializerData->CUSTOMERPORT));
            this->historyJdbcDriver = ((const char*) HashMap_get(hashMap, initializerData->HISTORYJDBCDRIVER));
            this->historyName = ((const char*) HashMap_get(hashMap, initializerData->HISTORYNAME));
            this->historyUserName = ((const char*) HashMap_get(hashMap, initializerData->HISTORYUSERNAME));
            this->historyPassword = ((const char*) HashMap_get(hashMap, initializerData->HISTORYPASSWORD));
            this->historySchema = ((const char*) HashMap_get(hashMap, initializerData->HISTORYSCHEMA));
            this->historyServer = ((const char*) HashMap_get(hashMap, initializerData->HISTORYSERVER));
            this->historyPort = ((const char*) HashMap_get(hashMap, initializerData->HISTORYPORT));
            this->logJdbcDriver = ((const char*) HashMap_get(hashMap, initializerData->LOGJDBCDRIVER));
            this->logName = ((const char*) HashMap_get(hashMap, initializerData->LOGNAME));
            this->logUserName = ((const char*) HashMap_get(hashMap, initializerData->LOGUSERNAME));
            this->logPassword = ((const char*) HashMap_get(hashMap, initializerData->LOGPASSWORD));
            this->logSchema = ((const char*) HashMap_get(hashMap, initializerData->LOGSCHEMA));
            this->logServer = ((const char*) HashMap_get(hashMap, initializerData->LOGSERVER));
            this->logPort = ((const char*) HashMap_get(hashMap, initializerData->LOGPORT));
            this->inventoryJdbcDriver = ((const char*) HashMap_get(hashMap, initializerData->INVENTORYJDBCDRIVER));
            this->inventoryName = ((const char*) HashMap_get(hashMap, initializerData->INVENTORYNAME));
            this->inventoryUserName = ((const char*) HashMap_get(hashMap, initializerData->INVENTORYUSERNAME));
            this->inventoryPassword = ((const char*) HashMap_get(hashMap, initializerData->INVENTORYPASSWORD));
            this->inventorySchema = ((const char*) HashMap_get(hashMap, initializerData->INVENTORYSCHEMA));
            this->inventoryServer = ((const char*) HashMap_get(hashMap, initializerData->INVENTORYSERVER));
            this->inventoryPort = ((const char*) HashMap_get(hashMap, initializerData->INVENTORYPORT));
            this->staticPagesJdbcDriver = ((const char*) HashMap_get(hashMap, initializerData->STATICPAGESJDBCDRIVER));
            this->staticPagesName = ((const char*) HashMap_get(hashMap, initializerData->STATICPAGESNAME));
            this->staticPagesUserName = ((const char*) HashMap_get(hashMap, initializerData->STATICPAGESUSERNAME));
            this->staticPagesPassword = ((const char*) HashMap_get(hashMap, initializerData->STATICPAGESPASSWORD));
            this->staticPagesSchema = ((const char*) HashMap_get(hashMap, initializerData->STATICPAGESSCHEMA));
            this->staticPagesServer = ((const char*) HashMap_get(hashMap, initializerData->STATICPAGESSERVER));
            this->staticPagesPort = ((const char*) HashMap_get(hashMap, initializerData->STATICPAGESPORT));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, "Unable to get form data", this, "getFormData()", e);
        } JAVA_END_TRY;
}


static bool Initializer_isJdbcDriverValid(Initializer* this, const char* jdbcDriverClassPathString) {
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


bool Initializer_isValid(Initializer* this) {
        bool isValid = true;
        if (!Initializer_isJdbcDriverValid(this, this->userJdbcDriver)) {
            isValid = false;
        }
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->userName, Initializer_MIN, Initializer_MAXDB)) {
            isValid = false;
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->userUserName, Initializer_MIN, Initializer_MAX)) {
            isValid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->userPassword, Initializer_MINPASSWORD, Initializer_MAX)) {
            isValid = false;
        }
        if (!Initializer_isJdbcDriverValid(this, this->historyJdbcDriver)) {
            isValid = false;
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->historyName, Initializer_MIN, Initializer_MAXDB)) {
            isValid = false;
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->historyUserName, Initializer_MIN, Initializer_MAX)) {
            isValid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->historyPassword, Initializer_MINPASSWORD, Initializer_MAX)) {
            isValid = false;
        }
        if (!Initializer_isJdbcDriverValid(this, this->logJdbcDriver)) {
            isValid = false;
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->logName, Initializer_MIN, Initializer_MAXDB)) {
            isValid = false;
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->logUserName, Initializer_MIN, Initializer_MAX)) {
            isValid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->logPassword, Initializer_MINPASSWORD, Initializer_MAX)) {
            isValid = false;
        }
        if (!Initializer_isJdbcDriverValid(this, this->inventoryJdbcDriver)) {
            isValid = false;
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->inventoryName, Initializer_MIN, Initializer_MAXDB)) {
            isValid = false;
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->inventoryUserName, Initializer_MIN, Initializer_MAX)) {
            isValid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->inventoryPassword, Initializer_MINPASSWORD, Initializer_MAX)) {
            isValid = false;
        }
        if (!Initializer_isJdbcDriverValid(this, this->staticPagesJdbcDriver)) {
            isValid = false;
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->staticPagesName, Initializer_MIN, Initializer_MAXDB)) {
            isValid = false;
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->staticPagesUserName, Initializer_MIN, Initializer_MAX)) {
            isValid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->staticPagesPassword, Initializer_MINPASSWORD, Initializer_MAX)) {
            isValid = false;
        }
        return isValid;
}


static const char* Initializer_getJdbcDriverValidationInfo(Initializer* this, const char* jdbcDriver) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "The JDBC driver (");
        StringMaker_append(stringBuffer, jdbcDriver);
        StringMaker_append(stringBuffer, ") you have provided is not valid.<br/>");
        return StringMaker_toString(stringBuffer);
}


static const char* Initializer_getJdbcDriverSolutionInfo(Initializer* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "The following describes the possible problems and solutions regarding the Jdbc Driver error(s):<p/>");
        StringMaker_append(stringBuffer, "1. A JDBC driver you specified is not in your classpath.<br/>");
        StringMaker_append(stringBuffer, "Solution 1: Move the JDBC driver into any directory specified in the existing classpath. <br/>");
        StringMaker_append(stringBuffer, "Solution 2: Add the directory that contains the JDBC driver to the classpath.<br/>");
        StringMaker_append(stringBuffer, "Solution 3: Add the JDBC driver to the WEB-INF/lib directory where you installed this webapp.<br/>");
        StringMaker_append(stringBuffer, "2. The JDBC driver you specified does not exit.<br/>");
        StringMaker_append(stringBuffer, "Solution: Get a JDBC driver. <br/>");
        StringMaker_append(stringBuffer, "3. The JDBC driver you specified is not valid.<br/>");
        StringMaker_append(stringBuffer, "Solution: Use a valid JDBC driver.<p/>");
        return StringMaker_toString(stringBuffer);
}


const char* Initializer_getInvalidInfo(Initializer* this) {
        bool isJdbcDriversValid = true;
        StringMaker* stringBuffer = StringMaker_new();
        if (!Initializer_isJdbcDriverValid(this, this->userJdbcDriver)) {
            isJdbcDriversValid = false;
            StringMaker_append(stringBuffer, Initializer_getJdbcDriverValidationInfo(this, this->userJdbcDriver));
        }
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->userName, Initializer_MIN, Initializer_MAXDB)) {
            StringMaker_append(stringBuffer, java_concat(java_concat(java_concat(java_concat("User db name should be < ", java_string_of(Initializer_MAXDB)), " and > "), java_string_of(Initializer_MIN)), " characters in length.<br />"));
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->userUserName, Initializer_MIN, Initializer_MAX)) {
            StringMaker_append(stringBuffer, java_concat(java_concat(java_concat(java_concat("User db username should be < ", java_string_of(Initializer_MAX)), " and > "), java_string_of(Initializer_MIN)), " characters in length.<br />"));
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->userPassword, Initializer_MINPASSWORD, Initializer_MAX)) {
            StringMaker_append(stringBuffer, java_concat(java_concat(java_concat(java_concat("User DB password should be < ", java_string_of(Initializer_MAX)), " and > "), java_string_of(Initializer_MINPASSWORD)), " characters in length.<br />"));
        }
        if (!Initializer_isJdbcDriverValid(this, this->historyJdbcDriver)) {
            isJdbcDriversValid = false;
            StringMaker_append(stringBuffer, Initializer_getJdbcDriverValidationInfo(this, this->historyJdbcDriver));
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->historyName, Initializer_MIN, Initializer_MAXDB)) {
            StringMaker_append(stringBuffer, java_concat(java_concat(java_concat(java_concat("History db should be < ", java_string_of(Initializer_MAXDB)), " and > "), java_string_of(Initializer_MIN)), " characters in length.<br />"));
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->historyUserName, Initializer_MIN, Initializer_MAX)) {
            StringMaker_append(stringBuffer, java_concat(java_concat(java_concat(java_concat("History db username should be < ", java_string_of(Initializer_MAX)), " and > "), java_string_of(Initializer_MIN)), " characters in length.<br />"));
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->historyPassword, Initializer_MINPASSWORD, Initializer_MAX)) {
            StringMaker_append(stringBuffer, java_concat(java_concat(java_concat(java_concat("History db password should be < ", java_string_of(Initializer_MAX)), " and > "), java_string_of(Initializer_MINPASSWORD)), " characters in length.<br />"));
        }
        if (!Initializer_isJdbcDriverValid(this, this->logJdbcDriver)) {
            isJdbcDriversValid = false;
            StringMaker_append(stringBuffer, Initializer_getJdbcDriverValidationInfo(this, this->logJdbcDriver));
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->logName, Initializer_MIN, Initializer_MAXDB)) {
            StringMaker_append(stringBuffer, java_concat(java_concat(java_concat(java_concat("Log db should be < ", java_string_of(Initializer_MAXDB)), " and > "), java_string_of(Initializer_MIN)), " characters in length.<br />"));
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->logUserName, Initializer_MIN, Initializer_MAX)) {
            StringMaker_append(stringBuffer, java_concat(java_concat(java_concat(java_concat("Log db username should be < ", java_string_of(Initializer_MAX)), " and > "), java_string_of(Initializer_MIN)), " characters in length.<br />"));
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->logPassword, Initializer_MINPASSWORD, Initializer_MAX)) {
            StringMaker_append(stringBuffer, java_concat(java_concat(java_concat(java_concat("Log db password should be < ", java_string_of(Initializer_MAX)), " and > "), java_string_of(Initializer_MINPASSWORD)), " characters in length.<br />"));
        }
        if (!Initializer_isJdbcDriverValid(this, this->inventoryJdbcDriver)) {
            isJdbcDriversValid = false;
            StringMaker_append(stringBuffer, Initializer_getJdbcDriverValidationInfo(this, this->inventoryJdbcDriver));
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->inventoryName, Initializer_MIN, Initializer_MAXDB)) {
            StringMaker_append(stringBuffer, java_concat(java_concat(java_concat(java_concat("Inventory db should be < ", java_string_of(Initializer_MAXDB)), " and > "), java_string_of(Initializer_MIN)), " characters in length.<br />"));
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->inventoryUserName, Initializer_MIN, Initializer_MAX)) {
            StringMaker_append(stringBuffer, java_concat(java_concat(java_concat(java_concat("Inventory db username should be < ", java_string_of(Initializer_MAX)), " and > "), java_string_of(Initializer_MIN)), " characters in length.<br />"));
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->inventoryPassword, Initializer_MINPASSWORD, Initializer_MAX)) {
            StringMaker_append(stringBuffer, java_concat(java_concat(java_concat(java_concat("Inventory DB password should be < ", java_string_of(Initializer_MAX)), " and > "), java_string_of(Initializer_MINPASSWORD)), " characters in length.<br />"));
        }
        if (!Initializer_isJdbcDriverValid(this, this->staticPagesJdbcDriver)) {
            isJdbcDriversValid = false;
            StringMaker_append(stringBuffer, Initializer_getJdbcDriverValidationInfo(this, this->staticPagesJdbcDriver));
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->staticPagesName, Initializer_MIN, Initializer_MAXDB)) {
            StringMaker_append(stringBuffer, java_concat(java_concat(java_concat(java_concat("Static Pages db should be < ", java_string_of(Initializer_MAXDB)), " and > "), java_string_of(Initializer_MIN)), " characters in length.<br />"));
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->staticPagesUserName, Initializer_MIN, Initializer_MAX)) {
            StringMaker_append(stringBuffer, java_concat(java_concat(java_concat(java_concat("Static Pages db username should be < ", java_string_of(Initializer_MAX)), " and > "), java_string_of(Initializer_MIN)), " characters in length.<br />"));
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->staticPagesPassword, Initializer_MINPASSWORD, Initializer_MAX)) {
            StringMaker_append(stringBuffer, java_concat(java_concat(java_concat(java_concat("Static Pages DB password should be < ", java_string_of(Initializer_MAX)), " and > "), java_string_of(Initializer_MINPASSWORD)), " characters in length.<br />"));
        }
        if (!isJdbcDriversValid) {
            StringMaker_append(stringBuffer, Initializer_getJdbcDriverSolutionInfo(this));
        }
        return StringMaker_toString(stringBuffer);
}


// throws Exception
void Initializer_set(Initializer* this) {
        LogUtil_putF(this->logUtil, "Creating DB connection files", this, "set()");
        UserDbInitInfo* userDbInitInfo = UserDbInitInfo_new(false);
        UserDbInitInfo_setJdbcDriver(userDbInitInfo, this->userJdbcDriver);
        UserDbInitInfo_setName(userDbInitInfo, this->userName);
        UserDbInitInfo_setUserName(userDbInitInfo, this->userUserName);
        UserDbInitInfo_setPassword(userDbInitInfo, this->userPassword);
        UserDbInitInfo_setSchema(userDbInitInfo, this->userSchema);
        UserDbInitInfo_setServer(userDbInitInfo, this->userServer);
        UserDbInitInfo_setPort(userDbInitInfo, this->userPort);
        UserDbInitInfo_setHasRead(userDbInitInfo, true);
        UserDbInitInfo_write(userDbInitInfo);
        HistoryDbInitInfo* historyDbInitInfo = HistoryDbInitInfo_new(false);
        HistoryDbInitInfo_setJdbcDriver(historyDbInitInfo, this->historyJdbcDriver);
        HistoryDbInitInfo_setName(historyDbInitInfo, this->historyName);
        HistoryDbInitInfo_setUserName(historyDbInitInfo, this->historyUserName);
        HistoryDbInitInfo_setPassword(historyDbInitInfo, this->historyPassword);
        HistoryDbInitInfo_setSchema(historyDbInitInfo, this->historySchema);
        HistoryDbInitInfo_setServer(historyDbInitInfo, this->historyServer);
        HistoryDbInitInfo_setPort(historyDbInitInfo, this->historyPort);
        HistoryDbInitInfo_setHasRead(historyDbInitInfo, true);
        HistoryDbInitInfo_write(historyDbInitInfo);
        LogDbInitInfo* logDbInitInfo = LogDbInitInfo_new(false);
        LogDbInitInfo_setJdbcDriver(logDbInitInfo, this->logJdbcDriver);
        LogDbInitInfo_setName(logDbInitInfo, this->logName);
        LogDbInitInfo_setUserName(logDbInitInfo, this->logUserName);
        LogDbInitInfo_setPassword(logDbInitInfo, this->logPassword);
        LogDbInitInfo_setSchema(logDbInitInfo, this->logSchema);
        LogDbInitInfo_setServer(logDbInitInfo, this->logServer);
        LogDbInitInfo_setPort(logDbInitInfo, this->logPort);
        LogDbInitInfo_setHasRead(logDbInitInfo, true);
        LogDbInitInfo_write(logDbInitInfo);
        StaticPagesDbInitInfo* staticPagesDbInitInfo = StaticPagesDbInitInfo_new(false);
        StaticPagesDbInitInfo_setJdbcDriver(staticPagesDbInitInfo, this->staticPagesJdbcDriver);
        StaticPagesDbInitInfo_setName(staticPagesDbInitInfo, this->staticPagesName);
        StaticPagesDbInitInfo_setUserName(staticPagesDbInitInfo, this->staticPagesUserName);
        StaticPagesDbInitInfo_setPassword(staticPagesDbInitInfo, this->staticPagesPassword);
        StaticPagesDbInitInfo_setSchema(staticPagesDbInitInfo, this->staticPagesSchema);
        StaticPagesDbInitInfo_setServer(staticPagesDbInitInfo, this->staticPagesServer);
        StaticPagesDbInitInfo_setPort(staticPagesDbInitInfo, this->staticPagesPort);
        StaticPagesDbInitInfo_setHasRead(staticPagesDbInitInfo, true);
        StaticPagesDbInitInfo_write(staticPagesDbInitInfo);
        InventoryDbInitInfo* inventoryDbInitInfo = InventoryDbInitInfo_new(false);
        InventoryDbInitInfo_setJdbcDriver(inventoryDbInitInfo, this->inventoryJdbcDriver);
        InventoryDbInitInfo_setName(inventoryDbInitInfo, this->inventoryName);
        InventoryDbInitInfo_setUserName(inventoryDbInitInfo, this->inventoryUserName);
        InventoryDbInitInfo_setPassword(inventoryDbInitInfo, this->inventoryPassword);
        InventoryDbInitInfo_setSchema(inventoryDbInitInfo, this->inventorySchema);
        InventoryDbInitInfo_setServer(inventoryDbInitInfo, this->inventoryServer);
        InventoryDbInitInfo_setPort(inventoryDbInitInfo, this->inventoryPort);
        InventoryDbInitInfo_setHasRead(inventoryDbInitInfo, true);
        InventoryDbInitInfo_write(inventoryDbInitInfo);
        LogUtil_putF(this->logUtil, "Created DB connection files", this, "set()");
}

