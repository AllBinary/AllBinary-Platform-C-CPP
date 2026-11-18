#ifndef ORG_ALLBINARY_INIT_CRYPT_JCEHELPER_CRYPTINTERFACE_H
#define ORG_ALLBINARY_INIT_CRYPT_JCEHELPER_CRYPTINTERFACE_H
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
struct CryptInterface {
    int8_t* (*encrypt)(void* this, int8_t* array);
    int8_t* (*decrypt)(void* this, int8_t* array);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CryptInterface_staticInit(void);

static inline int8_t* CryptInterface_encrypt(void* this, int8_t* array) {
    return ((__typeof__(((CryptInterface*) nullptr)->encrypt)) java_method_of(this, "encrypt"))(this, array);
}

static inline int8_t* CryptInterface_decrypt(void* this, int8_t* array) {
    return ((__typeof__(((CryptInterface*) nullptr)->decrypt)) java_method_of(this, "decrypt"))(this, array);
}


#endif // ORG_ALLBINARY_INIT_CRYPT_JCEHELPER_CRYPTINTERFACE_H
