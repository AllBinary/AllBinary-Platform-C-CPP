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
// package org.allbinary.business.context.modules.storefront

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Calendar.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/context/configuration/ContextConfiguration.h"
#include "org/allbinary/business/context/configuration/ContextConfigurationDomDocumentMapping.h"
#include "org/allbinary/business/context/configuration/ContextConfigurationInterface.h"
#include "org/allbinary/business/context/configuration/ContextConfigurationInterfaceFactory.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/request/RequestParams.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/FileUtil.h"
#include "org/allbinary/logic/io/file/directory/Directory.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/io/path/AbPathUtil.h"
#include "org/allbinary/logic/string/SpecialCharacterUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/string/regex/replace/Replace.h"
#include "org/allbinary/logic/string/tokens/Tokenizer.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/apache/commons/lang3/StringEscapeUtils.h"
#include "org/w3c/dom/Document.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"

typedef struct StoreFront StoreFront;
struct StoreFront {
    StoreFrontInterface StoreFrontInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    Directory* directory;
    StringUtil* stringUtil;
    AbPathUtil* abPathUtil;
    const char* name;
    const char* basketName;
    const char* homeHostName;
    AbPath* homeHostNamePath;
    const char* hostName;
    AbPath* hostNamePath;
    const char* testHomeHostName;
    AbPath* testHomeHostNamePath;
    const char* testHostName;
    AbPath* testHostNamePath;
    AbPath* imagePath;
    AbPath* staticPath;
    AbPath* categoryPath;
    const char* inventoryControl;
    ContextConfigurationInterface* contextConfigurationInterface;
    const char* subStores;
    const char* tagLocation;
    const char* packageLocation;
    const char* ftp;
    AbPath* ftpPath;
    const char* ftpUserName;
    const char* ftpPassword;
    const char* testFtp;
    AbPath* testFtpPath;
    const char* testFtpUserName;
    const char* testFtpPassword;
    const char* timeCreated;
    const char* lastModified;
    int32_t MINCHAR;
    int32_t MINSTORENAMELENGTH;
    int32_t MAXCHAR;
    const char* EMPTY_STRING;
    const char** ONE_EMPTY_STRING_ARRAY;
};

static const char* StoreFront_RESOURCES;

StoreFront* StoreFront_new(void);

void StoreFront_init(StoreFront* this);

StoreFront* StoreFront_new1(HttpServletRequest* request);
void StoreFront_init1(StoreFront* this, HttpServletRequest* request);

StoreFront* StoreFront_new1(HashMap* hashMap);
void StoreFront_init1(StoreFront* this, HashMap* hashMap);
static bool StoreFront_isColumn(StoreFront* this, const char* columnName);
static AbPath* StoreFront_createPath(StoreFront* this, const char* key, HashMap* hashMap);
static AbPath* StoreFront_createPath(StoreFront* this, const char* append, const char* key, HashMap* hashMap);
static const char* StoreFront_get(StoreFront* this, const char* key, HashMap* hashMap);
static const char* StoreFront_create(StoreFront* this, const char* append, const char* key, HashMap* hashMap);
static void StoreFront_getFormData(StoreFront* this, HashMap* storeHashMap);
bool StoreFront_isNameValid(StoreFront* this);
bool StoreFront_isValid(StoreFront* this);
const char* StoreFront_nameValidationInfo(StoreFront* this);
const char* StoreFront_validationInfo(StoreFront* this);
const char* StoreFront_getTestHtmlPath(StoreFront* this);
const char* StoreFront_getCurrentHostName(StoreFront* this);
const char* StoreFront_getCurrentHostNamePath(StoreFront* this);
const char* StoreFront_getCurrentHomeHostName(StoreFront* this);
const char* StoreFront_getCurrentHomeHostNamePath(StoreFront* this);
const char* StoreFront_getName(StoreFront* this);
const char* StoreFront_getBasketName(StoreFront* this);
const char* StoreFront_getHomeHostName(StoreFront* this);
const char* StoreFront_getHomeHostNamePath(StoreFront* this);
const char* StoreFront_getHostName(StoreFront* this);
const char* StoreFront_getHostNamePath(StoreFront* this);
const char* StoreFront_getTestHomeHostName(StoreFront* this);
const char* StoreFront_getTestHomeHostNamePath(StoreFront* this);
const char* StoreFront_getTestHostName(StoreFront* this);
const char* StoreFront_getTestHostNamePath(StoreFront* this);
const char* StoreFront_getStaticPath(StoreFront* this);
const char* StoreFront_getCategoryPath(StoreFront* this);
const char* StoreFront_getInventoryControl(StoreFront* this);
BasicArrayList* StoreFront_getSubStores(StoreFront* this);
const char* StoreFront_getTagLocation(StoreFront* this);
const char* StoreFront_getPackageLocation(StoreFront* this);
const char* StoreFront_getFtp(StoreFront* this);
const char* StoreFront_getFtpUserName(StoreFront* this);
const char* StoreFront_getFtpPassword(StoreFront* this);
const char* StoreFront_getTestFtp(StoreFront* this);
const char* StoreFront_getTestFtpUserName(StoreFront* this);
const char* StoreFront_getTestFtpPassword(StoreFront* this);
const char* StoreFront_getFtpPath(StoreFront* this);
const char* StoreFront_getTestFtpPath(StoreFront* this);
const char* StoreFront_getTimeCreated(StoreFront* this);
const char* StoreFront_getLastModified(StoreFront* this);
void StoreFront_setName(StoreFront* this, const char* value);
void StoreFront_setBasketName(StoreFront* this, const char* value);
void StoreFront_setHomeHostName(StoreFront* this, const char* value);
void StoreFront_setHomeHostNamePath(StoreFront* this, const char* value);
void StoreFront_setHostName(StoreFront* this, const char* value);
void StoreFront_setHostNamePath(StoreFront* this, const char* value);
void StoreFront_setTestHomeHostName(StoreFront* this, const char* value);
void StoreFront_setTestHomeHostNamePath(StoreFront* this, const char* value);
void StoreFront_setTestHostName(StoreFront* this, const char* value);
void StoreFront_setTestHostNamePath(StoreFront* this, const char* value);
void StoreFront_setImagePath(StoreFront* this, const char* value);
void StoreFront_setStaticPath(StoreFront* this, const char* value);
void StoreFront_setCategoryPath(StoreFront* this, const char* value);
void StoreFront_setSubStores(StoreFront* this, const char* value);
void StoreFront_setTagLocation(StoreFront* this, const char* value);
void StoreFront_setPackageLocation(StoreFront* this, const char* value);
void StoreFront_setInventoryControl(StoreFront* this, const char* value);
void StoreFront_getPackageLocation(StoreFront* this, const char* value);
void StoreFront_setFtp(StoreFront* this, const char* value);
void StoreFront_setFtpUserName(StoreFront* this, const char* value);
void StoreFront_setFtpPassword(StoreFront* this, const char* value);
void StoreFront_setTestFtp(StoreFront* this, const char* value);
void StoreFront_setTestFtpUserName(StoreFront* this, const char* value);
void StoreFront_setTestFtpPassword(StoreFront* this, const char* value);
void StoreFront_setTimeCreated(StoreFront* this, const char* value);
void StoreFront_setLastModified(StoreFront* this, const char* value);
void StoreFront_setFtpPath(StoreFront* this, const char* value);
void StoreFront_setTestFtpPath(StoreFront* this, const char* value);
static bool StoreFront_createDirectories(StoreFront* this);
void StoreFront_install(StoreFront* this, int32_t current, int32_t total);
static void StoreFront_installViews(StoreFront* this, AbPath* fromDirectoryAbPath, AbPath* toDirectoryAbPath, int32_t current, int32_t total);
static void StoreFront_installResources(StoreFront* this, AbPath* fromDirectoryAbPath, int32_t current, int32_t total);
static void StoreFront_installMedia(StoreFront* this, AbPath* fromDirectoryAbPath, int32_t current, int32_t total);
BasicArrayList* StoreFront_toVector(StoreFront* this);
HashMap* StoreFront_toHashMap(StoreFront* this);
Any* StoreFront_getKey(StoreFront* this);
ContextConfigurationInterface* StoreFront_getContextConfigurationInterface(StoreFront* this);
void StoreFront_setContextConfigurationInterface(StoreFront* this, ContextConfigurationInterface* contextConfigurationInterface);

