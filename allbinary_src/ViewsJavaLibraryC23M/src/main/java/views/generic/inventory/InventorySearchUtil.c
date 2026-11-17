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
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/commerce/inventory/InventoryData.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketData.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemView.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/search/SearchData.h"
#include "org/allbinary/logic/control/search/SearchParams.h"
#include "org/allbinary/logic/control/search/SearchRequest.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/string/regex/replace/Replace.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/StoreTransformer.h"
#include "org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h"
#include "org/allbinary/logic/visual/transform/data/TransformStoreDocumentFactory.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpSearch.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct InventorySearchUtil InventorySearchUtil;
struct InventorySearchUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CommonPhoneStrings* commonPhoneStrings;
    BasicItemData* basicItemData;
};

static InventorySearchUtil* InventorySearchUtil_instance;

InventorySearchUtil* InventorySearchUtil_new(void);
InventorySearchUtil* InventorySearchUtil_getInstance(void);
BasicArrayList* InventorySearchUtil_getBasicItemIdColumn(InventorySearchUtil* this, SearchRequest* searchRequest);
static const char* InventorySearchUtil_getNoResults(InventorySearchUtil* this, TransformDocumentInterface* viewDocumentInterface, Node* inventoryNode);
const char** InventorySearchUtil_search(InventorySearchUtil* this, AbeClientInformationInterface* abeClientInformation, SearchRequest* searchRequest, BasicArrayList* column);

// Static fields with runtime initializers: call this once at startup
void InventorySearchUtil_staticInit(void) {
    InventorySearchUtil_instance = InventorySearchUtil_new();
}

static void InventorySearchUtil_initFields(InventorySearchUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->commonPhoneStrings = CommonPhoneStrings_getInstance();
    this->basicItemData = BasicItemData_getInstance();
}

void InventorySearchUtil_init(InventorySearchUtil* this) {
    InventorySearchUtil_initFields(this);
}

InventorySearchUtil* InventorySearchUtil_new(void) {
    InventorySearchUtil* this = calloc(1, sizeof(InventorySearchUtil));
    InventorySearchUtil_init(this);
    return this;
}


InventorySearchUtil* InventorySearchUtil_getInstance(void) {
        return InventorySearchUtil_instance;
}


// throws Exception
BasicArrayList* InventorySearchUtil_getBasicItemIdColumn(InventorySearchUtil* this, SearchRequest* searchRequest) {
        InventoryEntity* inventoryEntityInterface = InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance());
        StoreFrontInterface* storeFrontInterface = SearchRequest_getStoreFront(searchRequest);
        InventoryColumnUtil* inventorySearchUtil = InventoryColumnUtil_getInstance();
        BasicArrayList* column = InventoryColumnUtil_getColumnWhereLike(inventorySearchUtil, inventoryEntityInterface, StoreFrontInterface_getCategoryPath(storeFrontInterface), this->basicItemData->ID);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRODUCTSEARCHLOGGING)) {
            LogUtil_putF(this->logUtil, java_concat("Number Of Items Found: ", java_string_of(BasicArrayList_size(column))), this, "search");
        }
        BasicArrayList* subStoreVector = StoreFrontInterface_getSubStores(storeFrontInterface);
        int32_t size = BasicArrayList_size(subStoreVector);
        for (int32_t index = 0; index < size; index++) {
            const char* subStore = ((const char*) BasicArrayList_get(subStoreVector, index));
            BasicArrayList* substoreIdColumn = InventoryColumnUtil_getColumnWhereLike(inventorySearchUtil, inventoryEntityInterface, subStore, this->basicItemData->ID);
            BasicArrayList_addAllList(column, substoreIdColumn);
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRODUCTSEARCHLOGGING)) {
            LogUtil_putF(this->logUtil, java_concat("Number Of Items Found Including SubStores: ", java_string_of(BasicArrayList_size(column))), this, "search");
        }
        return column;
}


// throws Exception
static const char* InventorySearchUtil_getNoResults(InventorySearchUtil* this, TransformDocumentInterface* viewDocumentInterface, Node* inventoryNode) {
        Node_appendChild(inventoryNode, ModDomHelper_createNameValueNodes(TransformDocumentInterface_getDoc(viewDocumentInterface), SearchData_TOTAL_NUMBER_PAGES, this->commonPhoneStrings->ZERO));
        Node_appendChild(inventoryNode, ModDomHelper_createNameValueNodes(TransformDocumentInterface_getDoc(viewDocumentInterface), SearchData_TOTAL_NUMBER_ITEMS, this->commonPhoneStrings->ZERO));
        const char* success = XmlDocumentHelper_toString(TransformDocumentInterface_getDoc(viewDocumentInterface));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRODUCTSEARCHLOGGING)) {
            LogUtil_putF(this->logUtil, java_concat("No Results Xml: ", success), this, "search");
        }
        return success;
}


