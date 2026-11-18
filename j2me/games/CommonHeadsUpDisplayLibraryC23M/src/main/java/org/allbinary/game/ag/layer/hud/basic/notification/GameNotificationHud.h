#ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATIONHUD_H
#define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATIONHUD_H
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
// package org.allbinary.game.ag.layer.hud.basic.notification

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameNotification GameNotification;
typedef struct Graphics Graphics;
typedef struct BasicHud BasicHud;
typedef struct BasicHudFactory BasicHudFactory;
typedef struct GameNotificationEvent GameNotificationEvent;
typedef struct GameNotificationListenerInterface GameNotificationListenerInterface;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
#include "org/allbinary/game/graphics/hud/BasicHud.h"
#if __has_include("org/allbinary/game/layer/hud/event/GameNotificationEvent.h")
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
#endif
#include "org/allbinary/game/layer/hud/event/GameNotificationListenerInterface.h"
#include "java/lang/Integer.h"
#include "java/lang/Boolean.h"

typedef struct GameNotificationHud GameNotificationHud;
struct GameNotificationHud {
    BasicHud base;
    GameNotificationListenerInterface GameNotificationListenerInterface_interface;
    const char* METHOD_NAME;
    GameNotificationEvent* lastGameNotificationEvent;
};

extern GameNotificationHud* GameNotificationHud_NULL_GAME_NOTIFICATION;

GameNotificationHud* GameNotificationHud_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

void GameNotificationHud_init(GameNotificationHud* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

void GameNotificationHud_onEvent(GameNotificationHud* this, AllBinaryEventObject* eventObject);

void GameNotificationHud_onGameNotificationEvent(GameNotificationHud* this, GameNotificationEvent* gameNotificationEvent);

void GameNotificationHud_add(GameNotificationHud* this, const char* string, int32_t seconds, BasicColor* basicColor, bool permanent);

void GameNotificationHud_processTick(GameNotificationHud* this);

void GameNotificationHud_paint(GameNotificationHud* this, Graphics* graphics);

void GameNotificationHud_clear(GameNotificationHud* this);
#define GameNotificationHud_new4 GameNotificationHud_new
#define GameNotificationHud_init4 GameNotificationHud_init
#ifndef GameNotificationHud_updateMeasurement
#define GameNotificationHud_updateMeasurement BasicHud_updateMeasurement
#endif
#ifndef GameNotificationHud_getLocation
#define GameNotificationHud_getLocation BasicHud_getLocation
#endif
#ifndef GameNotificationHud_getDirection
#define GameNotificationHud_getDirection BasicHud_getDirection
#endif
#ifndef GameNotificationHud_getHudGraphicsPositionWH
#define GameNotificationHud_getHudGraphicsPositionWH BasicHud_getHudGraphicsPositionWH
#endif
#ifndef GameNotificationHud_onDisplayChangeEvent
#define GameNotificationHud_onDisplayChangeEvent BasicHud_onDisplayChangeEvent
#endif
#ifndef GameNotificationHud_getPoint
#define GameNotificationHud_getPoint BasicHud_getPoint
#endif
#ifndef GameNotificationHud_getBufferZone
#define GameNotificationHud_getBufferZone BasicHud_getBufferZone
#endif
#ifndef GameNotificationHud_setBufferZone
#define GameNotificationHud_setBufferZone BasicHud_setBufferZone
#endif
#ifndef GameNotificationHud_setLocation
#define GameNotificationHud_setLocation BasicHud_setLocation
#endif
#ifndef GameNotificationHud_setDirection
#define GameNotificationHud_setDirection BasicHud_setDirection
#endif
#ifndef GameNotificationHud_getHudGraphicsPosition
#define GameNotificationHud_getHudGraphicsPosition BasicHud_getHudGraphicsPosition
#endif
#ifndef GameNotificationHud_getColor
#define GameNotificationHud_getColor BasicHud_getColor
#endif
#ifndef GameNotificationHud_getX
#define GameNotificationHud_getX BasicHud_getX
#endif
#ifndef GameNotificationHud_setX
#define GameNotificationHud_setX BasicHud_setX
#endif
#ifndef GameNotificationHud_setBasicColorP
#define GameNotificationHud_setBasicColorP BasicHud_setBasicColorP
#endif
#ifndef GameNotificationHud_getBasicColorP
#define GameNotificationHud_getBasicColorP BasicHud_getBasicColorP
#endif
#ifndef GameNotificationHud_setY
#define GameNotificationHud_setY BasicHud_setY
#endif
#ifndef GameNotificationHud_getY
#define GameNotificationHud_getY BasicHud_getY
#endif
#ifndef GameNotificationHud_paintSSO
#define GameNotificationHud_paintSSO BasicHud_paintSSO
#endif
#ifndef GameNotificationHud_paintSSOO
#define GameNotificationHud_paintSSOO BasicHud_paintSSOO
#endif
#ifndef GameNotificationHud_paintDXY
#define GameNotificationHud_paintDXY BasicHud_paintDXY
#endif
#ifndef GameNotificationHud_paintDX
#define GameNotificationHud_paintDX BasicHud_paintDX
#endif
#ifndef GameNotificationHud_paintOffsetAndLength
#define GameNotificationHud_paintOffsetAndLength BasicHud_paintOffsetAndLength
#endif
#ifndef GameNotificationHud_paintString
#define GameNotificationHud_paintString BasicHud_paintString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameNotificationHud_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameNotificationHud_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_GAMENOTIFICATIONHUD_H
