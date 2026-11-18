#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMCOMMANDLISTENER_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMCOMMANDLISTENER_H
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
// package org.allbinary.game.configuration.feature

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Command Command;
typedef struct Item Item;
typedef struct ItemCommandListener ItemCommandListener;
typedef struct GameConfigurationGauge GameConfigurationGauge;
typedef struct GameConfigurationUtil GameConfigurationUtil;
typedef struct GameOptionsForm GameOptionsForm;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct MidletStrings MidletStrings;
typedef struct CommonLabels CommonLabels;
typedef struct CommonStrings CommonStrings;
#include "javax/microedition/lcdui/ItemCommandListener.h"
#if __has_include("org/allbinary/game/configuration/GameOptionsForm.h")
#include "org/allbinary/game/configuration/GameOptionsForm.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct GameFeatureItemCommandListener GameFeatureItemCommandListener;
struct GameFeatureItemCommandListener {
    ItemCommandListener ItemCommandListener_interface;
    LogUtil* logUtil;
    GameOptionsForm* gameOptionsForm;
};


GameFeatureItemCommandListener* GameFeatureItemCommandListener_new(GameOptionsForm* gameOptionsForm);

void GameFeatureItemCommandListener_init(GameFeatureItemCommandListener* this, GameOptionsForm* gameOptionsForm);

void GameFeatureItemCommandListener_commandAction(GameFeatureItemCommandListener* this, Command* command, Item* item);
#define GameFeatureItemCommandListener_new1 GameFeatureItemCommandListener_new
#define GameFeatureItemCommandListener_init1 GameFeatureItemCommandListener_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameFeatureItemCommandListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameFeatureItemCommandListener_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMCOMMANDLISTENER_H
