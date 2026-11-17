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
// package org.allbinary.data.tables.user.commerce.money.payment

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
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/UserDbInitInfo.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/commerce/money/payment/Payment.h"
#include "org/allbinary/business/user/commerce/money/payment/PaymentData.h"
#include "org/allbinary/business/user/commerce/money/payment/PaymentInterface.h"
#include "org/allbinary/data/generator/PaymentIdGenerator.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/control/crypt/SuperCrypt.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/PaymentEntityInterface.h"

typedef struct PaymentEntity PaymentEntity;
struct PaymentEntity {
    AbSqlBean base;
    PaymentEntityInterface PaymentEntityInterface_interface;
    LogUtil* logUtil;
    const char* tableName;
};


PaymentEntity* PaymentEntity_new(void);

void PaymentEntity_init(PaymentEntity* this);
const char* PaymentEntity_getLastId(PaymentEntity* this, const char* userName);
void PaymentEntity_setDefault(PaymentEntity* this, const char* userName, int32_t index);
BasicArrayList* PaymentEntity_get(PaymentEntity* this, const char* userName);
PaymentInterface* PaymentEntity_getDefault(PaymentEntity* this, const char* userName);
void PaymentEntity_remove(PaymentEntity* this, const char* userName, int32_t index);
void PaymentEntity_add(PaymentEntity* this, const char* userName, PaymentInterface* paymentInterface);
const char* PaymentEntity_createTableStatement(PaymentEntity* this);
const char* PaymentEntity_createTable(PaymentEntity* this);
const char* PaymentEntity_drop(PaymentEntity* this);
void PaymentEntity_insert(PaymentEntity* this, BasicArrayList* values);
const char* PaymentEntity_dropTable(PaymentEntity* this);

static void PaymentEntity_initFields(PaymentEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->tableName = "payment";
}


void PaymentEntity_init(PaymentEntity* this) {
        AbSqlBean_init(&this->base, UserDbInitInfo_new());
        PaymentEntity_initFields(this);
        PaymentEntity_setTableName(this, this->tableName);
}

PaymentEntity* PaymentEntity_new(void) {
    PaymentEntity* this = calloc(1, sizeof(PaymentEntity));
    PaymentEntity_init(this);
    return this;
}


const char* PaymentEntity_getLastId(PaymentEntity* this, const char* userName) {
        return AbSqlBean_getLargestIntegerInColumnWhere((&this->base), PaymentData_ID, UserData_USERNAME, userName);
}


void PaymentEntity_setDefault(PaymentEntity* this, const char* userName, int32_t index) {
        JAVA_TRY {
            HashMap* updateKeyAndValue = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap* whereKeyAndValue = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(whereKeyAndValue, UserData_USERNAME, userName);
            PaymentInterface* paymentInterface = PaymentEntity_getDefault(this, userName);
            if (paymentInterface != nullptr) {
                HashMap_put(updateKeyAndValue, EntryData_getInstance()->DEFAULT, StringUtil_getInstance()->EMPTY_STRING);
                HashMap_put(whereKeyAndValue, PaymentData_ID, PaymentInterface_getId(paymentInterface));
                AbSqlBean_updateWhere((&this->base), whereKeyAndValue, updateKeyAndValue);
            }
            HashMap_put(updateKeyAndValue, EntryData_getInstance()->DEFAULT, EntryData_getInstance()->DEFAULT);
            HashMap_put(whereKeyAndValue, PaymentData_ID, Integer_toString(index));
            AbSqlBean_updateWhere((&this->base), whereKeyAndValue, updateKeyAndValue);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, "setDefault");
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "setDefault", e);
            }
        } JAVA_END_TRY;
}


