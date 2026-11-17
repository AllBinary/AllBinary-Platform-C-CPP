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
// #include "java/io/ByteArrayInputStream.h"
// #include "java/io/ByteArrayOutputStream.h"
// #include "java/io/InputStream.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct BasicCryptUtil BasicCryptUtil;
struct BasicCryptUtil {
    LogUtil* logUtil;
    TsUtil* tsUtil;
    const char* XML_START;
};

static BasicCryptUtil* BasicCryptUtil_instance;

BasicCryptUtil* BasicCryptUtil_new(void);
BasicCryptUtil* BasicCryptUtil_getInstance(void);
InputStream* BasicCryptUtil_getDecryptedInputStream(BasicCryptUtil* this, InputStream* inputStream, CryptInterface* cryptInterface);

// Static fields with runtime initializers: call this once at startup
void BasicCryptUtil_staticInit(void) {
    BasicCryptUtil_instance = BasicCryptUtil_new();
}

static void BasicCryptUtil_initFields(BasicCryptUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->tsUtil = TsUtil_getInstance();
    this->XML_START = "<?xml";
}

void BasicCryptUtil_init(BasicCryptUtil* this) {
    BasicCryptUtil_initFields(this);
}

BasicCryptUtil* BasicCryptUtil_new(void) {
    BasicCryptUtil* this = calloc(1, sizeof(BasicCryptUtil));
    BasicCryptUtil_init(this);
    return this;
}


BasicCryptUtil* BasicCryptUtil_getInstance(void) {
        return BasicCryptUtil_instance;
}


// throws Exception
InputStream* BasicCryptUtil_getDecryptedInputStream(BasicCryptUtil* this, InputStream* inputStream, CryptInterface* cryptInterface) {
        ByteArrayOutputStream* buffer = ByteArrayOutputStream_new();
        int32_t ch = 0;
        while (true) {
            ch = InputStream_read(inputStream);
            if (ch == -1) {
                break;
            }
            ByteArrayOutputStream_write(buffer, ch);
        }
        int8_t* decrypted = CryptInterface_decrypt(cryptInterface, ByteArrayOutputStream_toByteArray(buffer));
        const char* decryptedString = java_string_new(decrypted);
        int32_t index = java_string_indexOf(decryptedString, this->XML_START);
        if (index > 0) {
            decryptedString = java_substring(decryptedString, index, (int32_t) strlen(decryptedString));
        }
        return ByteArrayInputStream_new(TsUtil_getByteArray(this->tsUtil, decryptedString));
}

