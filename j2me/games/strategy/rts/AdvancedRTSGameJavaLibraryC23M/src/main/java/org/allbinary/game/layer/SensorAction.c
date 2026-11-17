/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct SensorAction SensorAction;
struct SensorAction {
    const char* name;
};


SensorAction* SensorAction_new(const char* name);

void SensorAction_init(SensorAction* this, const char* name);

static void SensorAction_initFields(SensorAction* this) {
    
}


void SensorAction_init(SensorAction* this, const char* name) {
    SensorAction_initFields(this);
        this->name = name;
}

SensorAction* SensorAction_new(const char* name) {
    SensorAction* this = calloc(1, sizeof(SensorAction));
    SensorAction_init(this, name);
    return this;
}

