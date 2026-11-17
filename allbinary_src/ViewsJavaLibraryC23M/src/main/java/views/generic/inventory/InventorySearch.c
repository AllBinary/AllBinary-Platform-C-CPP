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
// package views.generic.inventory

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/data/tables/staticpages/StaticPagesEntity.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/search/SearchParams.h"
#include "org/allbinary/logic/control/search/SearchRequest.h"
#include "org/allbinary/logic/io/InputOutputTypeData.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/string/regex/replace/Replace.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "views/admin/inventory/listings/InventoryViewSearchInterface.h"

typedef struct InventorySearch InventorySearch;
struct InventorySearch {
    InventoryViewSearchInterface InventoryViewSearchInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    BasicItemData* basicItemData;
    SearchRequest* searchRequest;
};


InventorySearch* InventorySearch_new(SearchRequest* searchRequest);

void InventorySearch_init(InventorySearch* this, SearchRequest* searchRequest);
const char* InventorySearch_searchSingleStaticPage(InventorySearch* this);
const char* InventorySearch_searchSingleDynamicPage(InventorySearch* this);
const char** InventorySearch_search(InventorySearch* this);
const char* InventorySearch_getProduct(InventorySearch* this, const char* product);

static void InventorySearch_initFields(InventorySearch* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    
}


void InventorySearch_init(InventorySearch* this, SearchRequest* searchRequest) {
        
        InventorySearch_initFields(this);
        this->searchRequest = searchRequest;
}

InventorySearch* InventorySearch_new(SearchRequest* searchRequest) {
    InventorySearch* this = calloc(1, sizeof(InventorySearch));
    InventorySearch_init(this, searchRequest);
    return this;
}


// throws Exception
const char* InventorySearch_searchSingleStaticPage(InventorySearch* this) {
        JAVA_TRY {
            StoreFrontInterface* storeFront = SearchRequest_getStoreFront(this->searchRequest);
            SearchParams* searchParams = SearchRequest_getParams(this->searchRequest);
            HashMap* columnValueHashMap = SearchParams_get(searchParams);
            const char* file = StaticPagesEntity_getFile(StaticPagesEntity_new(), StoreFrontInterface_getName(storeFront), Replace_all(Replace_new("-", CommonSeps_getInstance()->SPACE), ((const char*) HashMap_get(columnValueHashMap, this->basicItemData->KEYWORDS))));
            if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), file)) {
                return nullptr;
            } else {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, StoreFrontInterface_getCurrentHostName(storeFront));
                StringMaker_append(stringBuffer, StoreFrontInterface_getCurrentHostNamePath(storeFront));
                StringMaker_append(stringBuffer, StoreFrontInterface_getStaticPath(storeFront));
                StringMaker_append(stringBuffer, file);
                StringMaker_append(stringBuffer, JAVA_CALL(SearchRequest_getParams(this->searchRequest), getEndPage));
                StringMaker_append(stringBuffer, AbPathData_getInstance()->EXTENSION_SEP);
                StringMaker_append(stringBuffer, InputOutputTypeData_getInstance()->DEFAULT);
                const char* filePath = Replace_all(Replace_new(CommonSeps_getInstance()->SPACE, "%20"), StringMaker_toString(stringBuffer));
                return filePath;
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRODUCTSEARCHLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "searchSingleStaticPage", e);
            }
            java_throw(java_exception_new("Exception", "Failed retrieve Single Product Page Static"));
        } JAVA_END_TRY;
}


// throws Exception
const char* InventorySearch_searchSingleDynamicPage(InventorySearch* this) {
        JAVA_TRY {
            const char** str = InventorySearch_search(this);
            return str[JAVA_CALL(JAVA_CALL(SearchRequest_getParams(this->searchRequest), getStartPageInt), intValue)];
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRODUCTSEARCHLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "searchSingleDynamicPage", e);
            }
            java_throw(java_exception_new("Exception", "Failed retrieve Single Product Page Dynamically"));
        } JAVA_END_TRY;
}


// throws Exception
const char** InventorySearch_search(InventorySearch* this) {
        AbeClientInformationInterface* abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
        InventorySearchUtil* inventorySearchUtil = InventorySearchUtil_getInstance();
        BasicArrayList* vector = InventorySearchUtil_getBasicItemIdColumn(inventorySearchUtil, this->searchRequest);
        return InventorySearchUtil_search(inventorySearchUtil, abeClientInformation, this->searchRequest, vector);
}


// throws Exception
const char* InventorySearch_getProduct(InventorySearch* this, const char* product) {
        AbeClientInformationInterface* abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
        return InventorySearchProductUtil_getProduct(InventorySearchProductUtil_getInstance(), abeClientInformation, this->searchRequest, product);
}

