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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/input/Input.h"

typedef struct PCGameKey PCGameKey;
struct PCGameKey {
    Input base;
};


PCGameKey* PCGameKey_new(int32_t keyCode, const char* name);

void PCGameKey_init(PCGameKey* this, int32_t keyCode, const char* name);
const char* PCGameKey_toString(PCGameKey* this);
const char* PCGameKey_getString(int32_t keyCode);


void PCGameKey_init(PCGameKey* this, int32_t keyCode, const char* name) {
        Input_init(&this->base, keyCode, name);
        int32_t id = PCGameKey_getId(this);
        if (id >= 0) {
            InputFactory_add(InputFactory_getInstance(), id, this);
        }
}

PCGameKey* PCGameKey_new(int32_t keyCode, const char* name) {
    PCGameKey* this = calloc(1, sizeof(PCGameKey));
    PCGameKey_init(this, keyCode, name);
    return this;
}


const char* PCGameKey_toString(PCGameKey* this) {
        return java_concat("PCGameKey: ", Input_toString((&this->base)));
}


const char* PCGameKey_getString(int32_t keyCode) {
        Input* input = InputFactory_getInstanceById(InputFactory_getInstance(), keyCode);
        if (input != nullptr) {
            return Input_getName(input);
        } else {
            return StringUtil_getInstance()->EMPTY_STRING;
        }
}

