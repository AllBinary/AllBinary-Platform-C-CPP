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
// package org.allbinary.data.tables.user.commerce.inventory.order

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Calendar.h"
// #include "java/util/HashMap.h"
// #include "java/util/Random.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/HistoryDbInitInfo.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/address/BillingAddressData.h"
#include "org/allbinary/business/user/address/ShippingAddressData.h"
#include "org/allbinary/business/user/address/StreetAddress.h"
#include "org/allbinary/business/user/commerce/inventory/basket/Basket.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h"
#include "org/allbinary/business/user/commerce/inventory/order/Order.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderData.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistory.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h"
#include "org/allbinary/business/user/commerce/money/Money.h"
#include "org/allbinary/business/user/commerce/money/payment/PaymentData.h"
#include "org/allbinary/business/user/commerce/money/payment/PaymentInterface.h"
#include "org/allbinary/business/user/commerce/money/tax/TaxFactory.h"
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodData.h"
#include "org/allbinary/business/user/commerce/shipping/ShippingMethods.h"
#include "org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h"
#include "org/allbinary/data/generator/OrderHistoryIdGenerator.h"
#include "org/allbinary/data/tables/TableDataFactory.h"
#include "org/allbinary/data/tables/user/address/billing/BillingAddressesEntity.h"
#include "org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/PaymentEntity.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/control/crypt/SuperCrypt.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h"

typedef struct OrderHistoryEntity OrderHistoryEntity;
struct OrderHistoryEntity {
    AbSqlBean base;
    OrderHistoryEntityInterface OrderHistoryEntityInterface_interface;
    LogUtil* logUtil;
    const char* tableName;
};


OrderHistoryEntity* OrderHistoryEntity_new(void);

void OrderHistoryEntity_init(OrderHistoryEntity* this);
void OrderHistoryEntity_insert(OrderHistoryEntity* this, const char* userName, Order* order);
void OrderHistoryEntity_insert(OrderHistoryEntity* this, BasicArrayList* values);
void OrderHistoryEntity_setStatus(OrderHistoryEntity* this, const char* orderId, const char* status);
void OrderHistoryEntity_setPaymentMethod(OrderHistoryEntity* this, const char* orderId, const char* paymentMethod);
BasicArrayList* OrderHistoryEntity_getStoreOrders(OrderHistoryEntity* this, StoreFrontInterface* storeFrontInterface);
BasicArrayList* OrderHistoryEntity_getOrders(OrderHistoryEntity* this, const char* userName);
BasicArrayList* OrderHistoryEntity_getOrders(OrderHistoryEntity* this, const char* status, const char* fromDate, const char* toDate);
BasicArrayList* OrderHistoryEntity_getOrders(OrderHistoryEntity* this, const char* fromDate, const char* toDate);
OrderHistory* OrderHistoryEntity_getOrder(OrderHistoryEntity* this, const char* id);
const char* OrderHistoryEntity_createTableStatement(OrderHistoryEntity* this);
const char* OrderHistoryEntity_createTable(OrderHistoryEntity* this);
const char* OrderHistoryEntity_dropTable(OrderHistoryEntity* this);
void OrderHistoryEntity_update(OrderHistoryEntity* this, HashMap* whereHashMap, HashMap* orderHashMap);

static void OrderHistoryEntity_initFields(OrderHistoryEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->tableName = "orderhistory";
}


void OrderHistoryEntity_init(OrderHistoryEntity* this) {
        AbSqlBean_init(&this->base, HistoryDbInitInfo_new());
        OrderHistoryEntity_initFields(this);
        OrderHistoryEntity_setTableName(this, this->tableName);
}

OrderHistoryEntity* OrderHistoryEntity_new(void) {
    OrderHistoryEntity* this = calloc(1, sizeof(OrderHistoryEntity));
    OrderHistoryEntity_init(this);
    return this;
}


