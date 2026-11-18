#ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LEVEL_LEVELHUDWIDGET_H
#define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LEVEL_LEVELHUDWIDGET_H
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
// package org.allbinary.game.ag.layer.hud.basic.level

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
typedef struct BasicColorFactory BasicColorFactory;
typedef struct PaintableInterface PaintableInterface;
typedef struct NullUtil NullUtil;
typedef struct PrimitiveLongUtil PrimitiveLongUtil;
#include "org/allbinary/game/graphics/hud/BasicHud.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#if __has_include("org/allbinary/logic/math/PrimitiveLongUtil.h")
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"
#endif

typedef struct LevelHudWidget LevelHudWidget;
struct LevelHudWidget {
    BasicHud base;
    PaintableInterface PaintableInterface_interface;
    int32_t level;
    int32_t maxlevel;
    uint16_t* levelString;
    uint16_t* levelNumberCharArray;
    int32_t levelNumberTotalDigits;
    int32_t offset;
    PrimitiveLongUtil* primitiveLongUtil;
};


LevelHudWidget* LevelHudWidget_new(int32_t maxlevel, int32_t location, int32_t direction);

LevelHudWidget* LevelHudWidget_createHud(int32_t maxlevel, int32_t location, int32_t direction);

void LevelHudWidget_init(LevelHudWidget* this, int32_t maxlevel, int32_t location, int32_t direction);

void LevelHudWidget_updateMeasurement(LevelHudWidget* this, Graphics* graphics);


void LevelHudWidget_setLevel(LevelHudWidget* this, int32_t level);

void LevelHudWidget_nextLevel(LevelHudWidget* this);

void LevelHudWidget_previousLevel(LevelHudWidget* this);

bool LevelHudWidget_isComplete(LevelHudWidget* this);

void LevelHudWidget_paint(LevelHudWidget* this, Graphics* graphics);

void LevelHudWidget_paintThreed(LevelHudWidget* this, Graphics* graphics);
#define LevelHudWidget_new3 LevelHudWidget_new
#define LevelHudWidget_init3 LevelHudWidget_init
#ifndef LevelHudWidget_getLocation
#define LevelHudWidget_getLocation BasicHud_getLocation
#endif
#ifndef LevelHudWidget_getDirection
#define LevelHudWidget_getDirection BasicHud_getDirection
#endif
#ifndef LevelHudWidget_getHudGraphicsPositionWH
#define LevelHudWidget_getHudGraphicsPositionWH BasicHud_getHudGraphicsPositionWH
#endif
#ifndef LevelHudWidget_onEvent
#define LevelHudWidget_onEvent BasicHud_onEvent
#endif
#ifndef LevelHudWidget_onDisplayChangeEvent
#define LevelHudWidget_onDisplayChangeEvent BasicHud_onDisplayChangeEvent
#endif
#ifndef LevelHudWidget_getPoint
#define LevelHudWidget_getPoint BasicHud_getPoint
#endif
#ifndef LevelHudWidget_getBufferZone
#define LevelHudWidget_getBufferZone BasicHud_getBufferZone
#endif
#ifndef LevelHudWidget_setBufferZone
#define LevelHudWidget_setBufferZone BasicHud_setBufferZone
#endif
#ifndef LevelHudWidget_setLocation
#define LevelHudWidget_setLocation BasicHud_setLocation
#endif
#ifndef LevelHudWidget_setDirection
#define LevelHudWidget_setDirection BasicHud_setDirection
#endif
#ifndef LevelHudWidget_getHudGraphicsPosition
#define LevelHudWidget_getHudGraphicsPosition BasicHud_getHudGraphicsPosition
#endif
#ifndef LevelHudWidget_getColor
#define LevelHudWidget_getColor BasicHud_getColor
#endif
#ifndef LevelHudWidget_getX
#define LevelHudWidget_getX BasicHud_getX
#endif
#ifndef LevelHudWidget_setX
#define LevelHudWidget_setX BasicHud_setX
#endif
#ifndef LevelHudWidget_setBasicColorP
#define LevelHudWidget_setBasicColorP BasicHud_setBasicColorP
#endif
#ifndef LevelHudWidget_getBasicColorP
#define LevelHudWidget_getBasicColorP BasicHud_getBasicColorP
#endif
#ifndef LevelHudWidget_setY
#define LevelHudWidget_setY BasicHud_setY
#endif
#ifndef LevelHudWidget_getY
#define LevelHudWidget_getY BasicHud_getY
#endif
#ifndef LevelHudWidget_paintSSO
#define LevelHudWidget_paintSSO BasicHud_paintSSO
#endif
#ifndef LevelHudWidget_paintSSOO
#define LevelHudWidget_paintSSOO BasicHud_paintSSOO
#endif
#ifndef LevelHudWidget_paintDXY
#define LevelHudWidget_paintDXY BasicHud_paintDXY
#endif
#ifndef LevelHudWidget_paintDX
#define LevelHudWidget_paintDX BasicHud_paintDX
#endif
#ifndef LevelHudWidget_paintOffsetAndLength
#define LevelHudWidget_paintOffsetAndLength BasicHud_paintOffsetAndLength
#endif
#ifndef LevelHudWidget_paintString
#define LevelHudWidget_paintString BasicHud_paintString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LevelHudWidget_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LevelHudWidget_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LEVEL_LEVELHUDWIDGET_H
