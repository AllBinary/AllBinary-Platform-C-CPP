/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
#include "org/allbinary/init/crypt/jcehelper/CryptInterface.h"

typedef struct NoCrypt NoCrypt;
struct NoCrypt {
    CryptInterface CryptInterface_interface;
};


NoCrypt* NoCrypt_new(void);
int8_t* NoCrypt_encrypt(NoCrypt* this, int8_t* array);
int8_t* NoCrypt_decrypt(NoCrypt* this, int8_t* array);

void NoCrypt_init(NoCrypt* this) {
}

NoCrypt* NoCrypt_new(void) {
    NoCrypt* this = calloc(1, sizeof(NoCrypt));
    NoCrypt_init(this);
    return this;
}


int8_t* NoCrypt_encrypt(NoCrypt* this, int8_t* array) {
        return array;
}


int8_t* NoCrypt_decrypt(NoCrypt* this, int8_t* array) {
        return array;
}

