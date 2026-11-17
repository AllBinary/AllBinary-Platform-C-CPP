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
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/http/HttpData.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"
#include "org/allbinary/logic/io/AbDataInputStream.h"
#include "org/allbinary/logic/io/AbDataOutputStream.h"
#include "org/allbinary/logic/io/AbFileInputStream.h"
#include "org/allbinary/logic/io/DataOutputStreamFactory.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/directory/Directory.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/crypt/DatabaseEncoder.h"
#include "org/allbinary/logic/system/security/crypt/WeakCrypt.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/business/init/db/DbConnectionInfo.h"

typedef struct DbInitInfo DbInitInfo;
struct DbInitInfo {
    DbConnectionInfo base;
    CommonStrings* commonStrings;
    Directory* directory;
    HttpData* httpData;
    const char* GET_URL;
    const char* PACKAGE;
    const char* initFileName;
    bool hasRead;
};


DbInitInfo* DbInitInfo_new(const char* initFileName, bool read);

void DbInitInfo_init(DbInitInfo* this, const char* initFileName, bool read);
const char* DbInitInfo_getUrl(DbInitInfo* this);
void DbInitInfo_write(DbInitInfo* this);
static void DbInitInfo_load(DbInitInfo* this);
void DbInitInfo_setHasRead(DbInitInfo* this, bool value);
static void DbInitInfo_updateIfNeeded(DbInitInfo* this);
const char* DbInitInfo_getName(DbInitInfo* this);
const char* DbInitInfo_getUserName(DbInitInfo* this);
const char* DbInitInfo_getPassword(DbInitInfo* this);
const char* DbInitInfo_getSchema(DbInitInfo* this);
const char* DbInitInfo_getServer(DbInitInfo* this);
const char* DbInitInfo_getPort(DbInitInfo* this);

static void DbInitInfo_initFields(DbInitInfo* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->directory = Directory_getInstance();
    this->httpData = HttpData_getInstance();
    this->GET_URL = "getUrl";
    this->PACKAGE = JAVA_CALL(DbConnectionInfo_FREEBLISKET_PATH_GLOBALS, getInstance)->DBINITPATH;
    
    this->hasRead = false;
}


void DbInitInfo_init(DbInitInfo* this, const char* initFileName, bool read) {
        DbConnectionInfo_init(&this->base);
        DbInitInfo_initFields(this);
        this->initFileName = initFileName;
        if (read) {
            DbInitInfo_updateIfNeeded(this);
        } else {
            DbInitInfo_setHasRead(this, true);
        }
}

DbInitInfo* DbInitInfo_new(const char* initFileName, bool read) {
    DbInitInfo* this = calloc(1, sizeof(DbInitInfo));
    DbInitInfo_init(this, initFileName, read);
    return this;
}


const char* DbInitInfo_getUrl(DbInitInfo* this) {
        const char* url = DbConnectionInfo_getUrl((&this->base));
        if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADER)) {
            PreLogUtil_put(java_concat(java_string_of(this->httpData->URL_LABEL), url), this, this->GET_URL);
        }
        return url;
}


// throws Exception
void DbInitInfo_write(DbInitInfo* this) {
        AbPath* PATH = AbPath_new(java_concat(java_string_of(JAVA_CALL(DbConnectionInfo_URLGLOBALS, getWebappPath)), this->PACKAGE), StringUtil_getInstance()->EMPTY_STRING);
        Directory_create(this->directory, PATH);
        AbPath* FILEABPATH = AbPath_new(java_concat(java_string_of(JAVA_CALL(DbConnectionInfo_URLGLOBALS, getWebappPath)), this->PACKAGE), this->initFileName);
        JAVA_TRY {
            AbFile* newFile = AbFile_createAbFileFromAbPath(FILEABPATH);
            AbFile_createNewFile(newFile);
            AbDataOutputStream* dataOutputStream = DataOutputStreamFactory_getInstanceForAbFile(DataOutputStreamFactory_getInstance(), newFile);
            JAVA_TRY {
                int8_t* cryptedJdbcDriver = JAVA_CALL(WeakCrypt_encrypt(WeakCrypt_new(1), DbInitInfo_getJdbcDriver(this)), getBytes);
                int8_t* cryptedName = JAVA_CALL(WeakCrypt_encrypt(WeakCrypt_new(2), DbInitInfo_getName(this)), getBytes);
                int8_t* cryptedUserName = JAVA_CALL(WeakCrypt_encrypt(WeakCrypt_new(3), DbInitInfo_getUserName(this)), getBytes);
                int8_t* cryptedPassword = JAVA_CALL(WeakCrypt_encrypt(WeakCrypt_new(4), DbInitInfo_getPassword(this)), getBytes);
                int8_t* cryptedSchema = JAVA_CALL(WeakCrypt_encrypt(WeakCrypt_new(5), DbInitInfo_getSchema(this)), getBytes);
                int8_t* cryptedServer = JAVA_CALL(WeakCrypt_encrypt(WeakCrypt_new(6), DbInitInfo_getServer(this)), getBytes);
                int8_t* cryptedPort = JAVA_CALL(WeakCrypt_encrypt(WeakCrypt_new(7), DbInitInfo_getPort(this)), getBytes);
                AbDataOutputStream_writeUTF(dataOutputStream, DatabaseEncoder_encode(cryptedJdbcDriver));
                AbDataOutputStream_writeUTF(dataOutputStream, DatabaseEncoder_encode(cryptedName));
                AbDataOutputStream_writeUTF(dataOutputStream, DatabaseEncoder_encode(cryptedUserName));
                AbDataOutputStream_writeUTF(dataOutputStream, DatabaseEncoder_encode(cryptedPassword));
                AbDataOutputStream_writeUTF(dataOutputStream, DatabaseEncoder_encode(cryptedSchema));
                AbDataOutputStream_writeUTF(dataOutputStream, DatabaseEncoder_encode(cryptedServer));
                AbDataOutputStream_writeUTF(dataOutputStream, DatabaseEncoder_encode(cryptedPort));
                this->hasRead = false;
            } JAVA_FINALLY {
                StreamUtil_close(StreamUtil_getInstance(), dataOutputStream);
            } JAVA_END_TRY;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADERERROR)) {
                PreLogUtil_putOE(java_concat("Failed Write: ", AbPath_toString(FILEABPATH)), this, "write", e);
            }
        } JAVA_END_TRY;
}


