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
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/game/input/AndroidKeyFactory.h"

typedef struct AndroidAPI1KeyFactory AndroidAPI1KeyFactory;
struct AndroidAPI1KeyFactory {
    AndroidKeyFactory base;
};

static Any* AndroidAPI1KeyFactory_instance;

AndroidAPI1KeyFactory* AndroidAPI1KeyFactory_new(void);
AndroidAPI1KeyFactory* AndroidAPI1KeyFactory_getInstance(void);

void AndroidAPI1KeyFactory_init(AndroidAPI1KeyFactory* this);

// Static fields with runtime initializers: call this once at startup
void AndroidAPI1KeyFactory_staticInit(void) {
    AndroidAPI1KeyFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}


AndroidAPI1KeyFactory* AndroidAPI1KeyFactory_getInstance(void) {
        if (AndroidAPI1KeyFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            AndroidAPI1KeyFactory_instance = AndroidAPI1KeyFactory_new();
        }
        return ((AndroidAPI1KeyFactory*) AndroidAPI1KeyFactory_instance);
}


void AndroidAPI1KeyFactory_init(AndroidAPI1KeyFactory* this) {
    AndroidKeyFactory_init(&this->base);
}

AndroidAPI1KeyFactory* AndroidAPI1KeyFactory_new(void) {
    AndroidAPI1KeyFactory* this = calloc(1, sizeof(AndroidAPI1KeyFactory));
    AndroidAPI1KeyFactory_init(this);
    return this;
}

