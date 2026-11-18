#ifndef ORG_ALLBINARY_GAME_INPUT_INPUTFACTORY_H
#define ORG_ALLBINARY_GAME_INPUT_INPUTFACTORY_H
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
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct StringMaker StringMaker;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/game/input/Input.h")
#include "org/allbinary/game/input/Input.h"
#endif

typedef struct InputFactory InputFactory;
struct InputFactory {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* KEY_CODE_LABEL;
    const char* DEVICE_ID_LABEL;
    int32_t MAX;
    Input** inputIntegerArray;
    Input* NO_INPUT;
};


InputFactory* InputFactory_new(void);

InputFactory* InputFactory_getInstance(void);

void InputFactory_init(InputFactory* this);

void InputFactory_add(InputFactory* this, int32_t id, Input* input);

Input* InputFactory_getInstanceById(InputFactory* this, int32_t id);
#define InputFactory_new0 InputFactory_new
#define InputFactory_init0 InputFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InputFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InputFactory_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_INPUTFACTORY_H
