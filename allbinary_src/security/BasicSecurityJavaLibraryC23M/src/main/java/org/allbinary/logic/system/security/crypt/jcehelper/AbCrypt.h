#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_ABCRYPT_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_ABCRYPT_H
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
typedef struct BaseSecretComposite BaseSecretComposite;
typedef struct KeySpecFactory KeySpecFactory;
typedef struct SecretComposite SecretComposite;
typedef struct TsUtil TsUtil;
typedef struct CryptInterface CryptInterface;
typedef struct NullUtil NullUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct CommonStrings CommonStrings;
typedef struct BouncyCastleProvider BouncyCastleProvider;
#include "java/security/Security.h"
#include "java/security/spec/KeySpec.h"
#include "javax/crypto/Cipher.h"
#include "javax/crypto/SecretKey.h"
#include "javax/crypto/SecretKeyFactory.h"
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#include "org/allbinary/init/crypt/jcehelper/CryptInterface.h"
#if __has_include("org/allbinary/logic/system/security/crypt/jcehelper/BaseSecretComposite.h")
#include "org/allbinary/logic/system/security/crypt/jcehelper/BaseSecretComposite.h"
#endif

typedef struct AbCrypt AbCrypt;
struct AbCrypt {
    CryptInterface CryptInterface_interface;
    TsUtil* tsUtil;
    BaseSecretComposite* secretComposite;
    const char* algorithm;
};


AbCrypt* AbCrypt_new(const char* algorithm);

void AbCrypt_init(AbCrypt* this, const char* algorithm);

void AbCrypt_initMethod(AbCrypt* this, const char* keyAsString);

int8_t* AbCrypt_encrypt(AbCrypt* this, int8_t* array);

int8_t* AbCrypt_decrypt(AbCrypt* this, int8_t* array);
#define AbCrypt_new1 AbCrypt_new
#define AbCrypt_init1 AbCrypt_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AbCrypt_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AbCrypt_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_ABCRYPT_H
