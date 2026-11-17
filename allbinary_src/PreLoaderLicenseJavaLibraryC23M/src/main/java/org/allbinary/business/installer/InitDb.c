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
// #include "java/lang/reflect/Method.h"
#include "org/allbinary/business/init/db/DbConnectionInfo.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"

//Warning you must have sql root access
typedef struct InitDb InitDb;
struct InitDb {
    Any* anyType;
    const char* METHOD_CALL_GET_HOST_NAME;
    const char* METHOD_CALL_ADD_USERS;
    const char* METHOD_CALL_ADD_DATABASES;
    const char* METHOD_CALL_ADD_TABLES;
    const char* METHOD_CALL_TEMP_MAIN_PATH;
    const char* METHOD_CALL_MAIN_PATH;
};


InitDb* InitDb_new(void);

void InitDb_init(InitDb* this);

InitDb* InitDb_new1(DbConnectionInfo* dbConnectionInfo);
void InitDb_init1(InitDb* this, DbConnectionInfo* dbConnectionInfo);
void InitDb_setHelper(InitDb* this, Any* anyType);
Any* InitDb_getHelper(InitDb* this);
static const char* InitDb_getHostName(InitDb* this);
bool InitDb_addUsers(InitDb* this);
bool InitDb_addDatabases(InitDb* this);
bool InitDb_addTables(InitDb* this);
bool InitDb_useTemporaryMainPath(InitDb* this);
bool InitDb_useNormalMainPath(InitDb* this);

static void InitDb_initFields(InitDb* this) {
    this->anyType = nullptr;
    this->METHOD_CALL_GET_HOST_NAME = "getHostName";
    this->METHOD_CALL_ADD_USERS = "addUsers";
    this->METHOD_CALL_ADD_DATABASES = "addDatabases";
    this->METHOD_CALL_ADD_TABLES = "addTables";
    this->METHOD_CALL_TEMP_MAIN_PATH = "useTemporaryMainPath";
    this->METHOD_CALL_MAIN_PATH = "useNormalMainPath";
}


void InitDb_init(InitDb* this) {
    InitDb_initFields(this);
}

InitDb* InitDb_new(void) {
    InitDb* this = calloc(1, sizeof(InitDb));
    InitDb_init(this);
    return this;
}


void InitDb_init1(InitDb* this, DbConnectionInfo* dbConnectionInfo) {
    InitDb_initFields(this);
}

InitDb* InitDb_new1(DbConnectionInfo* dbConnectionInfo) {
    InitDb* this = calloc(1, sizeof(InitDb));
    InitDb_init1(this, dbConnectionInfo);
    return this;
}


void InitDb_setHelper(InitDb* this, Any* anyType) {
        this->anyType = anyType;
}


Any* InitDb_getHelper(InitDb* this) {
        return this->anyType;
}


static const char* InitDb_getHostName(InitDb* this) {
        JAVA_TRY {
            const char* dynamicClass = java_class_of(this->anyType);
            Method* method = Class_getMethod(dynamicClass, this->METHOD_CALL_GET_HOST_NAME, nullptr);
            const char* result = ((const char*) Method_invoke(method, this->anyType, nullptr));
            return result;
        } JAVA_CATCH(Exception, e) {
            return nullptr;
        } JAVA_END_TRY;
}


bool InitDb_addUsers(InitDb* this) {
        JAVA_TRY {
            const char* dynamicClass = java_class_of(this->anyType);
            Method* method = Class_getMethod(dynamicClass, this->METHOD_CALL_ADD_USERS, nullptr);
            bool result = ((bool) Method_invoke(method, this->anyType, nullptr));
            return java_string_booleanValue(result);
        } JAVA_CATCH(Exception, e) {
            return false;
        } JAVA_END_TRY;
}


bool InitDb_addDatabases(InitDb* this) {
        JAVA_TRY {
            const char* dynamicClass = java_class_of(this->anyType);
            Method* method = Class_getMethod(dynamicClass, this->METHOD_CALL_ADD_DATABASES, nullptr);
            bool result = ((bool) Method_invoke(method, this->anyType, nullptr));
            return java_string_booleanValue(result);
        } JAVA_CATCH(Exception, e) {
            return false;
        } JAVA_END_TRY;
}


bool InitDb_addTables(InitDb* this) {
        JAVA_TRY {
            const char* dynamicClass = java_class_of(this->anyType);
            Method* method = Class_getMethod(dynamicClass, this->METHOD_CALL_ADD_TABLES, nullptr);
            bool result = ((bool) Method_invoke(method, this->anyType, nullptr));
            return java_string_booleanValue(result);
        } JAVA_CATCH(Exception, e) {
            return false;
        } JAVA_END_TRY;
}


bool InitDb_useTemporaryMainPath(InitDb* this) {
        JAVA_TRY {
            const char* dynamicClass = java_class_of(this->anyType);
            Method* method = Class_getMethod(dynamicClass, this->METHOD_CALL_TEMP_MAIN_PATH, nullptr);
            bool result = ((bool) Method_invoke(method, this->anyType, nullptr));
            return java_string_booleanValue(result);
        } JAVA_CATCH(Exception, e) {
            return false;
        } JAVA_END_TRY;
}


bool InitDb_useNormalMainPath(InitDb* this) {
        JAVA_TRY {
            const char* dynamicClass = java_class_of(this->anyType);
            Method* method = Class_getMethod(dynamicClass, this->METHOD_CALL_MAIN_PATH, nullptr);
            bool result = ((bool) Method_invoke(method, this->anyType, nullptr));
            return java_string_booleanValue(result);
        } JAVA_CATCH(Exception, e) {
            return false;
        } JAVA_END_TRY;
}

