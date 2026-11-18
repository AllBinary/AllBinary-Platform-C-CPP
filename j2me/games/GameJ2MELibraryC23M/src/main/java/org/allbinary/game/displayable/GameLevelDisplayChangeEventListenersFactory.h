#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_GAMELEVELDISPLAYCHANGEEVENTLISTENERSFACTORY_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_GAMELEVELDISPLAYCHANGEEVENTLISTENERSFACTORY_H
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
// package org.allbinary.game.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DisplayChangeEventHandler DisplayChangeEventHandler;
typedef struct DisplayChangeEventListener DisplayChangeEventListener;
typedef struct BasicEventHandler BasicEventHandler;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct GameLevelDisplayChangeEventListenersFactory GameLevelDisplayChangeEventListenersFactory;
struct GameLevelDisplayChangeEventListenersFactory {
    BasicArrayList* list;
};


GameLevelDisplayChangeEventListenersFactory* GameLevelDisplayChangeEventListenersFactory_new(void);
void GameLevelDisplayChangeEventListenersFactory_init(GameLevelDisplayChangeEventListenersFactory* this);

GameLevelDisplayChangeEventListenersFactory* GameLevelDisplayChangeEventListenersFactory_getInstance(void);

void GameLevelDisplayChangeEventListenersFactory_add(GameLevelDisplayChangeEventListenersFactory* this, DisplayChangeEventListener* displayChangeEventListener);

void GameLevelDisplayChangeEventListenersFactory_clear(GameLevelDisplayChangeEventListenersFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameLevelDisplayChangeEventListenersFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameLevelDisplayChangeEventListenersFactory_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_GAMELEVELDISPLAYCHANGEEVENTLISTENERSFACTORY_H
