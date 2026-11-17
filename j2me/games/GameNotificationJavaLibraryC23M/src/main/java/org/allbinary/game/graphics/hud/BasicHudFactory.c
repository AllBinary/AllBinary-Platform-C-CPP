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
// package org.allbinary.game.graphics.hud

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct BasicHudFactory BasicHudFactory;
struct BasicHudFactory {
    const char* DIRECTION_EXCEPTION;
    int32_t VERTICAL;
    int32_t HORIZONTAL;
    int32_t BOTTOMLEFT;
    int32_t BOTTOMRIGHT;
    int32_t TOPLEFT;
    int32_t TOPRIGHT;
    int32_t BOTTOMCENTER;
    int32_t TOPCENTER;
    int32_t ABSOLUTE;
};

static BasicHudFactory* BasicHudFactory_instance;

BasicHudFactory* BasicHudFactory_new(void);
BasicHudFactory* BasicHudFactory_getInstance(void);

void BasicHudFactory_init(BasicHudFactory* this);

// Static fields with runtime initializers: call this once at startup
void BasicHudFactory_staticInit(void) {
    BasicHudFactory_instance = BasicHudFactory_new();
}

static void BasicHudFactory_initFields(BasicHudFactory* this) {
    this->DIRECTION_EXCEPTION = "Only Horizontal Direction is Allowed Currently";
    this->VERTICAL = 0;
    this->HORIZONTAL = 1;
    this->BOTTOMLEFT = 0;
    this->BOTTOMRIGHT = 1;
    this->TOPLEFT = 2;
    this->TOPRIGHT = 3;
    this->BOTTOMCENTER = 4;
    this->TOPCENTER = 5;
    this->ABSOLUTE = 6;
}


BasicHudFactory* BasicHudFactory_getInstance(void) {
        return BasicHudFactory_instance;
}


void BasicHudFactory_init(BasicHudFactory* this) {
    BasicHudFactory_initFields(this);
}

BasicHudFactory* BasicHudFactory_new(void) {
    BasicHudFactory* this = calloc(1, sizeof(BasicHudFactory));
    BasicHudFactory_init(this);
    return this;
}

