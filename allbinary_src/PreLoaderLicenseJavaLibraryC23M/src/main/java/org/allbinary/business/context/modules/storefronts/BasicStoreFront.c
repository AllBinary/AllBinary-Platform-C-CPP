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
// package org.allbinary.business.context.modules.storefronts

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/logic/string/tokens/Tokenizer.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/context/modules/storefronts/BasicStoreFrontInterface.h"

typedef struct BasicStoreFront BasicStoreFront;
struct BasicStoreFront {
    BasicStoreFrontInterface BasicStoreFrontInterface_interface;
    const char* name;
    const char* userName;
    const char* basketName;
    const char* homeHostName;
    const char* homeHostNamePath;
    const char* hostName;
    const char* hostNamePath;
    const char* testHomeHostName;
    const char* testHomeHostNamePath;
    const char* testHostName;
    const char* testHostNamePath;
    const char* imagePath;
    const char* staticPath;
    const char* categoryPath;
    const char* inventoryControl;
    const char* subStores;
    const char* tagLocation;
    const char* packageLocation;
    const char* ftp;
    const char* ftpPath;
    const char* ftpUserName;
    const char* ftpPassword;
    const char* testFtp;
    const char* testFtpPath;
    const char* testFtpUserName;
    const char* testFtpPassword;
    const char* timeCreated;
    const char* lastModified;
};


BasicStoreFront* BasicStoreFront_new(void);

void BasicStoreFront_init(BasicStoreFront* this);

BasicStoreFront* BasicStoreFront_new1(HashMap* storeHashMap);
void BasicStoreFront_init1(BasicStoreFront* this, HashMap* storeHashMap);
const char* BasicStoreFront_getTestHtmlPath(BasicStoreFront* this);
const char* BasicStoreFront_getCurrentHostName(BasicStoreFront* this);
const char* BasicStoreFront_getCurrentHostNamePath(BasicStoreFront* this);
const char* BasicStoreFront_getCurrentHomeHostName(BasicStoreFront* this);
const char* BasicStoreFront_getCurrentHomeHostNamePath(BasicStoreFront* this);
const char* BasicStoreFront_getName(BasicStoreFront* this);
const char* BasicStoreFront_getUserName(BasicStoreFront* this);
const char* BasicStoreFront_getBasketName(BasicStoreFront* this);
const char* BasicStoreFront_getHomeHostName(BasicStoreFront* this);
const char* BasicStoreFront_getHomeHostNamePath(BasicStoreFront* this);
const char* BasicStoreFront_getHostName(BasicStoreFront* this);
const char* BasicStoreFront_getHostNamePath(BasicStoreFront* this);
const char* BasicStoreFront_getTestHomeHostName(BasicStoreFront* this);
const char* BasicStoreFront_getTestHomeHostNamePath(BasicStoreFront* this);
const char* BasicStoreFront_getTestHostName(BasicStoreFront* this);
const char* BasicStoreFront_getTestHostNamePath(BasicStoreFront* this);
const char* BasicStoreFront_getStaticPath(BasicStoreFront* this);
const char* BasicStoreFront_getCategoryPath(BasicStoreFront* this);
const char* BasicStoreFront_getInventoryControl(BasicStoreFront* this);
BasicArrayList* BasicStoreFront_getSubStores(BasicStoreFront* this);
const char* BasicStoreFront_getTagLocation(BasicStoreFront* this);
const char* BasicStoreFront_getPackageLocation(BasicStoreFront* this);
const char* BasicStoreFront_getFtp(BasicStoreFront* this);
const char* BasicStoreFront_getFtpUserName(BasicStoreFront* this);
const char* BasicStoreFront_getFtpPassword(BasicStoreFront* this);
const char* BasicStoreFront_getTestFtp(BasicStoreFront* this);
const char* BasicStoreFront_getTestFtpUserName(BasicStoreFront* this);
const char* BasicStoreFront_getTestFtpPassword(BasicStoreFront* this);
const char* BasicStoreFront_getFtpPath(BasicStoreFront* this);
const char* BasicStoreFront_getTestFtpPath(BasicStoreFront* this);
const char* BasicStoreFront_getTimeCreated(BasicStoreFront* this);
const char* BasicStoreFront_getLastModified(BasicStoreFront* this);

static void BasicStoreFront_initFields(BasicStoreFront* this) {
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}


void BasicStoreFront_init(BasicStoreFront* this) {
    BasicStoreFront_initFields(this);
}

BasicStoreFront* BasicStoreFront_new(void) {
    BasicStoreFront* this = calloc(1, sizeof(BasicStoreFront));
    BasicStoreFront_init(this);
    return this;
}


void BasicStoreFront_init1(BasicStoreFront* this, HashMap* storeHashMap) {
    BasicStoreFront_initFields(this);
        StoreFrontData* storeFrontData = StoreFrontData_getInstance();
        this->name = ((const char*) HashMap_get(storeHashMap, storeFrontData->NAME));
        this->userName = ((const char*) HashMap_get(storeHashMap, UserData_USERNAME));
        this->basketName = ((const char*) HashMap_get(storeHashMap, storeFrontData->NAME));
        this->homeHostName = ((const char*) HashMap_get(storeHashMap, storeFrontData->HOMEHOSTNAME));
        this->homeHostNamePath = ((const char*) HashMap_get(storeHashMap, storeFrontData->HOMEHOSTNAMEPATH));
        this->hostName = ((const char*) HashMap_get(storeHashMap, storeFrontData->HOSTNAME));
        this->hostNamePath = ((const char*) HashMap_get(storeHashMap, storeFrontData->HOSTNAMEPATH));
        this->testHomeHostName = ((const char*) HashMap_get(storeHashMap, storeFrontData->TESTHOMEHOSTNAME));
        this->testHomeHostNamePath = ((const char*) HashMap_get(storeHashMap, storeFrontData->TESTHOMEHOSTNAMEPATH));
        this->testHostName = ((const char*) HashMap_get(storeHashMap, storeFrontData->TESTHOSTNAME));
        this->testHostNamePath = ((const char*) HashMap_get(storeHashMap, storeFrontData->TESTHOSTNAMEPATH));
        this->imagePath = ((const char*) HashMap_get(storeHashMap, storeFrontData->IMAGEPATH));
        this->staticPath = ((const char*) HashMap_get(storeHashMap, storeFrontData->STATICPATH));
        this->categoryPath = ((const char*) HashMap_get(storeHashMap, storeFrontData->CATEGORYPATH));
        this->inventoryControl = ((const char*) HashMap_get(storeHashMap, storeFrontData->INVENTORYCONTROL));
        this->subStores = ((const char*) HashMap_get(storeHashMap, storeFrontData->SUBSTORES));
        this->tagLocation = ((const char*) HashMap_get(storeHashMap, storeFrontData->TAGLOCATION));
        this->packageLocation = ((const char*) HashMap_get(storeHashMap, storeFrontData->PACKAGELOCATION));
        this->ftp = ((const char*) HashMap_get(storeHashMap, storeFrontData->FTP));
        this->ftpPath = ((const char*) HashMap_get(storeHashMap, storeFrontData->FTPPATH));
        this->ftpUserName = ((const char*) HashMap_get(storeHashMap, storeFrontData->FTPUSERNAME));
        this->ftpPassword = ((const char*) HashMap_get(storeHashMap, storeFrontData->FTPPASSWORD));
        this->testFtp = ((const char*) HashMap_get(storeHashMap, storeFrontData->TESTFTP));
        this->testFtpPath = ((const char*) HashMap_get(storeHashMap, storeFrontData->TESTFTPPATH));
        this->testFtpUserName = ((const char*) HashMap_get(storeHashMap, storeFrontData->TESTFTPUSERNAME));
        this->testFtpPassword = ((const char*) HashMap_get(storeHashMap, storeFrontData->TESTFTPPASSWORD));
        this->timeCreated = ((const char*) HashMap_get(storeHashMap, EntryData_getInstance()->TIMECREATED));
        this->lastModified = ((const char*) HashMap_get(storeHashMap, EntryData_getInstance()->LASTMODIFIED));
}

BasicStoreFront* BasicStoreFront_new1(HashMap* storeHashMap) {
    BasicStoreFront* this = calloc(1, sizeof(BasicStoreFront));
    BasicStoreFront_init1(this, storeHashMap);
    return this;
}


const char* BasicStoreFront_getTestHtmlPath(BasicStoreFront* this) {
        return JAVA_CALL(org_allbinary->globals->URLGLOBALS, getTestHtmlPath) + BasicStoreFront_getCurrentHostNamePath(this);
}


const char* BasicStoreFront_getCurrentHostName(BasicStoreFront* this) {
        const char* location = nullptr;
        if (JAVA_CALL(org_allbinary->globals->URLGLOBALS, isTestingMode)) {
            location = BasicStoreFront_getTestHostName(this);
        } else {
            location = BasicStoreFront_getHostName(this);
        }
        return location;
}


