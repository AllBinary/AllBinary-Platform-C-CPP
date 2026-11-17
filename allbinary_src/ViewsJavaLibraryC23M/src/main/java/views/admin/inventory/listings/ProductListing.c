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
// package views.admin.inventory.listings

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "java/util/HashSet.h"
// #include "java/util/Set.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntity.h"
#include "org/allbinary/data/tables/staticpages/StaticPagesEntity.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h"
#include "org/allbinary/globals/GLOBALS2.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/search/SearchParams.h"
#include "org/allbinary/logic/control/search/SearchRequest.h"
#include "org/allbinary/logic/io/AbDataOutputStream.h"
#include "org/allbinary/logic/io/DataOutputStreamFactory.h"
#include "org/allbinary/logic/io/InputOutputTypeData.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/directory/Directory.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/SpecialCharacterUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/regex/replace/Replace.h"
#include "org/allbinary/logic/string/tokens/UniqueTokens.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "views/generic/inventory/InventoryColumnUtil.h"
#include "views/generic/inventory/InventorySearchUtil.h"
#include "views/admin/inventory/listings/ProductListingInterface.h"

typedef struct ProductListing ProductListing;
struct ProductListing {
    ProductListingInterface ProductListingInterface_interface;
    LogUtil* logUtil;
    Directory* directory;
    BasicItemData* basicItemData;
    StoreFrontsEntity* storeFronts;
    StaticPagesEntity* staticPages;
    InventoryEntity* inventory;
    SearchRequest* searchRequest;
    const char* INVENTORY;
};


ProductListing* ProductListing_new(SearchRequest* searchRequest);

void ProductListing_init(ProductListing* this, SearchRequest* searchRequest);
static HashSet* ProductListing_getHashSet(ProductListing* this, StoreFrontInterface* storeFront);
static void ProductListing_savePage(ProductListing* this, const char* file, const char* data);
static void ProductListing_create(ProductListing* this, const char* keywordData, HashMap* keywordFilenameHashMap, BasicArrayList* vector, AbPath* staticPath);
static void ProductListing_addStaticPageInfoToDatabase(ProductListing* this, StoreFrontInterface* storeFront, HashMap* keywordFilenameHashMap);
const char* ProductListing_generateAll(ProductListing* this);
const char* ProductListing_generateAll(ProductListing* this, const char* storeName);

static void ProductListing_initFields(ProductListing* this) {
    this->logUtil = LogUtil_getInstance();
    this->directory = Directory_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    
    
    
    
    this->INVENTORY = ".InventoryView";
}


void ProductListing_init(ProductListing* this, SearchRequest* searchRequest) {
    ProductListing_initFields(this);
        this->searchRequest = searchRequest;
        this->storeFronts = StoreFrontsEntity_new();
        this->staticPages = StaticPagesEntity_new();
        this->inventory = InventoryEntity_new();
}

ProductListing* ProductListing_new(SearchRequest* searchRequest) {
    ProductListing* this = calloc(1, sizeof(ProductListing));
    ProductListing_init(this, searchRequest);
    return this;
}


// throws Exception
static HashSet* ProductListing_getHashSet(ProductListing* this, StoreFrontInterface* storeFront) {
        InventoryColumnUtil* inventoryColumnUtil = InventoryColumnUtil_getInstance();
        BasicArrayList* keywords = InventoryColumnUtil_getColumnWhereLike(inventoryColumnUtil, this->inventory, StoreFrontInterface_getCategoryPath(storeFront), this->basicItemData->KEYWORDS);
        BasicArrayList* subStoreVector = StoreFrontInterface_getSubStores(storeFront);
        int32_t size = BasicArrayList_size(subStoreVector);
        for (int32_t index = 0; index < size; index++) {
            const char* subStore = ((const char*) BasicArrayList_get(subStoreVector, index));
            BasicArrayList* substoreKeywords = InventoryColumnUtil_getColumnWhereLike(inventoryColumnUtil, this->inventory, java_concat(java_string_of(AbPathData_getInstance()->SEPARATOR), subStore), this->basicItemData->CATEGORY);
            BasicArrayList_addAllList(keywords, substoreKeywords);
        }
        UniqueTokens* uniqueTokens = UniqueTokens_new();
        HashSet* keywordHashSet = UniqueTokens_getWhithoutDashesAndSkipNumberOnlyTokens(uniqueTokens, keywords);
        return keywordHashSet;
}


