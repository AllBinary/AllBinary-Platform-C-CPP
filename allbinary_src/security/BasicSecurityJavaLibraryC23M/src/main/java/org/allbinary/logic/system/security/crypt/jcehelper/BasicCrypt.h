#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_BASICCRYPT_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_BASICCRYPT_H
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
typedef struct TsUtil TsUtil;
typedef struct CryptInterface CryptInterface;
typedef struct NullUtil NullUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct ByteUtil ByteUtil;
typedef struct CommonStrings CommonStrings;
#include "org/allbinary/init/crypt/jcehelper/CryptInterface.h"
#if __has_include("org/allbinary/logic/java/byteutil/ByteUtil.h")
#include "org/allbinary/logic/java/byteutil/ByteUtil.h"
#endif

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
#define BasicCrypt_new1 BasicCrypt_new
#define BasicCrypt_init1 BasicCrypt_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicCrypt_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicCrypt_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_BASICCRYPT_H
