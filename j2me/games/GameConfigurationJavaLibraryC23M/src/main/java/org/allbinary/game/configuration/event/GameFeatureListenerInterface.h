#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEFEATURELISTENERINTERFACE_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEFEATURELISTENERINTERFACE_H
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
typedef struct GameFeatureEvent GameFeatureEvent;
typedef struct EventListenerInterface EventListenerInterface;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"

typedef struct GameFeatureListenerInterface GameFeatureListenerInterface;
struct GameFeatureListenerInterface {
    void (*onGameFeatureChange)(void* this, GameFeatureEvent* gameFeatureEvent);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameFeatureListenerInterface_staticInit(void);

static inline void GameFeatureListenerInterface_onGameFeatureChange(void* this, GameFeatureEvent* gameFeatureEvent) {
    ((__typeof__(((GameFeatureListenerInterface*) nullptr)->onGameFeatureChange)) java_method_of(this, "onGameFeatureChange"))(this, gameFeatureEvent);
}
#define GameFeatureListenerInterface_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEFEATURELISTENERINTERFACE_H
