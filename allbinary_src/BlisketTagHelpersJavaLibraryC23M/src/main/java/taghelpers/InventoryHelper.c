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
// package taghelpers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/http/HttpServletResponse.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "admin/taghelpers/TagHelper.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/address/StreetAddress.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/logic/communication/http/AcceptableResponseGenerator.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/search/SearchParams.h"
#include "org/allbinary/logic/control/search/SearchRequest.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#include "views/admin/inventory/listings/InventoryViewFactory.h"
#include "views/admin/inventory/listings/InventoryViewSearchInterface.h"

typedef struct InventoryHelper InventoryHelper;
struct InventoryHelper {
    TagHelper base;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
    WeblisketSession* weblisketSession;
    HttpServletResponse* response;
    HttpServletRequest* request;
    StreetAddress* streetAddress;
    const char* id;
    SearchRequest* searchRequest;
};


InventoryHelper* InventoryHelper_new(HashMap* propertiesHashMap, PageContext* pageContext);

void InventoryHelper_init(InventoryHelper* this, HashMap* propertiesHashMap, PageContext* pageContext);
static void InventoryHelper_getFormData(InventoryHelper* this);
const char* InventoryHelper_viewSummary(InventoryHelper* this);
const char* InventoryHelper_search(InventoryHelper* this);

static void InventoryHelper_initFields(InventoryHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    this->weblisketSession = nullptr;
    
    
    this->streetAddress = nullptr;
    this->id = nullptr;
    this->searchRequest = nullptr;
}


void InventoryHelper_init(InventoryHelper* this, HashMap* propertiesHashMap, PageContext* pageContext) {
    TagHelper_init(&this->base);
    InventoryHelper_initFields(this);
        this->response = ((HttpServletResponse*) PageContext_getResponse(pageContext));
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        const char* storeName = ((const char*) HashMap_get(propertiesHashMap, StoreFrontData_getInstance()->NAME));
        const char* xslFile = ((const char*) HashMap_get(propertiesHashMap, TransformInfoData_getInstance()->TEMPLATEFILENAME));
        if (storeName != nullptr) {
            StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(storeName);
            const char* contentType = AcceptableResponseGenerator_get(AcceptableResponseGenerator_getInstance(), this->request);
            SearchParams* searchParams = SearchParams_new(this->request);
            this->searchRequest = SearchRequest_new(storeFrontInterface, searchParams, xslFile, contentType, propertiesHashMap, pageContext);
        }
        InventoryHelper_getFormData(this);
}

InventoryHelper* InventoryHelper_new(HashMap* propertiesHashMap, PageContext* pageContext) {
    InventoryHelper* this = calloc(1, sizeof(InventoryHelper));
    InventoryHelper_init(this, propertiesHashMap, pageContext);
    return this;
}


static void InventoryHelper_getFormData(InventoryHelper* this) {
        this->id = HttpServletRequest_getParameter(this->request, this->basicItemData->ID);
}


const char* InventoryHelper_viewSummary(InventoryHelper* this) {
        JAVA_TRY {
            InventoryViewSearchInterface* inventoryViewSearchInterface = InventoryViewFactory_getInstance(this->searchRequest);
            const char* result = InventoryViewSearchInterface_getProduct(inventoryViewSearchInterface, this->id);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, "Successfull Inventory View Summary", this, "viewSummary()");
            }
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to View Summary";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "viewSummary()", e);
            }
            return java_concat(java_concat(java_concat(java_concat(error, "<br>"), "Exception: "), java_string_of(e)), "<br>");
        } JAVA_END_TRY;
}


const char* InventoryHelper_search(InventoryHelper* this) {
        JAVA_TRY {
            StringUtil* stringUtil = StringUtil_getInstance();
            const char* keywords = ((const char*) JAVA_CALL(JAVA_CALL(SearchRequest_getParams(this->searchRequest), get), get, this->basicItemData->KEYWORDS));
            if (keywords == nullptr || strcmp(keywords, stringUtil->EMPTY_STRING) == 0) {
                return "Please enter a keyword in the search field above the Search button.";
            }
            InventoryViewSearchInterface* inventoryViewSearchInterface = InventoryViewFactory_getInstance(this->searchRequest);
            const char* result = InventoryViewSearchInterface_searchSingleDynamicPage(inventoryViewSearchInterface);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, "Successful Inventory Dynamic Search", this, "searchSingleDynamicPage()");
            }
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to search Inventory by keyword";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "searchSingleDynamicPage()", e);
            }
            return java_concat(java_concat(java_concat(java_concat(error, "<br>"), "Exception: "), java_string_of(e)), "<br>");
        } JAVA_END_TRY;
}

