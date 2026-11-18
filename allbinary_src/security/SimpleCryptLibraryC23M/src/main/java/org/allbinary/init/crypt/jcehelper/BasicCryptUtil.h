#ifndef ORG_ALLBINARY_INIT_CRYPT_JCEHELPER_BASICCRYPTUTIL_H
#define ORG_ALLBINARY_INIT_CRYPT_JCEHELPER_BASICCRYPTUTIL_H
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
// package org.allbinary.init.crypt.jcehelper

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CryptInterface CryptInterface;
typedef struct TsUtil TsUtil;
typedef struct LogUtil LogUtil;
#include "java/io/ByteArrayInputStream.h"
#include "java/io/ByteArrayOutputStream.h"
#include "java/io/InputStream.h"
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct BasicCryptUtil BasicCryptUtil;
struct BasicCryptUtil {
    LogUtil* logUtil;
    TsUtil* tsUtil;
    const char* XML_START;
};


BasicCryptUtil* BasicCryptUtil_new(void);
void BasicCryptUtil_init(BasicCryptUtil* this);

BasicCryptUtil* BasicCryptUtil_getInstance(void);

InputStream* BasicCryptUtil_getDecryptedInputStream(BasicCryptUtil* this, InputStream* inputStream, CryptInterface* cryptInterface);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicCryptUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicCryptUtil_register(void);


#endif // ORG_ALLBINARY_INIT_CRYPT_JCEHELPER_BASICCRYPTUTIL_H
