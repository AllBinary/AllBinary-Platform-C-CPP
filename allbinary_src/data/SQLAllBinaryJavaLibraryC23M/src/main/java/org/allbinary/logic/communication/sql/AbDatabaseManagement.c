/*
 * 
 * To change this license header, choose License Headers in Project Properties. 
 * To change this template file, choose Tools | Templates 
 * and open the template in the editor.  
 */
// Generated Code Do Not Modify
// package org.allbinary.logic.communication.sql

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/net/InetAddress.h"
#include "org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h"
#include "org/allbinary/business/init/db/DbConnectionInfo.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"

typedef struct AbDatabaseManagement AbDatabaseManagement;
struct AbDatabaseManagement {
    AbSqlBean base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    StringMaker* sqlCommandLog;
    const char* GRANT_ALL;
    const char* DOT_STAR;
    const char* TO;
    const char* AT_LOCALHOST;
    const char* IDENTIFIED_BY;
    const char* WITH_GRANT_OPTION;
    const char* FAILED;
    const char* GET_HOST_NAME;
    const char* METHOD_ADD_USER;
    const char* METHOD_ADD_USERS;
    const char* METHOD_ADD_DB;
    const char* METHOD_ADD_DATABASES;
    const char* METHOD_ADD_TABLES;
    const char* UNABLE_TO_CREATE_USER;
    const char* UNABLE_TO_CREATE_DATABASE;
    const char* UNABLE_TO_CREATE_TABLES;
    const char* ADD_TABLES_RESULTS_LABEL;
};


AbDatabaseManagement* AbDatabaseManagement_new(DatabaseConnectionInfoInterface* databaseConnectionInfoInterface);

void AbDatabaseManagement_init(AbDatabaseManagement* this, DatabaseConnectionInfoInterface* databaseConnectionInfoInterface);

AbDatabaseManagement* AbDatabaseManagement_new1(DbConnectionInfo* connectionInfo);
void AbDatabaseManagement_init1(AbDatabaseManagement* this, DbConnectionInfo* connectionInfo);
static const char* AbDatabaseManagement_getHostName(AbDatabaseManagement* this);
bool AbDatabaseManagement_addDbUser(AbDatabaseManagement* this, const char* hostName, const char* db, const char* userName, const char* password);
bool AbDatabaseManagement_addDbUser(AbDatabaseManagement* this, const char* db, const char* userName, const char* password);
bool AbDatabaseManagement_addDb(AbDatabaseManagement* this, const char* db);

static void AbDatabaseManagement_initFields(AbDatabaseManagement* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->sqlCommandLog = StringMaker_new();
    this->GRANT_ALL = "GRANT SELECT, INSERT, UPDATE, DELETE, CREATE, DROP, INDEX, ALTER ON ";
    this->DOT_STAR = ".*";
    this->TO = " TO ";
    this->AT_LOCALHOST = "@localhost";
    this->IDENTIFIED_BY = " IDENTIFIED BY '";
    this->WITH_GRANT_OPTION = "' WITH GRANT OPTION";
    this->FAILED = "Failed";
    this->GET_HOST_NAME = "getHostName()";
    this->METHOD_ADD_USER = "addUser()";
    this->METHOD_ADD_USERS = "addUsers()";
    this->METHOD_ADD_DB = "addDb()";
    this->METHOD_ADD_DATABASES = "addDatabases()";
    this->METHOD_ADD_TABLES = "addTables()";
    this->UNABLE_TO_CREATE_USER = "Unable to Create User: ";
    this->UNABLE_TO_CREATE_DATABASE = "Unable to Create Database: ";
    this->UNABLE_TO_CREATE_TABLES = "Unable to Create Tables";
    this->ADD_TABLES_RESULTS_LABEL = "Add Table Results: ";
}


void AbDatabaseManagement_init(AbDatabaseManagement* this, DatabaseConnectionInfoInterface* databaseConnectionInfoInterface) {
        AbSqlBean_init(&this->base, ((DbConnectionInfo*) databaseConnectionInfoInterface));
        AbDatabaseManagement_initFields(this);
}

AbDatabaseManagement* AbDatabaseManagement_new(DatabaseConnectionInfoInterface* databaseConnectionInfoInterface) {
    AbDatabaseManagement* this = calloc(1, sizeof(AbDatabaseManagement));
    AbDatabaseManagement_init(this, databaseConnectionInfoInterface);
    return this;
}


void AbDatabaseManagement_init1(AbDatabaseManagement* this, DbConnectionInfo* connectionInfo) {
        AbSqlBean_init(&this->base, connectionInfo);
        AbDatabaseManagement_initFields(this);
}

AbDatabaseManagement* AbDatabaseManagement_new1(DbConnectionInfo* connectionInfo) {
    AbDatabaseManagement* this = calloc(1, sizeof(AbDatabaseManagement));
    AbDatabaseManagement_init1(this, connectionInfo);
    return this;
}


static const char* AbDatabaseManagement_getHostName(AbDatabaseManagement* this) {
        JAVA_TRY {
            InetAddress* addr = InetAddress_getLocalHost();
            return InetAddress_getHostName(addr);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->FAILED, this, this->GET_HOST_NAME, e);
            return nullptr;
        } JAVA_END_TRY;
}


// throws Exception
bool AbDatabaseManagement_addDbUser(AbDatabaseManagement* this, const char* hostName, const char* db, const char* userName, const char* password) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->GRANT_ALL);
        StringMaker_append(stringBuffer, db);
        StringMaker_append(stringBuffer, this->DOT_STAR);
        StringMaker_append(stringBuffer, this->TO);
        StringMaker_append(stringBuffer, userName);
        StringMaker_append(stringBuffer, hostName);
        StringMaker_append(stringBuffer, this->IDENTIFIED_BY);
        StringMaker_append(stringBuffer, password);
        StringMaker_append(stringBuffer, this->WITH_GRANT_OPTION);
        const char* sqlStatement = StringMaker_toString(stringBuffer);
        StringMaker_append(this->sqlCommandLog, sqlStatement);
        StringMaker_append(this->sqlCommandLog, this->commonSeps->NEW_LINE);
        AbSqlBean_executeSQLStatement((&this->base), sqlStatement);
        return true;
}


// Java overloaded method: C needs a different name
bool AbDatabaseManagement_addDbUser(AbDatabaseManagement* this, const char* db, const char* userName, const char* password) {
        JAVA_TRY {
            AbDatabaseManagement_addDbUser(this, this->AT_LOCALHOST, db, userName, password);
            const char* hostName = AbDatabaseManagement_getHostName(this);
            if (hostName != nullptr) {
                AbDatabaseManagement_addDbUser(this, hostName, db, userName, password);
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, java_concat(this->UNABLE_TO_CREATE_USER, userName), this, this->METHOD_ADD_USER, e);
            return false;
        } JAVA_END_TRY;
}


bool AbDatabaseManagement_addDb(AbDatabaseManagement* this, const char* db) {
        JAVA_TRY {
            const char* sqlStatement = java_concat(java_string_of(this->sqlStrings->CREATE_DATABASE), db);
            StringMaker_append(this->sqlCommandLog, sqlStatement);
            StringMaker_append(this->sqlCommandLog, this->commonSeps->NEW_LINE);
            AbSqlBean_executeSQLStatement((&this->base), sqlStatement);
            return true;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, java_concat(this->UNABLE_TO_CREATE_DATABASE, db), this, this->METHOD_ADD_DB, e);
            return false;
        } JAVA_END_TRY;
}