// Static fields with runtime initializers: call this once at startup
void StoreFront_staticInit(void) {
    StoreFront_RESOURCES = java_concat(" Resources", java_string_of(AbPathData_getInstance()->SEPARATOR));
}

static void StoreFront_initFields(StoreFront* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->directory = Directory_getInstance();
    this->stringUtil = StringUtil_getInstance();
    this->abPathUtil = AbPathUtil_getInstance();
    this->name = this->stringUtil->EMPTY_STRING;
    this->basketName = this->stringUtil->EMPTY_STRING;
    this->homeHostName = this->stringUtil->EMPTY_STRING;
    this->homeHostNamePath = this->abPathUtil->NO_ABPATH;
    this->hostName = this->stringUtil->EMPTY_STRING;
    this->hostNamePath = this->abPathUtil->NO_ABPATH;
    this->testHomeHostName = this->stringUtil->EMPTY_STRING;
    this->testHomeHostNamePath = this->abPathUtil->NO_ABPATH;
    this->testHostName = this->stringUtil->EMPTY_STRING;
    this->testHostNamePath = this->abPathUtil->NO_ABPATH;
    this->imagePath = this->abPathUtil->NO_ABPATH;
    this->staticPath = this->abPathUtil->NO_ABPATH;
    this->categoryPath = this->abPathUtil->NO_ABPATH;
    this->inventoryControl = this->stringUtil->EMPTY_STRING;
    
    this->subStores = this->stringUtil->EMPTY_STRING;
    this->tagLocation = this->stringUtil->EMPTY_STRING;
    this->packageLocation = this->stringUtil->EMPTY_STRING;
    this->ftp = this->stringUtil->EMPTY_STRING;
    this->ftpPath = this->abPathUtil->NO_ABPATH;
    this->ftpUserName = this->stringUtil->EMPTY_STRING;
    this->ftpPassword = this->stringUtil->EMPTY_STRING;
    this->testFtp = this->stringUtil->EMPTY_STRING;
    this->testFtpPath = this->abPathUtil->NO_ABPATH;
    this->testFtpUserName = this->stringUtil->EMPTY_STRING;
    this->testFtpPassword = this->stringUtil->EMPTY_STRING;
    this->timeCreated = this->stringUtil->EMPTY_STRING;
    this->lastModified = this->stringUtil->EMPTY_STRING;
    this->MINCHAR = 0;
    this->MINSTORENAMELENGTH = 1;
    this->MAXCHAR = 255;
    this->EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
    this->ONE_EMPTY_STRING_ARRAY = StringUtil_getInstance()->ONE_EMPTY_STRING_ARRAY;
}


