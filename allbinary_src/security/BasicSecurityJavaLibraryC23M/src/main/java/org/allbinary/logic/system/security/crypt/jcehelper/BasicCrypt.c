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
// package org.allbinary.logic.system.security.crypt.jcehelper

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/init/crypt/jcehelper/CryptInterface.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/java/byteutil/ByteUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct BasicCrypt BasicCrypt;
struct BasicCrypt {
    CryptInterface CryptInterface_interface;
    ByteUtil* byteUtil;
    int8_t* key;
};


BasicCrypt* BasicCrypt_new(const char* keyAsString);

void BasicCrypt_init(BasicCrypt* this, const char* keyAsString);
int8_t* BasicCrypt_encrypt(BasicCrypt* this, int8_t* array);
int8_t* BasicCrypt_decrypt(BasicCrypt* this, int8_t* array);
int8_t* BasicCrypt_mutilate(BasicCrypt* this, int8_t* array);

static void BasicCrypt_initFields(BasicCrypt* this) {
    this->byteUtil = ByteUtil_getInstance();
    
}


void BasicCrypt_init(BasicCrypt* this, const char* keyAsString) {
    BasicCrypt_initFields(this);
        int8_t* key = NullUtil_getInstance()->NULL_BYTE_ARRAY;
        JAVA_TRY {
            key = TsUtil_getByteArray(TsUtil_getInstance(), keyAsString);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_putOE(commonStrings->EXCEPTION, this, "AbCrypt(alg,key)", e);
        } JAVA_END_TRY;
        this->key = key;
}

BasicCrypt* BasicCrypt_new(const char* keyAsString) {
    BasicCrypt* this = calloc(1, sizeof(BasicCrypt));
    BasicCrypt_init(this, keyAsString);
    return this;
}


int8_t* BasicCrypt_encrypt(BasicCrypt* this, int8_t* array) {
        JAVA_TRY {
            return BasicCrypt_mutilate(this, array);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE("Encrypt Failed", this, "encrypt", e);
            return NullUtil_getInstance()->NULL_BYTE_ARRAY;
        } JAVA_END_TRY;
}


int8_t* BasicCrypt_decrypt(BasicCrypt* this, int8_t* array) {
        JAVA_TRY {
            return BasicCrypt_mutilate(this, array);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE("decrypt Failed", this, "decrypt", e);
            return NullUtil_getInstance()->NULL_BYTE_ARRAY;
        } JAVA_END_TRY;
}


int8_t* BasicCrypt_mutilate(BasicCrypt* this, int8_t* array) {
        int8_t value = 0;
        for (int32_t index = 0; index < java_array_length(this->key); index++) {
            value = this->key[index];
            array = ByteUtil_xor(this->byteUtil, array, value);
        }
        return array;
}

