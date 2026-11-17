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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/commerce/inventory/order/Order.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderInterface.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderProcessorUtil.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntity.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "admin/taghelpers/TagHelper.h"

typedef struct OrderHelper OrderHelper;
struct OrderHelper {
    TagHelper base;
    LogUtil* logUtil;
    WeblisketSession* weblisketSession;
    StoreFrontInterface* storeFrontInterface;
    HashMap* propertiesHashMap;
    PageContext* pageContext;
    HttpServletRequest* request;
};


OrderHelper* OrderHelper_new(HashMap* propertiesHashMap, PageContext* pageContext);

void OrderHelper_init(OrderHelper* this, HashMap* propertiesHashMap, PageContext* pageContext);
bool OrderHelper_setPaymentGateway(OrderHelper* this);
const char* OrderHelper_process(OrderHelper* this);

static void OrderHelper_initFields(OrderHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->storeFrontInterface = nullptr;
    
    
    
}


void OrderHelper_init(OrderHelper* this, HashMap* propertiesHashMap, PageContext* pageContext) {
    TagHelper_init(&this->base);
    OrderHelper_initFields(this);
        this->propertiesHashMap = propertiesHashMap;
        this->pageContext = pageContext;
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        const char* storeName = ((const char*) HashMap_get(propertiesHashMap, StoreFrontData_getInstance()->NAME));
        if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), storeName)) {
            this->storeFrontInterface = StoreFrontFactory_getInstance(storeName);
        }
        this->weblisketSession = WeblisketSession_new(this->propertiesHashMap, this->pageContext);
}

OrderHelper* OrderHelper_new(HashMap* propertiesHashMap, PageContext* pageContext) {
    OrderHelper* this = calloc(1, sizeof(OrderHelper));
    OrderHelper_init(this, propertiesHashMap, pageContext);
    return this;
}


bool OrderHelper_setPaymentGateway(OrderHelper* this) {
        JAVA_TRY {
            bool paymentGatewayBoolean = false;
            OrderInterface* orderInterface = WeblisketSession_getOrder(this->weblisketSession);
            const char* requestPaymentGateway = ((const char*) HttpServletRequest_getParameter(this->request, JAVA_CALL(PaymentGatewayData_NAME, toString)));
            if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), requestPaymentGateway)) {
                WeblisketSession_setPaymentMethod(this->weblisketSession, requestPaymentGateway);
                OrderInterface_setPaymentMethod(orderInterface, requestPaymentGateway);
                paymentGatewayBoolean = true;
            }
            PaymentGatewayEntity* paymentGatewayEntityInterface = ((PaymentGatewayEntity*) PaymentGatewayEntityFactory_getInstance());
            BasicArrayList* paymentTypeVector = PaymentGatewayEntity_findPaymentTypeVectorByStore(paymentGatewayEntityInterface, WeblisketSession_getStoreName(this->weblisketSession));
            if (BasicArrayList_size(paymentTypeVector) == 1) {
                BasicPaymentType* paymentType = ((BasicPaymentType*) BasicArrayList_get(paymentTypeVector, 0));
                PaymentGatewayInterface* paymentGatewayInterface = ((PaymentGatewayInterface*) PaymentGatewayEntity_getPaymentGatewayInterface(paymentGatewayEntityInterface, WeblisketSession_getStoreName(this->weblisketSession), paymentType));
                const char* paymentGateway = PaymentGatewayInterface_getName(paymentGatewayInterface);
                WeblisketSession_setPaymentMethod(this->weblisketSession, paymentGateway);
                OrderInterface_setPaymentMethod(orderInterface, paymentGateway);
                paymentGatewayBoolean = true;
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Successfully set PaymentGateway Order: ");
                StringMaker_append(stringBuffer, OrderInterface_getId(orderInterface));
                StringMaker_append(stringBuffer, " to: ");
                StringMaker_append(stringBuffer, OrderInterface_getPaymentMethod(orderInterface));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "setPaymentGateway()");
            }
            return paymentGatewayBoolean;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Failed to set PaymentGateway for Order: ");
                JAVA_TRY {
                    OrderInterface* orderInterface = WeblisketSession_getOrder(this->weblisketSession);
                    if (orderInterface != nullptr) {
                        StringMaker_append(stringBuffer, OrderInterface_getId(orderInterface));
                        StringMaker_append(stringBuffer, " to: ");
                        StringMaker_append(stringBuffer, OrderInterface_getPaymentMethod(orderInterface));
                    }
                } JAVA_CATCH(Exception, ex) {
                    StringMaker_append(stringBuffer, " Exception Getting");
                } JAVA_END_TRY;
                LogUtil_put(this->logUtil, StringMaker_toString(stringBuffer), this, "setPaymentGateway()", e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* OrderHelper_process(OrderHelper* this) {
        JAVA_TRY {
            OrderInterface* order = WeblisketSession_getOrder(this->weblisketSession);
            OrderInterface_setStoreName(order, StoreFrontInterface_getName(this->storeFrontInterface));
            const char* result = OrderProcessorUtil_process(OrderProcessorUtil_getInstance(), WeblisketSession_getUserName(this->weblisketSession), ((Order*) order));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, java_concat("Successfully Processed Order: ", result), this, "processOrder()");
            }
            return result;
        } JAVA_CATCH(Exception, e) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Failed to Process Order: ");
            JAVA_TRY {
                StringMaker_append(stringBuffer, JAVA_CALL(WeblisketSession_getOrder(this->weblisketSession), getId));
            } JAVA_CATCH(Exception, ex) {
                StringMaker_append(stringBuffer, " Exception Getting Id");
            } JAVA_END_TRY;
            const char* error = StringMaker_toString(stringBuffer);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, e);
            }
            return error;
        } JAVA_END_TRY;
}

