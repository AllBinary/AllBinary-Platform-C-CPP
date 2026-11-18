#ifndef ORG_ALLBINARY_GAME_INPUT_PLATFORMFORMINPUTMAPPINGFACTORY_H
#define ORG_ALLBINARY_GAME_INPUT_PLATFORMFORMINPUTMAPPINGFACTORY_H
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
typedef struct PCKeyFactory PCKeyFactory;
typedef struct GameKeyFactory GameKeyFactory;
typedef struct InputToGameKeyMapping InputToGameKeyMapping;
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct PlatformFormInputMappingFactory PlatformFormInputMappingFactory;
struct PlatformFormInputMappingFactory {
    LogUtil* logUtil;
    InputToGameKeyMapping* inputToGameKeyMapping;
};


PlatformFormInputMappingFactory* PlatformFormInputMappingFactory_new(void);
void PlatformFormInputMappingFactory_init(PlatformFormInputMappingFactory* this);

PlatformFormInputMappingFactory* PlatformFormInputMappingFactory_getInstance(void);

InputToGameKeyMapping* PlatformFormInputMappingFactory_getOrCreate(PlatformFormInputMappingFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PlatformFormInputMappingFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PlatformFormInputMappingFactory_register(void);

#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif

#endif // ORG_ALLBINARY_GAME_INPUT_PLATFORMFORMINPUTMAPPINGFACTORY_H
