#ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_NOGAMEGAMENOTIFICATIONHUD_H
#define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_NOGAMEGAMENOTIFICATIONHUD_H
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
typedef struct GameNotificationHud GameNotificationHud;
typedef struct BasicHudFactory BasicHudFactory;
typedef struct BasicColorFactory BasicColorFactory;
#include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h"

typedef struct NoGameGameNotificationHud NoGameGameNotificationHud;
struct NoGameGameNotificationHud {
    GameNotificationHud base;
};


NoGameGameNotificationHud* NoGameGameNotificationHud_new(void);

void NoGameGameNotificationHud_init(NoGameGameNotificationHud* this);
#define NoGameGameNotificationHud_new0 NoGameGameNotificationHud_new
#define NoGameGameNotificationHud_init0 NoGameGameNotificationHud_init
#ifndef NoGameGameNotificationHud_onEvent
#define NoGameGameNotificationHud_onEvent GameNotificationHud_onEvent
#endif
#ifndef NoGameGameNotificationHud_onGameNotificationEvent
#define NoGameGameNotificationHud_onGameNotificationEvent GameNotificationHud_onGameNotificationEvent
#endif
#ifndef NoGameGameNotificationHud_add
#define NoGameGameNotificationHud_add GameNotificationHud_add
#endif
#ifndef NoGameGameNotificationHud_processTick
#define NoGameGameNotificationHud_processTick GameNotificationHud_processTick
#endif
#ifndef NoGameGameNotificationHud_paint
#define NoGameGameNotificationHud_paint GameNotificationHud_paint
#endif
#ifndef NoGameGameNotificationHud_clear
#define NoGameGameNotificationHud_clear GameNotificationHud_clear
#endif
#ifndef NoGameGameNotificationHud_updateMeasurement
#define NoGameGameNotificationHud_updateMeasurement BasicHud_updateMeasurement
#endif
#ifndef NoGameGameNotificationHud_getLocation
#define NoGameGameNotificationHud_getLocation BasicHud_getLocation
#endif
#ifndef NoGameGameNotificationHud_getDirection
#define NoGameGameNotificationHud_getDirection BasicHud_getDirection
#endif
#ifndef NoGameGameNotificationHud_getHudGraphicsPositionWH
#define NoGameGameNotificationHud_getHudGraphicsPositionWH BasicHud_getHudGraphicsPositionWH
#endif
#ifndef NoGameGameNotificationHud_onEvent
#define NoGameGameNotificationHud_onEvent BasicHud_onEvent
#endif
#ifndef NoGameGameNotificationHud_onDisplayChangeEvent
#define NoGameGameNotificationHud_onDisplayChangeEvent BasicHud_onDisplayChangeEvent
#endif
#ifndef NoGameGameNotificationHud_getPoint
#define NoGameGameNotificationHud_getPoint BasicHud_getPoint
#endif
#ifndef NoGameGameNotificationHud_getBufferZone
#define NoGameGameNotificationHud_getBufferZone BasicHud_getBufferZone
#endif
#ifndef NoGameGameNotificationHud_setBufferZone
#define NoGameGameNotificationHud_setBufferZone BasicHud_setBufferZone
#endif
#ifndef NoGameGameNotificationHud_setLocation
#define NoGameGameNotificationHud_setLocation BasicHud_setLocation
#endif
#ifndef NoGameGameNotificationHud_setDirection
#define NoGameGameNotificationHud_setDirection BasicHud_setDirection
#endif
#ifndef NoGameGameNotificationHud_getHudGraphicsPosition
#define NoGameGameNotificationHud_getHudGraphicsPosition BasicHud_getHudGraphicsPosition
#endif
#ifndef NoGameGameNotificationHud_getColor
#define NoGameGameNotificationHud_getColor BasicHud_getColor
#endif
#ifndef NoGameGameNotificationHud_getX
#define NoGameGameNotificationHud_getX BasicHud_getX
#endif
#ifndef NoGameGameNotificationHud_setX
#define NoGameGameNotificationHud_setX BasicHud_setX
#endif
#ifndef NoGameGameNotificationHud_setBasicColorP
#define NoGameGameNotificationHud_setBasicColorP BasicHud_setBasicColorP
#endif
#ifndef NoGameGameNotificationHud_getBasicColorP
#define NoGameGameNotificationHud_getBasicColorP BasicHud_getBasicColorP
#endif
#ifndef NoGameGameNotificationHud_setY
#define NoGameGameNotificationHud_setY BasicHud_setY
#endif
#ifndef NoGameGameNotificationHud_getY
#define NoGameGameNotificationHud_getY BasicHud_getY
#endif
#ifndef NoGameGameNotificationHud_paintSSO
#define NoGameGameNotificationHud_paintSSO BasicHud_paintSSO
#endif
#ifndef NoGameGameNotificationHud_paintSSOO
#define NoGameGameNotificationHud_paintSSOO BasicHud_paintSSOO
#endif
#ifndef NoGameGameNotificationHud_paintDXY
#define NoGameGameNotificationHud_paintDXY BasicHud_paintDXY
#endif
#ifndef NoGameGameNotificationHud_paintDX
#define NoGameGameNotificationHud_paintDX BasicHud_paintDX
#endif
#ifndef NoGameGameNotificationHud_paintOffsetAndLength
#define NoGameGameNotificationHud_paintOffsetAndLength BasicHud_paintOffsetAndLength
#endif
#ifndef NoGameGameNotificationHud_paintString
#define NoGameGameNotificationHud_paintString BasicHud_paintString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoGameGameNotificationHud_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoGameGameNotificationHud_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_NOGAMEGAMENOTIFICATIONHUD_H
