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
// #include "java/util/HashMap.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/java/bool/BooleanUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct InitInfo InitInfo;
struct InitInfo {
    const char* TESTING;
    const char* MAINPATH;
    const char* TESTHTMLPATH;
    const char* testing;
    AbPath* mainPath;
    AbPath* testHtmlPath;
    bool hasRead;
};

static InitInfo* InitInfo_instance;

InitInfo* InitInfo_new(void);
InitInfo* InitInfo_getInstance(void);

void InitInfo_init(InitInfo* this);
void InitInfo_set(InitInfo* this);
void InitInfo_set(InitInfo* this, HashMap* hashMap);
static void InitInfo_get(InitInfo* this);
void InitInfo_setHasRead(InitInfo* this, bool value);
static void InitInfo_updateIfNeeded(InitInfo* this);
bool InitInfo_isTesting(InitInfo* this);
const char* InitInfo_getTesting(InitInfo* this);
const char* InitInfo_getTestHtmlPath(InitInfo* this);
const char* InitInfo_getMainPath(InitInfo* this);
void InitInfo_setTesting(InitInfo* this, const char* value);
void InitInfo_setTestHtmlPath(InitInfo* this, AbPath* value);
void InitInfo_setMainPath(InitInfo* this, AbPath* value);
bool InitInfo_isMainPathValid(InitInfo* this, AbPath* abPath);
bool InitInfo_isTestHtmlPathValid(InitInfo* this, AbPath* abPath);
bool InitInfo_isTestingValid(InitInfo* this, const char* testing);
HashMap* InitInfo_toHashMap(InitInfo* this);

// Static fields with runtime initializers: call this once at startup
void InitInfo_staticInit(void) {
    InitInfo_instance = InitInfo_new();
}

static void InitInfo_initFields(InitInfo* this) {
    this->TESTING = "TESTING";
    this->MAINPATH = "MAINPATH";
    this->TESTHTMLPATH = "TESTHTMLPATH";
    this->testing = nullptr;
    this->mainPath = nullptr;
    this->testHtmlPath = nullptr;
    this->hasRead = false;
}


InitInfo* InitInfo_getInstance(void) {
        return InitInfo_instance;
}


void InitInfo_init(InitInfo* this) {
    InitInfo_initFields(this);
}

InitInfo* InitInfo_new(void) {
    InitInfo* this = calloc(1, sizeof(InitInfo));
    InitInfo_init(this);
    return this;
}


// throws InitException
// synchronized
void InitInfo_set(InitInfo* this) {
        JAVA_TRY {
            InitInfoEntity* initInfoEntity = InitInfoEntity_new();
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADER)) {
                PreLogUtil_put("created entity", "InitInfo", "set()");
            }
            if (!InitInfoEntity_is(initInfoEntity)) {
                if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADER)) {
                    PreLogUtil_put("adding", "InitInfo", "set()");
                }
                InitInfoEntity_add(initInfoEntity);
            } else {
                if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADER)) {
                    PreLogUtil_put("update", "InitInfo", "set()");
                }
                InitInfoEntity_update(initInfoEntity);
            }
            this->hasRead = false;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADERERROR)) {
                PreLogUtil_putOE("error", "InitInfo", "set()", e);
            }
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
// synchronized
void InitInfo_set(InitInfo* this, HashMap* hashMap) {
        JAVA_TRY {
            this->testing = ((const char*) HashMap_get(hashMap, this->TESTING));
            this->mainPath = AbPath_new(((const char*) HashMap_get(hashMap, this->MAINPATH)), StringUtil_getInstance()->EMPTY_STRING);
            this->testHtmlPath = AbPath_new(((const char*) HashMap_get(hashMap, this->TESTHTMLPATH)), StringUtil_getInstance()->EMPTY_STRING);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADERERROR)) {
                PreLogUtil_putOE("error", "InitInfo", "set()", e);
            }
        } JAVA_END_TRY;
}


// synchronized
static void InitInfo_get(InitInfo* this) {
        JAVA_TRY {
            this->testing = nullptr;
            this->mainPath = nullptr;
            this->testHtmlPath = nullptr;
            InitInfoEntity* initInfoEntity = InitInfoEntity_new();
            InitInfoEntity_get(initInfoEntity);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADERERROR)) {
                PreLogUtil_putOE("error", "InitInfo", "set()", e);
            }
            return;
        } JAVA_END_TRY;
}


// synchronized
void InitInfo_setHasRead(InitInfo* this, bool value) {
        this->hasRead = value;
}


// synchronized
static void InitInfo_updateIfNeeded(InitInfo* this) {
        JAVA_TRY {
            if (!this->hasRead) {
                this->hasRead = true;
                InitInfo_get(this);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADERERROR)) {
                PreLogUtil_putOE("error", "InitInfo", "updateIfNeeded()", e);
            }
            return;
        } JAVA_END_TRY;
}


bool InitInfo_isTesting(InitInfo* this) {
        JAVA_TRY {
            InitInfo_updateIfNeeded(this);
            return BooleanUtil_getFromString(BooleanUtil_getInstance(), this->testing);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADERERROR)) {
                PreLogUtil_putOE("error", "InitInfo", "updateIfNeeded()", e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* InitInfo_getTesting(InitInfo* this) {
        InitInfo_updateIfNeeded(this);
        return this->testing;
}


const char* InitInfo_getTestHtmlPath(InitInfo* this) {
        InitInfo_updateIfNeeded(this);
        if (this->testHtmlPath != nullptr) {
            return AbPath_toString(this->testHtmlPath);
        } else {
            return nullptr;
        }
}


const char* InitInfo_getMainPath(InitInfo* this) {
        InitInfo_updateIfNeeded(this);
        if (this->mainPath != nullptr) {
            return AbPath_toString(this->mainPath);
        } else {
            return nullptr;
        }
}


void InitInfo_setTesting(InitInfo* this, const char* value) {
        this->testing = value;
}


void InitInfo_setTestHtmlPath(InitInfo* this, AbPath* value) {
        this->testHtmlPath = value;
}


void InitInfo_setMainPath(InitInfo* this, AbPath* value) {
        this->mainPath = value;
}


bool InitInfo_isMainPathValid(InitInfo* this, AbPath* abPath) {
        return true;
}


bool InitInfo_isTestHtmlPathValid(InitInfo* this, AbPath* abPath) {
        return true;
}


// throws Exception
bool InitInfo_isTestingValid(InitInfo* this, const char* testing) {
        return BooleanUtil_isStringBoolean(BooleanUtil_getInstance(), testing);
}


HashMap* InitInfo_toHashMap(InitInfo* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, this->TESTING, InitInfo_getTesting(this));
        HashMap_put(hashMap, this->MAINPATH, InitInfo_getMainPath(this));
        HashMap_put(hashMap, this->TESTHTMLPATH, InitInfo_getTestHtmlPath(this));
        return hashMap;
}

