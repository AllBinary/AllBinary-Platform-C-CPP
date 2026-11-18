#ifndef ORG_ALLBINARY_GAME_INPUT_PCGAMEKEY_H
#define ORG_ALLBINARY_GAME_INPUT_PCGAMEKEY_H
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
typedef struct StringUtil StringUtil;
#include "org/allbinary/game/input/Input.h"

typedef struct PCGameKey PCGameKey;
struct PCGameKey {
    Input base;
};


PCGameKey* PCGameKey_new(int32_t keyCode, const char* name);

void PCGameKey_init(PCGameKey* this, int32_t keyCode, const char* name);

const char* PCGameKey_toString(PCGameKey* this);

const char* PCGameKey_getString(int32_t keyCode);
#define PCGameKey_new2 PCGameKey_new
#define PCGameKey_init2 PCGameKey_init
#ifndef PCGameKey_getId
#define PCGameKey_getId Input_getId
#endif
#ifndef PCGameKey_setId
#define PCGameKey_setId Input_setId
#endif
#ifndef PCGameKey_getName
#define PCGameKey_getName Input_getName
#endif
#ifndef PCGameKey_setName
#define PCGameKey_setName Input_setName
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PCGameKey_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PCGameKey_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_PCGAMEKEY_H