void OrderHistoryEntity_insert(OrderHistoryEntity* this, const char* userName, Order* order) {
        BasicArrayList* vector = BasicArrayListD_new();
        JAVA_TRY {
            PaymentInterface* paymentInterface = PaymentEntity_getDefault(PaymentEntity_new(), userName);
            StreetAddress* billingAddress = BillingAddressesEntity_getDefault(BillingAddressesEntity_new(userName));
            StreetAddress* shippingAddress = ShippingAddressesEntity_getDefault(ShippingAddressesEntity_new(userName));
            AbeClientInformationInterface* abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
            StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(Order_getStoreName(order));
            ShippingInterface* shippingInterface = ShippingMethods_getShippingInterface(ShippingMethods_new(abeClientInformation, storeFrontInterface), Order_getShippingMethod(order));
            Money* shippingCost = ShippingInterface_getCost(shippingInterface, order);
            BasketInterface* basketInterface = Order_getBasket(order);
            Money* subTotal = BasketInterface_getSubTotal(basketInterface);
            float taxRate = JAVA_CALL(TaxFactory_getInstance(TaxFactory_getInstance(), abeClientInformation, storeFrontInterface), getTaxRate, shippingAddress, storeFrontInterface);
            Money* tax = Money_new();
            Money* total = Money_new();
            Money_add(total, Money_toString(shippingCost));
            Money_add(total, Money_toString(subTotal));
            Money_add(tax, Money_toString(total));
            Money_multiply(tax, taxRate);
            Money_add(total, Money_toString(tax));
            const char* empty = StringUtil_getInstance()->EMPTY_STRING;
            BasicArrayList_add(vector, OrderHistoryIdGenerator_getNext(OrderHistoryIdGenerator_new()));
            const char* ZERO = TableDataFactory_getInstance()->ZERO_STRING;
            BasicArrayList_add(vector, Order_getId(order));
            BasicArrayList_add(vector, userName);
            BasicArrayList_add(vector, Order_getStoreName(order));
            Calendar* calendar = Calendar_getInstance();
            const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
            BasicArrayList_add(vector, ZERO);
            BasicArrayList_add(vector, time);
            BasicArrayList_add(vector, ZERO);
            BasicArrayList_add(vector, ZERO);
            BasicArrayList_add(vector, OrderHistoryData_PREPROCESSING);
            BasicArrayList_add(vector, Order_getPaymentMethod(order));
            if (paymentInterface != nullptr) {
                BasicArrayList_add(vector, PaymentInterface_getName(paymentInterface));
                BasicArrayList_add(vector, PaymentInterface_getType(paymentInterface));
                BasicArrayList_add(vector, PaymentInterface_getExpiration(paymentInterface));
                int32_t random = Random_nextInt(Random_new(), SuperCrypt_KEYMAX);
                BasicArrayList_add(vector, SuperCrypt_encrypt(SuperCrypt_new(random), PaymentInterface_getNumber(paymentInterface)));
                BasicArrayList_add(vector, Integer_toString(random));
            } else {
                BasicArrayList_add(vector, empty);
                BasicArrayList_add(vector, empty);
                BasicArrayList_add(vector, empty);
                BasicArrayList_add(vector, empty);
                BasicArrayList_add(vector, ZERO);
            }
            if (billingAddress != nullptr) {
                BasicArrayList_add(vector, StreetAddress_getName(billingAddress));
                BasicArrayList_add(vector, StreetAddress_getStreet(billingAddress));
                BasicArrayList_add(vector, StreetAddress_getCity(billingAddress));
                BasicArrayList_add(vector, StreetAddress_getState(billingAddress));
                BasicArrayList_add(vector, StreetAddress_getCode(billingAddress));
                BasicArrayList_add(vector, StreetAddress_getCountry(billingAddress));
            } else {
                BasicArrayList_add(vector, empty);
                BasicArrayList_add(vector, empty);
                BasicArrayList_add(vector, empty);
                BasicArrayList_add(vector, empty);
                BasicArrayList_add(vector, empty);
                BasicArrayList_add(vector, empty);
            }
            if (shippingAddress != nullptr) {
                BasicArrayList_add(vector, StreetAddress_getName(shippingAddress));
                BasicArrayList_add(vector, StreetAddress_getStreet(shippingAddress));
                BasicArrayList_add(vector, StreetAddress_getCity(shippingAddress));
                BasicArrayList_add(vector, StreetAddress_getState(shippingAddress));
                BasicArrayList_add(vector, StreetAddress_getCode(shippingAddress));
                BasicArrayList_add(vector, StreetAddress_getCountry(shippingAddress));
            } else {
                BasicArrayList_add(vector, empty);
                BasicArrayList_add(vector, empty);
                BasicArrayList_add(vector, empty);
                BasicArrayList_add(vector, empty);
                BasicArrayList_add(vector, empty);
                BasicArrayList_add(vector, empty);
            }
            BasicArrayList_add(vector, Order_getShippingMethod(order));
            BasicArrayList_add(vector, Money_toString(subTotal));
            BasicArrayList_add(vector, Money_toString(shippingCost));
            BasicArrayList_add(vector, Money_toString(tax));
            BasicArrayList_add(vector, Money_toString(total));
            BasicArrayList_add(vector, Order_getSpecial(order));
            BasicArrayList_add(vector, Order_getUserComments(order));
            BasicArrayList_add(vector, Order_getUserCancelComments(order));
            BasicArrayList_add(vector, Order_getStoreComments(order));
            BasicArrayList_add(vector, Order_getStoreCancelComments(order));
            OrderHistoryEntity_insert(this, vector);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, AbSqlBean_INSERT);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, java_concat("Command Failed: ", java_string_of(vector)), this, AbSqlBean_INSERT, e);
            }
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
void OrderHistoryEntity_insert(OrderHistoryEntity* this, BasicArrayList* values) {
        JAVA_TRY {
            AbSqlBean_insert((&this->base), values);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, AbSqlBean_INSERT);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, AbSqlBean_INSERT, e);
            }
        } JAVA_END_TRY;
}


