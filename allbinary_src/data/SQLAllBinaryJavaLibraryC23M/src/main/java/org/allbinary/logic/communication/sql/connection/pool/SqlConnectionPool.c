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
// package org.allbinary.logic.communication.sql.connection.pool

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/sql/Connection.h"
// #include "java/sql/DriverManager.h"
// #include "java/sql/SQLException.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct SqlConnectionPool SqlConnectionPool;
struct SqlConnectionPool {
    LogUtil* logUtil;
    StdUtil* stdUtil;
    HashMap* connectionHashMap;
    const char* FIRST_NEW_CONNECTION_CREATED;
    const char* FIRST;
    const char* NEW_CONNECTION_FOR;
    const char* CREATED;
    const char* NUMBER_OF_SQL_CONNECTIONS_FOR;
    const char* NUMBER_OF_SQL_CONNECTION_VECTORS;
    const char* IS;
    const char* CONNECTION_ALLREADY_CLOSED;
    const char* METHOD_GET;
    const char* METHOD_ADD;
};

static SqlConnectionPool* SqlConnectionPool_instance;

SqlConnectionPool* SqlConnectionPool_new(void);
SqlConnectionPool* SqlConnectionPool_getInstance(void);

void SqlConnectionPool_init(SqlConnectionPool* this);
Connection* SqlConnectionPool_get(SqlConnectionPool* this, const char* url);
void SqlConnectionPool_add(SqlConnectionPool* this, const char* url, Connection* sqlConnection);

// Static fields with runtime initializers: call this once at startup
void SqlConnectionPool_staticInit(void) {
    SqlConnectionPool_instance = SqlConnectionPool_new();
}

static void SqlConnectionPool_initFields(SqlConnectionPool* this) {
    this->logUtil = LogUtil_getInstance();
    this->stdUtil = StdUtil_getInstance();
    this->connectionHashMap = nullptr;
    this->FIRST_NEW_CONNECTION_CREATED = "First New Connection Created: ";
    this->FIRST = "First ";
    this->NEW_CONNECTION_FOR = "New Connection For ";
    this->CREATED = " Created";
    this->NUMBER_OF_SQL_CONNECTIONS_FOR = "Number Of Sql Connections for: ";
    this->NUMBER_OF_SQL_CONNECTION_VECTORS = "Number Of Sql Connection Vectors: ";
    this->IS = " is ";
    this->CONNECTION_ALLREADY_CLOSED = "Connection AllReady Closed";
    this->METHOD_GET = "get()";
    this->METHOD_ADD = "add()";
}


SqlConnectionPool* SqlConnectionPool_getInstance(void) {
        return SqlConnectionPool_instance;
}


void SqlConnectionPool_init(SqlConnectionPool* this) {
    SqlConnectionPool_initFields(this);
}

SqlConnectionPool* SqlConnectionPool_new(void) {
    SqlConnectionPool* this = calloc(1, sizeof(SqlConnectionPool));
    SqlConnectionPool_init(this);
    return this;
}


// throws SQLException
// synchronized
Connection* SqlConnectionPool_get(SqlConnectionPool* this, const char* url) {
        if (this->connectionHashMap == nullptr) {
            this->connectionHashMap = StdUtil_createHashMap(this->stdUtil);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGPOOL)) {
                LogUtil_putF(this->logUtil, java_concat(this->FIRST_NEW_CONNECTION_CREATED, url), this, this->METHOD_GET);
            }
            return DriverManager_getConnection(url);
        } else {
            BasicArrayList* connectionVector = ((BasicArrayList*) HashMap_get(this->connectionHashMap, url));
            if (connectionVector == nullptr) {
                connectionVector = BasicArrayListD_new();
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGPOOL)) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, this->FIRST);
                    StringMaker_append(stringBuffer, this->NEW_CONNECTION_FOR);
                    StringMaker_append(stringBuffer, url);
                    StringMaker_append(stringBuffer, this->CREATED);
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->METHOD_GET);
                }
                return DriverManager_getConnection(url);
            } else if (BasicArrayList_size(connectionVector) == 0) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGPOOL)) {
                    LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->NEW_CONNECTION_FOR), append, url), append, this->CREATED), toString), this, this->METHOD_GET);
                }
                return DriverManager_getConnection(url);
            } else {
                StringMaker* stringBuffer = StringMaker_new();
                int32_t size = BasicArrayList_size(connectionVector);
                for (int32_t i = 0; i < size; i++) {
                    Connection* sqlConnection = ((Connection*) BasicArrayList_get(connectionVector, i));
                    if (!Connection_isClosed(sqlConnection)) {
                        BasicArrayList_remove(connectionVector, sqlConnection);
                        HashMap_put(this->connectionHashMap, url, connectionVector);
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGPOOL)) {
                            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                            StringMaker_append(stringBuffer, this->NUMBER_OF_SQL_CONNECTIONS_FOR);
                            StringMaker_append(stringBuffer, url);
                            StringMaker_append(stringBuffer, this->IS);
                            StringMaker_appendint(stringBuffer, BasicArrayList_size(connectionVector));
                            LogUtil_putF(this->logUtil, java_concat(this->NUMBER_OF_SQL_CONNECTION_VECTORS, java_string_of(HashMap_size(this->connectionHashMap))), this, this->METHOD_GET);
                            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->METHOD_GET);
                        }
                        return ((Connection*) sqlConnection);
                    }
                }
            }
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGPOOL)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, this->NEW_CONNECTION_FOR);
            StringMaker_append(stringBuffer, url);
            StringMaker_append(stringBuffer, this->CREATED);
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->METHOD_GET);
        }
        return DriverManager_getConnection(url);
}


// throws SQLException
// synchronized
void SqlConnectionPool_add(SqlConnectionPool* this, const char* url, Connection* sqlConnection) {
        if (!Connection_isClosed(sqlConnection)) {
            BasicArrayList* connectionVector = nullptr;
            if (this->connectionHashMap == nullptr) {
                this->connectionHashMap = StdUtil_createHashMap(this->stdUtil);
                connectionVector = BasicArrayListD_new();
                BasicArrayList_add(connectionVector, sqlConnection);
            } else {
                connectionVector = ((BasicArrayList*) HashMap_get(this->connectionHashMap, url));
                if (connectionVector == nullptr) {
                    connectionVector = BasicArrayListD_new();
                }
                BasicArrayList_add(connectionVector, sqlConnection);
                HashMap_put(this->connectionHashMap, url, connectionVector);
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGPOOL)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, this->NUMBER_OF_SQL_CONNECTIONS_FOR);
                StringMaker_append(stringBuffer, url);
                StringMaker_append(stringBuffer, this->IS);
                StringMaker_appendint(stringBuffer, BasicArrayList_size(connectionVector));
                LogUtil_putF(this->logUtil, java_concat(this->NUMBER_OF_SQL_CONNECTION_VECTORS, java_string_of(HashMap_size(this->connectionHashMap))), this, this->METHOD_ADD);
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->METHOD_ADD);
            }
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGPOOL)) {
            LogUtil_putF(this->logUtil, this->CONNECTION_ALLREADY_CLOSED, this, this->METHOD_ADD);
        }
}

