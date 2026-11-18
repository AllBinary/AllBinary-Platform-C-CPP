#ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SCORE_SCOREHUDWIDGET_H
#define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SCORE_SCOREHUDWIDGET_H
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
// package org.allbinary.game.ag.layer.hud.basic.score

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
typedef struct NumberStringHud NumberStringHud;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
#include "org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h"

typedef struct ScoreHudWidget ScoreHudWidget;
struct ScoreHudWidget {
    NumberStringHud base;
};


ScoreHudWidget* ScoreHudWidget_new(int32_t maxscore, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

ScoreHudWidget* ScoreHudWidget_getInstance(int32_t maxscore, int32_t location, int32_t direction);

void ScoreHudWidget_init(ScoreHudWidget* this, int32_t maxscore, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

void ScoreHudWidget_updateMeasurement(ScoreHudWidget* this, Graphics* graphics);
#define ScoreHudWidget_new5 ScoreHudWidget_new
#define ScoreHudWidget_init5 ScoreHudWidget_init
#ifndef ScoreHudWidget_get
#define ScoreHudWidget_get NumberStringHud_get
#endif
#ifndef ScoreHudWidget_add
#define ScoreHudWidget_add NumberStringHud_add
#endif
#ifndef ScoreHudWidget_set
#define ScoreHudWidget_set NumberStringHud_set
#endif
#ifndef ScoreHudWidget_reduce
#define ScoreHudWidget_reduce NumberStringHud_reduce
#endif
#ifndef ScoreHudWidget_paint
#define ScoreHudWidget_paint NumberStringHud_paint
#endif
#ifndef ScoreHudWidget_paintXY
#define ScoreHudWidget_paintXY NumberStringHud_paintXY
#endif
#ifndef ScoreHudWidget_paintThreed
#define ScoreHudWidget_paintThreed NumberStringHud_paintThreed
#endif
#ifndef ScoreHudWidget_getLocation
#define ScoreHudWidget_getLocation BasicHud_getLocation
#endif
#ifndef ScoreHudWidget_getDirection
#define ScoreHudWidget_getDirection BasicHud_getDirection
#endif
#ifndef ScoreHudWidget_getHudGraphicsPositionWH
#define ScoreHudWidget_getHudGraphicsPositionWH BasicHud_getHudGraphicsPositionWH
#endif
#ifndef ScoreHudWidget_onEvent
#define ScoreHudWidget_onEvent BasicHud_onEvent
#endif
#ifndef ScoreHudWidget_onDisplayChangeEvent
#define ScoreHudWidget_onDisplayChangeEvent BasicHud_onDisplayChangeEvent
#endif
#ifndef ScoreHudWidget_getPoint
#define ScoreHudWidget_getPoint BasicHud_getPoint
#endif
#ifndef ScoreHudWidget_getBufferZone
#define ScoreHudWidget_getBufferZone BasicHud_getBufferZone
#endif
#ifndef ScoreHudWidget_setBufferZone
#define ScoreHudWidget_setBufferZone BasicHud_setBufferZone
#endif
#ifndef ScoreHudWidget_setLocation
#define ScoreHudWidget_setLocation BasicHud_setLocation
#endif
#ifndef ScoreHudWidget_setDirection
#define ScoreHudWidget_setDirection BasicHud_setDirection
#endif
#ifndef ScoreHudWidget_getHudGraphicsPosition
#define ScoreHudWidget_getHudGraphicsPosition BasicHud_getHudGraphicsPosition
#endif
#ifndef ScoreHudWidget_getColor
#define ScoreHudWidget_getColor BasicHud_getColor
#endif
#ifndef ScoreHudWidget_getX
#define ScoreHudWidget_getX BasicHud_getX
#endif
#ifndef ScoreHudWidget_setX
#define ScoreHudWidget_setX BasicHud_setX
#endif
#ifndef ScoreHudWidget_setBasicColorP
#define ScoreHudWidget_setBasicColorP BasicHud_setBasicColorP
#endif
#ifndef ScoreHudWidget_getBasicColorP
#define ScoreHudWidget_getBasicColorP BasicHud_getBasicColorP
#endif
#ifndef ScoreHudWidget_setY
#define ScoreHudWidget_setY BasicHud_setY
#endif
#ifndef ScoreHudWidget_getY
#define ScoreHudWidget_getY BasicHud_getY
#endif
#ifndef ScoreHudWidget_paintSSO
#define ScoreHudWidget_paintSSO BasicHud_paintSSO
#endif
#ifndef ScoreHudWidget_paintSSOO
#define ScoreHudWidget_paintSSOO BasicHud_paintSSOO
#endif
#ifndef ScoreHudWidget_paintDXY
#define ScoreHudWidget_paintDXY BasicHud_paintDXY
#endif
#ifndef ScoreHudWidget_paintDX
#define ScoreHudWidget_paintDX BasicHud_paintDX
#endif
#ifndef ScoreHudWidget_paintOffsetAndLength
#define ScoreHudWidget_paintOffsetAndLength BasicHud_paintOffsetAndLength
#endif
#ifndef ScoreHudWidget_paintString
#define ScoreHudWidget_paintString BasicHud_paintString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScoreHudWidget_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScoreHudWidget_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SCORE_SCOREHUDWIDGET_H