void OrderHistoryEntity_setStatus(OrderHistoryEntity* this, const char* orderId, const char* status) {
        JAVA_TRY {
            Calendar* calendar = Calendar_getInstance();
            const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
            HashMap* updateHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(updateHashMap, OrderHistoryData_STATUS, status);
            if (strcmp(status, OrderHistoryData_CANCELLED) == 0) {
                HashMap_put(updateHashMap, OrderHistoryData_CANCELDATE, time);
            } else if (strcmp(status, OrderHistoryData_SHIPPED) == 0) {
                HashMap_put(updateHashMap, OrderHistoryData_SHIPPEDDATE, time);
            }
            AbSqlBean_updateWhere((&this->base), OrderData_ID, orderId, updateHashMap);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "setStatus", e);
            }
        } JAVA_END_TRY;
}


void OrderHistoryEntity_setPaymentMethod(OrderHistoryEntity* this, const char* orderId, const char* paymentMethod) {
        JAVA_TRY {
            Calendar* calendar = Calendar_getInstance();
            const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
            HashMap* updateHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(updateHashMap, PaymentData_METHOD, paymentMethod);
            HashMap_put(updateHashMap, OrderHistoryData_TRANSDATE, time);
            AbSqlBean_updateWhere((&this->base), OrderData_ID, orderId, updateHashMap);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "setPaymentMethod", e);
            }
        } JAVA_END_TRY;
}


