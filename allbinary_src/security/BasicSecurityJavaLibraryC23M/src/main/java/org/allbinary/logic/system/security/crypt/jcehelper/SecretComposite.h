#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_SECRETCOMPOSITE_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_SECRETCOMPOSITE_H
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
typedef struct BaseSecretComposite BaseSecretComposite;
typedef struct ByteUtil ByteUtil;
#include "javax/crypto/Cipher.h"
#include "javax/crypto/SecretKey.h"
#if __has_include("org/allbinary/logic/java/byteutil/ByteUtil.h")
#include "org/allbinary/logic/java/byteutil/ByteUtil.h"
#endif
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

#define SecretComposite_new3 SecretComposite_new
#define SecretComposite_init3 SecretComposite_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SecretComposite_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SecretComposite_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_SECRETCOMPOSITE_H
