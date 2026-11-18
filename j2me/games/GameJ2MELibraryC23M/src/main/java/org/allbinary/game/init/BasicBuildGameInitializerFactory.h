#ifndef ORG_ALLBINARY_GAME_INIT_BASICBUILDGAMEINITIALIZERFACTORY_H
#define ORG_ALLBINARY_GAME_INIT_BASICBUILDGAMEINITIALIZERFACTORY_H
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
typedef struct GameInitializationInterfaceFactoryInterface GameInitializationInterfaceFactoryInterface;
typedef struct BaseGameInitialization BaseGameInitialization;
typedef struct GameInitializationInterface GameInitializationInterface;
#include "org/allbinary/game/init/GameInitializationInterfaceFactoryInterface.h"

typedef struct BasicBuildGameInitializerFactory BasicBuildGameInitializerFactory;
struct BasicBuildGameInitializerFactory {
    GameInitializationInterfaceFactoryInterface GameInitializationInterfaceFactoryInterface_interface;
};

extern BasicBuildGameInitializerFactory* BasicBuildGameInitializerFactory_NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY;

BasicBuildGameInitializerFactory* BasicBuildGameInitializerFactory_new(void);
void BasicBuildGameInitializerFactory_init(BasicBuildGameInitializerFactory* this);

GameInitializationInterface* BasicBuildGameInitializerFactory_getInstance(BasicBuildGameInitializerFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicBuildGameInitializerFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicBuildGameInitializerFactory_register(void);


#endif // ORG_ALLBINARY_GAME_INIT_BASICBUILDGAMEINITIALIZERFACTORY_H
