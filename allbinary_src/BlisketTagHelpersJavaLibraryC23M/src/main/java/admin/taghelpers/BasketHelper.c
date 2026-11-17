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
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "admin/taghelpers/TagHelper.h"

typedef struct BasketHelper BasketHelper;
struct BasketHelper {
    TagHelper base;
    LogUtil* logUtil;
    WeblisketSession* weblisketSession;
    StoreFrontInterface* storeFrontInterface;
    HashMap* propertiesHashMap;
    PageContext* pageContext;
    int32_t MAX;
};


BasketHelper* BasketHelper_new(HashMap* hashMap, PageContext* pageContext);

void BasketHelper_init(BasketHelper* this, HashMap* hashMap, PageContext* pageContext);
bool BasketHelper_isBasketEmpty(BasketHelper* this);

static void BasketHelper_initFields(BasketHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->storeFrontInterface = nullptr;
    
    
    this->MAX = 200;
}


void BasketHelper_init(BasketHelper* this, HashMap* hashMap, PageContext* pageContext) {
    TagHelper_init(&this->base);
    BasketHelper_initFields(this);
        this->propertiesHashMap = hashMap;
        this->pageContext = pageContext;
        const char* storeName = ((const char*) HashMap_get(this->propertiesHashMap, StoreFrontData_getInstance()->NAME));
        if (storeName != nullptr) {
            this->storeFrontInterface = StoreFrontFactory_getInstance(storeName);
        }
        this->weblisketSession = WeblisketSession_new(hashMap, pageContext);
}

BasketHelper* BasketHelper_new(HashMap* hashMap, PageContext* pageContext) {
    BasketHelper* this = calloc(1, sizeof(BasketHelper));
    BasketHelper_init(this, hashMap, pageContext);
    return this;
}


bool BasketHelper_isBasketEmpty(BasketHelper* this) {
        JAVA_TRY {
            BasketInterface* basket = JAVA_CALL(WeblisketSession_getOrder(this->weblisketSession), getBasket);
            if (JAVA_CALL(BasketInterface_getNumberOfItems(basket), intValue) <= 0) {
                return true;
            } else {
                return false;
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "isBasketEmpty()", e);
            }
            return true;
        } JAVA_END_TRY;
}

