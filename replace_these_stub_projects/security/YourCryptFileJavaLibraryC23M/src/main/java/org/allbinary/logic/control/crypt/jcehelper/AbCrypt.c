/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
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
// package org.allbinary.logic.control.crypt.jcehelper

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AbCrypt AbCrypt;
struct AbCrypt {
    char unused;
};


AbCrypt* AbCrypt_new(const char* algorithm, const char* key);

void AbCrypt_init(AbCrypt* this, const char* algorithm, const char* key);
int8_t* AbCrypt_encrypt(AbCrypt* this, int8_t* array);
int8_t* AbCrypt_decrypt(AbCrypt* this, int8_t* array);
int8_t* AbCrypt_mutilate(AbCrypt* this, int8_t* array);


void AbCrypt_init(AbCrypt* this, const char* algorithm, const char* key) {
}

AbCrypt* AbCrypt_new(const char* algorithm, const char* key) {
    AbCrypt* this = calloc(1, sizeof(AbCrypt));
    AbCrypt_init(this, algorithm, key);
    return this;
}


int8_t* AbCrypt_encrypt(AbCrypt* this, int8_t* array) {
        return nullptr;
}


int8_t* AbCrypt_decrypt(AbCrypt* this, int8_t* array) {
        return nullptr;
}


int8_t* AbCrypt_mutilate(AbCrypt* this, int8_t* array) {
        return nullptr;
}