const char* BasicStoreFront_getCurrentHostNamePath(BasicStoreFront* this) {
        const char* location = nullptr;
        if (JAVA_CALL(org_allbinary->globals->URLGLOBALS, isTestingMode)) {
            location = BasicStoreFront_getTestHostNamePath(this);
        } else {
            location = BasicStoreFront_getHostNamePath(this);
        }
        return location;
}


const char* BasicStoreFront_getCurrentHomeHostName(BasicStoreFront* this) {
        const char* location = nullptr;
        if (JAVA_CALL(org_allbinary->globals->URLGLOBALS, isTestingMode)) {
            location = BasicStoreFront_getTestHomeHostName(this);
        } else {
            location = BasicStoreFront_getHomeHostName(this);
        }
        return location;
}


const char* BasicStoreFront_getCurrentHomeHostNamePath(BasicStoreFront* this) {
        const char* location = nullptr;
        if (JAVA_CALL(org_allbinary->globals->URLGLOBALS, isTestingMode)) {
            location = BasicStoreFront_getTestHomeHostNamePath(this);
        } else {
            location = BasicStoreFront_getHomeHostNamePath(this);
        }
        return location;
}


const char* BasicStoreFront_getName(BasicStoreFront* this) {
        return this->name;
}


const char* BasicStoreFront_getUserName(BasicStoreFront* this) {
        return this->userName;
}


const char* BasicStoreFront_getBasketName(BasicStoreFront* this) {
        return this->basketName;
}


const char* BasicStoreFront_getHomeHostName(BasicStoreFront* this) {
        return this->homeHostName;
}


const char* BasicStoreFront_getHomeHostNamePath(BasicStoreFront* this) {
        return this->homeHostNamePath;
}


const char* BasicStoreFront_getHostName(BasicStoreFront* this) {
        return this->hostName;
}


const char* BasicStoreFront_getHostNamePath(BasicStoreFront* this) {
        return this->hostNamePath;
}


const char* BasicStoreFront_getTestHomeHostName(BasicStoreFront* this) {
        return this->testHomeHostName;
}


const char* BasicStoreFront_getTestHomeHostNamePath(BasicStoreFront* this) {
        return this->testHomeHostNamePath;
}


const char* BasicStoreFront_getTestHostName(BasicStoreFront* this) {
        return this->testHostName;
}


const char* BasicStoreFront_getTestHostNamePath(BasicStoreFront* this) {
        return this->testHostNamePath;
}


const char* BasicStoreFront_getStaticPath(BasicStoreFront* this) {
        return this->staticPath;
}


const char* BasicStoreFront_getCategoryPath(BasicStoreFront* this) {
        return this->categoryPath;
}


const char* BasicStoreFront_getInventoryControl(BasicStoreFront* this) {
        return this->inventoryControl;
}


// throws Exception
BasicArrayList* BasicStoreFront_getSubStores(BasicStoreFront* this) {
        JAVA_TRY {
            Tokenizer* tokenizer = Tokenizer_new(CommonSeps_getInstance()->SEMICOLON);
            BasicArrayList* subStoreVector = Tokenizer_getTokensFromString(tokenizer, this->subStores, BasicArrayListD_new());
            return subStoreVector;
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


const char* BasicStoreFront_getTagLocation(BasicStoreFront* this) {
        return this->tagLocation;
}


const char* BasicStoreFront_getPackageLocation(BasicStoreFront* this) {
        return this->packageLocation;
}


const char* BasicStoreFront_getFtp(BasicStoreFront* this) {
        return this->ftp;
}


const char* BasicStoreFront_getFtpUserName(BasicStoreFront* this) {
        return this->ftpUserName;
}


const char* BasicStoreFront_getFtpPassword(BasicStoreFront* this) {
        return this->ftpPassword;
}


const char* BasicStoreFront_getTestFtp(BasicStoreFront* this) {
        return this->testFtp;
}


const char* BasicStoreFront_getTestFtpUserName(BasicStoreFront* this) {
        return this->testFtpUserName;
}


const char* BasicStoreFront_getTestFtpPassword(BasicStoreFront* this) {
        return this->testFtpPassword;
}


const char* BasicStoreFront_getFtpPath(BasicStoreFront* this) {
        return this->ftpPath;
}


const char* BasicStoreFront_getTestFtpPath(BasicStoreFront* this) {
        return this->testFtpPath;
}


const char* BasicStoreFront_getTimeCreated(BasicStoreFront* this) {
        return this->timeCreated;
}


const char* BasicStoreFront_getLastModified(BasicStoreFront* this) {
        return this->lastModified;
}

