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
// #include "java/security/Security.h"
// #include "java/security/spec/KeySpec.h"
// #include "javax/crypto/Cipher.h"
// #include "javax/crypto/SecretKey.h"
// #include "javax/crypto/SecretKeyFactory.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/init/crypt/jcehelper/CryptInterface.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/bouncycastle/jce/provider/BouncyCastleProvider.h"

typedef struct AbCrypt AbCrypt;
struct AbCrypt {
    CryptInterface CryptInterface_interface;
    TsUtil* tsUtil;
    BaseSecretComposite* secretComposite;
    const char* algorithm;
};


AbCrypt* AbCrypt_new(const char* algorithm);

void AbCrypt_init(AbCrypt* this, const char* algorithm);
void AbCrypt_init(AbCrypt* this, const char* keyAsString);
int8_t* AbCrypt_encrypt(AbCrypt* this, int8_t* array);
int8_t* AbCrypt_decrypt(AbCrypt* this, int8_t* array);

static void AbCrypt_initFields(AbCrypt* this) {
    this->tsUtil = TsUtil_getInstance();
    this->secretComposite = BaseSecretComposite_NULL_SECRET_COMPOSITE;
    
}


void AbCrypt_init(AbCrypt* this, const char* algorithm) {
    AbCrypt_initFields(this);
        this->algorithm = algorithm;
}

AbCrypt* AbCrypt_new(const char* algorithm) {
    AbCrypt* this = calloc(1, sizeof(AbCrypt));
    AbCrypt_init(this, algorithm);
    return this;
}


void AbCrypt_init(AbCrypt* this, const char* keyAsString) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            JAVA_TRY {
                Security_addProvider(BouncyCastleProvider_new());
            } JAVA_CATCH(Exception, e) {
                PreLogUtil_putOE(commonStrings->EXCEPTION, this, commonStrings->INIT, e);
            } JAVA_END_TRY;
            int8_t* key = TsUtil_getByteArray(this->tsUtil, keyAsString);
            KeySpec* keySpec = KeySpecFactory_getInstance(KeySpecFactory_getInstance(), this->algorithm, key);
            SecretKeyFactory* keyFactory = SecretKeyFactory_getInstance(this->algorithm);
            SecretKey* secretKey = SecretKeyFactory_generateSecret(keyFactory, keySpec);
            Cipher* cipher = Cipher_getInstance(this->algorithm);
            this->secretComposite = SecretComposite_new(secretKey, cipher, key);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE("init Failed", this, commonStrings->INIT, e);
        } JAVA_END_TRY;
}


int8_t* AbCrypt_encrypt(AbCrypt* this, int8_t* array) {
        JAVA_TRY {
            return BaseSecretComposite_encrypt(this->secretComposite, array);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE("Encrypt Failed", this, "encrypt", e);
            return NullUtil_getInstance()->NULL_BYTE_ARRAY;
        } JAVA_END_TRY;
}


int8_t* AbCrypt_decrypt(AbCrypt* this, int8_t* array) {
        JAVA_TRY {
            return BaseSecretComposite_decrypt(this->secretComposite, array);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE("decrypt Failed", this, "decrypt", e);
            return NullUtil_getInstance()->NULL_BYTE_ARRAY;
        } JAVA_END_TRY;
}

