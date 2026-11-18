#ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_TIMEHUDWIDGET_H
#define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_TIMEHUDWIDGET_H
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
// package org.allbinary.game.ag.layer.hud.basic.time

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct HudTimer HudTimer;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct BasicHud BasicHud;
typedef struct BasicColor BasicColor;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct PrimitiveLongSingleton PrimitiveLongSingleton;
#include "org/allbinary/game/graphics/hud/BasicHud.h"
#if __has_include("org/allbinary/game/ag/layer/hud/basic/time/HudTimer.h")
#include "org/allbinary/game/ag/layer/hud/basic/time/HudTimer.h"
#endif

typedef struct TimeHudWidget TimeHudWidget;
struct TimeHudWidget {
    BasicHud base;
    const char* TIME_STRING;
    uint16_t* TIME_CHAR_ARRAY;
    int32_t offset;
    uint16_t* string;
    int32_t totalDigits;
    HudTimer* timer;
};


TimeHudWidget* TimeHudWidget_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor, HudTimer* timer);

TimeHudWidget* TimeHudWidget_getInstance(int32_t location, int32_t direction, BasicColor* basicColor, HudTimer* timer);

void TimeHudWidget_init(TimeHudWidget* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor, HudTimer* timer);

void TimeHudWidget_updateMeasurement(TimeHudWidget* this, Graphics* graphics);

void TimeHudWidget_update(TimeHudWidget* this);


HudTimer* TimeHudWidget_getTimer(TimeHudWidget* this);

void TimeHudWidget_paint(TimeHudWidget* this, Graphics* graphics);
#define TimeHudWidget_new5 TimeHudWidget_new
#define TimeHudWidget_init5 TimeHudWidget_init
#ifndef TimeHudWidget_getLocation
#define TimeHudWidget_getLocation BasicHud_getLocation
#endif
#ifndef TimeHudWidget_getDirection
#define TimeHudWidget_getDirection BasicHud_getDirection
#endif
#ifndef TimeHudWidget_getHudGraphicsPositionWH
#define TimeHudWidget_getHudGraphicsPositionWH BasicHud_getHudGraphicsPositionWH
#endif
#ifndef TimeHudWidget_onEvent
#define TimeHudWidget_onEvent BasicHud_onEvent
#endif
#ifndef TimeHudWidget_onDisplayChangeEvent
#define TimeHudWidget_onDisplayChangeEvent BasicHud_onDisplayChangeEvent
#endif
#ifndef TimeHudWidget_getPoint
#define TimeHudWidget_getPoint BasicHud_getPoint
#endif
#ifndef TimeHudWidget_getBufferZone
#define TimeHudWidget_getBufferZone BasicHud_getBufferZone
#endif
#ifndef TimeHudWidget_setBufferZone
#define TimeHudWidget_setBufferZone BasicHud_setBufferZone
#endif
#ifndef TimeHudWidget_setLocation
#define TimeHudWidget_setLocation BasicHud_setLocation
#endif
#ifndef TimeHudWidget_setDirection
#define TimeHudWidget_setDirection BasicHud_setDirection
#endif
#ifndef TimeHudWidget_getHudGraphicsPosition
#define TimeHudWidget_getHudGraphicsPosition BasicHud_getHudGraphicsPosition
#endif
#ifndef TimeHudWidget_getColor
#define TimeHudWidget_getColor BasicHud_getColor
#endif
#ifndef TimeHudWidget_getX
#define TimeHudWidget_getX BasicHud_getX
#endif
#ifndef TimeHudWidget_setX
#define TimeHudWidget_setX BasicHud_setX
#endif
#ifndef TimeHudWidget_setBasicColorP
#define TimeHudWidget_setBasicColorP BasicHud_setBasicColorP
#endif
#ifndef TimeHudWidget_getBasicColorP
#define TimeHudWidget_getBasicColorP BasicHud_getBasicColorP
#endif
#ifndef TimeHudWidget_setY
#define TimeHudWidget_setY BasicHud_setY
#endif
#ifndef TimeHudWidget_getY
#define TimeHudWidget_getY BasicHud_getY
#endif
#ifndef TimeHudWidget_paintSSO
#define TimeHudWidget_paintSSO BasicHud_paintSSO
#endif
#ifndef TimeHudWidget_paintSSOO
#define TimeHudWidget_paintSSOO BasicHud_paintSSOO
#endif
#ifndef TimeHudWidget_paintDXY
#define TimeHudWidget_paintDXY BasicHud_paintDXY
#endif
#ifndef TimeHudWidget_paintDX
#define TimeHudWidget_paintDX BasicHud_paintDX
#endif
#ifndef TimeHudWidget_paintOffsetAndLength
#define TimeHudWidget_paintOffsetAndLength BasicHud_paintOffsetAndLength
#endif
#ifndef TimeHudWidget_paintString
#define TimeHudWidget_paintString BasicHud_paintString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TimeHudWidget_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TimeHudWidget_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_TIMEHUDWIDGET_H