void StoreFront_init(StoreFront* this) {
    StoreFront_initFields(this);
        this->contextConfigurationInterface = ContextConfiguration_new();
}

StoreFront* StoreFront_new(void) {
    StoreFront* this = calloc(1, sizeof(StoreFront));
    StoreFront_init(this);
    return this;
}


void StoreFront_init1(StoreFront* this, HttpServletRequest* request) {
    StoreFront_initFields(this);
        StoreFront_getFormData(this, RequestParams_toHashMap(RequestParams_new(request)));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            LogUtil_putF(this->logUtil, "TWB- needs update for adding and updating context configuration - currently defaults to admin context config", this, "StoreFront");
        }
        StoreFront_setContextConfigurationInterface(this, ContextConfigurationInterfaceFactory_getInstance(ContextConfigurationInterfaceFactory_getInstance(), "Admin"));
}

StoreFront* StoreFront_new1(HttpServletRequest* request) {
    StoreFront* this = calloc(1, sizeof(StoreFront));
    StoreFront_init1(this, request);
    return this;
}


void StoreFront_init1(StoreFront* this, HashMap* hashMap) {
    StoreFront_initFields(this);
        StoreFront_getFormData(this, hashMap);
        const char* domDocumentString = ((const char*) HashMap_get(hashMap, StoreFrontData_getInstance()->CONFIGURATION));
        if (domDocumentString == nullptr) {
            Document* document = DomDocumentHelper_create(domDocumentString);
            StoreFront_setContextConfigurationInterface(this, ContextConfigurationInterfaceFactory_getInstance(ContextConfigurationInterfaceFactory_getInstance(), document));
        }
}

StoreFront* StoreFront_new1(HashMap* hashMap) {
    StoreFront* this = calloc(1, sizeof(StoreFront));
    StoreFront_init1(this, hashMap);
    return this;
}


static bool StoreFront_isColumn(StoreFront* this, const char* columnName) {
        if (strcmp(columnName, StoreFrontData_getInstance()->NAME) == 0 || strcmp(columnName, UserData_MAINEMAIL) == 0) {
            return true;
        } else {
            return false;
        }
}


// throws Exception
static AbPath* StoreFront_createPath(StoreFront* this, const char* key, HashMap* hashMap) {
        return AbPath_new(StoreFront_create(this, this->EMPTY_STRING, key, hashMap), StringUtil_getInstance()->EMPTY_STRING);
}


// throws Exception
// Java overloaded method: C needs a different name
static AbPath* StoreFront_createPath(StoreFront* this, const char* append, const char* key, HashMap* hashMap) {
        return AbPath_new(StoreFront_create(this, append, key, hashMap), StringUtil_getInstance()->EMPTY_STRING);
}


static const char* StoreFront_get(StoreFront* this, const char* key, HashMap* hashMap) {
        return StoreFront_create(this, this->EMPTY_STRING, key, hashMap);
}


static const char* StoreFront_create(StoreFront* this, const char* append, const char* key, HashMap* hashMap) {
        const char* path = ((const char*) HashMap_get(hashMap, key));
        if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), path)) {
            return this->EMPTY_STRING;
        } else {
            if (StoreFront_isColumn(this, path)) {
                return java_concat(java_string_of(((const char*) HashMap_get(hashMap, path))), append);
            } else {
                return path;
            }
        }
}


// throws Exception
static void StoreFront_getFormData(StoreFront* this, HashMap* storeHashMap) {
        StoreFrontData* storeFrontData = StoreFrontData_getInstance();
        this->name = ((const char*) HashMap_get(storeHashMap, storeFrontData->NAME));
        this->basketName = ((const char*) HashMap_get(storeHashMap, storeFrontData->NAME));
        this->homeHostName = ((const char*) HashMap_get(storeHashMap, storeFrontData->HOMEHOSTNAME));
        this->homeHostNamePath = StoreFront_createPath(this, storeFrontData->HOMEHOSTNAMEPATH, storeHashMap);
        this->hostName = ((const char*) HashMap_get(storeHashMap, storeFrontData->HOSTNAME));
        this->hostNamePath = StoreFront_createPath(this, storeFrontData->HOSTNAMEPATH, storeHashMap);
        this->testHomeHostName = ((const char*) HashMap_get(storeHashMap, storeFrontData->TESTHOMEHOSTNAME));
        this->testHomeHostNamePath = StoreFront_createPath(this, storeFrontData->TESTHOMEHOSTNAMEPATH, storeHashMap);
        this->testHostName = ((const char*) HashMap_get(storeHashMap, storeFrontData->TESTHOSTNAME));
        this->testHostNamePath = StoreFront_createPath(this, storeFrontData->TESTHOSTNAMEPATH, storeHashMap);
        this->imagePath = StoreFront_createPath(this, StoreFront_RESOURCES, storeFrontData->IMAGEPATH, storeHashMap);
        this->staticPath = StoreFront_createPath(this, java_concat(" Products", java_string_of(AbPathData_getInstance()->SEPARATOR)), storeFrontData->STATICPATH, storeHashMap);
        this->categoryPath = StoreFront_createPath(this, StoreFront_RESOURCES, storeFrontData->CATEGORYPATH, storeHashMap);
        this->inventoryControl = ((const char*) HashMap_get(storeHashMap, storeFrontData->INVENTORYCONTROL));
        this->subStores = ((const char*) HashMap_get(storeHashMap, storeFrontData->SUBSTORES));
        this->tagLocation = ((const char*) HashMap_get(storeHashMap, storeFrontData->TAGLOCATION));
        this->packageLocation = ((const char*) HashMap_get(storeHashMap, storeFrontData->PACKAGELOCATION));
        this->ftp = ((const char*) HashMap_get(storeHashMap, storeFrontData->FTP));
        this->ftpPath = StoreFront_createPath(this, storeFrontData->FTPPATH, storeHashMap);
        this->ftpUserName = ((const char*) HashMap_get(storeHashMap, storeFrontData->FTPUSERNAME));
        this->ftpPassword = ((const char*) HashMap_get(storeHashMap, storeFrontData->FTPPASSWORD));
        this->testFtp = ((const char*) HashMap_get(storeHashMap, storeFrontData->TESTFTP));
        this->testFtpPath = StoreFront_createPath(this, storeFrontData->TESTFTPPATH, storeHashMap);
        this->testFtpUserName = ((const char*) HashMap_get(storeHashMap, storeFrontData->TESTFTPUSERNAME));
        this->testFtpPassword = ((const char*) HashMap_get(storeHashMap, storeFrontData->TESTFTPPASSWORD));
        this->timeCreated = ((const char*) HashMap_get(storeHashMap, EntryData_getInstance()->TIMECREATED));
        this->lastModified = ((const char*) HashMap_get(storeHashMap, EntryData_getInstance()->LASTMODIFIED));
}


