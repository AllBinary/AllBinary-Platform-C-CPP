/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2026 AllBinary 
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
// package org.allbinary.util

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "jsinterop/annotations/JsType.h"

typedef struct ABCharacter ABCharacter;
struct ABCharacter {
    char unused;
};


ABCharacter* ABCharacter_new(void);
const char* ABCharacter_toString(uint16_t ch);

void ABCharacter_init(ABCharacter* this) {
}

ABCharacter* ABCharacter_new(void) {
    ABCharacter* this = calloc(1, sizeof(ABCharacter));
    ABCharacter_init(this);
    return this;
}


const char* ABCharacter_toString(uint16_t ch) {
        return java_string_of(ch);
}

