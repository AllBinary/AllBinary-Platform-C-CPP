#ifndef ORG_ALLBINARY_GAME_INPUT_KEYFACTORYINITIALIZER_H
#define ORG_ALLBINARY_GAME_INPUT_KEYFACTORYINITIALIZER_H
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
typedef struct Init Init;
typedef struct LogUtil LogUtil;
#include "org/allbinary/init/Init.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct KeyFactoryInitializer KeyFactoryInitializer;
struct KeyFactoryInitializer {
    Init base;
    LogUtil* logUtil;
};


KeyFactoryInitializer* KeyFactoryInitializer_new(void);
void KeyFactoryInitializer_init(KeyFactoryInitializer* this);

void KeyFactoryInitializer_initMethod(KeyFactoryInitializer* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void KeyFactoryInitializer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void KeyFactoryInitializer_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_KEYFACTORYINITIALIZER_H
