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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/input/Input.h"

typedef struct J2MEGameKey J2MEGameKey;
struct J2MEGameKey {
    Input base;
};


J2MEGameKey* J2MEGameKey_new(int32_t key, const char* keyName);

void J2MEGameKey_init(J2MEGameKey* this, int32_t key, const char* keyName);
const char* J2MEGameKey_toString(J2MEGameKey* this);
const char* J2MEGameKey_getString(int32_t keyCode);


void J2MEGameKey_init(J2MEGameKey* this, int32_t key, const char* keyName) {
        Input_init(&this->base, key, keyName);
        int32_t id = J2MEGameKey_getId(this);
        if (id >= 0) {
            InputFactory* inputFactory = InputFactory_getInstance();
            InputFactory_add(inputFactory, id, this);
        }
}

J2MEGameKey* J2MEGameKey_new(int32_t key, const char* keyName) {
    J2MEGameKey* this = calloc(1, sizeof(J2MEGameKey));
    J2MEGameKey_init(this, key, keyName);
    return this;
}


const char* J2MEGameKey_toString(J2MEGameKey* this) {
        return JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "J2MEGameKey: "), append, Input_toString((&this->base))), toString);
}


const char* J2MEGameKey_getString(int32_t keyCode) {
        Input* input = InputFactory_getInstanceById(InputFactory_getInstance(), keyCode);
        if (input != nullptr) {
            return Input_getName(input);
        } else {
            return StringUtil_getInstance()->EMPTY_STRING;
        }
}