// throws Exception
static void ProductListing_savePage(ProductListing* this, const char* file, const char* data) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->STATICPAGEGENERATIONLOGGING)) {
            LogUtil_putF(this->logUtil, java_concat("Creating File: ", file), this, "generateAll()");
        }
        AbFile* newFile = AbFile_createAbFile(file);
        if (AbFile_exists(newFile)) {
            AbFile_delete(newFile);
        }
        AbFile_createNewFile(newFile);
        if (AbFile_exists(newFile)) {
            AbDataOutputStream* idOutData = DataOutputStreamFactory_getInstanceForAbFile(DataOutputStreamFactory_getInstance(), newFile);
            AbDataOutputStream_writeBytes(idOutData, data);
            AbDataOutputStream_flush(idOutData);
            StreamUtil_close(StreamUtil_getInstance(), idOutData);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->STATICPAGEGENERATIONLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat("Wrote Total Bytes: ", java_string_of(AbFile_length(newFile))), this, "generateAll()");
            }
        } else {
            java_throw(java_exception_new("Exception", java_concat("Could Not Create: ", file)));
        }
}


// throws Exception
static void ProductListing_create(ProductListing* this, const char* keywordData, HashMap* keywordFilenameHashMap, BasicArrayList* vector, AbPath* staticPath) {
        StringMaker* stringBuffer = StringMaker_new();
        HashMap* hashMap = SpecialCharacterUtil_getHashMap();
        HashMap_put(hashMap, CommonSeps_getInstance()->SPACE, StringUtil_getInstance()->EMPTY_STRING);
        const char* pageName = Replace_all(Replace_new(hashMap), keywordData);
        SearchParams* searchParams = SearchRequest_getParams(this->searchRequest);
        SearchParams_add(searchParams, this->basicItemData->KEYWORDS, keywordData);
        SearchParams_setStartPage(searchParams, CommonPhoneStrings_getInstance()->ZERO);
        SearchRequest_setParams(this->searchRequest, searchParams);
        SearchRequest_setFileBaseName(this->searchRequest, pageName);
        AbeClientInformationInterface* abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
        InventorySearchUtil* inventorySearchUtil = InventorySearchUtil_getInstance();
        const char** productListingPages = InventorySearchUtil_search(inventorySearchUtil, abeClientInformation, this->searchRequest, vector);
        for (int32_t index = 0; index < java_array_length(productListingPages); index++) {
            if (productListingPages[index] == nullptr) {
                break;
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->STATICPAGEGENERATIONLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat("Saving Listing: ", java_string_of(index)), this, "generateAll()");
            }
            const char* indexStr = StringUtil_getInstance()->EMPTY_STRING;
            if (index > 0) {
                indexStr = Integer_toString(index);
            }
            HashMap_put(keywordFilenameHashMap, keywordData, java_concat(pageName, indexStr));
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, AbPath_toString(staticPath));
            StringMaker_append(stringBuffer, pageName);
            StringMaker_append(stringBuffer, indexStr);
            StringMaker_append(stringBuffer, AbPathData_getInstance()->EXTENSION_SEP);
            StringMaker_append(stringBuffer, InputOutputTypeData_getInstance()->DEFAULT);
            const char* file = StringMaker_toString(stringBuffer);
            if (!Directory_create(this->directory, staticPath)) {
                java_throw(java_exception_new("Exception", java_concat("Could Not Create Directory: ", java_string_of(staticPath))));
            }
            ProductListing_savePage(this, file, productListingPages[index]);
        }
}


