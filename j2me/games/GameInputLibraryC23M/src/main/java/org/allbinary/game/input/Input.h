#ifndef ORG_ALLBINARY_GAME_INPUT_INPUT_H
#define ORG_ALLBINARY_GAME_INPUT_INPUT_H
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
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;

typedef struct Input Input;
struct Input {
    int32_t id;
    const char* name;
};


Input* Input_new(int32_t id, const char* name);

void Input_init(Input* this, int32_t id, const char* name);

int32_t Input_getId(Input* this);


const char* Input_getName(Input* this);


const char* Input_toString(Input* this);
#define Input_new2 Input_new
#define Input_init2 Input_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Input_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Input_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_INPUT_H