bool StoreFront_isNameValid(StoreFront* this) {
        if (!StringValidationUtil_isValidRequired(StringValidationUtil_getInstance(), this->name, this->MINSTORENAMELENGTH, this->MAXCHAR)) {
            return false;
        } else {
            bool isEscapedCharactersContained = false;
            const char* storeNameEscaped = StringEscapeUtils_escapeHtml3(this->name);
            if (strcmp(this->name, storeNameEscaped) != 0) {
                isEscapedCharactersContained = true;
            }
            StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
            bool isSpacesContained = false;
            if (StringValidationUtil_containsSpaces(stringValidationUtil, this->name)) {
                isSpacesContained = true;
            }
            if (isSpacesContained || isEscapedCharactersContained) {
                HashMap* hashMap = SpecialCharacterUtil_getHashMap();
                HashMap_put(hashMap, ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ CommonSeps_getInstance()->SPACE }) / sizeof(const char*), (const char*[]){ CommonSeps_getInstance()->SPACE })), this->ONE_EMPTY_STRING_ARRAY);
                this->name = Replace_all(Replace_new(hashMap), this->name);
            }
        }
        return true;
}


bool StoreFront_isValid(StoreFront* this) {
        bool valid = true;
        valid = StoreFront_isNameValid(this);
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->basketName, this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->homeHostName, this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, AbPath_toString(this->homeHostNamePath), this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->hostName, this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, AbPath_toString(this->hostNamePath), this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->testHomeHostName, this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, AbPath_toString(this->testHomeHostNamePath), this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->testHostName, this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, AbPath_toString(this->testHostNamePath), this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, AbPath_toString(this->imagePath), this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, AbPath_toString(this->staticPath), this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, AbPath_toString(this->categoryPath), this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->inventoryControl, this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->subStores, this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->tagLocation, this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->packageLocation, this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->ftp, this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, AbPath_toString(this->ftpPath), this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->ftpUserName, this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->ftpPassword, this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->testFtp, this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, AbPath_toString(this->testFtpPath), this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->testFtpUserName, this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->testFtpPassword, this->MINCHAR, this->MAXCHAR)) {
            valid = false;
        }
        if (Boolean_booleanValue(valid) == true) {
            return true;
        } else {
            return false;
        }
}


const char* StoreFront_nameValidationInfo(StoreFront* this) {
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->name, this->MINCHAR, this->MAXCHAR)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Name is invalid. Must be < ");
            StringMaker_appendint(stringBuffer, this->MAXCHAR);
            StringMaker_append(stringBuffer, " and > 0 characters.<br>");
            return StringMaker_toString(stringBuffer);
        }
        return this->EMPTY_STRING;
}


