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
// package org.allbinary.business.init.db

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h"

typedef struct DbConnectionInfo DbConnectionInfo;
struct DbConnectionInfo {
    DatabaseConnectionInfoInterface DatabaseConnectionInfoInterface_interface;
    const char* jdbcDriver;
    const char* name;
    const char* userName;
    const char* password;
    const char* schema;
    const char* server;
    const char* port;
    const char* url;
    const char* host;
    const char* SCHEMA_SEP;
    const char* USER_NAME_KEY;
    const char* PASSWORD_KEY;
};


DbConnectionInfo* DbConnectionInfo_new(void);

void DbConnectionInfo_init(DbConnectionInfo* this);
static void DbConnectionInfo_updateUrl(DbConnectionInfo* this);
const char* DbConnectionInfo_getUrl(DbConnectionInfo* this);
const char* DbConnectionInfo_getJdbcDriver(DbConnectionInfo* this);
const char* DbConnectionInfo_getName(DbConnectionInfo* this);
const char* DbConnectionInfo_getUserName(DbConnectionInfo* this);
const char* DbConnectionInfo_getPassword(DbConnectionInfo* this);
static void DbConnectionInfo_updateHost(DbConnectionInfo* this);
const char* DbConnectionInfo_getHost(DbConnectionInfo* this);
const char* DbConnectionInfo_getSchema(DbConnectionInfo* this);
const char* DbConnectionInfo_getServer(DbConnectionInfo* this);
const char* DbConnectionInfo_getPort(DbConnectionInfo* this);
void DbConnectionInfo_setJdbcDriver(DbConnectionInfo* this, const char* value);
void DbConnectionInfo_setName(DbConnectionInfo* this, const char* value);
void DbConnectionInfo_setUserName(DbConnectionInfo* this, const char* value);
void DbConnectionInfo_setPassword(DbConnectionInfo* this, const char* value);
void DbConnectionInfo_setSchema(DbConnectionInfo* this, const char* value);
void DbConnectionInfo_setServer(DbConnectionInfo* this, const char* value);
void DbConnectionInfo_setPort(DbConnectionInfo* this, const char* value);
const char* DbConnectionInfo_getUserNameKey(DbConnectionInfo* this);
const char* DbConnectionInfo_getPasswordKey(DbConnectionInfo* this);

static void DbConnectionInfo_initFields(DbConnectionInfo* this) {
    this->jdbcDriver = nullptr;
    this->name = nullptr;
    this->userName = nullptr;
    this->password = nullptr;
    this->schema = nullptr;
    this->server = nullptr;
    this->port = nullptr;
    this->url = nullptr;
    this->host = nullptr;
    this->SCHEMA_SEP = "://";
    this->USER_NAME_KEY = "?user=";
    this->PASSWORD_KEY = "&password=";
}


void DbConnectionInfo_init(DbConnectionInfo* this) {
    DbConnectionInfo_initFields(this);
}

DbConnectionInfo* DbConnectionInfo_new(void) {
    DbConnectionInfo* this = calloc(1, sizeof(DbConnectionInfo));
    DbConnectionInfo_init(this);
    return this;
}


static void DbConnectionInfo_updateUrl(DbConnectionInfo* this) {
        DbConnectionInfo_updateHost(this);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, DbConnectionInfo_getHost(this));
        StringMaker_append(stringBuffer, DbConnectionInfo_getName(this));
        StringMaker_append(stringBuffer, DbConnectionInfo_getUserNameKey(this));
        StringMaker_append(stringBuffer, DbConnectionInfo_getUserName(this));
        StringMaker_append(stringBuffer, DbConnectionInfo_getPasswordKey(this));
        StringMaker_append(stringBuffer, DbConnectionInfo_getPassword(this));
        this->url = StringMaker_toString(stringBuffer);
}


const char* DbConnectionInfo_getUrl(DbConnectionInfo* this) {
        return this->url;
}


const char* DbConnectionInfo_getJdbcDriver(DbConnectionInfo* this) {
        return this->jdbcDriver;
}


const char* DbConnectionInfo_getName(DbConnectionInfo* this) {
        return this->name;
}


const char* DbConnectionInfo_getUserName(DbConnectionInfo* this) {
        return this->userName;
}


const char* DbConnectionInfo_getPassword(DbConnectionInfo* this) {
        return this->password;
}


static void DbConnectionInfo_updateHost(DbConnectionInfo* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, DbConnectionInfo_getSchema(this));
        StringMaker_append(stringBuffer, this->SCHEMA_SEP);
        StringMaker_append(stringBuffer, DbConnectionInfo_getServer(this));
        if (DbConnectionInfo_getPort(this) != nullptr && JAVA_CALL(DbConnectionInfo_getPort(this), length) > 1) {
            StringMaker_append(stringBuffer, CommonSeps_getInstance()->COLON);
            StringMaker_append(stringBuffer, DbConnectionInfo_getPort(this));
        }
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        this->host = StringMaker_toString(stringBuffer);
}


const char* DbConnectionInfo_getHost(DbConnectionInfo* this) {
        return this->host;
}


const char* DbConnectionInfo_getSchema(DbConnectionInfo* this) {
        return this->schema;
}


const char* DbConnectionInfo_getServer(DbConnectionInfo* this) {
        return this->server;
}


const char* DbConnectionInfo_getPort(DbConnectionInfo* this) {
        return this->port;
}


void DbConnectionInfo_setJdbcDriver(DbConnectionInfo* this, const char* value) {
        this->jdbcDriver = value;
}


void DbConnectionInfo_setName(DbConnectionInfo* this, const char* value) {
        this->name = value;
        DbConnectionInfo_updateUrl(this);
}


void DbConnectionInfo_setUserName(DbConnectionInfo* this, const char* value) {
        this->userName = value;
        DbConnectionInfo_updateUrl(this);
}


void DbConnectionInfo_setPassword(DbConnectionInfo* this, const char* value) {
        this->password = value;
        DbConnectionInfo_updateUrl(this);
}


void DbConnectionInfo_setSchema(DbConnectionInfo* this, const char* value) {
        this->schema = value;
        DbConnectionInfo_updateUrl(this);
}


void DbConnectionInfo_setServer(DbConnectionInfo* this, const char* value) {
        this->server = value;
        DbConnectionInfo_updateUrl(this);
}


void DbConnectionInfo_setPort(DbConnectionInfo* this, const char* value) {
        this->port = value;
        DbConnectionInfo_updateUrl(this);
}


const char* DbConnectionInfo_getUserNameKey(DbConnectionInfo* this) {
        return this->USER_NAME_KEY;
}


const char* DbConnectionInfo_getPasswordKey(DbConnectionInfo* this) {
        return this->PASSWORD_KEY;
}

