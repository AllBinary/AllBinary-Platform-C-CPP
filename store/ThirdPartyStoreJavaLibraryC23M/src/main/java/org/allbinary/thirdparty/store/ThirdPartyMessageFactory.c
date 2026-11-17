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
// package org.allbinary.thirdparty.store

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ThirdPartyMessageFactory ThirdPartyMessageFactory;
struct ThirdPartyMessageFactory {
    const char* AUTHORIZED;
    const char* NOT_AUTHORIZED;
    const char* LINKAGE_ERROR;
};

static ThirdPartyMessageFactory* ThirdPartyMessageFactory_instance;

ThirdPartyMessageFactory* ThirdPartyMessageFactory_new(void);
ThirdPartyMessageFactory* ThirdPartyMessageFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ThirdPartyMessageFactory_staticInit(void) {
    ThirdPartyMessageFactory_instance = ThirdPartyMessageFactory_new();
}

static void ThirdPartyMessageFactory_initFields(ThirdPartyMessageFactory* this) {
    this->AUTHORIZED = "Authorized";
    this->NOT_AUTHORIZED = "Not Authorized";
    this->LINKAGE_ERROR = "Linkage Error";
}

void ThirdPartyMessageFactory_init(ThirdPartyMessageFactory* this) {
    ThirdPartyMessageFactory_initFields(this);
}

ThirdPartyMessageFactory* ThirdPartyMessageFactory_new(void) {
    ThirdPartyMessageFactory* this = calloc(1, sizeof(ThirdPartyMessageFactory));
    ThirdPartyMessageFactory_init(this);
    return this;
}


ThirdPartyMessageFactory* ThirdPartyMessageFactory_getInstance(void) {
        return ThirdPartyMessageFactory_instance;
}

