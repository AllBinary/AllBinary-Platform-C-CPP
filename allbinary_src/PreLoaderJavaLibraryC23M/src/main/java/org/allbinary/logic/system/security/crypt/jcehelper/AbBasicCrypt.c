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
// #include "java/security/Provider.h"
// #include "java/security/Security.h"
// #include "java/security/spec/KeySpec.h"
// #include "javax/crypto/Cipher.h"
// #include "javax/crypto/SecretKey.h"
// #include "javax/crypto/SecretKeyFactory.h"
#include "org/allbinary/init/crypt/jcehelper/CryptInterface.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct AbBasicCrypt AbBasicCrypt;
struct AbBasicCrypt {
    CryptInterface CryptInterface_interface;
    Cipher* cipher;
    SecretKey* secretKey;
    const char* algorithm;
    int8_t* key;
};


AbBasicCrypt* AbBasicCrypt_new(const char* algorithm, const char* key);

void AbBasicCrypt_init(AbBasicCrypt* this, const char* algorithm, const char* key);
static void AbBasicCrypt_init(AbBasicCrypt* this);
int8_t* AbBasicCrypt_encrypt(AbBasicCrypt* this, int8_t* array);
int8_t* AbBasicCrypt_decrypt(AbBasicCrypt* this, int8_t* array);

static void AbBasicCrypt_initFields(AbBasicCrypt* this) {
    this->cipher = nullptr;
    this->secretKey = nullptr;
    this->algorithm = nullptr;
    this->key = nullptr;
}


void AbBasicCrypt_init(AbBasicCrypt* this, const char* algorithm, const char* key) {
    AbBasicCrypt_initFields(this);
        JAVA_TRY {
            this->algorithm = algorithm;
            this->key = JAVA_CALL(key, getBytes);
            AbBasicCrypt_init(this);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_putOE(commonStrings->EXCEPTION, this, "AbCrypt(alg,key)", e);
        } JAVA_END_TRY;
}

AbBasicCrypt* AbBasicCrypt_new(const char* algorithm, const char* key) {
    AbBasicCrypt* this = calloc(1, sizeof(AbBasicCrypt));
    AbBasicCrypt_init(this, algorithm, key);
    return this;
}


static void AbBasicCrypt_init(AbBasicCrypt* this) {
        JAVA_TRY {
            Provider* sunJce = SunJCE_new();
            Security_addProvider(sunJce);
            KeySpec* keySpec = KeySpecFactory_getInstance(KeySpecFactory_getInstance(), this->algorithm, this->key);
            SecretKeyFactory* keyFactory = SecretKeyFactory_getInstance(this->algorithm);
            this->secretKey = SecretKeyFactory_generateSecret(keyFactory, keySpec);
            this->cipher = Cipher_getInstance(this->algorithm);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_putOE("init Failed", this, commonStrings->INIT, e);
        } JAVA_END_TRY;
}


int8_t* AbBasicCrypt_encrypt(AbBasicCrypt* this, int8_t* array) {
        JAVA_TRY {
            Cipher_init(this->cipher, Cipher_ENCRYPT_MODE, this->secretKey);
            int8_t* ivArray = SecretKey_getEncoded(this->secretKey);
            int8_t* encrypted = Cipher_doFinal(this->cipher, array);
            int8_t* result = ((int8_t*) java_array_new(sizeof(int8_t), java_array_length(ivArray) + java_array_length(encrypted)));
            PreLogUtil_put(java_concat("ivArray Length: ", java_string_of(java_array_length(ivArray))), this, "encrypt");
            for (int32_t index = 0; index < java_array_length(ivArray); index++) {
                result[index] = ivArray[index];
            }
            for (int32_t index = 0; index < java_array_length(encrypted); index++) {
                result[index + java_array_length(ivArray)] = encrypted[index];
            }
            return result;
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE("Encrypt Failed", this, "encrypt", e);
            return nullptr;
        } JAVA_END_TRY;
}


int8_t* AbBasicCrypt_decrypt(AbBasicCrypt* this, int8_t* array) {
        JAVA_TRY {
            Cipher_init(this->cipher, Cipher_DECRYPT_MODE, this->secretKey);
            int8_t* ivArray = ((int8_t*) java_array_new(sizeof(int8_t), 8));
            for (int32_t index = 0; index < 8; index++) {
                ivArray[index] = array[index];
            }
            PreLogUtil_put(java_concat("ivArray Length: ", java_string_of(java_array_length(ivArray))), this, "encrypt");
            int8_t* result = ((int8_t*) java_array_new(sizeof(int8_t), java_array_length(array) - java_array_length(ivArray)));
            for (int32_t index = java_array_length(ivArray); index < java_array_length(array); index++) {
                result[index - java_array_length(ivArray)] = array[index];
            }
            int8_t* decrypted = Cipher_doFinal(this->cipher, result);
            return result;
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE("decrypt Failed", this, "decrypt", e);
            return nullptr;
        } JAVA_END_TRY;
}

