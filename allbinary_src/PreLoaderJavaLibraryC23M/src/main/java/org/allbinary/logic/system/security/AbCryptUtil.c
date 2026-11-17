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
// package org.allbinary.logic.system.security

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/ByteArrayOutputStream.h"
// #include "java/io/InputStream.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/system/security/crypt/jcehelper/AbCrypt.h"
#include "org/allbinary/logic/system/security/crypt/jcehelper/KeySpecFactory.h"

typedef struct AbCryptUtil AbCryptUtil;
struct AbCryptUtil {
    StreamUtil* streamUtil;
};

static AbCryptUtil* AbCryptUtil_instance;

AbCryptUtil* AbCryptUtil_new(void);
AbCryptUtil* AbCryptUtil_getInstance(void);

void AbCryptUtil_init(AbCryptUtil* this);
int8_t* AbCryptUtil_decrypt(AbCryptUtil* this, InputStream* inputStream, const char* key);

// Static fields with runtime initializers: call this once at startup
void AbCryptUtil_staticInit(void) {
    AbCryptUtil_instance = AbCryptUtil_new();
}

static void AbCryptUtil_initFields(AbCryptUtil* this) {
    this->streamUtil = StreamUtil_getInstance();
}


AbCryptUtil* AbCryptUtil_getInstance(void) {
        return AbCryptUtil_instance;
}


void AbCryptUtil_init(AbCryptUtil* this) {
    AbCryptUtil_initFields(this);
}

AbCryptUtil* AbCryptUtil_new(void) {
    AbCryptUtil* this = calloc(1, sizeof(AbCryptUtil));
    AbCryptUtil_init(this);
    return this;
}


// throws Exception
int8_t* AbCryptUtil_decrypt(AbCryptUtil* this, InputStream* inputStream, const char* key) {
        ByteArrayOutputStream* outputStream = nullptr;
        JAVA_TRY {
            outputStream = ((ByteArrayOutputStream*) StreamUtil_get(this->streamUtil, inputStream, ByteArrayOutputStream_new(), ((int8_t*) java_array_new(sizeof(int8_t), 16384))));
            AbCrypt* abCrypt = AbCrypt_new(KeySpecFactory_getInstance()->DESEDE);
            AbCrypt_init(abCrypt, key);
            return AbCrypt_decrypt(abCrypt, ByteArrayOutputStream_toByteArray(outputStream));
        } JAVA_FINALLY {
            StreamUtil_close(this->streamUtil, outputStream);
            StreamUtil_close(this->streamUtil, inputStream);
        } JAVA_END_TRY;
}

