#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_WEAKCRYPT_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_WEAKCRYPT_H
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
// package org.allbinary.logic.system.security.crypt

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DatabaseEncoder DatabaseEncoder;
typedef struct TsUtil TsUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringUtil StringUtil;
typedef struct AbCrypt AbCrypt;
typedef struct KeySpecFactory KeySpecFactory;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/logic/system/security/crypt/jcehelper/AbCrypt.h")
#include "org/allbinary/logic/system/security/crypt/jcehelper/AbCrypt.h"
#endif

typedef struct WeakCrypt WeakCrypt;
struct WeakCrypt {
    TsUtil* tsUtil;
    AbCrypt* abCrypt;
};

extern int32_t WeakCrypt_KEYMAX;

WeakCrypt* WeakCrypt_new(int32_t key);

void WeakCrypt_init(WeakCrypt* this, int32_t key);

const char* WeakCrypt_encrypt(WeakCrypt* this, const char* value);

const char* WeakCrypt_decrypt(WeakCrypt* this, const char* value);
#define WeakCrypt_new1 WeakCrypt_new
#define WeakCrypt_init1 WeakCrypt_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void WeakCrypt_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void WeakCrypt_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_WEAKCRYPT_H
