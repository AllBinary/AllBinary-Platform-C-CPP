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
#include "org/allbinary/globals/PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/AbDataInputStream.h"
#include "org/allbinary/logic/io/AbDataOutputStream.h"
#include "org/allbinary/logic/io/AbFileLocalInputStream.h"
#include "org/allbinary/logic/io/DataOutputStreamFactory.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/crypt/DatabaseEncoder.h"
#include "org/allbinary/logic/system/security/crypt/WeakCrypt.h"

typedef struct InstallerInfo InstallerInfo;
struct InstallerInfo {
    LogUtil* logUtil;
};

static InstallerInfo* InstallerInfo_instance;
static const char* InstallerInfo_INITFILENAME = "installerdata.dat";
static const char* InstallerInfo_PACKAGE;
static const char* InstallerInfo_userName;
static const char* InstallerInfo_password;
static bool InstallerInfo_hasRead = false;

InstallerInfo* InstallerInfo_new(void);

void InstallerInfo_init(InstallerInfo* this);
void InstallerInfo_write(InstallerInfo* this);
static void InstallerInfo_read(InstallerInfo* this);
void InstallerInfo_setHasRead(bool value);
void InstallerInfo_setUserName(InstallerInfo* this, const char* userName);
void InstallerInfo_setPassword(InstallerInfo* this, const char* password);
static void InstallerInfo_updateIfNeeded(InstallerInfo* this);
const char* InstallerInfo_getUserName(InstallerInfo* this);
const char* InstallerInfo_getPassword(InstallerInfo* this);
bool InstallerInfo_isValid(InstallerInfo* this, const char* userName, const char* password);

// Static fields with runtime initializers: call this once at startup
void InstallerInfo_staticInit(void) {
    InstallerInfo_instance = InstallerInfo_new();
    InstallerInfo_PACKAGE = JAVA_CALL(_PATH_GLOBALS, getInstance)->INIT_PATH;
    InstallerInfo_userName = StringUtil_getInstance()->EMPTY_STRING;
    InstallerInfo_password = StringUtil_getInstance()->EMPTY_STRING;
}

static void InstallerInfo_initFields(InstallerInfo* this) {
    this->logUtil = LogUtil_getInstance();
}


void InstallerInfo_init(InstallerInfo* this) {
    InstallerInfo_initFields(this);
}

InstallerInfo* InstallerInfo_new(void) {
    InstallerInfo* this = calloc(1, sizeof(InstallerInfo));
    InstallerInfo_init(this);
    return this;
}


// throws Exception
// synchronized
void InstallerInfo_write(InstallerInfo* this) {
        AbPath* FILEABPATH = AbPath_new(JAVA_CALL(_URLGLOBALS, getMainPath) + InstallerInfo_PACKAGE, InstallerInfo_INITFILENAME);
        JAVA_TRY {
            AbFile* newFile = AbFile_createAbFileFromAbPath(FILEABPATH);
            AbFile_createNewFile(newFile);
            AbDataOutputStream* dataOutputStream = DataOutputStreamFactory_getInstanceForAbFile(DataOutputStreamFactory_getInstance(), newFile);
            int8_t* cryptedUserName = JAVA_CALL(WeakCrypt_encrypt(WeakCrypt_new(1), InstallerInfo_getUserName(this)), getBytes);
            int8_t* cryptedPassword = JAVA_CALL(WeakCrypt_encrypt(WeakCrypt_new(2), InstallerInfo_getPassword(this)), getBytes);
            AbDataOutputStream_writeUTF(dataOutputStream, DatabaseEncoder_encode(cryptedUserName));
            AbDataOutputStream_writeUTF(dataOutputStream, DatabaseEncoder_encode(cryptedPassword));
            InstallerInfo_hasRead = false;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRELOADERERROR)) {
                LogUtil_putF(this->logUtil, "Failed", this, "write");
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// synchronized
static void InstallerInfo_read(InstallerInfo* this) {
        AbPath* FILEABPATH = AbPath_new(JAVA_CALL(_URLGLOBALS, getMainPath) + InstallerInfo_PACKAGE, InstallerInfo_INITFILENAME);
        JAVA_TRY {
            AbFile* file = AbFile_createAbFileFromAbPath(FILEABPATH);
            if (AbFile_isFile(file)) {
                AbFileLocalInputStream* iFile = AbFileLocalInputStream_new(file);
                AbDataInputStream* iData = AbDataInputStream_new(iFile);
                const char* decryptedUserName = java_string_new(DatabaseEncoder_decode(AbDataInputStream_readUTF(iData)));
                const char* decryptedPassword = java_string_new(DatabaseEncoder_decode(AbDataInputStream_readUTF(iData)));
                InstallerInfo_setUserName(this, WeakCrypt_decrypt(WeakCrypt_new(1), decryptedUserName));
                InstallerInfo_setPassword(this, WeakCrypt_decrypt(WeakCrypt_new(2), decryptedPassword));
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRELOADER)) {
                    LogUtil_putF(this->logUtil, java_concat("Not a File - Failed Loading: ", AbPath_toString(FILEABPATH)), this, "read");
                }
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRELOADERERROR)) {
                LogUtil_putF(this->logUtil, "Failed", this, "read");
            }
        } JAVA_END_TRY;
}


// synchronized
void InstallerInfo_setHasRead(bool value) {
        InstallerInfo_hasRead = value;
}


void InstallerInfo_setUserName(InstallerInfo* this, const char* userName) {
        InstallerInfo_userName = userName;
}


void InstallerInfo_setPassword(InstallerInfo* this, const char* password) {
        InstallerInfo_password = password;
}


// throws Exception
// synchronized
static void InstallerInfo_updateIfNeeded(InstallerInfo* this) {
        if (!InstallerInfo_hasRead) {
            InstallerInfo_hasRead = true;
            InstallerInfo_read(this);
            if (InstallerInfo_userName == nullptr || InstallerInfo_password == nullptr) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRELOADER)) {
                    LogUtil_putF(this->logUtil, "Failed", this, "updateIfNeeded");
                }
            }
        }
}


// throws Exception
const char* InstallerInfo_getUserName(InstallerInfo* this) {
        InstallerInfo_updateIfNeeded(this);
        return InstallerInfo_userName;
}


// throws Exception
const char* InstallerInfo_getPassword(InstallerInfo* this) {
        InstallerInfo_updateIfNeeded(this);
        return InstallerInfo_password;
}


// throws Exception
bool InstallerInfo_isValid(InstallerInfo* this, const char* userName, const char* password) {
        InstallerInfo_updateIfNeeded(this);
        if (InstallerInfo_userName != nullptr && strcmp(InstallerInfo_userName, userName) == 0 && InstallerInfo_password != nullptr && strcmp(InstallerInfo_password, password) == 0) {
            return true;
        }
        return false;
}

