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
// package org.allbinary.game.physics.acceleration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct BasicAccelerationProperties BasicAccelerationProperties;
struct BasicAccelerationProperties {
    int32_t forward;
    int32_t reverse;
};


BasicAccelerationProperties* BasicAccelerationProperties_new(int32_t forward, int32_t reverse);

void BasicAccelerationProperties_init(BasicAccelerationProperties* this, int32_t forward, int32_t reverse);
void BasicAccelerationProperties_setReverse(BasicAccelerationProperties* this, int32_t reverse);
int32_t BasicAccelerationProperties_getReverse(BasicAccelerationProperties* this);
void BasicAccelerationProperties_setForward(BasicAccelerationProperties* this, int32_t forward);
int32_t BasicAccelerationProperties_getForward(BasicAccelerationProperties* this);

static void BasicAccelerationProperties_initFields(BasicAccelerationProperties* this) {
    this->forward = 0;
    this->reverse = 0;
}


void BasicAccelerationProperties_init(BasicAccelerationProperties* this, int32_t forward, int32_t reverse) {
    BasicAccelerationProperties_initFields(this);
        BasicAccelerationProperties_setForward(this, forward);
        BasicAccelerationProperties_setReverse(this, reverse);
}

BasicAccelerationProperties* BasicAccelerationProperties_new(int32_t forward, int32_t reverse) {
    BasicAccelerationProperties* this = calloc(1, sizeof(BasicAccelerationProperties));
    BasicAccelerationProperties_init(this, forward, reverse);
    return this;
}


void BasicAccelerationProperties_setReverse(BasicAccelerationProperties* this, int32_t reverse) {
        this->reverse = reverse;
}


int32_t BasicAccelerationProperties_getReverse(BasicAccelerationProperties* this) {
        return this->reverse;
}


void BasicAccelerationProperties_setForward(BasicAccelerationProperties* this, int32_t forward) {
        this->forward = forward;
}


int32_t BasicAccelerationProperties_getForward(BasicAccelerationProperties* this) {
        return this->forward;
}

