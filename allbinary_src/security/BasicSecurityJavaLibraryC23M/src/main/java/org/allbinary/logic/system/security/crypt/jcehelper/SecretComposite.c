/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// #include "javax/crypto/Cipher.h"
// #include "javax/crypto/SecretKey.h"
#include "org/allbinary/logic/java/byteutil/ByteUtil.h"
#include "org/allbinary/logic/system/security/crypt/jcehelper/BaseSecretComposite.h"

typedef struct SecretComposite SecretComposite;
struct SecretComposite {
    BaseSecretComposite base;
    ByteUtil* byteUtil;
    Cipher* cipher;
    SecretKey* secretKey;
    int8_t* key;
};


SecretComposite* SecretComposite_new(SecretKey* secretKey, Cipher* cipher, int8_t* key);

void SecretComposite_init(SecretComposite* this, SecretKey* secretKey, Cipher* cipher, int8_t* key);
int8_t* SecretComposite_encrypt(SecretComposite* this, int8_t* array);
int8_t* SecretComposite_decrypt(SecretComposite* this, int8_t* array);
static int8_t* SecretComposite_mutilate(SecretComposite* this, int8_t* array);

static void SecretComposite_initFields(SecretComposite* this) {
    this->byteUtil = ByteUtil_getInstance();
    
    
    
}


void SecretComposite_init(SecretComposite* this, SecretKey* secretKey, Cipher* cipher, int8_t* key) {
    BaseSecretComposite_init(&this->base);
    SecretComposite_initFields(this);
        this->secretKey = secretKey;
        this->cipher = cipher;
        this->key = key;
}

SecretComposite* SecretComposite_new(SecretKey* secretKey, Cipher* cipher, int8_t* key) {
    SecretComposite* this = calloc(1, sizeof(SecretComposite));
    SecretComposite_init(this, secretKey, cipher, key);
    return this;
}


// throws Exception
int8_t* SecretComposite_encrypt(SecretComposite* this, int8_t* array) {
        array = SecretComposite_mutilate(this, array);
        Cipher_init(this->cipher, Cipher_ENCRYPT_MODE, this->secretKey);
        return Cipher_doFinal(this->cipher, array);
}


// throws Exception
int8_t* SecretComposite_decrypt(SecretComposite* this, int8_t* array) {
        Cipher_init(this->cipher, Cipher_DECRYPT_MODE, this->secretKey);
        return SecretComposite_mutilate(this, Cipher_doFinal(this->cipher, array));
}


static int8_t* SecretComposite_mutilate(SecretComposite* this, int8_t* array) {
        for (int32_t index = 0; index < java_array_length(this->key); index++) {
            int8_t value = this->key[index];
            if (((int32_t) value) < 8 && ((int32_t) value) > 0) {
                array = ByteUtil_xorByte(this->byteUtil, array, ((int32_t) value));
            }
        }
        return array;
}