BasicArrayList* PaymentEntity_get(PaymentEntity* this, const char* userName) {
        JAVA_TRY {
            BasicArrayList* paymentVector = BasicArrayListD_new();
            HashMap* keyAndValue = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(keyAndValue, UserData_USERNAME, userName);
            BasicArrayList* paymentList = AbSqlBean_getRows((&this->base), keyAndValue);
            int32_t size = BasicArrayList_size(paymentList);
            for (int32_t index = 0; index < size; index++) {
                HashMap* paymentHashMap = ((HashMap*) BasicArrayList_get(paymentList, index));
                Payment* payment = Payment_new(paymentHashMap);
                if (payment != nullptr) {
                    BasicArrayList_add(paymentVector, payment);
                }
            }
            return paymentVector;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->commonStrings->GET, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


PaymentInterface* PaymentEntity_getDefault(PaymentEntity* this, const char* userName) {
        JAVA_TRY {
            HashMap* paymentHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap* updateKeyAndValue = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(updateKeyAndValue, EntryData_getInstance()->DEFAULT, EntryData_getInstance()->DEFAULT);
            HashMap_put(updateKeyAndValue, UserData_USERNAME, userName);
            paymentHashMap = AbSqlBean_getRow((&this->base), updateKeyAndValue);
            if (paymentHashMap != nullptr) {
                Payment* payment = Payment_new(paymentHashMap);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, "getDefault");
                }
                return ((PaymentInterface*) payment);
            } else {
                return nullptr;
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "getDefault", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


void PaymentEntity_remove(PaymentEntity* this, const char* userName, int32_t index) {
        JAVA_TRY {
            HashMap* whereHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(whereHashMap, UserData_USERNAME, userName);
            HashMap_put(whereHashMap, PaymentData_ID, ((const char*) Integer_toString(index)));
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


void PaymentEntity_add(PaymentEntity* this, const char* userName, PaymentInterface* paymentInterface) {
        JAVA_TRY {
            BasicArrayList* vector = BasicArrayListD_new();
            BasicArrayList_add(vector, PaymentIdGenerator_getNext(PaymentIdGenerator_new()));
            BasicArrayList_add(vector, userName);
            BasicArrayList_add(vector, StringUtil_getInstance()->EMPTY_STRING);
            BasicArrayList_add(vector, PaymentInterface_getName(paymentInterface));
            BasicArrayList_add(vector, PaymentInterface_getType(paymentInterface));
            BasicArrayList_add(vector, PaymentInterface_getExpiration(paymentInterface));
            int32_t random = Random_nextInt(Random_new(), SuperCrypt_KEYMAX);
            BasicArrayList_add(vector, SuperCrypt_encrypt(SuperCrypt_new(random), PaymentInterface_getNumber(paymentInterface)));
            BasicArrayList_add(vector, Integer_toString(random));
            Calendar* calendar = Calendar_getInstance();
            const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
            BasicArrayList_add(vector, time);
            AbSqlBean_insert((&this->base), vector);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, "add");
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "add", e);
            }
        } JAVA_END_TRY;
}


const char* PaymentEntity_createTableStatement(PaymentEntity* this) {
        EntryData* entryData = EntryData_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE), append, this->tableName), append, this->sqlStrings->START), append, PaymentData_ID), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_AUTO_INCREMENT_NOT_NULL), append, UserData_USERNAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, entryData->DEFAULT), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, PaymentData_NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, PaymentData_TYPE), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, PaymentData_EXPIRATION), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, PaymentData_NUMBER), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, entryData->ENCRYPTION), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, entryData->TIMECREATED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, this->sqlStrings->PRIMARY_KEY), append, PaymentData_ID), append, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* PaymentEntity_createTable(PaymentEntity* this) {
        return AbSqlBean_createTable((&this->base), PaymentEntity_createTableStatement(this));
}


const char* PaymentEntity_drop(PaymentEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}


void PaymentEntity_insert(PaymentEntity* this, BasicArrayList* values) {
        AbSqlBean_insert((&this->base), values);
}


const char* PaymentEntity_dropTable(PaymentEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}