const char* StoreFront_validationInfo(StoreFront* this) {
        JAVA_TRY {
            StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, StoreFront_nameValidationInfo(this));
            if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->basketName, this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, "Basket name is invalid. Must be < ");
                StringMaker_appendint(stringBuffer, this->MAXCHAR);
                StringMaker_append(stringBuffer, " and > 0 characters.<br>");
            }
            if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->homeHostName, this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, "Home host name is invalid. Must be < ");
                StringMaker_appendint(stringBuffer, this->MAXCHAR);
                StringMaker_append(stringBuffer, " and > 0 characters.<br>");
            }
            if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, AbPath_toString(this->homeHostNamePath), this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, "Home host name path is invalid. Must be < ");
                StringMaker_appendint(stringBuffer, this->MAXCHAR);
                StringMaker_append(stringBuffer, " and > 0 characters.<br>");
            }
            if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->hostName, this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, "Host name is invalid. Must be < ");
                StringMaker_appendint(stringBuffer, this->MAXCHAR);
                StringMaker_append(stringBuffer, " and > 0 characters.<br>");
            }
            if (!StringValidationUtil_isValidRequired(stringValidationUtil, AbPath_toString(this->hostNamePath), this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, "Host name path is invalid. Must be < ");
                StringMaker_appendint(stringBuffer, this->MAXCHAR);
                StringMaker_append(stringBuffer, " and > 0 characters.<br>");
            }
            if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->testHomeHostName, this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Test home host name is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, AbPath_toString(this->testHomeHostNamePath), this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Test home host name path is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->testHostName, this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Test host name is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, AbPath_toString(this->testHostNamePath), this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Test host name path is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidRequired(stringValidationUtil, AbPath_toString(this->imagePath), this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Image path is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidRequired(stringValidationUtil, AbPath_toString(this->staticPath), this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Static path is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidRequired(stringValidationUtil, AbPath_toString(this->categoryPath), this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Category path is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->inventoryControl, this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Inventory control is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->subStores, this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Sub stores is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->tagLocation, this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Tag location is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidRequired(stringValidationUtil, this->packageLocation, this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Package location is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->ftp, this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Ftp is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, AbPath_toString(this->ftpPath), this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Ftp path is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->ftpUserName, this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Ftp username is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->ftpPassword, this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Ftp password is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->testFtp, this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Test ftp is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, AbPath_toString(this->testFtpPath), this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Test ftp Path is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->testFtpUserName, this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Test ftp username is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            if (!StringValidationUtil_isValidNotRequired(stringValidationUtil, this->testFtpPassword, this->MINCHAR, this->MAXCHAR)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Test ftp password is invalid. Must be < ", java_string_of(this->MAXCHAR)), " and > 0 characters.<br>"));
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


const char* StoreFront_getTestHtmlPath(StoreFront* this) {
        return JAVA_CALL(org_allbinary->globals->URLGLOBALS, getTestHtmlPath) + StoreFront_getCurrentHostNamePath(this);
}


const char* StoreFront_getCurrentHostName(StoreFront* this) {
        const char* location = this->EMPTY_STRING;
        if (JAVA_CALL(org_allbinary->globals->URLGLOBALS, isTestingMode)) {
            location = StoreFront_getTestHostName(this);
        } else {
            location = StoreFront_getHostName(this);
        }
        return location;
}


const char* StoreFront_getCurrentHostNamePath(StoreFront* this) {
        const char* location = this->EMPTY_STRING;
        if (JAVA_CALL(org_allbinary->globals->URLGLOBALS, isTestingMode)) {
            location = StoreFront_getTestHostNamePath(this);
        } else {
            location = StoreFront_getHostNamePath(this);
        }
        return location;
}


const char* StoreFront_getCurrentHomeHostName(StoreFront* this) {
        const char* location = this->EMPTY_STRING;
        if (JAVA_CALL(org_allbinary->globals->URLGLOBALS, isTestingMode)) {
            location = StoreFront_getTestHomeHostName(this);
        } else {
            location = StoreFront_getHomeHostName(this);
        }
        return location;
}


const char* StoreFront_getCurrentHomeHostNamePath(StoreFront* this) {
        const char* location = this->EMPTY_STRING;
        if (JAVA_CALL(org_allbinary->globals->URLGLOBALS, isTestingMode)) {
            location = StoreFront_getTestHomeHostNamePath(this);
        } else {
            location = StoreFront_getHomeHostNamePath(this);
        }
        return location;
}


const char* StoreFront_getName(StoreFront* this) {
        return this->name;
}


const char* StoreFront_getBasketName(StoreFront* this) {
        return this->basketName;
}


const char* StoreFront_getHomeHostName(StoreFront* this) {
        return this->homeHostName;
}


const char* StoreFront_getHomeHostNamePath(StoreFront* this) {
        return AbPath_toString(this->homeHostNamePath);
}


const char* StoreFront_getHostName(StoreFront* this) {
        return this->hostName;
}


const char* StoreFront_getHostNamePath(StoreFront* this) {
        return AbPath_toString(this->hostNamePath);
}


const char* StoreFront_getTestHomeHostName(StoreFront* this) {
        return this->testHomeHostName;
}


const char* StoreFront_getTestHomeHostNamePath(StoreFront* this) {
        return AbPath_toString(this->testHomeHostNamePath);
}


const char* StoreFront_getTestHostName(StoreFront* this) {
        return this->testHostName;
}


const char* StoreFront_getTestHostNamePath(StoreFront* this) {
        return AbPath_toString(this->testHostNamePath);
}


const char* StoreFront_getStaticPath(StoreFront* this) {
        return AbPath_toString(this->staticPath);
}


const char* StoreFront_getCategoryPath(StoreFront* this) {
        return AbPath_toString(this->categoryPath);
}


const char* StoreFront_getInventoryControl(StoreFront* this) {
        return this->inventoryControl;
}


// throws Exception
BasicArrayList* StoreFront_getSubStores(StoreFront* this) {
        JAVA_TRY {
            Tokenizer* tokenizer = Tokenizer_new(CommonSeps_getInstance()->SEMICOLON);
            BasicArrayList* subStoreVector = Tokenizer_getTokensFromString(tokenizer, this->subStores, BasicArrayListD_new());
            return subStoreVector;
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


const char* StoreFront_getTagLocation(StoreFront* this) {
        return this->tagLocation;
}


const char* StoreFront_getPackageLocation(StoreFront* this) {
        return this->packageLocation;
}


const char* StoreFront_getFtp(StoreFront* this) {
        return this->ftp;
}


const char* StoreFront_getFtpUserName(StoreFront* this) {
        return this->ftpUserName;
}


const char* StoreFront_getFtpPassword(StoreFront* this) {
        return this->ftpPassword;
}


const char* StoreFront_getTestFtp(StoreFront* this) {
        return this->testFtp;
}


const char* StoreFront_getTestFtpUserName(StoreFront* this) {
        return this->testFtpUserName;
}


const char* StoreFront_getTestFtpPassword(StoreFront* this) {
        return this->testFtpPassword;
}


const char* StoreFront_getFtpPath(StoreFront* this) {
        return AbPath_toString(this->ftpPath);
}


const char* StoreFront_getTestFtpPath(StoreFront* this) {
        return AbPath_toString(this->testFtpPath);
}


const char* StoreFront_getTimeCreated(StoreFront* this) {
        return this->timeCreated;
}


const char* StoreFront_getLastModified(StoreFront* this) {
        return this->lastModified;
}


void StoreFront_setName(StoreFront* this, const char* value) {
        this->name = value;
}


void StoreFront_setBasketName(StoreFront* this, const char* value) {
        this->basketName = value;
}


void StoreFront_setHomeHostName(StoreFront* this, const char* value) {
        this->homeHostName = value;
}


// throws Exception
void StoreFront_setHomeHostNamePath(StoreFront* this, const char* value) {
        this->homeHostNamePath = AbPath_new(value, StringUtil_getInstance()->EMPTY_STRING);
}


void StoreFront_setHostName(StoreFront* this, const char* value) {
        this->hostName = value;
}


// throws Exception
void StoreFront_setHostNamePath(StoreFront* this, const char* value) {
        this->hostNamePath = AbPath_new(value, StringUtil_getInstance()->EMPTY_STRING);
}


void StoreFront_setTestHomeHostName(StoreFront* this, const char* value) {
        this->testHomeHostName = value;
}


// throws Exception
void StoreFront_setTestHomeHostNamePath(StoreFront* this, const char* value) {
        this->testHomeHostNamePath = AbPath_new(value, StringUtil_getInstance()->EMPTY_STRING);
}


void StoreFront_setTestHostName(StoreFront* this, const char* value) {
        this->testHostName = value;
}


// throws Exception
void StoreFront_setTestHostNamePath(StoreFront* this, const char* value) {
        this->testHostNamePath = AbPath_new(value, StringUtil_getInstance()->EMPTY_STRING);
}


// throws Exception
void StoreFront_setImagePath(StoreFront* this, const char* value) {
        this->imagePath = AbPath_new(value, StringUtil_getInstance()->EMPTY_STRING);
}


// throws Exception
void StoreFront_setStaticPath(StoreFront* this, const char* value) {
        this->staticPath = AbPath_new(value, StringUtil_getInstance()->EMPTY_STRING);
}


// throws Exception
void StoreFront_setCategoryPath(StoreFront* this, const char* value) {
        this->categoryPath = AbPath_new(value, StringUtil_getInstance()->EMPTY_STRING);
}


void StoreFront_setSubStores(StoreFront* this, const char* value) {
        this->subStores = value;
}


void StoreFront_setTagLocation(StoreFront* this, const char* value) {
        this->tagLocation = value;
}


void StoreFront_setPackageLocation(StoreFront* this, const char* value) {
        this->packageLocation = value;
}


void StoreFront_setInventoryControl(StoreFront* this, const char* value) {
        this->inventoryControl = value;
}


// Java overloaded method: C needs a different name
void StoreFront_getPackageLocation(StoreFront* this, const char* value) {
        this->packageLocation = value;
}


void StoreFront_setFtp(StoreFront* this, const char* value) {
        this->ftp = value;
}


void StoreFront_setFtpUserName(StoreFront* this, const char* value) {
        this->ftpUserName = value;
}


void StoreFront_setFtpPassword(StoreFront* this, const char* value) {
        this->ftpPassword = value;
}


void StoreFront_setTestFtp(StoreFront* this, const char* value) {
        this->testFtp = value;
}


void StoreFront_setTestFtpUserName(StoreFront* this, const char* value) {
        this->testFtpUserName = value;
}


void StoreFront_setTestFtpPassword(StoreFront* this, const char* value) {
        this->testFtpPassword = value;
}


void StoreFront_setTimeCreated(StoreFront* this, const char* value) {
        this->timeCreated = value;
}


void StoreFront_setLastModified(StoreFront* this, const char* value) {
        this->lastModified = value;
}


// throws Exception
void StoreFront_setFtpPath(StoreFront* this, const char* value) {
        this->ftpPath = AbPath_new(value, StringUtil_getInstance()->EMPTY_STRING);
}


// throws Exception
void StoreFront_setTestFtpPath(StoreFront* this, const char* value) {
        this->testFtpPath = AbPath_new(value, StringUtil_getInstance()->EMPTY_STRING);
}


// throws Exception
static bool StoreFront_createDirectories(StoreFront* this) {
        AbPath* storeAbPath = AbPath_new(JAVA_CALL(_URLGLOBALS, getWebappPath) + StoreFront_getCurrentHomeHostNamePath(this), StringUtil_getInstance()->EMPTY_STRING);
        if (!Directory_create(this->directory, storeAbPath)) {
            return false;
        }
        if (!Directory_create(this->directory, AbPath_new(storeAbPath + StoreFront_getCategoryPath(this), StringUtil_getInstance()->EMPTY_STRING))) {
            return false;
        }
        if (!Directory_create(this->directory, AbPath_new(storeAbPath + StoreFront_getStaticPath(this), StringUtil_getInstance()->EMPTY_STRING))) {
            return false;
        }
        return true;
}


// throws Exception
void StoreFront_install(StoreFront* this, int32_t current, int32_t total) {
        JAVA_TRY {
            if (!StoreFront_createDirectories(this)) {
                java_throw(java_exception_new("Exception", "Unable to create store directories"));
            }
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getMainPath));
            StringMaker_append(stringBuffer, JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH);
            const char* viewPath = StringMaker_toString(stringBuffer);
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, viewPath);
            StringMaker_append(stringBuffer, JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->INSTALLPATH);
            AbPath* fromDirectoryAbPath = AbPath_new(StringMaker_toString(stringBuffer), StringUtil_getInstance()->EMPTY_STRING);
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, viewPath);
            StringMaker_append(stringBuffer, "special");
            StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
            AbPath* fromSpecialDirectoryAbPath = AbPath_new(StringMaker_toString(stringBuffer), StringUtil_getInstance()->EMPTY_STRING);
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, viewPath);
            StringMaker_append(stringBuffer, StoreFront_getName(this));
            StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
            AbPath* toDirectoryAbPath = AbPath_new(StringMaker_toString(stringBuffer), StringUtil_getInstance()->EMPTY_STRING);
            if (current == 0) {
                if (!Directory_create(this->directory, toDirectoryAbPath)) {
                    java_throw(java_exception_new("Exception", java_concat("Unable to create store view directory: ", AbPath_toString(toDirectoryAbPath))));
                }
            }
            int32_t viewTotal = (total * 85) / 100;
            int32_t installTotal = (total * 93) / 100;
            if (current < viewTotal) {
                AbFile* file = AbFile_createAbFileFromAbPath(fromSpecialDirectoryAbPath);
                if (AbFile_isDirectory(file)) {
                    int32_t halfViewTotal = viewTotal / 2;
                    if (current < halfViewTotal) {
                        StoreFront_installViews(this, fromSpecialDirectoryAbPath, toDirectoryAbPath, current, halfViewTotal);
                    } else if (current < viewTotal) {
                        StoreFront_installViews(this, fromDirectoryAbPath, toDirectoryAbPath, current - halfViewTotal, viewTotal - halfViewTotal);
                    }
                } else {
                    StoreFront_installViews(this, fromDirectoryAbPath, toDirectoryAbPath, current, viewTotal);
                }
            } else if (current < installTotal) {
                StoreFront_installResources(this, fromDirectoryAbPath, current - viewTotal, installTotal - viewTotal);
            } else {
                StoreFront_installMedia(this, fromDirectoryAbPath, current - installTotal, total - installTotal);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "install()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
static void StoreFront_installViews(StoreFront* this, AbPath* fromDirectoryAbPath, AbPath* toDirectoryAbPath, int32_t current, int32_t total) {
        FileUtil_copyDirectoryPortion(FileUtil_getInstance(), fromDirectoryAbPath, toDirectoryAbPath, true, false, current, total);
}


// throws Exception
static void StoreFront_installResources(StoreFront* this, AbPath* fromDirectoryAbPath, int32_t current, int32_t total) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, AbPath_toString(fromDirectoryAbPath));
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        StringMaker_append(stringBuffer, "Resources");
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        AbPath* installCategoryAbPath = AbPath_new(StringMaker_toString(stringBuffer), StringUtil_getInstance()->EMPTY_STRING);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getMainPath));
        StringMaker_append(stringBuffer, StoreFront_getCurrentHomeHostNamePath(this));
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        StringMaker_append(stringBuffer, StoreFront_getCategoryPath(this));
        AbPath* categoryAbPath = AbPath_new(StringMaker_toString(stringBuffer), StringUtil_getInstance()->EMPTY_STRING);
        FileUtil_copyDirectoryPortion(FileUtil_getInstance(), installCategoryAbPath, categoryAbPath, true, false, current, total);
}


// throws Exception
static void StoreFront_installMedia(StoreFront* this, AbPath* fromDirectoryAbPath, int32_t current, int32_t total) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, AbPath_toString(fromDirectoryAbPath));
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        StringMaker_append(stringBuffer, JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->TEMPLATEPATH);
        StringMaker_append(stringBuffer, "images");
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        AbPath* viewStoreImagesDirectoryAbPath = AbPath_new(StringMaker_toString(stringBuffer), StringUtil_getInstance()->EMPTY_STRING);
        AbPath* storeAbPath = AbPath_new(JAVA_CALL(_URLGLOBALS, getWebappPath) + StoreFront_getCurrentHomeHostNamePath(this), StringUtil_getInstance()->EMPTY_STRING);
        FileUtil_copyDirectoryPortion(FileUtil_getInstance(), viewStoreImagesDirectoryAbPath, storeAbPath, true, false, current, total);
}


