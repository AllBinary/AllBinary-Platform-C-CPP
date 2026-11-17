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

typedef struct PoolTypeFactory PoolTypeFactory;
struct PoolTypeFactory {
    PoolType* VECTOR_POOL;
};

static PoolTypeFactory* PoolTypeFactory_instance;

PoolTypeFactory* PoolTypeFactory_new(void);
PoolTypeFactory* PoolTypeFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void PoolTypeFactory_staticInit(void) {
    PoolTypeFactory_instance = PoolTypeFactory_new();
}

static void PoolTypeFactory_initFields(PoolTypeFactory* this) {
    this->VECTOR_POOL = PoolType_new(CacheTypeFactory_getInstance()->NO_CACHE);
}

void PoolTypeFactory_init(PoolTypeFactory* this) {
    PoolTypeFactory_initFields(this);
}

PoolTypeFactory* PoolTypeFactory_new(void) {
    PoolTypeFactory* this = calloc(1, sizeof(PoolTypeFactory));
    PoolTypeFactory_init(this);
    return this;
}


PoolTypeFactory* PoolTypeFactory_getInstance(void) {
        return PoolTypeFactory_instance;
}

