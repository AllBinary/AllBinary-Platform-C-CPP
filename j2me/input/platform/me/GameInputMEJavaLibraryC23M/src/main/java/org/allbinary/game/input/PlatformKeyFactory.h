#ifndef ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_H
#define ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_H
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
typedef struct J2MEGameKey J2MEGameKey;
typedef struct J2MEKeyFactory J2MEKeyFactory;
typedef struct Input Input;
typedef struct NullUtil NullUtil;

typedef struct PlatformKeyFactory PlatformKeyFactory;
struct PlatformKeyFactory {
    char unused;
};


PlatformKeyFactory* PlatformKeyFactory_new(void);
void PlatformKeyFactory_init(PlatformKeyFactory* this);

PlatformKeyFactory* PlatformKeyFactory_getInstance(void);

const char* PlatformKeyFactory_getString(PlatformKeyFactory* this, int32_t keyCode);

bool PlatformKeyFactory_isSubmission(PlatformKeyFactory* this, Input* input);

bool PlatformKeyFactory_isDelete(PlatformKeyFactory* this, Input* input);

bool PlatformKeyFactory_isBackSpace(PlatformKeyFactory* this, Input* input);

bool PlatformKeyFactory_isLeft(PlatformKeyFactory* this, Input* input);

bool PlatformKeyFactory_isRight(PlatformKeyFactory* this, Input* input);

bool PlatformKeyFactory_isUp(PlatformKeyFactory* this, Input* input);

bool PlatformKeyFactory_isDown(PlatformKeyFactory* this, Input* input);

bool PlatformKeyFactory_isEnter(PlatformKeyFactory* this, Input* input);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PlatformKeyFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PlatformKeyFactory_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_H