// throws Exception
BasicArrayList* OrderHistoryEntity_getStoreOrders(OrderHistoryEntity* this, StoreFrontInterface* storeFrontInterface) {
        BasicArrayList* orderReviewVector = BasicArrayListD_new();
        HashMap* whereHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(whereHashMap, StoreFrontData_getInstance()->NAME, StoreFrontInterface_getName(storeFrontInterface));
        BasicArrayList* orderHashMapVector = AbSqlBean_getRows((&this->base), whereHashMap);
        int32_t size = BasicArrayList_size(orderHashMapVector);
        for (int32_t i = 0; i < size; i++) {
            HashMap* orderReviewHashMap = ((HashMap*) BasicArrayList_get(orderHashMapVector, i));
            OrderHistory* orderReview = OrderHistory_new(Basket_new(), orderReviewHashMap);
            BasicArrayList_add(orderReviewVector, orderReview);
        }
        return orderReviewVector;
}


// throws Exception
BasicArrayList* OrderHistoryEntity_getOrders(OrderHistoryEntity* this, const char* userName) {
        BasicArrayList* orderReviewVector = BasicArrayListD_new();
        HashMap* whereHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(whereHashMap, UserData_USERNAME, userName);
        BasicArrayList* orderHashMapVector = AbSqlBean_getRows((&this->base), whereHashMap);
        int32_t size = BasicArrayList_size(orderHashMapVector);
        for (int32_t index = 0; index < size; index++) {
            HashMap* orderReviewHashMap = ((HashMap*) BasicArrayList_get(orderHashMapVector, index));
            OrderHistory* orderReview = OrderHistory_new(Basket_new(), orderReviewHashMap);
            BasicArrayList_add(orderReviewVector, orderReview);
        }
        return orderReviewVector;
}


// throws Exception
// Java overloaded method: C needs a different name
BasicArrayList* OrderHistoryEntity_getOrders(OrderHistoryEntity* this, const char* status, const char* fromDate, const char* toDate) {
        BasicArrayList* orderReviewVector = BasicArrayListD_new();
        HashMap* whereHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(whereHashMap, OrderHistoryData_STATUS, status);
        BasicArrayList* orderHashMapVector = AbSqlBean_getRowsWhereBetween((&this->base), whereHashMap, OrderHistoryData_ORDERDATE, fromDate, toDate);
        int32_t size = BasicArrayList_size(orderHashMapVector);
        for (int32_t index = 0; index < size; index++) {
            HashMap* orderReviewHashMap = ((HashMap*) BasicArrayList_get(orderHashMapVector, index));
            OrderHistory* orderReview = OrderHistory_new(Basket_new(), orderReviewHashMap);
            BasicArrayList_add(orderReviewVector, orderReview);
        }
        return orderReviewVector;
}


// throws Exception
// Java overloaded method: C needs a different name
BasicArrayList* OrderHistoryEntity_getOrders(OrderHistoryEntity* this, const char* fromDate, const char* toDate) {
        BasicArrayList* orderReviewVector = BasicArrayListD_new();
        BasicArrayList* orderHashMapVector = AbSqlBean_getRowsWhereBetween((&this->base), OrderHistoryData_ORDERDATE, fromDate, toDate);
        int32_t size = BasicArrayList_size(orderHashMapVector);
        for (int32_t index = 0; index < size; index++) {
            HashMap* orderReviewHashMap = ((HashMap*) BasicArrayList_get(orderHashMapVector, index));
            OrderHistory* orderReview = OrderHistory_new(Basket_new(), orderReviewHashMap);
            BasicArrayList_add(orderReviewVector, orderReview);
        }
        return orderReviewVector;
}


// throws Exception
OrderHistory* OrderHistoryEntity_getOrder(OrderHistoryEntity* this, const char* id) {
        HashMap* whereHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(whereHashMap, OrderData_ID, id);
        HashMap* orderReviewHashMap = AbSqlBean_getRow((&this->base), whereHashMap);
        if (orderReviewHashMap != nullptr) {
            OrderHistory* orderHistory = OrderHistory_new(Basket_new(), orderReviewHashMap);
            return orderHistory;
        } else {
            return nullptr;
        }
}


