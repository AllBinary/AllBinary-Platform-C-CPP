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
#include "org/allbinary/game/init/GameInitializationInterfaceFactoryInterface.h"

typedef struct BasicBuildGameInitializerFactory BasicBuildGameInitializerFactory;
struct BasicBuildGameInitializerFactory {
    GameInitializationInterfaceFactoryInterface GameInitializationInterfaceFactoryInterface_interface;
};

BasicBuildGameInitializerFactory* BasicBuildGameInitializerFactory_NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY;

BasicBuildGameInitializerFactory* BasicBuildGameInitializerFactory_new(void);
GameInitializationInterface* BasicBuildGameInitializerFactory_getInstance(BasicBuildGameInitializerFactory* this);

// Static fields with runtime initializers: call this once at startup
void BasicBuildGameInitializerFactory_staticInit(void) {
    BasicBuildGameInitializerFactory_NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY = BasicBuildGameInitializerFactory_new();
}

void BasicBuildGameInitializerFactory_init(BasicBuildGameInitializerFactory* this) {
}

BasicBuildGameInitializerFactory* BasicBuildGameInitializerFactory_new(void) {
    BasicBuildGameInitializerFactory* this = calloc(1, sizeof(BasicBuildGameInitializerFactory));
    BasicBuildGameInitializerFactory_init(this);
    return this;
}


GameInitializationInterface* BasicBuildGameInitializerFactory_getInstance(BasicBuildGameInitializerFactory* this) {
        return BaseGameInitialization_NULL_BASE_GAME_INITIALIZATION;
}

