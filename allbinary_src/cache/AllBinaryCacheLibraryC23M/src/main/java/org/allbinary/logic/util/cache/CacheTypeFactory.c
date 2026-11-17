// Generated Code Do Not Modify
// package org.allbinary.logic.util.cache

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct CacheTypeFactory CacheTypeFactory;
struct CacheTypeFactory {
    CacheType* NO_CACHE;
    CacheType* CACHE;
    CacheType* SET;
    CacheType* CACHE_VECTOR;
};

static CacheTypeFactory* CacheTypeFactory_instance;

CacheTypeFactory* CacheTypeFactory_new(void);
CacheTypeFactory* CacheTypeFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void CacheTypeFactory_staticInit(void) {
    CacheTypeFactory_instance = CacheTypeFactory_new();
}

static void CacheTypeFactory_initFields(CacheTypeFactory* this) {
    this->NO_CACHE = CacheType_new(StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING);
    this->CACHE = CacheType_new(StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING);
    this->SET = CacheType_new(StringUtil_getInstance()->EMPTY_STRING, "Set");
    this->CACHE_VECTOR = CacheType_new(StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING);
}

void CacheTypeFactory_init(CacheTypeFactory* this) {
    CacheTypeFactory_initFields(this);
}

CacheTypeFactory* CacheTypeFactory_new(void) {
    CacheTypeFactory* this = calloc(1, sizeof(CacheTypeFactory));
    CacheTypeFactory_init(this);
    return this;
}


CacheTypeFactory* CacheTypeFactory_getInstance(void) {
        return CacheTypeFactory_instance;
}