const char* OrderHistoryEntity_createTableStatement(OrderHistoryEntity* this) {
        EntryData* entryData = EntryData_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "CREATE TABLE ");
        StringMaker_append(stringBuffer, this->tableName);
        StringMaker_append(stringBuffer, " (");
        StringMaker_append(stringBuffer, entryData->ID);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, OrderData_ID);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, UserData_USERNAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, StoreFrontData_getInstance()->NAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, OrderHistoryData_SHIPPEDDATE);
        StringMaker_append(stringBuffer, " BIGINT(19) UNSIGNED ,");
        StringMaker_append(stringBuffer, OrderHistoryData_ORDERDATE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, OrderHistoryData_TRANSDATE);
        StringMaker_append(stringBuffer, " BIGINT(19) UNSIGNED ,");
        StringMaker_append(stringBuffer, OrderHistoryData_CANCELDATE);
        StringMaker_append(stringBuffer, " BIGINT(19) UNSIGNED ,");
        StringMaker_append(stringBuffer, OrderHistoryData_STATUS);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, PaymentData_METHOD);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, PaymentData_NAME);
        StringMaker_append(stringBuffer, " VARCHAR(255) ,");
        StringMaker_append(stringBuffer, PaymentData_TYPE);
        StringMaker_append(stringBuffer, " VARCHAR(255) ,");
        StringMaker_append(stringBuffer, PaymentData_EXPIRATION);
        StringMaker_append(stringBuffer, " VARCHAR(255) ,");
        StringMaker_append(stringBuffer, PaymentData_NUMBER);
        StringMaker_append(stringBuffer, " VARCHAR(255) ,");
        StringMaker_append(stringBuffer, entryData->ENCRYPTION);
        StringMaker_append(stringBuffer, " BIGINT(19) UNSIGNED ,");
        StringMaker_append(stringBuffer, BillingAddressData_NAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, BillingAddressData_STREET);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, BillingAddressData_CITY);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, BillingAddressData_STATE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, BillingAddressData_CODE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, BillingAddressData_COUNTRY);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, ShippingAddressData_NAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, ShippingAddressData_STREET);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, ShippingAddressData_CITY);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, ShippingAddressData_STATE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, ShippingAddressData_CODE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, ShippingAddressData_COUNTRY);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, ShippingMethodData_NAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, OrderHistoryData_SUBTOTAL);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, OrderHistoryData_SHIPPINGCOST);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, OrderHistoryData_TAX);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, OrderHistoryData_TOTAL);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, entryData->SPECIAL);
        StringMaker_append(stringBuffer, " VARCHAR(255) ,");
        StringMaker_append(stringBuffer, OrderData_CUSTOMERCOMMENT);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->BLOB_NOT_NULL);
        StringMaker_append(stringBuffer, OrderData_CUSTOMERCANCELCOMMENT);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->BLOB_NOT_NULL);
        StringMaker_append(stringBuffer, OrderData_STORECOMMENT);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->BLOB_NOT_NULL);
        StringMaker_append(stringBuffer, OrderData_STORECANCELCOMMENT);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->BLOB_NOT_NULL);
        StringMaker_append(stringBuffer, "PRIMARY KEY(");
        StringMaker_append(stringBuffer, entryData->ID);
        StringMaker_append(stringBuffer, ") )");
        return StringMaker_toString(stringBuffer);
}


const char* OrderHistoryEntity_createTable(OrderHistoryEntity* this) {
        return AbSqlBean_createTable((&this->base), OrderHistoryEntity_createTableStatement(this));
}


const char* OrderHistoryEntity_dropTable(OrderHistoryEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}


// throws Exception
void OrderHistoryEntity_update(OrderHistoryEntity* this, HashMap* whereHashMap, HashMap* orderHashMap) {
        JAVA_TRY {
            OrderHistoryEntity_updateWhere(this, whereHashMap, orderHashMap);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}

