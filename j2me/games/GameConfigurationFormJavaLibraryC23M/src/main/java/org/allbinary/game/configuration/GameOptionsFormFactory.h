#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMEOPTIONSFORMFACTORY_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_GAMEOPTIONSFORMFACTORY_H
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
// package org.allbinary.game.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameOptionsForm GameOptionsForm;
typedef struct CommandListener CommandListener;
typedef struct BasicColor BasicColor;
typedef struct CommandForm CommandForm;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct GameOptionsFormFactory GameOptionsFormFactory;
struct GameOptionsFormFactory {
    LogUtil* logUtil;
};


GameOptionsFormFactory* GameOptionsFormFactory_new(void);

void GameOptionsFormFactory_init(GameOptionsFormFactory* this);

GameOptionsFormFactory* GameOptionsFormFactory_getInstance(void);

CommandForm* GameOptionsFormFactory_initMethod(GameOptionsFormFactory* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);
#define GameOptionsFormFactory_new0 GameOptionsFormFactory_new
#define GameOptionsFormFactory_init0 GameOptionsFormFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameOptionsFormFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameOptionsFormFactory_register(void);

#if __has_include("org/allbinary/graphics/displayable/screen/CommandForm.h")
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#endif

#endif // ORG_ALLBINARY_GAME_CONFIGURATION_GAMEOPTIONSFORMFACTORY_H
