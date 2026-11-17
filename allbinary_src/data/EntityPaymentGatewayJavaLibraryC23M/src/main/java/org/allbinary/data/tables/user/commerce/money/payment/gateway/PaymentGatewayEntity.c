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
// package org.allbinary.data.tables.user.commerce.money.payment.gateway

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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/UserDbInitInfo.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/commerce/money/payment/PaymentData.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayEncryptedMapping.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactory.h"
#include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h"
#include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h"
#include "org/allbinary/data/generator/PaymentGatewayIdGenerator.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/control/crypt/SuperCrypt.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityInterface.h"

typedef struct PaymentGatewayEntity PaymentGatewayEntity;
struct PaymentGatewayEntity {
    AbSqlBean base;
    PaymentGatewayEntityInterface PaymentGatewayEntityInterface_interface;
    LogUtil* logUtil;
    const char* tableName;
};


PaymentGatewayEntity* PaymentGatewayEntity_new(void);

void PaymentGatewayEntity_init(PaymentGatewayEntity* this);
void PaymentGatewayEntity_add(PaymentGatewayEntity* this, PaymentGatewayInterface* paymentGatewayInterface);
void PaymentGatewayEntity_update(PaymentGatewayEntity* this, PaymentGatewayInterface* paymentGatewayInterface);
PaymentGatewayInterface* PaymentGatewayEntity_getPaymentGatewayInterface(PaymentGatewayEntity* this, const char* storeName, BasicPaymentType* paymentType);
BasicArrayList* PaymentGatewayEntity_findPaymentTypeVectorByStore(PaymentGatewayEntity* this, const char* storeName);
void PaymentGatewayEntity_remove(PaymentGatewayEntity* this, const char* storeName, BasicPaymentType* paymentType);
const char* PaymentGatewayEntity_createTableStatement(PaymentGatewayEntity* this);
const char* PaymentGatewayEntity_createTable(PaymentGatewayEntity* this);
const char* PaymentGatewayEntity_dropTable(PaymentGatewayEntity* this);

static void PaymentGatewayEntity_initFields(PaymentGatewayEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->tableName = "paymentgateways";
}


void PaymentGatewayEntity_init(PaymentGatewayEntity* this) {
        AbSqlBean_init(&this->base, UserDbInitInfo_new());
        PaymentGatewayEntity_initFields(this);
        PaymentGatewayEntity_setTableName(this, this->tableName);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
            LogUtil_putF(this->logUtil, this->commonStrings->CONSTRUCTOR, this, this->commonStrings->CONSTRUCTOR);
        }
}

PaymentGatewayEntity* PaymentGatewayEntity_new(void) {
    PaymentGatewayEntity* this = calloc(1, sizeof(PaymentGatewayEntity));
    PaymentGatewayEntity_init(this);
    return this;
}


void PaymentGatewayEntity_add(PaymentGatewayEntity* this, PaymentGatewayInterface* paymentGatewayInterface) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, "add");
            }
            BasicArrayList* vector = BasicArrayListD_new();
            BasicArrayList_add(vector, PaymentGatewayIdGenerator_getNext(PaymentGatewayIdGenerator_new()));
            BasicArrayList_addAllList(vector, PaymentGatewayEncryptedMapping_toVector(PaymentGatewayEncryptedMapping_new(paymentGatewayInterface)));
            Calendar* calendar = Calendar_getInstance();
            const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
            BasicArrayList_add(vector, time);
            BasicArrayList_add(vector, time);
            AbSqlBean_insert((&this->base), vector);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->END, this, "add");
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "add", e);
            }
        } JAVA_END_TRY;
}


