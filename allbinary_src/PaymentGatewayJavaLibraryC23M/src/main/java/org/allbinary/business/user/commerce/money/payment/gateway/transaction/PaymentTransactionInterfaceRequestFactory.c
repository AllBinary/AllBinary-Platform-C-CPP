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
// package org.allbinary.business.user.commerce.money.payment.gateway.transaction

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
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/address/StreetAddress.h"
#include "org/allbinary/business/user/commerce/inventory/basket/Basket.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistory.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderInterface.h"
#include "org/allbinary/business/user/commerce/money/Money.h"
#include "org/allbinary/business/user/commerce/money/payment/Payment.h"
#include "org/allbinary/business/user/commerce/money/payment/PaymentData.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h"
#include "org/allbinary/business/user/commerce/money/payment/types/TenderTypeFactory.h"
#include "org/allbinary/business/user/commerce/money/payment/types/TransactionTypeFactory.h"
#include "org/allbinary/data/generator/OrderIdGenerator.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct PaymentTransactionInterfaceRequestFactory PaymentTransactionInterfaceRequestFactory;
struct PaymentTransactionInterfaceRequestFactory {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};

static PaymentTransactionInterfaceRequestFactory* PaymentTransactionInterfaceRequestFactory_instance;

PaymentTransactionInterfaceRequestFactory* PaymentTransactionInterfaceRequestFactory_new(void);
PaymentTransactionInterfaceRequestFactory* PaymentTransactionInterfaceRequestFactory_getInstance(void);

void PaymentTransactionInterfaceRequestFactory_init(PaymentTransactionInterfaceRequestFactory* this);
PaymentTransactionInterface* PaymentTransactionInterfaceRequestFactory_getInstance(PaymentTransactionInterfaceRequestFactory* this, TransformInfoInterface* transformInfoInterface);
static PaymentTransactionInterface* PaymentTransactionInterfaceRequestFactory_generateFromTestData(PaymentTransactionInterfaceRequestFactory* this, TransformInfoInterface* transformInfoInterface);

// Static fields with runtime initializers: call this once at startup
void PaymentTransactionInterfaceRequestFactory_staticInit(void) {
    PaymentTransactionInterfaceRequestFactory_instance = PaymentTransactionInterfaceRequestFactory_new();
}

