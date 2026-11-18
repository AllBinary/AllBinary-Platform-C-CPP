#ifndef ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONLISTENERINTERFACE_H
#define ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONLISTENERINTERFACE_H
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
// package org.allbinary.game.layer.hud.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameNotificationEvent GameNotificationEvent;
typedef struct EventListenerInterface EventListenerInterface;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"

typedef struct GameNotificationListenerInterface GameNotificationListenerInterface;
struct GameNotificationListenerInterface {
    void (*onGameNotificationEvent)(void* this, GameNotificationEvent* gameNotificationEvent);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameNotificationListenerInterface_staticInit(void);

static inline void GameNotificationListenerInterface_onGameNotificationEvent(void* this, GameNotificationEvent* gameNotificationEvent) {
    ((__typeof__(((GameNotificationListenerInterface*) nullptr)->onGameNotificationEvent)) java_method_of(this, "onGameNotificationEvent"))(this, gameNotificationEvent);
}
#define GameNotificationListenerInterface_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONLISTENERINTERFACE_H
