#ifndef ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETSTATEFACTORY_H
#define ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETSTATEFACTORY_H
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
// package org.allbinary.game.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DemoGameMidletState DemoGameMidletState;
#if __has_include("org/allbinary/game/midlet/DemoGameMidletState.h")
#include "org/allbinary/game/midlet/DemoGameMidletState.h"
#endif

typedef struct DemoGameMidletStateFactory DemoGameMidletStateFactory;
struct DemoGameMidletStateFactory {
    DemoGameMidletState* NONE;
    DemoGameMidletState* START_DEMO;
    DemoGameMidletState* START_GAME;
    DemoGameMidletState* START_INPUT_MAPPING;
};


DemoGameMidletStateFactory* DemoGameMidletStateFactory_new(void);

void DemoGameMidletStateFactory_init(DemoGameMidletStateFactory* this);

DemoGameMidletStateFactory* DemoGameMidletStateFactory_getInstance(void);
#define DemoGameMidletStateFactory_new0 DemoGameMidletStateFactory_new
#define DemoGameMidletStateFactory_init0 DemoGameMidletStateFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DemoGameMidletStateFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DemoGameMidletStateFactory_register(void);


#endif // ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETSTATEFACTORY_H
