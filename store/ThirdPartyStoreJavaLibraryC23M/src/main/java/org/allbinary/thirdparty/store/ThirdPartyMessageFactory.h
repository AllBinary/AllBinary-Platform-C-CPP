#ifndef ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYMESSAGEFACTORY_H
#define ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYMESSAGEFACTORY_H
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


ThirdPartyMessageFactory* ThirdPartyMessageFactory_new(void);
void ThirdPartyMessageFactory_init(ThirdPartyMessageFactory* this);

ThirdPartyMessageFactory* ThirdPartyMessageFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ThirdPartyMessageFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ThirdPartyMessageFactory_register(void);


#endif // ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYMESSAGEFACTORY_H
