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
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderInterface.h"
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodData.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "admin/taghelpers/TagHelper.h"

typedef struct ShippingHelper ShippingHelper;
struct ShippingHelper {
    TagHelper base;
    LogUtil* logUtil;
    WeblisketSession* weblisketSession;
    StoreFrontInterface* storeFrontInterface;
    HashMap* propertiesHashMap;
    PageContext* pageContext;
    HttpServletRequest* request;
    const char* shippingType;
};


ShippingHelper* ShippingHelper_new(HashMap* hashMap, PageContext* pageContext);

void ShippingHelper_init(ShippingHelper* this, HashMap* hashMap, PageContext* pageContext);
static void ShippingHelper_getFormData(ShippingHelper* this);
const char* ShippingHelper_setShippingType(ShippingHelper* this);

static void ShippingHelper_initFields(ShippingHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->storeFrontInterface = nullptr;
    this->propertiesHashMap = nullptr;
    
    
    this->shippingType = nullptr;
}


void ShippingHelper_init(ShippingHelper* this, HashMap* hashMap, PageContext* pageContext) {
    TagHelper_init(&this->base);
    ShippingHelper_initFields(this);
        this->pageContext = pageContext;
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        const char* storeName = ((const char*) HashMap_get(hashMap, StoreFrontData_getInstance()->NAME));
        if (storeName != nullptr) {
            this->storeFrontInterface = StoreFrontFactory_getInstance(storeName);
        }
        this->weblisketSession = WeblisketSession_new(hashMap, pageContext);
        ShippingHelper_getFormData(this);
}

ShippingHelper* ShippingHelper_new(HashMap* hashMap, PageContext* pageContext) {
    ShippingHelper* this = calloc(1, sizeof(ShippingHelper));
    ShippingHelper_init(this, hashMap, pageContext);
    return this;
}


static void ShippingHelper_getFormData(ShippingHelper* this) {
        this->shippingType = HttpServletRequest_getParameter(this->request, ShippingMethodData_NAME);
}


const char* ShippingHelper_setShippingType(ShippingHelper* this) {
        JAVA_TRY {
            const char* success = "Successfully Set Shipping Type";
            OrderInterface* order = WeblisketSession_getOrder(this->weblisketSession);
            OrderInterface_setShippingMethod(order, this->shippingType);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "setShippingType()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to view Shipping Type";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setShippingType()", e);
            }
            return error;
        } JAVA_END_TRY;
}