const char** InventorySearchUtil_search(InventorySearchUtil* this, AbeClientInformationInterface* abeClientInformation, SearchRequest* searchRequest, BasicArrayList* column) {
        JAVA_TRY {
            InventoryEntity* inventoryEntityInterface = InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance());
            SearchParams* searchParams = SearchRequest_getParams(searchRequest);
            int32_t startPage = JAVA_CALL(SearchParams_getStartPageInt(searchParams), intValue);
            int32_t endPage = JAVA_CALL(SearchParams_getEndPageInt(searchParams), intValue);
            int32_t pageLength = JAVA_CALL(SearchParams_getLengthInt(searchParams), intValue);
            int32_t savedPagesInRange = 0;
            HashMap* columnValueHashMap = SearchParams_get(searchParams);
            const char* keyword = Replace_all(Replace_new("-", CommonSeps_getInstance()->SPACE), ((const char*) HashMap_get(columnValueHashMap, this->basicItemData->KEYWORDS)));
            if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), keyword)) {
                return nullptr;
            }
            StringMaker* stringBuffer = StringMaker_new();
            if (startPage >= 0) {
                if (pageLength == 0) {
                    pageLength = SearchData_DEFAULT_PAGE_LENGTH;
                }
                int32_t MAXPAGES = 100;
                const char** productListingPages = ((const char**) java_array_new(sizeof(const char*), MAXPAGES));
                Document** documents = ((Document**) java_array_new(sizeof(Document*), MAXPAGES));
                Node** inventoryNodes = ((Node**) java_array_new(sizeof(Node*), MAXPAGES));
                keyword = java_string_toUpperCase(keyword);
                int32_t lastPage = -1;
                int32_t numberOfResultsOnCurrentPage = 0;
                int32_t numberOfResults = 0;
                TransformDocumentInterface* viewDocumentInterface = TransformStoreDocumentFactory_getInstance(searchRequest);
                Node* inventoryNode = JAVA_CALL(TransformDocumentInterface_getDoc(viewDocumentInterface), createElement, InventoryData_INVENTORY);
                JAVA_CALL(TransformDocumentInterface_getBaseNode(viewDocumentInterface), appendChild, inventoryNode);
                Node_appendChild(inventoryNode, ModDomHelper_createNameValueNodes(TransformDocumentInterface_getDoc(viewDocumentInterface), SearchData_PAGE, Integer_toString(startPage)));
                if (SearchRequest_getFileBaseName(searchRequest) != nullptr) {
                    Node_appendChild(inventoryNode, SearchRequest_getFileBaseNameNode(searchRequest, TransformDocumentInterface_getDoc(viewDocumentInterface)));
                }
                int32_t currentPage = -1;
                int32_t size = BasicArrayList_size(column);
                for (int32_t index = 0; index < size; index++) {
                    const char* product = java_string_new(((const char*) BasicArrayList_get(column, index)));
                    ItemInterface* itemInterface = InventoryEntity_getItem(inventoryEntityInterface, product);
                    const char* keywords = ItemInterface_getKeywords(itemInterface);
                    keywords = java_string_toUpperCase(keywords);
                    if (java_string_indexOf(keywords, keyword) != -1) {
                        if (currentPage + 1 >= startPage && currentPage + 1 <= endPage) {
                            Node* itemNode = BasicItemView_toXmlNode(BasicItemView_new(itemInterface, BasicArrayListD_new()), TransformDocumentInterface_getDoc(viewDocumentInterface));
                            Node_appendChild(itemNode, ModDomHelper_createNameValueNodes(TransformDocumentInterface_getDoc(viewDocumentInterface), BasketData_ITEMTOTALINBASKET, this->commonPhoneStrings->ONE));
                            Node_appendChild(inventoryNode, Node_cloneNode(itemNode, true));
                        }
                        currentPage = ((numberOfResults + 1) / pageLength) - 1;
                        numberOfResultsOnCurrentPage++;
                        if (lastPage < currentPage) {
                            if (currentPage >= startPage && currentPage <= endPage) {
                                Node_appendChild(inventoryNode, ModDomHelper_createNameValueNodes(TransformDocumentInterface_getDoc(viewDocumentInterface), SearchData_TOTAL_NUMBER_ITEMS_ON_THIS_PAGE, Integer_toString(numberOfResultsOnCurrentPage)));
                                documents[currentPage] = TransformDocumentInterface_getDoc(viewDocumentInterface);
                                inventoryNodes[currentPage] = inventoryNode;
                                savedPagesInRange++;
                                viewDocumentInterface = TransformStoreDocumentFactory_getInstance(searchRequest);
                                inventoryNode = JAVA_CALL(TransformDocumentInterface_getDoc(viewDocumentInterface), createElement, InventoryData_INVENTORY);
                                JAVA_CALL(TransformDocumentInterface_getBaseNode(viewDocumentInterface), appendChild, inventoryNode);
                                Node_appendChild(inventoryNode, ModDomHelper_createNameValueNodes(TransformDocumentInterface_getDoc(viewDocumentInterface), SearchData_PAGE, Integer_toString(currentPage + 1)));
                                if (SearchRequest_getFileBaseName(searchRequest) != nullptr) {
                                    Node_appendChild(inventoryNode, SearchRequest_getFileBaseNameNode(searchRequest, TransformDocumentInterface_getDoc(viewDocumentInterface)));
                                }
                            }
                            lastPage = currentPage;
                            numberOfResultsOnCurrentPage = 0;
                        }
                        numberOfResults++;
                        if (lastPage >= MAXPAGES - 1) {
                            break;
                        }
                    }
                }
                if (numberOfResultsOnCurrentPage > 0 && (currentPage + 1 >= startPage && currentPage + 1 <= endPage)) {
                    Node_appendChild(inventoryNode, ModDomHelper_createNameValueNodes(TransformDocumentInterface_getDoc(viewDocumentInterface), SearchData_TOTAL_NUMBER_ITEMS_ON_THIS_PAGE, Integer_toString(numberOfResultsOnCurrentPage - 1)));
                    documents[lastPage + 1] = TransformDocumentInterface_getDoc(viewDocumentInterface);
                    inventoryNodes[lastPage + 1] = inventoryNode;
                    savedPagesInRange++;
                }
                if (numberOfResultsOnCurrentPage > 0) {
                    lastPage++;
                }
                if (endPage > MAXPAGES - 1) {
                    endPage = MAXPAGES - 1;
                }
                for (int32_t index = startPage; index <= endPage; index++) {
                    if (index <= lastPage) {
                        Document* tempDocument = documents[index];
                        JAVA_CALL(inventoryNodes[index], appendChild, ModDomHelper_createNameValueNodes(tempDocument, SearchData_TOTAL_NUMBER_PAGES, Integer_toString(lastPage + 1)));
                        JAVA_CALL(inventoryNodes[index], appendChild, ModDomHelper_createNameValueNodes(tempDocument, SearchData_TOTAL_NUMBER_ITEMS, Integer_toString(numberOfResults)));
                        for (int32_t pageIndex = 0; pageIndex <= lastPage; pageIndex++) {
                            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                            StringMaker_append(stringBuffer, SearchRequest_getFileBaseName(searchRequest));
                            if (StringMaker_length(stringBuffer) > 0) {
                                if (pageIndex != 0) {
                                    StringMaker_append(stringBuffer, java_string_of(pageIndex));
                                }
                                JAVA_CALL(inventoryNodes[index], appendChild, ModDomHelper_createNameValueNodes(tempDocument, SearchData_PAGE_INFO, java_string_of(pageIndex), StringMaker_toString(stringBuffer)));
                            } else {
                                JAVA_CALL(inventoryNodes[index], appendChild, ModDomHelper_createNameValueNodes(tempDocument, SearchData_PAGE_INFO, java_string_of(pageIndex), SearchData_SEARCH));
                            }
                        }
                        const char* success = XmlDocumentHelper_toString(tempDocument);
                        productListingPages[index] = StoreTransformer_translate(StoreTransformer_new(abeClientInformation, ((TransformInfoInterface*) TransformInfoHttpSearch_new(searchRequest))), success);
                    }
                }
                if (savedPagesInRange == 0) {
                    const char* result = InventorySearchUtil_getNoResults(this, viewDocumentInterface, inventoryNode);
                    productListingPages[0] = StoreTransformer_translate(StoreTransformer_new(abeClientInformation, TransformInfoHttpSearch_new(searchRequest)), result);
                }
                return productListingPages;
            } else {
                return nullptr;
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRODUCTSEARCHLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "search", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

