#ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUD_H
#define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUD_H
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
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct BasicHud BasicHud;
typedef struct BasicHudFactory BasicHudFactory;
typedef struct BasicColor BasicColor;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct PaintableInterface PaintableInterface;
typedef struct PrimitiveLongSingleton PrimitiveLongSingleton;
typedef struct PrimitiveLongUtil PrimitiveLongUtil;
#include "org/allbinary/game/graphics/hud/BasicHud.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#if __has_include("org/allbinary/logic/math/PrimitiveLongUtil.h")
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"
#endif

typedef struct NumberStringHud NumberStringHud;
struct NumberStringHud {
    BasicHud base;
    PaintableInterface PaintableInterface_interface;
    PrimitiveLongUtil* primitiveLongUtil;
    const char* prependString;
    uint16_t* PREPEND_STRING;
    int32_t value;
    int32_t max;
    int32_t offset;
    uint16_t* valueString;
    int32_t valueTotalDigits;
};


NumberStringHud* NumberStringHud_new(const char* prependString, int32_t max, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

void NumberStringHud_init(NumberStringHud* this, const char* prependString, int32_t max, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

void NumberStringHud_updateMeasurement(NumberStringHud* this, Graphics* graphics);

int32_t NumberStringHud_get(NumberStringHud* this);

void NumberStringHud_add(NumberStringHud* this, int32_t value);

void NumberStringHud_set(NumberStringHud* this, int32_t value);

void NumberStringHud_reduce(NumberStringHud* this, int32_t value);

void NumberStringHud_paint(NumberStringHud* this, Graphics* graphics);

void NumberStringHud_paintXY(NumberStringHud* this, Graphics* graphics, int32_t x, int32_t y);

void NumberStringHud_paintThreed(NumberStringHud* this, Graphics* graphics);
#define NumberStringHud_new6 NumberStringHud_new
#define NumberStringHud_init6 NumberStringHud_init
#ifndef NumberStringHud_getLocation
#define NumberStringHud_getLocation BasicHud_getLocation
#endif
#ifndef NumberStringHud_getDirection
#define NumberStringHud_getDirection BasicHud_getDirection
#endif
#ifndef NumberStringHud_getHudGraphicsPositionWH
#define NumberStringHud_getHudGraphicsPositionWH BasicHud_getHudGraphicsPositionWH
#endif
#ifndef NumberStringHud_onEvent
#define NumberStringHud_onEvent BasicHud_onEvent
#endif
#ifndef NumberStringHud_onDisplayChangeEvent
#define NumberStringHud_onDisplayChangeEvent BasicHud_onDisplayChangeEvent
#endif
#ifndef NumberStringHud_getPoint
#define NumberStringHud_getPoint BasicHud_getPoint
#endif
#ifndef NumberStringHud_getBufferZone
#define NumberStringHud_getBufferZone BasicHud_getBufferZone
#endif
#ifndef NumberStringHud_setBufferZone
#define NumberStringHud_setBufferZone BasicHud_setBufferZone
#endif
#ifndef NumberStringHud_setLocation
#define NumberStringHud_setLocation BasicHud_setLocation
#endif
#ifndef NumberStringHud_setDirection
#define NumberStringHud_setDirection BasicHud_setDirection
#endif
#ifndef NumberStringHud_getHudGraphicsPosition
#define NumberStringHud_getHudGraphicsPosition BasicHud_getHudGraphicsPosition
#endif
#ifndef NumberStringHud_getColor
#define NumberStringHud_getColor BasicHud_getColor
#endif
#ifndef NumberStringHud_getX
#define NumberStringHud_getX BasicHud_getX
#endif
#ifndef NumberStringHud_setX
#define NumberStringHud_setX BasicHud_setX
#endif
#ifndef NumberStringHud_setBasicColorP
#define NumberStringHud_setBasicColorP BasicHud_setBasicColorP
#endif
#ifndef NumberStringHud_getBasicColorP
#define NumberStringHud_getBasicColorP BasicHud_getBasicColorP
#endif
#ifndef NumberStringHud_setY
#define NumberStringHud_setY BasicHud_setY
#endif
#ifndef NumberStringHud_getY
#define NumberStringHud_getY BasicHud_getY
#endif
#ifndef NumberStringHud_paintSSO
#define NumberStringHud_paintSSO BasicHud_paintSSO
#endif
#ifndef NumberStringHud_paintSSOO
#define NumberStringHud_paintSSOO BasicHud_paintSSOO
#endif
#ifndef NumberStringHud_paintDXY
#define NumberStringHud_paintDXY BasicHud_paintDXY
#endif
#ifndef NumberStringHud_paintDX
#define NumberStringHud_paintDX BasicHud_paintDX
#endif
#ifndef NumberStringHud_paintOffsetAndLength
#define NumberStringHud_paintOffsetAndLength BasicHud_paintOffsetAndLength
#endif
#ifndef NumberStringHud_paintString
#define NumberStringHud_paintString BasicHud_paintString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NumberStringHud_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NumberStringHud_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUD_H
