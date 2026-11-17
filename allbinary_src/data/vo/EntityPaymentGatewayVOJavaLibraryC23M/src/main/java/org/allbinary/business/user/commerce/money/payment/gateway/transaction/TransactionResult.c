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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/tokens/Tokenizer.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/TransactionResultInterface.h"

typedef struct TransactionResult TransactionResult;
struct TransactionResult {
    TransactionResultInterface TransactionResultInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    HashMap* keyValuePairs;
    const char* result;
};


TransactionResult* TransactionResult_new(const char* result);

void TransactionResult_init(TransactionResult* this, const char* result);

TransactionResult* TransactionResult_new1(HashMap* keyValuePairs);
void TransactionResult_init1(TransactionResult* this, HashMap* keyValuePairs);
const char* TransactionResult_toString(TransactionResult* this);
HashMap* TransactionResult_toHashMap(TransactionResult* this);
static BasicArrayList* TransactionResult_getAllPossibleKeys(TransactionResult* this);
BasicArrayList* TransactionResult_getValues(TransactionResult* this);
const char* TransactionResult_getPnRef(TransactionResult* this);
const char* TransactionResult_getRespMsg(TransactionResult* this);
const char* TransactionResult_getResult(TransactionResult* this);
const char* TransactionResult_getScore(TransactionResult* this);
const char* TransactionResult_getStatus(TransactionResult* this);
const char* TransactionResult_getFraudCode(TransactionResult* this);
const char* TransactionResult_getFraudMsg(TransactionResult* this);
const char* TransactionResult_getOrigResult(TransactionResult* this);
const char* TransactionResult_getAvsAddr(TransactionResult* this);
const char* TransactionResult_getAvsZip(TransactionResult* this);
const char* TransactionResult_getErrCode(TransactionResult* this);
const char* TransactionResult_getException1(TransactionResult* this);
const char* TransactionResult_getException2(TransactionResult* this);
const char* TransactionResult_getException3(TransactionResult* this);
const char* TransactionResult_getException4(TransactionResult* this);
const char* TransactionResult_getException5(TransactionResult* this);
const char* TransactionResult_getException6(TransactionResult* this);
const char* TransactionResult_getException7(TransactionResult* this);
const char* TransactionResult_getReason1(TransactionResult* this);
const char* TransactionResult_getReason2(TransactionResult* this);
const char* TransactionResult_getReason3(TransactionResult* this);

static void TransactionResult_initFields(TransactionResult* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
}


void TransactionResult_init(TransactionResult* this, const char* result) {
    TransactionResult_initFields(this);
        JAVA_TRY {
            this->result = result;
            Tokenizer* tokenizer = Tokenizer_new(CommonSeps_getInstance()->AMPERSAND);
            BasicArrayList* tokens = Tokenizer_getTokensFromString(tokenizer, result, BasicArrayListD_new());
            Tokenizer* tokenizer2 = Tokenizer_new(CommonSeps_getInstance()->EQUALS);
            ABHashtable* hashtable = Tokenizer_getTokens(tokenizer2, tokens);
            HashMap_putAll(this->keyValuePairs, hashtable);
        } JAVA_CATCH(Exception, e) {
            const char* exceptionMessage = "TransactionResult Constructor Failed";
            LogUtil_putF(this->logUtil, exceptionMessage, this, this->commonStrings->CONSTRUCTOR);
        } JAVA_END_TRY;
}

TransactionResult* TransactionResult_new(const char* result) {
    TransactionResult* this = calloc(1, sizeof(TransactionResult));
    TransactionResult_init(this, result);
    return this;
}


void TransactionResult_init1(TransactionResult* this, HashMap* keyValuePairs) {
    TransactionResult_initFields(this);
        keyValuePairs = keyValuePairs;
        this->result = "Needs to have the hashmap converted to string for other constructor";
}