void PaymentGatewayEntity_update(PaymentGatewayEntity* this, PaymentGatewayInterface* paymentGatewayInterface) {
        JAVA_TRY {
            Calendar* calendar = Calendar_getInstance();
            const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
            PaymentGatewayInterface_setLastModified(paymentGatewayInterface, time);
            HashMap* whereKeyValuePairs = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(whereKeyValuePairs, JAVA_CALL(StoreFrontData_getInstance()->NAME, toString), PaymentGatewayInterface_getStoreName(paymentGatewayInterface));
            HashMap_put(whereKeyValuePairs, JAVA_CALL(PaymentGatewayData_NAME, toString), PaymentGatewayInterface_getName(paymentGatewayInterface));
            if (HashMap_get(whereKeyValuePairs, EntryData_getInstance()->TIMECREATED) != nullptr) {
                java_throw(java_exception_new("Exception", "Don't update TimeCreated for update"));
            }
            HashMap* updateHashMap = PaymentGatewayEncryptedMapping_toHashMap(PaymentGatewayEncryptedMapping_new(paymentGatewayInterface));
            AbSqlBean_updateWhere((&this->base), whereKeyValuePairs, updateHashMap);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, "update");
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "update", e);
            }
        } JAVA_END_TRY;
}


PaymentGatewayInterface* PaymentGatewayEntity_getPaymentGatewayInterface(PaymentGatewayEntity* this, const char* storeName, BasicPaymentType* paymentType) {
        JAVA_TRY {
            HashMap* paymentGatewayHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap* whereKeyAndValue = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(whereKeyAndValue, JAVA_CALL(StoreFrontData_getInstance()->NAME, toString), storeName);
            HashMap_put(whereKeyAndValue, JAVA_CALL(PaymentGatewayData_NAME, toString), BasicPaymentType_getName(paymentType));
            paymentGatewayHashMap = AbSqlBean_getRow((&this->base), whereKeyAndValue);
            if (paymentGatewayHashMap != nullptr) {
                const char* userName = ((const char*) HashMap_get(paymentGatewayHashMap, JAVA_CALL(UserData_USERNAME, toString)));
                const char* password = ((const char*) HashMap_get(paymentGatewayHashMap, JAVA_CALL(UserData_PASSWORD, toString)));
                const char* special1 = ((const char*) HashMap_get(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL1, toString)));
                const char* special2 = ((const char*) HashMap_get(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL2, toString)));
                const char* special3 = ((const char*) HashMap_get(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL3, toString)));
                const char* special4 = ((const char*) HashMap_get(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL4, toString)));
                const char* special5 = ((const char*) HashMap_get(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL5, toString)));
                const char* special6 = ((const char*) HashMap_get(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL6, toString)));
                const char* special7 = ((const char*) HashMap_get(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL7, toString)));
                const char* special8 = ((const char*) HashMap_get(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL8, toString)));
                const char* special9 = ((const char*) HashMap_get(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL9, toString)));
                SuperCrypt* superCrypt = SuperCrypt_new(PaymentGatewayData_CRYPTNUM);
                HashMap_put(paymentGatewayHashMap, JAVA_CALL(UserData_USERNAME, toString), SuperCrypt_decrypt(superCrypt, userName));
                HashMap_put(paymentGatewayHashMap, JAVA_CALL(UserData_PASSWORD, toString), SuperCrypt_decrypt(superCrypt, password));
                HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL1, toString), SuperCrypt_decrypt(superCrypt, special1));
                HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL2, toString), SuperCrypt_decrypt(superCrypt, special2));
                HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL3, toString), SuperCrypt_decrypt(superCrypt, special3));
                HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL4, toString), SuperCrypt_decrypt(superCrypt, special4));
                HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL5, toString), SuperCrypt_decrypt(superCrypt, special5));
                HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL6, toString), SuperCrypt_decrypt(superCrypt, special6));
                HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL7, toString), SuperCrypt_decrypt(superCrypt, special7));
                HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL8, toString), SuperCrypt_decrypt(superCrypt, special8));
                HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL9, toString), SuperCrypt_decrypt(superCrypt, special9));
                PaymentGatewayInterface* paymentGatewayInterface = PaymentGatewayInterfaceFactory_getInstance(PaymentGatewayInterfaceFactory_new(), paymentGatewayHashMap);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, "getPaymentGatewayInterface()");
                }
                return paymentGatewayInterface;
            } else {
                return PaymentGatewayInterfaceFactory_getInstance(PaymentGatewayInterfaceFactory_new(), paymentType);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, java_concat("Command Failed for paymentType: ", BasicPaymentType_getName(paymentType)), this, "getPaymentGatewayInterface", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


BasicArrayList* PaymentGatewayEntity_findPaymentTypeVectorByStore(PaymentGatewayEntity* this, const char* storeName) {
        JAVA_TRY {
            BasicArrayList* paymentGatewayNameVector = BasicArrayListD_new();
            paymentGatewayNameVector = AbSqlBean_getColumnWhere((&this->base), JAVA_CALL(PaymentGatewayData_NAME, toString), JAVA_CALL(StoreFrontData_getInstance()->NAME, toString), storeName);
            if (paymentGatewayNameVector != nullptr) {
                BasicArrayList* paymentGatewayVector = BasicArrayListD_new();
                int32_t size = BasicArrayList_size(paymentGatewayNameVector);
                for (int32_t i = 0; i < size; i++) {
                    const char* paymentTypeString = ((const char*) BasicArrayList_get(paymentGatewayNameVector, i));
                    BasicPaymentType* paymentType = BasicPaymentTypeUtil_get(BasicPaymentTypeUtil_getInstance(), paymentTypeString);
                    BasicArrayList_add(paymentGatewayVector, paymentType);
                }
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, "findPaymentTypeVectorByStore()");
                }
                return paymentGatewayVector;
            } else {
                return BasicArrayListD_new();
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "findPaymentTypeVectorByStore", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


void PaymentGatewayEntity_remove(PaymentGatewayEntity* this, const char* storeName, BasicPaymentType* paymentType) {
        JAVA_TRY {
            HashMap* whereHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(whereHashMap, JAVA_CALL(StoreFrontData_getInstance()->NAME, toString), storeName);
            HashMap_put(whereHashMap, JAVA_CALL(PaymentGatewayData_NAME, toString), BasicPaymentType_getName(paymentType));
            AbSqlBean_deleteWhere((&this->base), whereHashMap);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, "remove");
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "remove", e);
            }
        } JAVA_END_TRY;
}


