// Generated Code Do Not Modify
// package org.allbinary.game

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct BasicGameInfoFactory BasicGameInfoFactory;
struct BasicGameInfoFactory {
    int32_t currentReleaseIndex;
    int32_t currentDestroyIndex;
    int32_t total;
};

static BasicGameInfoFactory* BasicGameInfoFactory_SINGLETON;

BasicGameInfoFactory* BasicGameInfoFactory_new(void);
BasicGameInfoFactory* BasicGameInfoFactory_getInstance(void);

void BasicGameInfoFactory_init(BasicGameInfoFactory* this);
void BasicGameInfoFactory_init(BasicGameInfoFactory* this, int32_t total);
bool BasicGameInfoFactory_isPeaked(BasicGameInfoFactory* this);
int32_t BasicGameInfoFactory_howManyLeft(BasicGameInfoFactory* this);

// Static fields with runtime initializers: call this once at startup
void BasicGameInfoFactory_staticInit(void) {
    BasicGameInfoFactory_SINGLETON = BasicGameInfoFactory_new();
}

static void BasicGameInfoFactory_initFields(BasicGameInfoFactory* this) {
    this->currentReleaseIndex = 0;
    this->currentDestroyIndex = 0;
    this->total = 0;
}


BasicGameInfoFactory* BasicGameInfoFactory_getInstance(void) {
        return BasicGameInfoFactory_SINGLETON;
}


void BasicGameInfoFactory_init(BasicGameInfoFactory* this) {
    BasicGameInfoFactory_initFields(this);
}

BasicGameInfoFactory* BasicGameInfoFactory_new(void) {
    BasicGameInfoFactory* this = calloc(1, sizeof(BasicGameInfoFactory));
    BasicGameInfoFactory_init(this);
    return this;
}


void BasicGameInfoFactory_init(BasicGameInfoFactory* this, int32_t total) {
        this->currentReleaseIndex = 0;
        this->currentDestroyIndex = 0;
        this->total = total;
}


bool BasicGameInfoFactory_isPeaked(BasicGameInfoFactory* this) {
        if (this->currentDestroyIndex >= this->total) {
            return true;
        } else {
            return false;
        }
}


int32_t BasicGameInfoFactory_howManyLeft(BasicGameInfoFactory* this) {
        return this->total - this->currentDestroyIndex;
}