static void ProductListing_addStaticPageInfoToDatabase(ProductListing* this, StoreFrontInterface* storeFront, HashMap* keywordFilenameHashMap) {
        Set* keywordHashSet = HashMap_keySet(keywordFilenameHashMap);
        Any** keywordArray = HashSet_toArray(keywordHashSet);
        int32_t size = java_array_length(keywordArray);
        for (int32_t index = 0; index < size; index++) {
            BasicArrayList* insertVector = BasicArrayListD_new();
            const char* keywordData = ((const char*) keywordArray[index]);
            const char* fileName = ((const char*) HashMap_get(keywordFilenameHashMap, keywordData));
            BasicArrayList_add(insertVector, StoreFrontInterface_getName(storeFront));
            BasicArrayList_add(insertVector, keywordData);
            BasicArrayList_add(insertVector, fileName);
            StaticPagesEntity_insert(this->staticPages, insertVector);
        }
}


// throws Exception
const char* ProductListing_generateAll(ProductListing* this) {
        JAVA_TRY {
            StoreFrontInterface* storeFront = SearchRequest_getStoreFront(this->searchRequest);
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getWebappPath));
            StringMaker_append(stringBuffer, StoreFrontInterface_getName(storeFront));
            StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
            StringMaker_append(stringBuffer, StoreFrontInterface_getStaticPath(storeFront));
            AbPath* staticPath = AbPath_new(StringMaker_toString(stringBuffer), StringUtil_getInstance()->EMPTY_STRING);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->STATICPAGEGENERATIONLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat("Store Static Pages Path: ", java_string_of(staticPath)), this, "generateAll()");
            }
            HashSet* keywordHashSet = ProductListing_getHashSet(this, storeFront);
            Any** keywordArray = HashSet_toArray(keywordHashSet);
            int32_t size = java_array_length(keywordArray);
            HashMap* keywordFilenameHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            if (size == 0) {
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, "Products For ");
                StringMaker_append(stringBuffer, StoreFrontInterface_getName(storeFront));
                StringMaker_append(stringBuffer, " Store Not Found");
                return StringMaker_toString(stringBuffer);
            }
            InventorySearchUtil* inventorySearchUtil = InventorySearchUtil_getInstance();
            BasicArrayList* vector = InventorySearchUtil_getBasicItemIdColumn(inventorySearchUtil, this->searchRequest);
            for (int32_t index = 0; index < size; index++) {
                const char* keywordData = ((const char*) keywordArray[index]);
                if (((int32_t) strlen(keywordData)) > 1) {
                    ProductListing_create(this, keywordData, keywordFilenameHashMap, vector, staticPath);
                }
            }
            ProductListing_addStaticPageInfoToDatabase(this, storeFront, keywordFilenameHashMap);
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, "Static Files Generated Successfully For ");
            StringMaker_append(stringBuffer, StoreFrontInterface_getName(storeFront));
            StringMaker_append(stringBuffer, " it used packages ");
            StringMaker_append(stringBuffer, StoreFrontInterface_getPackageLocation(storeFront));
            StringMaker_append(stringBuffer, this->INVENTORY);
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
const char* ProductListing_generateAll(ProductListing* this, const char* storeName) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            if (storeName != nullptr) {
                if (strcmp(storeName, _GLOBALS2->GENERATEALLSTORES) != 0) {
                    SearchRequest_setStoreFront(this->searchRequest, StoreFrontsEntity_getStoreFrontInterface(this->storeFronts, storeName));
                    StringMaker_append(stringBuffer, ProductListing_generateAll(this));
                    StringMaker_append(stringBuffer, "<br />");
                } else {
                    BasicArrayList* storeFrontVector = StoreFrontsEntity_getStoreFrontNames(this->storeFronts);
                    int32_t size = BasicArrayList_size(storeFrontVector);
                    for (int32_t index = 0; index < size; index++) {
                        storeName = ((const char*) BasicArrayList_get(storeFrontVector, index));
                        SearchRequest_setStoreFront(this->searchRequest, StoreFrontsEntity_getStoreFrontInterface(this->storeFronts, storeName));
                        StringMaker_append(stringBuffer, ProductListing_generateAll(this));
                        StringMaker_append(stringBuffer, "<br />");
                    }
                }
            } else {
                return "Generation Failed No Store Specified<br/>";
            }
            StringMaker_append(stringBuffer, "All Static Pages Generated<br/>");
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}