TransactionResult* TransactionResult_new1(HashMap* keyValuePairs) {
    TransactionResult* this = calloc(1, sizeof(TransactionResult));
    TransactionResult_init1(this, keyValuePairs);
    return this;
}


const char* TransactionResult_toString(TransactionResult* this) {
        return this->result;
}


HashMap* TransactionResult_toHashMap(TransactionResult* this) {
        return this->keyValuePairs;
}


static BasicArrayList* TransactionResult_getAllPossibleKeys(TransactionResult* this) {
        PaymentTransactionKeysFactory* paymentTransactionKeysFactory = PaymentTransactionKeysFactory_getInstance();
        BasicArrayList* verisignResponseKeys = BasicArrayListD_new();
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->RESULT, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->PNREF, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->RESPMSG, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->AUTHCODE, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->AVSADDR, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->AVSZIP, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->ORIGRESULT, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->STATUS, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->FRAUDCODE, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->FRAUDMSG, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->ERRCODE, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->SCORE, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->REASON1, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->REASON2, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->REASON3, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->EXCEPTION1, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->EXCEPTION2, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->EXCEPTION3, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->EXCEPTION4, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->EXCEPTION5, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->EXCEPTION6, toString));
        BasicArrayList_add(verisignResponseKeys, JAVA_CALL(paymentTransactionKeysFactory->EXCEPTION7, toString));
        return verisignResponseKeys;
}


BasicArrayList* TransactionResult_getValues(TransactionResult* this) {
        BasicArrayList* keyVector = TransactionResult_getAllPossibleKeys(this);
        BasicArrayList* valueVector = BasicArrayListD_new();
        int32_t size = BasicArrayList_size(keyVector);
        for (int32_t i = 0; i < size; i++) {
            const char* key = ((const char*) BasicArrayList_get(keyVector, i));
            if (HashMap_containsKey(this->keyValuePairs, key)) {
                BasicArrayList_add(valueVector, HashMap_get(this->keyValuePairs, key));
            } else {
                StringUtil* stringUtil = StringUtil_getInstance();
                BasicArrayList_add(valueVector, stringUtil->EMPTY_STRING);
            }
        }
        return valueVector;
}


const char* TransactionResult_getPnRef(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->PNREF, toString)));
}


const char* TransactionResult_getRespMsg(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->RESPMSG, toString)));
}


const char* TransactionResult_getResult(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->RESULT, toString)));
}


const char* TransactionResult_getScore(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->SCORE, toString)));
}


const char* TransactionResult_getStatus(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->STATUS, toString)));
}


const char* TransactionResult_getFraudCode(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->FRAUDCODE, toString)));
}


const char* TransactionResult_getFraudMsg(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->FRAUDMSG, toString)));
}


const char* TransactionResult_getOrigResult(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->ORIGRESULT, toString)));
}


const char* TransactionResult_getAvsAddr(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->AVSADDR, toString)));
}


const char* TransactionResult_getAvsZip(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->AVSZIP, toString)));
}


const char* TransactionResult_getErrCode(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->ERRCODE, toString)));
}


const char* TransactionResult_getException1(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->EXCEPTION1, toString)));
}


const char* TransactionResult_getException2(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->EXCEPTION2, toString)));
}


const char* TransactionResult_getException3(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->EXCEPTION3, toString)));
}


const char* TransactionResult_getException4(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->EXCEPTION4, toString)));
}


const char* TransactionResult_getException5(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->EXCEPTION5, toString)));
}


const char* TransactionResult_getException6(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->EXCEPTION6, toString)));
}


const char* TransactionResult_getException7(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->EXCEPTION7, toString)));
}


const char* TransactionResult_getReason1(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->REASON1, toString)));
}


const char* TransactionResult_getReason2(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->REASON2, toString)));
}


const char* TransactionResult_getReason3(TransactionResult* this) {
        return ((const char*) HashMap_get(this->keyValuePairs, JAVA_CALL(PaymentTransactionKeysFactory_getInstance()->REASON3, toString)));
}

