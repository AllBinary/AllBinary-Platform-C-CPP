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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/init/Init.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct KeyFactoryInitializer KeyFactoryInitializer;
struct KeyFactoryInitializer {
    Init base;
    LogUtil* logUtil;
};


KeyFactoryInitializer* KeyFactoryInitializer_new(void);
void KeyFactoryInitializer_init(KeyFactoryInitializer* this);

static void KeyFactoryInitializer_initFields(KeyFactoryInitializer* this) {
    this->logUtil = LogUtil_getInstance();
}

void KeyFactoryInitializer_init(KeyFactoryInitializer* this) {
    Init_init(&this->base);
    KeyFactoryInitializer_initFields(this);
}

KeyFactoryInitializer* KeyFactoryInitializer_new(void) {
    KeyFactoryInitializer* this = calloc(1, sizeof(KeyFactoryInitializer));
    KeyFactoryInitializer_init(this);
    return this;
}


void KeyFactoryInitializer_init(KeyFactoryInitializer* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->INIT);
}

