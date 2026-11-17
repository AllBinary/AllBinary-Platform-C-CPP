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

typedef struct AndroidGameKey AndroidGameKey;
struct AndroidGameKey {
    Input base;
};


AndroidGameKey* AndroidGameKey_new(int32_t keyCode, const char* name);

void AndroidGameKey_init(AndroidGameKey* this, int32_t keyCode, const char* name);
const char* AndroidGameKey_toString(AndroidGameKey* this);
const char* AndroidGameKey_getString(int32_t keyCode);


void AndroidGameKey_init(AndroidGameKey* this, int32_t keyCode, const char* name) {
        Input_init(&this->base, keyCode, name);
        InputFactory* inputFactory = InputFactory_getInstance();
        inputFactory->inputIntegerArray[AndroidGameKey_getId(this)] = this;
}

AndroidGameKey* AndroidGameKey_new(int32_t keyCode, const char* name) {
    AndroidGameKey* this = calloc(1, sizeof(AndroidGameKey));
    AndroidGameKey_init(this, keyCode, name);
    return this;
}


const char* AndroidGameKey_toString(AndroidGameKey* this) {
        return java_concat("AndroidGameKey: ", Input_toString((&this->base)));
}


const char* AndroidGameKey_getString(int32_t keyCode) {
        Input* input = InputFactory_getInstanceById(InputFactory_getInstance(), keyCode);
        if (input != nullptr) {
            return Input_getName(input);
        } else {
            return StringUtil_getInstance()->EMPTY_STRING;
        }
}

