#ifndef ORG_ALLBINARY_GAME_INPUT_J2MEGAMEKEY_H
#define ORG_ALLBINARY_GAME_INPUT_J2MEGAMEKEY_H
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
typedef struct Input Input;
typedef struct InputFactory InputFactory;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
#include "org/allbinary/game/input/Input.h"

typedef struct J2MEGameKey J2MEGameKey;
struct J2MEGameKey {
    Input base;
};


J2MEGameKey* J2MEGameKey_new(int32_t key, const char* keyName);

void J2MEGameKey_init(J2MEGameKey* this, int32_t key, const char* keyName);

const char* J2MEGameKey_toString(J2MEGameKey* this);

const char* J2MEGameKey_getString(int32_t keyCode);
#define J2MEGameKey_new2 J2MEGameKey_new
#define J2MEGameKey_init2 J2MEGameKey_init
#ifndef J2MEGameKey_getId
#define J2MEGameKey_getId Input_getId
#endif
#ifndef J2MEGameKey_setId
#define J2MEGameKey_setId Input_setId
#endif
#ifndef J2MEGameKey_getName
#define J2MEGameKey_getName Input_getName
#endif
#ifndef J2MEGameKey_setName
#define J2MEGameKey_setName Input_setName
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void J2MEGameKey_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void J2MEGameKey_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_J2MEGAMEKEY_H
