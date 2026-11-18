#ifndef ORG_ALLBINARY_GAME_INPUT_PLATFORMINPUTMAPPINGFACTORY_H
#define ORG_ALLBINARY_GAME_INPUT_PLATFORMINPUTMAPPINGFACTORY_H
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
typedef struct MotionLaptopGameInputMapping MotionLaptopGameInputMapping;
typedef struct PersistentInputMapping PersistentInputMapping;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/game/input/mapping/PersistentInputMapping.h")
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct PlatformInputMappingFactory PlatformInputMappingFactory;
struct PlatformInputMappingFactory {
    LogUtil* logUtil;
    PersistentInputMapping* inputToGameKeyMapping;
};


PlatformInputMappingFactory* PlatformInputMappingFactory_new(void);
void PlatformInputMappingFactory_init(PlatformInputMappingFactory* this);

PlatformInputMappingFactory* PlatformInputMappingFactory_getInstance(void);

PersistentInputMapping* PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PlatformInputMappingFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PlatformInputMappingFactory_register(void);

#if __has_include("org/allbinary/game/input/mapping/PersistentInputMapping.h")
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"
#endif

#endif // ORG_ALLBINARY_GAME_INPUT_PLATFORMINPUTMAPPINGFACTORY_H