// throws Exception
static void DbInitInfo_load(DbInitInfo* this) {
        AbPath* FILEABPATH = AbPath_new(java_concat(java_string_of(JAVA_CALL(DbConnectionInfo_URLGLOBALS, getWebappPath)), this->PACKAGE), this->initFileName);
        JAVA_TRY {
            AbFile* file = AbFile_createAbFileFromAbPath(FILEABPATH);
            if (AbFile_isFile(file)) {
                AbFileInputStream* iFile = AbFileInputStream_createFromAbFile(file);
                AbDataInputStream* iData = AbDataInputStream_new(iFile);
                JAVA_TRY {
                    const char* decryptedJdbcDriver = java_string_new(DatabaseEncoder_decode(AbDataInputStream_readUTF(iData)));
                    const char* decryptedName = java_string_new(DatabaseEncoder_decode(AbDataInputStream_readUTF(iData)));
                    const char* decryptedUserName = java_string_new(DatabaseEncoder_decode(AbDataInputStream_readUTF(iData)));
                    const char* decryptedPassword = java_string_new(DatabaseEncoder_decode(AbDataInputStream_readUTF(iData)));
                    const char* decryptedSchema = java_string_new(DatabaseEncoder_decode(AbDataInputStream_readUTF(iData)));
                    const char* decryptedServer = java_string_new(DatabaseEncoder_decode(AbDataInputStream_readUTF(iData)));
                    const char* decryptedPort = java_string_new(DatabaseEncoder_decode(AbDataInputStream_readUTF(iData)));
                    DbInitInfo_setJdbcDriver(this, WeakCrypt_decrypt(WeakCrypt_new(1), decryptedJdbcDriver));
                    DbInitInfo_setName(this, WeakCrypt_decrypt(WeakCrypt_new(2), decryptedName));
                    DbInitInfo_setUserName(this, WeakCrypt_decrypt(WeakCrypt_new(3), decryptedUserName));
                    DbInitInfo_setPassword(this, WeakCrypt_decrypt(WeakCrypt_new(4), decryptedPassword));
                    DbInitInfo_setSchema(this, WeakCrypt_decrypt(WeakCrypt_new(5), decryptedSchema));
                    DbInitInfo_setServer(this, WeakCrypt_decrypt(WeakCrypt_new(6), decryptedServer));
                    DbInitInfo_setPort(this, WeakCrypt_decrypt(WeakCrypt_new(7), decryptedPort));
                    StringUtil* stringUtil = StringUtil_getInstance();
                } JAVA_FINALLY {
                    StreamUtil_close(StreamUtil_getInstance(), iData);
                } JAVA_END_TRY;
            } else {
                this->hasRead = false;
                if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADER)) {
                    PreLogUtil_put(java_concat("Not a File - Failed Loading: ", AbPath_toString(FILEABPATH)), this, this->commonStrings->LOAD);
                }
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADERERROR)) {
                PreLogUtil_putOE(java_concat("Failed Loading: ", AbPath_toString(FILEABPATH)), this, this->commonStrings->LOAD, e);
            }
        } JAVA_END_TRY;
}


void DbInitInfo_setHasRead(DbInitInfo* this, bool value) {
        this->hasRead = value;
}


static void DbInitInfo_updateIfNeeded(DbInitInfo* this) {
        JAVA_TRY {
            if (!this->hasRead) {
                this->hasRead = true;
                DbInitInfo_load(this);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADERERROR)) {
                PreLogUtil_putOE(this->commonStrings->EXCEPTION, this, "updateIfNeeded", e);
            }
        } JAVA_END_TRY;
}


const char* DbInitInfo_getName(DbInitInfo* this) {
        DbInitInfo_updateIfNeeded(this);
        if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADER)) {
            PreLogUtil_put(java_concat("Name: ", DbConnectionInfo_getName((&this->base))), this, "getName");
        }
        return DbConnectionInfo_getName((&this->base));
}


const char* DbInitInfo_getUserName(DbInitInfo* this) {
        DbInitInfo_updateIfNeeded(this);
        if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADER)) {
            PreLogUtil_put(java_concat("Name: ", java_string_of(DbConnectionInfo_getUserName((&this->base)))), this, "getUserName");
        }
        return DbConnectionInfo_getUserName((&this->base));
}


const char* DbInitInfo_getPassword(DbInitInfo* this) {
        DbInitInfo_updateIfNeeded(this);
        return DbConnectionInfo_getPassword((&this->base));
}


const char* DbInitInfo_getSchema(DbInitInfo* this) {
        DbInitInfo_updateIfNeeded(this);
        return DbConnectionInfo_getSchema((&this->base));
}


const char* DbInitInfo_getServer(DbInitInfo* this) {
        DbInitInfo_updateIfNeeded(this);
        return DbConnectionInfo_getServer((&this->base));
}


const char* DbInitInfo_getPort(DbInitInfo* this) {
        DbInitInfo_updateIfNeeded(this);
        return DbConnectionInfo_getPort((&this->base));
}