const char* PaymentGatewayEntity_createTableStatement(PaymentGatewayEntity* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE);
        StringMaker_append(stringBuffer, this->tableName);
        StringMaker_append(stringBuffer, this->sqlStrings->START);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_ID, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_AUTO_INCREMENT_NOT_NULL);
        StringMaker_append(stringBuffer, EntryData_getInstance()->ENABLE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, StoreFrontData_getInstance()->NAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_NAME, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, PaymentData_METHOD);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_MODE, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_TESTPROTOCOL, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_TESTSERVER, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_TESTPORT, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_TESTPATH, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_SERVERPROTOCOL, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_SERVER, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_SERVERPORT, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_SERVERPATH, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, UserData_USERNAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, UserData_PASSWORD);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_TIMEOUT, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_PROXYPROTOCOL, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_PROXYSERVER, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_PROXYPORT, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_PROXYPATH, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_PROXYUSERNAME, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_PROXYPASSWORD, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_PROXYTIMEOUT, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_SPECIAL1, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_SPECIAL2, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_SPECIAL3, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_SPECIAL4, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_SPECIAL5, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_SPECIAL6, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_SPECIAL7, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_SPECIAL8, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_SPECIAL9, toString));
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, EntryData_getInstance()->LASTMODIFIED);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, EntryData_getInstance()->TIMECREATED);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, this->sqlStrings->PRIMARY_KEY);
        StringMaker_append(stringBuffer, JAVA_CALL(PaymentGatewayData_ID, toString));
        StringMaker_append(stringBuffer, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* PaymentGatewayEntity_createTable(PaymentGatewayEntity* this) {
        return AbSqlBean_createTable((&this->base), PaymentGatewayEntity_createTableStatement(this));
}


const char* PaymentGatewayEntity_dropTable(PaymentGatewayEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}

