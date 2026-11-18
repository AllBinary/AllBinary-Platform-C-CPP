#ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_PLAYERGAMENOTIFICATIONHUD_H
#define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_PLAYERGAMENOTIFICATIONHUD_H
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
// package org.allbinary.game.ag.layer.hud.basic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct SetAndRemoveProcessor SetAndRemoveProcessor;
typedef struct NextUnremoveableProcessor NextUnremoveableProcessor;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct GameAdStateFactory GameAdStateFactory;
typedef struct Processor Processor;
typedef struct GameAdState GameAdState;
typedef struct GameNotification GameNotification;
typedef struct GameNotificationHud GameNotificationHud;
typedef struct GameNotificationEventHandler GameNotificationEventHandler;
typedef struct CustomGPoint CustomGPoint;
typedef struct GPoint GPoint;
typedef struct BasicColor BasicColor;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
typedef struct GameTickTimeDelayHelper GameTickTimeDelayHelper;
typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
typedef struct TimeDelayHelper TimeDelayHelper;
typedef struct CircularIndexUtil CircularIndexUtil;
#if __has_include("org/allbinary/canvas/Processor.h")
#include "org/allbinary/canvas/Processor.h"
#endif
#if __has_include("org/allbinary/game/ag/layer/hud/basic/notification/GameNotification.h")
#include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotification.h"
#endif
#include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h"
#if __has_include("org/allbinary/graphics/CustomGPoint.h")
#include "org/allbinary/graphics/CustomGPoint.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/util/CircularIndexUtil.h")
#include "org/allbinary/util/CircularIndexUtil.h"
#endif
#include "java/lang/Integer.h"
#include "java/lang/Boolean.h"

typedef struct PlayerGameNotificationHud PlayerGameNotificationHud;
struct PlayerGameNotificationHud {
    GameNotificationHud base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
    const char* EMPTY_STRING;
    DisplayInfoSingleton* displayInfo;
    TimeDelayHelper* timeDelayHelper;
    CircularIndexUtil* circularIndexUtil;
    GameNotification* gameNotification;
    GameNotification* permanentGameNotification;
    Processor* setAndRemoveProcessor;
    Processor* nextUnremoveableProcessor;
    Processor* processor;
    const char* PERMANENT_GAME_NOTIFICATION;
    const char* lastString;
    const char* string;
    CustomGPoint* point;
    int32_t width;
};


PlayerGameNotificationHud* PlayerGameNotificationHud_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

void PlayerGameNotificationHud_init(PlayerGameNotificationHud* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

void PlayerGameNotificationHud_updateMeasurement(PlayerGameNotificationHud* this, Graphics* graphics);

GPoint* PlayerGameNotificationHud_getPoint(PlayerGameNotificationHud* this, int32_t x, int32_t y);

void PlayerGameNotificationHud_add(PlayerGameNotificationHud* this, const char* string, int32_t seconds, BasicColor* basicColor, bool permanent);

void PlayerGameNotificationHud_processTick(PlayerGameNotificationHud* this);


void PlayerGameNotificationHud_setAndRemoveProcess(PlayerGameNotificationHud* this);


void PlayerGameNotificationHud_setNextUnremoveableProcess(PlayerGameNotificationHud* this);

void PlayerGameNotificationHud_clear(PlayerGameNotificationHud* this);

void PlayerGameNotificationHud_paint(PlayerGameNotificationHud* this, Graphics* graphics);
#define PlayerGameNotificationHud_new4 PlayerGameNotificationHud_new
#define PlayerGameNotificationHud_init4 PlayerGameNotificationHud_init
#ifndef PlayerGameNotificationHud_onEvent
#define PlayerGameNotificationHud_onEvent GameNotificationHud_onEvent
#endif
#ifndef PlayerGameNotificationHud_onGameNotificationEvent
#define PlayerGameNotificationHud_onGameNotificationEvent GameNotificationHud_onGameNotificationEvent
#endif
#ifndef PlayerGameNotificationHud_getLocation
#define PlayerGameNotificationHud_getLocation BasicHud_getLocation
#endif
#ifndef PlayerGameNotificationHud_getDirection
#define PlayerGameNotificationHud_getDirection BasicHud_getDirection
#endif
#ifndef PlayerGameNotificationHud_getHudGraphicsPositionWH
#define PlayerGameNotificationHud_getHudGraphicsPositionWH BasicHud_getHudGraphicsPositionWH
#endif
#ifndef PlayerGameNotificationHud_onEvent
#define PlayerGameNotificationHud_onEvent BasicHud_onEvent
#endif
#ifndef PlayerGameNotificationHud_onDisplayChangeEvent
#define PlayerGameNotificationHud_onDisplayChangeEvent BasicHud_onDisplayChangeEvent
#endif
#ifndef PlayerGameNotificationHud_getBufferZone
#define PlayerGameNotificationHud_getBufferZone BasicHud_getBufferZone
#endif
#ifndef PlayerGameNotificationHud_setBufferZone
#define PlayerGameNotificationHud_setBufferZone BasicHud_setBufferZone
#endif
#ifndef PlayerGameNotificationHud_setLocation
#define PlayerGameNotificationHud_setLocation BasicHud_setLocation
#endif
#ifndef PlayerGameNotificationHud_setDirection
#define PlayerGameNotificationHud_setDirection BasicHud_setDirection
#endif
#ifndef PlayerGameNotificationHud_getHudGraphicsPosition
#define PlayerGameNotificationHud_getHudGraphicsPosition BasicHud_getHudGraphicsPosition
#endif
#ifndef PlayerGameNotificationHud_getColor
#define PlayerGameNotificationHud_getColor BasicHud_getColor
#endif
#ifndef PlayerGameNotificationHud_getX
#define PlayerGameNotificationHud_getX BasicHud_getX
#endif
#ifndef PlayerGameNotificationHud_setX
#define PlayerGameNotificationHud_setX BasicHud_setX
#endif
#ifndef PlayerGameNotificationHud_setBasicColorP
#define PlayerGameNotificationHud_setBasicColorP BasicHud_setBasicColorP
#endif
#ifndef PlayerGameNotificationHud_getBasicColorP
#define PlayerGameNotificationHud_getBasicColorP BasicHud_getBasicColorP
#endif
#ifndef PlayerGameNotificationHud_setY
#define PlayerGameNotificationHud_setY BasicHud_setY
#endif
#ifndef PlayerGameNotificationHud_getY
#define PlayerGameNotificationHud_getY BasicHud_getY
#endif
#ifndef PlayerGameNotificationHud_paintSSO
#define PlayerGameNotificationHud_paintSSO BasicHud_paintSSO
#endif
#ifndef PlayerGameNotificationHud_paintSSOO
#define PlayerGameNotificationHud_paintSSOO BasicHud_paintSSOO
#endif
#ifndef PlayerGameNotificationHud_paintDXY
#define PlayerGameNotificationHud_paintDXY BasicHud_paintDXY
#endif
#ifndef PlayerGameNotificationHud_paintDX
#define PlayerGameNotificationHud_paintDX BasicHud_paintDX
#endif
#ifndef PlayerGameNotificationHud_paintOffsetAndLength
#define PlayerGameNotificationHud_paintOffsetAndLength BasicHud_paintOffsetAndLength
#endif
#ifndef PlayerGameNotificationHud_paintString
#define PlayerGameNotificationHud_paintString BasicHud_paintString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PlayerGameNotificationHud_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PlayerGameNotificationHud_register(void);

#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif

#endif // ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_PLAYERGAMENOTIFICATIONHUD_H