static void PaymentTransactionInterfaceRequestFactory_initFields(PaymentTransactionInterfaceRequestFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


PaymentTransactionInterfaceRequestFactory* PaymentTransactionInterfaceRequestFactory_getInstance(void) {
        return PaymentTransactionInterfaceRequestFactory_instance;
}


void PaymentTransactionInterfaceRequestFactory_init(PaymentTransactionInterfaceRequestFactory* this) {
    PaymentTransactionInterfaceRequestFactory_initFields(this);
}

PaymentTransactionInterfaceRequestFactory* PaymentTransactionInterfaceRequestFactory_new(void) {
    PaymentTransactionInterfaceRequestFactory* this = calloc(1, sizeof(PaymentTransactionInterfaceRequestFactory));
    PaymentTransactionInterfaceRequestFactory_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
PaymentTransactionInterface* PaymentTransactionInterfaceRequestFactory_getInstance(PaymentTransactionInterfaceRequestFactory* this, TransformInfoInterface* transformInfoInterface) {
        JAVA_TRY {
            TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) transformInfoInterface);
            PageContext* pageContext = TransformInfoHttpInterface_getPageContext(httpTransformInfoInterface);
            HttpServletRequest* httpServletRequest = ((HttpServletRequest*) PageContext_getRequest(pageContext));
            const char* command = HttpServletRequest_getParameter(httpServletRequest, org_allbinary->globals->GLOBALS2->ADMINCOMMAND);
            if (command != nullptr && strcmp(command, org_allbinary->globals->GLOBALS2->AUTHORIZEFORMEVALBODYONERROR) == 0) {
                return PaymentTransactionInterfaceRequestFactory_generateFromTestData(this, transformInfoInterface);
            } else {
                HashMap* propertiesHashMap = TransformInfoHttpInterface_getPropertiesHashMap(httpTransformInfoInterface);
                WeblisketSession* weblisketSession = WeblisketSession_new(propertiesHashMap, pageContext);
                StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(WeblisketSession_getStoreName(weblisketSession));
                OrderInterface* order = WeblisketSession_getOrder(weblisketSession);
                const char* orderId = OrderInterface_getId(order);
                OrderHistoryEntityInterface* orderHistoryEntityInterface = OrderHistoryEntityFactory_getInstance();
                OrderHistory* orderReview = OrderHistoryEntityInterface_getOrder(orderHistoryEntityInterface, orderId);
                Payment* orderPaymentInfo = OrderHistory_getPaymentInfo(orderReview);
                Payment_setTransactionType(orderPaymentInfo, JAVA_CALL(TransactionTypeFactory_getInstance()->SALE, toString));
                Payment_setTenderType(orderPaymentInfo, JAVA_CALL(TenderTypeFactory_getInstance()->CREDITCARD, toString));
                OrderHistory_setPaymentInfo(orderReview, orderPaymentInfo);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PAYMENT)) {
                    LogUtil_putF(this->logUtil, OrderHistory_getId(orderReview), this, "getPaymentTransactionInterface()");
                }
                PaymentTransactionInterface* paymentTransactionInterface = PaymentTransactionInterfaceFactory_getInstance(PaymentTransactionInterfaceFactory_getInstance(), orderReview);
                return paymentTransactionInterface;
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PAYMENTERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getPaymentTransactionInterface()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
static PaymentTransactionInterface* PaymentTransactionInterfaceRequestFactory_generateFromTestData(PaymentTransactionInterfaceRequestFactory* this, TransformInfoInterface* transformInfoInterface) {
        JAVA_TRY {
            TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) transformInfoInterface);
            HashMap* propertiesHashMap = TransformInfoHttpInterface_getPropertiesHashMap(httpTransformInfoInterface);
            PageContext* pageContext = TransformInfoHttpInterface_getPageContext(httpTransformInfoInterface);
            WeblisketSession* weblisketSession = WeblisketSession_new(propertiesHashMap, pageContext);
            StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(WeblisketSession_getStoreName(weblisketSession));
            HttpServletRequest* httpServletRequest = ((HttpServletRequest*) PageContext_getRequest(pageContext));
            const char* gatewayName = ((const char*) WeblisketSession_getPaymentMethod(weblisketSession));
            if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), gatewayName)) {
                gatewayName = HttpServletRequest_getParameter(httpServletRequest, JAVA_CALL(PaymentGatewayData_NAME, toString));
            }
            const char* transactionType = HttpServletRequest_getParameter(httpServletRequest, PaymentData_TRANSACTIONTYPE);
            const char* tenderType = HttpServletRequest_getParameter(httpServletRequest, PaymentData_TENDERTYPE);
            Payment* payment = Payment_new();
            Payment_setTransactionType(payment, transactionType);
            Payment_setTenderType(payment, tenderType);
            OrderHistory* orderReview = OrderHistory_new(Basket_new());
            OrderHistory_setStoreName(orderReview, StoreFrontInterface_getName(storeFrontInterface));
            OrderHistory_setPaymentMethod(orderReview, gatewayName);
            OrderHistory_setUserName(orderReview, "testing");
            const char* orderId = HttpServletRequest_getParameter(httpServletRequest, "orderNumber");
            if (orderId == nullptr || strcmp(orderId, StringUtil_getInstance()->EMPTY_STRING) == 0) {
                orderId = OrderIdGenerator_getNext(OrderIdGenerator_new());
                OrderHistory_setId(orderReview, orderId);
                const char* account = HttpServletRequest_getParameter(httpServletRequest, "account");
                const char* expirationDate = HttpServletRequest_getParameter(httpServletRequest, "expirationDate");
                const char* checkNumber = HttpServletRequest_getParameter(httpServletRequest, "checkNumber");
                const char* driversLicense = HttpServletRequest_getParameter(httpServletRequest, "driversLicense");
                const char* magneticInkCheckReader = HttpServletRequest_getParameter(httpServletRequest, "magneticInkCheckReader");
                const char* aba = HttpServletRequest_getParameter(httpServletRequest, "aba");
                const char* accountType = HttpServletRequest_getParameter(httpServletRequest, "accountType");
                const char* name = HttpServletRequest_getParameter(httpServletRequest, "name");
                Payment_setName(payment, name);
                Payment_setNumber(payment, account);
                Payment_setExpiration(payment, expirationDate);
                Payment_setCheckNumber(payment, checkNumber);
                Payment_setDriversLicense(payment, driversLicense);
                Payment_setMagneticInkCheckReader(payment, magneticInkCheckReader);
                Payment_setAba(payment, aba);
                Payment_setAccountType(payment, accountType);
                const char* street = HttpServletRequest_getParameter(httpServletRequest, "street");
                const char* city = HttpServletRequest_getParameter(httpServletRequest, "city");
                const char* state = HttpServletRequest_getParameter(httpServletRequest, "state");
                const char* zip = HttpServletRequest_getParameter(httpServletRequest, "zip");
                StreetAddress* streetAddress = StreetAddress_new();
                StreetAddress_setName(streetAddress, name);
                StreetAddress_setStreet(streetAddress, street);
                StreetAddress_setCity(streetAddress, city);
                StreetAddress_setState(streetAddress, state);
                StreetAddress_setCode(streetAddress, zip);
                const char* email = HttpServletRequest_getParameter(httpServletRequest, "email");
                const char* amount = HttpServletRequest_getParameter(httpServletRequest, "amount");
                OrderHistory_setTotal(orderReview, Money_new(amount));
                OrderHistory_setBillingAddress(orderReview, streetAddress);
            } else {
                OrderHistory_setId(orderReview, orderId);
            }
            OrderHistory_setPaymentInfo(orderReview, payment);
            PaymentTransactionInterface* paymentTransactionInterface = PaymentTransactionInterfaceFactory_getInstance(PaymentTransactionInterfaceFactory_getInstance(), orderReview);
            return paymentTransactionInterface;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PAYMENTERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "generatePaymentTransactionInterfaceFromTestData()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

