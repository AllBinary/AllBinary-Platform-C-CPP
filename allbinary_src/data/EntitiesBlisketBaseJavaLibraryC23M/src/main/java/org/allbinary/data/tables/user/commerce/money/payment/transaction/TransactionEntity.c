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
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionKeysFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionEntityInterface.h"

typedef struct TransactionEntity TransactionEntity;
struct TransactionEntity {
    AbSqlBean base;
    TransactionEntityInterface TransactionEntityInterface_interface;
    LogUtil* logUtil;
    const char* tableName;
};


TransactionEntity* TransactionEntity_new(void);

void TransactionEntity_init(TransactionEntity* this);
void TransactionEntity_remove(TransactionEntity* this, const char* userName, const char* orderNumber);
void TransactionEntity_add(TransactionEntity* this, const char* userName, const char* orderNumber, PaymentTransactionInterface* paymentTransactionInterface);
const char* TransactionEntity_createTableStatement(TransactionEntity* this);
const char* TransactionEntity_createTable(TransactionEntity* this);
const char* TransactionEntity_dropTable(TransactionEntity* this);

static void TransactionEntity_initFields(TransactionEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->tableName = "vtrans";
}


void TransactionEntity_init(TransactionEntity* this) {
        AbSqlBean_init(&this->base, UserDbInitInfo_new());
        TransactionEntity_initFields(this);
        TransactionEntity_setTableName(this, this->tableName);
}

TransactionEntity* TransactionEntity_new(void) {
    TransactionEntity* this = calloc(1, sizeof(TransactionEntity));
    TransactionEntity_init(this);
    return this;
}


void TransactionEntity_remove(TransactionEntity* this, const char* userName, const char* orderNumber) {
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


void TransactionEntity_add(TransactionEntity* this, const char* userName, const char* orderNumber, PaymentTransactionInterface* paymentTransactionInterface) {
        JAVA_TRY {
            BasicArrayList* values = BasicArrayListD_new();
            BasicArrayList_add(values, orderNumber);
            BasicArrayList_add(values, userName);
            BasicArrayList_addAllList(values, PaymentTransactionInterface_toVector(paymentTransactionInterface));
            Calendar* calendar = Calendar_getInstance();
            const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
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


const char* TransactionEntity_createTableStatement(TransactionEntity* this) {
        PaymentTransactionKeysFactory* paymentTransactionKeysFactory = PaymentTransactionKeysFactory_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE);
        StringMaker_append(stringBuffer, this->tableName);
        StringMaker_append(stringBuffer, this->sqlStrings->START);
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, OrderData_ID), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, UserData_USERNAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->TRXTYPE, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->TENDER, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->ACCT, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->EXPDATE, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->AMT, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->AUTHCODE, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->MICR, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->CHECKNUM, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->NAME, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->STREET, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->CITY, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->STATE, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->ZIP, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->DL, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->EMAIL, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->COMMENT1, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->COMMENT2, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->ORIGID, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->PONUM, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->DESC, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->DESC1TO4, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->INVNUM, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->SHIPTOZIP, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->SWIPE, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->TAXAMT, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->COMMCARD, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->DUTYAMT, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->FREIGHTAMT, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->ORDERDATE, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->TAXEXEMPT, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->COUNTRYCODE, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->CUSTCODE, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->CVV2, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->ABA, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->ACCTTYPE, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->DISCOUNT, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->FIRSTNAME, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->LASTNAME, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->SHIPFROMZIP, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->PRENOTE, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->CHKTYPE, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->DOB, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->PHONENUM, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->SS, toString)), append, " VARCHAR(30) NOT NULL,"), append, JAVA_CALL(paymentTransactionKeysFactory->COMPANYNAME, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->COUNTRY, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->SHIPTOCITY, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->SHIPTOFIRSTNAME, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->SHIPTOLASTNAME, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->SHIPTOSTATE, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->SHIPTOSTREET, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->SPECIAL1, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->SPECIAL2, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, JAVA_CALL(paymentTransactionKeysFactory->SPECIAL3, toString)), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, EntryData_getInstance()->LASTMODIFIED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, EntryData_getInstance()->TIMECREATED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, this->sqlStrings->PRIMARY_KEY), append, OrderData_ID), append, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* TransactionEntity_createTable(TransactionEntity* this) {
        return AbSqlBean_createTable((&this->base), TransactionEntity_createTableStatement(this));
}


const char* TransactionEntity_dropTable(TransactionEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}

