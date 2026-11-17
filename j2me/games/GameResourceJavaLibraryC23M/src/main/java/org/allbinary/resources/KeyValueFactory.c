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
// package org.allbinary.resources

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct KeyValueFactory KeyValueFactory;
struct KeyValueFactory {
    ABHashtable* MAP;
};

static KeyValueFactory* KeyValueFactory_instance;

KeyValueFactory* KeyValueFactory_new(void);
KeyValueFactory* KeyValueFactory_getInstance(void);
const char* KeyValueFactory_get(KeyValueFactory* this, const char* key);

// Static fields with runtime initializers: call this once at startup
void KeyValueFactory_staticInit(void) {
    KeyValueFactory_instance = KeyValueFactory_new();
}

static void KeyValueFactory_initFields(KeyValueFactory* this) {
    this->MAP = StdUtil_createHashtable(StdUtil_getInstance());
}

void KeyValueFactory_init(KeyValueFactory* this) {
    KeyValueFactory_initFields(this);
}

KeyValueFactory* KeyValueFactory_new(void) {
    KeyValueFactory* this = calloc(1, sizeof(KeyValueFactory));
    KeyValueFactory_init(this);
    return this;
}


KeyValueFactory* KeyValueFactory_getInstance(void) {
        return KeyValueFactory_instance;
}


const char* KeyValueFactory_get(KeyValueFactory* this, const char* key) {
        if (!ABHashtable_containsKey(this->MAP, ((Any*) key))) {
            return key;
        }
        return ((const char*) ABHashtable_get(this->MAP, ((Any*) key)));
}

