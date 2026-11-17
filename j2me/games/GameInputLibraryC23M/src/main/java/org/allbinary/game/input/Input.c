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

typedef struct Input Input;
struct Input {
    int32_t id;
    const char* name;
};


Input* Input_new(int32_t id, const char* name);

void Input_init(Input* this, int32_t id, const char* name);
int32_t Input_getId(Input* this);
static void Input_setId(Input* this, int32_t key);
const char* Input_getName(Input* this);
static void Input_setName(Input* this, const char* keyName);
const char* Input_toString(Input* this);

static void Input_initFields(Input* this) {
    this->id = 0;
    this->name = StringUtil_getInstance()->EMPTY_STRING;
}


void Input_init(Input* this, int32_t id, const char* name) {
    Input_initFields(this);
        Input_setId(this, id);
        Input_setName(this, name);
}

Input* Input_new(int32_t id, const char* name) {
    Input* this = calloc(1, sizeof(Input));
    Input_init(this, id, name);
    return this;
}


int32_t Input_getId(Input* this) {
        return this->id;
}


static void Input_setId(Input* this, int32_t key) {
        this->id = key;
}


const char* Input_getName(Input* this) {
        return this->name;
}


static void Input_setName(Input* this, const char* keyName) {
        this->name = keyName;
}


const char* Input_toString(Input* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Name: ");
        StringMaker_append(stringBuffer, Input_getName(this));
        StringMaker_append(stringBuffer, " Id: ");
        StringMaker_appendint(stringBuffer, Input_getId(this));
        return StringMaker_toString(stringBuffer);
}

