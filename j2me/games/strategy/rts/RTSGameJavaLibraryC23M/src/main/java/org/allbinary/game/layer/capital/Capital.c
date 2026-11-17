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
// package org.allbinary.game.layer.capital

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct Capital Capital;
struct Capital {
    int32_t value;
};


Capital* Capital_new(void);

void Capital_init(Capital* this);
int32_t Capital_getTotalMoney(Capital* this);
void Capital_removeMoney(Capital* this, int32_t points);
void Capital_addMoney(Capital* this, int32_t points);

static void Capital_initFields(Capital* this) {
    this->value = 0;
}


void Capital_init(Capital* this) {
    Capital_initFields(this);
}

Capital* Capital_new(void) {
    Capital* this = calloc(1, sizeof(Capital));
    Capital_init(this);
    return this;
}


int32_t Capital_getTotalMoney(Capital* this) {
        return this->value;
}


void Capital_removeMoney(Capital* this, int32_t points) {
        this->value -= points;
}


void Capital_addMoney(Capital* this, int32_t points) {
        this->value += points;
}