// throws Exception
BasicArrayList* StoreFront_toVector(StoreFront* this) {
        BasicArrayList* dataVector = BasicArrayListD_new();
        BasicArrayList_add(dataVector, this->name);
        BasicArrayList_add(dataVector, this->homeHostName);
        BasicArrayList_add(dataVector, AbPath_toString(this->homeHostNamePath));
        BasicArrayList_add(dataVector, this->hostName);
        BasicArrayList_add(dataVector, AbPath_toString(this->hostNamePath));
        BasicArrayList_add(dataVector, this->testHomeHostName);
        BasicArrayList_add(dataVector, AbPath_toString(this->testHomeHostNamePath));
        BasicArrayList_add(dataVector, this->testHostName);
        BasicArrayList_add(dataVector, AbPath_toString(this->testHostNamePath));
        BasicArrayList_add(dataVector, AbPath_toString(this->imagePath));
        BasicArrayList_add(dataVector, AbPath_toString(this->staticPath));
        BasicArrayList_add(dataVector, AbPath_toString(this->categoryPath));
        BasicArrayList_add(dataVector, this->inventoryControl);
        ContextConfigurationDomDocumentMapping* contextConfigurationDomDocumentMapping = ContextConfigurationDomDocumentMapping_new(StoreFront_getContextConfigurationInterface(this));
        BasicArrayList_add(dataVector, ContextConfigurationDomDocumentMapping_toDomDocumentString(contextConfigurationDomDocumentMapping));
        BasicArrayList_add(dataVector, this->subStores);
        BasicArrayList_add(dataVector, this->tagLocation);
        BasicArrayList_add(dataVector, this->packageLocation);
        BasicArrayList_add(dataVector, this->ftp);
        BasicArrayList_add(dataVector, AbPath_toString(this->ftpPath));
        BasicArrayList_add(dataVector, this->ftpUserName);
        BasicArrayList_add(dataVector, this->ftpPassword);
        BasicArrayList_add(dataVector, this->testFtp);
        BasicArrayList_add(dataVector, AbPath_toString(this->testFtpPath));
        BasicArrayList_add(dataVector, this->testFtpUserName);
        BasicArrayList_add(dataVector, this->testFtpPassword);
        Calendar* calendar = Calendar_getInstance();
        const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
        BasicArrayList_add(dataVector, time);
        BasicArrayList_add(dataVector, time);
        return dataVector;
}


