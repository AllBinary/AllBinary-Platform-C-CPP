#ifndef ORG_ALLBINARY_GAME_INIT_GAMEINITIALIZATIONUTIL_H
#define ORG_ALLBINARY_GAME_INIT_GAMEINITIALIZATIONUTIL_H
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
// package org.allbinary.game.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameInitializationInterface GameInitializationInterface;
typedef struct BasicBuildGameInitializerFactory BasicBuildGameInitializerFactory;
typedef struct ChangedGameFeatureListener ChangedGameFeatureListener;
typedef struct GameInitializedEvent GameInitializedEvent;
typedef struct GameInitializedEventHandler GameInitializedEventHandler;
typedef struct Features Features;
typedef struct MainFeatureFactory MainFeatureFactory;
typedef struct ResourceLoadingLevelFactory ResourceLoadingLevelFactory;
typedef struct MyCanvas MyCanvas;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
#if __has_include("org/allbinary/game/configuration/event/GameInitializedEvent.h")
#include "org/allbinary/game/configuration/event/GameInitializedEvent.h"
#endif

typedef struct GameInitializationUtil GameInitializationUtil;
struct GameInitializationUtil {
    GameInitializedEvent* EVENT;
};


GameInitializationUtil* GameInitializationUtil_new(void);
void GameInitializationUtil_init(GameInitializationUtil* this);

void GameInitializationUtil_initDemo(GameInitializationUtil* this, AbeClientInformationInterface* abeClientInformation, MyCanvas* canvas, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface);

void GameInitializationUtil_initGame(GameInitializationUtil* this, AbeClientInformationInterface* abeClientInformation, MyCanvas* canvas, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface);

GameInitializationUtil* GameInitializationUtil_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameInitializationUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameInitializationUtil_register(void);


#endif // ORG_ALLBINARY_GAME_INIT_GAMEINITIALIZATIONUTIL_H
