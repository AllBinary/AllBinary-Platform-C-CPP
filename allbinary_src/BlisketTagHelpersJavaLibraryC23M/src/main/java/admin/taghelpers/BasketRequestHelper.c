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
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/context/modules/storefront/StoreFront.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketData.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "admin/taghelpers/TagHelper.h"

typedef struct BasketRequestHelper BasketRequestHelper;
struct BasketRequestHelper {
    TagHelper base;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
    WeblisketSession* weblisketSession;
    StoreFrontInterface* storeFrontInterface;
    HashMap* propertiesHashMap;
    PageContext* pageContext;
    HttpServletRequest* request;
    const char* id;
    const char* num;
    int32_t MAX;
};


BasketRequestHelper* BasketRequestHelper_new(HashMap* propertiesHashMap, PageContext* pageContext);

void BasketRequestHelper_init(BasketRequestHelper* this, HashMap* propertiesHashMap, PageContext* pageContext);
static void BasketRequestHelper_getFormData(BasketRequestHelper* this);
bool BasketRequestHelper_addItemToBasket(BasketRequestHelper* this);
bool BasketRequestHelper_removeItemFromBasket(BasketRequestHelper* this);
bool BasketRequestHelper_adjustBasket(BasketRequestHelper* this);

static void BasketRequestHelper_initFields(BasketRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    
    this->storeFrontInterface = nullptr;
    
    
    
    this->id = nullptr;
    this->num = nullptr;
    this->MAX = 200;
}


void BasketRequestHelper_init(BasketRequestHelper* this, HashMap* propertiesHashMap, PageContext* pageContext) {
    TagHelper_init(&this->base);
    BasketRequestHelper_initFields(this);
        this->propertiesHashMap = propertiesHashMap;
        this->pageContext = pageContext;
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        const char* storeName = ((const char*) HashMap_get(propertiesHashMap, StoreFrontData_getInstance()->NAME));
        if (storeName != nullptr) {
            this->storeFrontInterface = StoreFrontFactory_getInstance(storeName);
        } else {
            this->storeFrontInterface = StoreFront_new();
        }
        this->weblisketSession = WeblisketSession_new(propertiesHashMap, pageContext);
        BasketRequestHelper_getFormData(this);
}

BasketRequestHelper* BasketRequestHelper_new(HashMap* propertiesHashMap, PageContext* pageContext) {
    BasketRequestHelper* this = calloc(1, sizeof(BasketRequestHelper));
    BasketRequestHelper_init(this, propertiesHashMap, pageContext);
    return this;
}


static void BasketRequestHelper_getFormData(BasketRequestHelper* this) {
        this->id = HttpServletRequest_getParameter(this->request, this->basicItemData->ID);
        this->num = HttpServletRequest_getParameter(this->request, BasketData_ITEMTOTALINBASKET);
}


bool BasketRequestHelper_addItemToBasket(BasketRequestHelper* this) {
        JAVA_TRY {
            if (this->id != nullptr && this->num != nullptr) {
                BasketInterface* basket = JAVA_CALL(WeblisketSession_getOrder(this->weblisketSession), getBasket);
                if (JAVA_CALL(InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance()), getItem, this->id) == nullptr) {
                    return false;
                }
                BasketInterface_addItem(basket, this->id, this->num);
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, "Successfully added item to Basket", this, "addItemToBasket()");
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "addItemToBasket()", e);
            }
            return false;
        } JAVA_END_TRY;
}


bool BasketRequestHelper_removeItemFromBasket(BasketRequestHelper* this) {
        JAVA_TRY {
            if (this->id != nullptr) {
                BasketInterface* basket = JAVA_CALL(WeblisketSession_getOrder(this->weblisketSession), getBasket);
                BasketInterface_removeItem(basket, this->id);
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, "Successfully removed item from Basket", this, "removeItemFromBasket()");
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "removeItemFromBasket()", e);
            }
            return false;
        } JAVA_END_TRY;
}


bool BasketRequestHelper_adjustBasket(BasketRequestHelper* this) {
        JAVA_TRY {
            BasketInterface* basket = JAVA_CALL(WeblisketSession_getOrder(this->weblisketSession), getBasket);
            if (this->id != nullptr && this->num != nullptr) {
                BasketInterface_adjustItem(basket, this->id, this->num);
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, "Successfull Adjusted Basket", this, "adjustBasket()");
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "adjustBasket()", e);
            }
            return false;
        } JAVA_END_TRY;
}

