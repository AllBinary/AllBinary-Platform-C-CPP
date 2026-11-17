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
// package admin.taghelpers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/context/modules/storefront/StoreFront.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/regex/replace/Replace.h"
#include "org/allbinary/string/CommonSeps.h"
#include "admin/taghelpers/TagHelper.h"

typedef struct StoreFrontHelper StoreFrontHelper;
struct StoreFrontHelper {
    TagHelper base;
    StoreFrontInterface* storeFrontInterface;
    const char* currentLocation;
    const char* currentHomeLocation;
};


StoreFrontHelper* StoreFrontHelper_new(HashMap* hashMap, PageContext* pageContext);

void StoreFrontHelper_init(StoreFrontHelper* this, HashMap* hashMap, PageContext* pageContext);
const char* StoreFrontHelper_getCurrentLocation(StoreFrontHelper* this);
const char* StoreFrontHelper_getCurrentHomeLocation(StoreFrontHelper* this);

static void StoreFrontHelper_initFields(StoreFrontHelper* this) {
    this->storeFrontInterface = nullptr;
    this->currentLocation = nullptr;
    this->currentHomeLocation = nullptr;
}


void StoreFrontHelper_init(StoreFrontHelper* this, HashMap* hashMap, PageContext* pageContext) {
    TagHelper_init(&this->base);
    StoreFrontHelper_initFields(this);
        const char* storeName = ((const char*) HashMap_get(hashMap, StoreFrontData_getInstance()->NAME));
        if (storeName != nullptr) {
            this->storeFrontInterface = StoreFrontFactory_getInstance(storeName);
            this->currentLocation = Replace_all(Replace_new(CommonSeps_getInstance()->SPACE, "%20"), StoreFrontInterface_getCurrentHostName(this->storeFrontInterface) + StoreFrontInterface_getCurrentHostNamePath(this->storeFrontInterface));
            this->currentHomeLocation = Replace_all(Replace_new(CommonSeps_getInstance()->SPACE, "%20"), StoreFrontInterface_getCurrentHomeHostName(this->storeFrontInterface) + StoreFrontInterface_getCurrentHomeHostNamePath(this->storeFrontInterface));
        } else {
            StringUtil* stringUtil = StringUtil_getInstance();
            this->storeFrontInterface = StoreFront_new();
            this->currentLocation = stringUtil->EMPTY_STRING;
            this->currentHomeLocation = stringUtil->EMPTY_STRING;
        }
}

StoreFrontHelper* StoreFrontHelper_new(HashMap* hashMap, PageContext* pageContext) {
    StoreFrontHelper* this = calloc(1, sizeof(StoreFrontHelper));
    StoreFrontHelper_init(this, hashMap, pageContext);
    return this;
}


const char* StoreFrontHelper_getCurrentLocation(StoreFrontHelper* this) {
        return this->currentLocation;
}


const char* StoreFrontHelper_getCurrentHomeLocation(StoreFrontHelper* this) {
        return this->currentHomeLocation;
}

