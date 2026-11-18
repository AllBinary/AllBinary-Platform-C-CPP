#ifndef ORG_ALLBINARY_GAME_INPUT_J2MEKEYFACTORY_H
#define ORG_ALLBINARY_GAME_INPUT_J2MEKEYFACTORY_H
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
typedef struct GameKeyFactory GameKeyFactory;
typedef struct GameKey GameKey;
typedef struct InputFactory InputFactory;
typedef struct Input Input;
#if __has_include("org/allbinary/game/input/GameKeyFactory.h")
#include "org/allbinary/game/input/GameKeyFactory.h"
#endif

typedef struct J2MEKeyFactory J2MEKeyFactory;
struct J2MEKeyFactory {
    GameKeyFactory* gameKeyFactory;
};


J2MEKeyFactory* J2MEKeyFactory_new(void);

J2MEKeyFactory* J2MEKeyFactory_getInstance(void);

void J2MEKeyFactory_init(J2MEKeyFactory* this);

void J2MEKeyFactory_initMethod(J2MEKeyFactory* this);

bool J2MEKeyFactory_isSubmission(J2MEKeyFactory* this, Input* input);

bool J2MEKeyFactory_isDelete(J2MEKeyFactory* this, Input* input);

bool J2MEKeyFactory_isBackSpace(J2MEKeyFactory* this, Input* input);

bool J2MEKeyFactory_isUp(J2MEKeyFactory* this, Input* input);

bool J2MEKeyFactory_isDown(J2MEKeyFactory* this, Input* input);

bool J2MEKeyFactory_isLeft(J2MEKeyFactory* this, Input* input);

bool J2MEKeyFactory_isRight(J2MEKeyFactory* this, Input* input);

bool J2MEKeyFactory_isEnter(J2MEKeyFactory* this, Input* input);
#define J2MEKeyFactory_new0 J2MEKeyFactory_new
#define J2MEKeyFactory_init0 J2MEKeyFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void J2MEKeyFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void J2MEKeyFactory_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_J2MEKEYFACTORY_H
