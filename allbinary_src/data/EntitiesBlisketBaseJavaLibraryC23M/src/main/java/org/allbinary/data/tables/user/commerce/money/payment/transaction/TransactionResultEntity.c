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
// package org.allbinary.data.tables.user.commerce.money.payment.transaction

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
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/UserDbInitInfo.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderData.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionKeysFactory.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/TransactionResult.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/TransactionResultInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionResultEntityInterface.h"

typedef struct TransactionResultEntity TransactionResultEntity;
struct TransactionResultEntity {
    AbSqlBean base;
    TransactionResultEntityInterface TransactionResultEntityInterface_interface;
    LogUtil* logUtil;
    const char* tableName;
};


TransactionResultEntity* TransactionResultEntity_new(void);

void TransactionResultEntity_init(TransactionResultEntity* this);
void TransactionResultEntity_remove(TransactionResultEntity* this, const char* userName, const char* orderNumber);
void TransactionResultEntity_add(TransactionResultEntity* this, const char* userName, const char* orderNumber, TransactionResultInterface* transactionResultInterface);
TransactionResultInterface* TransactionResultEntity_getTransactionResultInterface(TransactionResultEntity* this, const char* orderNumber);
const char* TransactionResultEntity_createTableStatement(TransactionResultEntity* this);
const char* TransactionResultEntity_createTable(TransactionResultEntity* this);
const char* TransactionResultEntity_dropTable(TransactionResultEntity* this);

static void TransactionResultEntity_initFields(TransactionResultEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->tableName = "vresults";
}


void TransactionResultEntity_init(TransactionResultEntity* this) {
        AbSqlBean_init(&this->base, UserDbInitInfo_new());
        TransactionResultEntity_initFields(this);
        TransactionResultEntity_setTableName(this, this->tableName);
}

TransactionResultEntity* TransactionResultEntity_new(void) {
    TransactionResultEntity* this = calloc(1, sizeof(TransactionResultEntity));
    TransactionResultEntity_init(this);
    return this;
}


void TransactionResultEntity_remove(TransactionResultEntity* this, const char* userName, const char* orderNumber) {
        JAVA_TRY {
            HashMap* whereHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(whereHashMap, OrderData_ID, ((const char*) orderNumber));
            HashMap_put(whereHashMap, UserData_USERNAME, userName);
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


void TransactionResultEntity_add(TransactionResultEntity* this, const char* userName, const char* orderNumber, TransactionResultInterface* transactionResultInterface) {
        JAVA_TRY {
            BasicArrayList* values = BasicArrayListD_new();
            BasicArrayList_add(values, orderNumber);
            BasicArrayList_add(values, userName);
            BasicArrayList_addAllList(values, TransactionResultInterface_getValues(transactionResultInterface));
            Calendar* calendar = Calendar_getInstance();
            const char* time = Long_toString(Calendar_getTimeInMillis(calendar));
            BasicArrayList_add(values, time);
            BasicArrayList_add(values, time);
            AbSqlBean_insert((&this->base), values);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, "add");
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "add", e);
            }
        } JAVA_END_TRY;
}


TransactionResultInterface* TransactionResultEntity_getTransactionResultInterface(TransactionResultEntity* this, const char* orderNumber) {
        JAVA_TRY {
            HashMap* resultHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap* updateKeyAndValue = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(updateKeyAndValue, OrderData_ID, orderNumber);
            resultHashMap = AbSqlBean_getRow((&this->base), updateKeyAndValue);
            if (resultHashMap != nullptr) {
                TransactionResult* transactionResult = TransactionResult_new(resultHashMap);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, "getTransactionResultInterface");
                }
                return ((TransactionResultInterface*) transactionResult);
            } else {
                return nullptr;
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "getTransactionResultInterface", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


const char* TransactionResultEntity_createTableStatement(TransactionResultEntity* this) {
        PaymentTransactionKeysFactory* paymentTransactionKeysFactory = PaymentTransactionKeysFactory_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE), append, this->tableName), append, this->sqlStrings->START), append, OrderData_ID), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, UserData_USERNAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, JAVA_CALL(paymentTransactionKeysFactory->RESULT, toString)), append, this->sqlTypeStrings->MAX_INT_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->PNREF, toString)), append, this->sqlTypeStrings->TWELVE_CHAR_COLUMN_NOT_NULL);
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, JAVA_CALL(paymentTransactionKeysFactory->RESPMSG, toString)), append, this->sqlTypeStrings->BLOB_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->AUTHCODE, toString)), append, this->sqlTypeStrings->SIX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->AVSADDR, toString)), append, this->sqlTypeStrings->ONE_CHAR_COLUMN_NOT_NULL);
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, JAVA_CALL(paymentTransactionKeysFactory->AVSZIP, toString)), append, this->sqlTypeStrings->ONE_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->ORIGRESULT, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->STATUS, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        JAVA_CALL(StringMaker_append(stringBuffer, JAVA_CALL(paymentTransactionKeysFactory->FRAUDCODE, toString)), append, this->sqlTypeStrings->TWO_INT_NOT_NULL);
        JAVA_CALL(StringMaker_append(stringBuffer, JAVA_CALL(paymentTransactionKeysFactory->FRAUDMSG, toString)), append, this->sqlTypeStrings->MAX_INT_NOT_NULL);
        JAVA_CALL(StringMaker_append(stringBuffer, JAVA_CALL(paymentTransactionKeysFactory->ERRCODE, toString)), append, this->sqlTypeStrings->MAX_INT_NOT_NULL);
        JAVA_CALL(StringMaker_append(stringBuffer, JAVA_CALL(paymentTransactionKeysFactory->SCORE, toString)), append, this->sqlTypeStrings->THREE_INT_NOT_NULL);
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, JAVA_CALL(paymentTransactionKeysFactory->REASON1, toString)), append, this->sqlTypeStrings->FOUR_INT_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->REASON2, toString)), append, this->sqlTypeStrings->FOUR_INT_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->REASON3, toString));
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, this->sqlTypeStrings->FOUR_INT_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->EXCEPTION1, toString)), append, this->sqlTypeStrings->FOUR_INT_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->EXCEPTION2, toString)), append, this->sqlTypeStrings->FOUR_INT_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->EXCEPTION3, toString)), append, this->sqlTypeStrings->FOUR_INT_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->EXCEPTION4, toString)), append, this->sqlTypeStrings->FOUR_INT_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->EXCEPTION5, toString)), append, this->sqlTypeStrings->FOUR_INT_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->EXCEPTION6, toString)), append, this->sqlTypeStrings->FOUR_INT_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->EXCEPTION7, toString)), append, this->sqlTypeStrings->FOUR_INT_NOT_NULL), append, EntryData_getInstance()->LASTMODIFIED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, EntryData_getInstance()->TIMECREATED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, this->sqlStrings->PRIMARY_KEY), append, OrderData_ID), append, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* TransactionResultEntity_createTable(TransactionResultEntity* this) {
        return AbSqlBean_createTable((&this->base), TransactionResultEntity_createTableStatement(this));
}


const char* TransactionResultEntity_dropTable(TransactionResultEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}

