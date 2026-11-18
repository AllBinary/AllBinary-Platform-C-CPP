#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDLISTENERINTERFACE_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDLISTENERINTERFACE_H
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
// package org.allbinary.game.configuration.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameInitializedEvent GameInitializedEvent;
typedef struct EventListenerInterface EventListenerInterface;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"

typedef struct GameInitializedListenerInterface GameInitializedListenerInterface;
struct GameInitializedListenerInterface {
    void (*onGameInitialized)(void* this, GameInitializedEvent* gameInitializedEvent);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameInitializedListenerInterface_staticInit(void);

static inline void GameInitializedListenerInterface_onGameInitialized(void* this, GameInitializedEvent* gameInitializedEvent) {
    ((__typeof__(((GameInitializedListenerInterface*) nullptr)->onGameInitialized)) java_method_of(this, "onGameInitialized"))(this, gameInitializedEvent);
}
#define GameInitializedListenerInterface_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDLISTENERINTERFACE_H