// throws Exception
HashMap* StoreFront_toHashMap(StoreFront* this) {
        StoreFrontData* storeFrontData = StoreFrontData_getInstance();
        HashMap* dataHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(dataHashMap, storeFrontData->NAME, this->name);
        HashMap_put(dataHashMap, storeFrontData->HOMEHOSTNAME, this->homeHostName);
        HashMap_put(dataHashMap, storeFrontData->HOMEHOSTNAMEPATH, AbPath_toString(this->homeHostNamePath));
        HashMap_put(dataHashMap, storeFrontData->HOSTNAME, this->hostName);
        HashMap_put(dataHashMap, storeFrontData->HOSTNAMEPATH, AbPath_toString(this->hostNamePath));
        HashMap_put(dataHashMap, storeFrontData->TESTHOMEHOSTNAME, this->testHomeHostName);
        HashMap_put(dataHashMap, storeFrontData->TESTHOMEHOSTNAMEPATH, AbPath_toString(this->testHomeHostNamePath));
        HashMap_put(dataHashMap, storeFrontData->TESTHOSTNAME, this->testHostName);
        HashMap_put(dataHashMap, storeFrontData->TESTHOSTNAMEPATH, AbPath_toString(this->testHostNamePath));
        HashMap_put(dataHashMap, storeFrontData->IMAGEPATH, AbPath_toString(this->imagePath));
        HashMap_put(dataHashMap, storeFrontData->STATICPATH, AbPath_toString(this->staticPath));
        HashMap_put(dataHashMap, storeFrontData->CATEGORYPATH, AbPath_toString(this->categoryPath));
        HashMap_put(dataHashMap, storeFrontData->INVENTORYCONTROL, this->inventoryControl);
        ContextConfigurationDomDocumentMapping* contextConfigurationDomDocumentMapping = ContextConfigurationDomDocumentMapping_new(StoreFront_getContextConfigurationInterface(this));
        HashMap_put(dataHashMap, storeFrontData->CONFIGURATION, ContextConfigurationDomDocumentMapping_toDomDocumentString(contextConfigurationDomDocumentMapping));
        HashMap_put(dataHashMap, storeFrontData->SUBSTORES, this->subStores);
        HashMap_put(dataHashMap, storeFrontData->TAGLOCATION, this->tagLocation);
        HashMap_put(dataHashMap, storeFrontData->PACKAGELOCATION, this->packageLocation);
        HashMap_put(dataHashMap, storeFrontData->FTP, this->ftp);
        HashMap_put(dataHashMap, storeFrontData->FTPPATH, AbPath_toString(this->ftpPath));
        HashMap_put(dataHashMap, storeFrontData->FTPUSERNAME, this->ftpUserName);
        HashMap_put(dataHashMap, storeFrontData->FTPPASSWORD, this->ftpPassword);
        HashMap_put(dataHashMap, storeFrontData->TESTFTP, this->testFtp);
        HashMap_put(dataHashMap, storeFrontData->TESTFTPPATH, AbPath_toString(this->testFtpPath));
        HashMap_put(dataHashMap, storeFrontData->TESTFTPUSERNAME, this->testFtpUserName);
        HashMap_put(dataHashMap, storeFrontData->TESTFTPPASSWORD, this->testFtpPassword);
        Calendar* calendar = Calendar_getInstance();
        const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
        HashMap_put(dataHashMap, EntryData_getInstance()->LASTMODIFIED, time);
        return dataHashMap;
}


Any* StoreFront_getKey(StoreFront* this) {
        return ((Any*) StoreFront_getName(this));
}


ContextConfigurationInterface* StoreFront_getContextConfigurationInterface(StoreFront* this) {
        return this->contextConfigurationInterface;
}


void StoreFront_setContextConfigurationInterface(StoreFront* this, ContextConfigurationInterface* contextConfigurationInterface) {
        this->contextConfigurationInterface = contextConfigurationInterface;
}

