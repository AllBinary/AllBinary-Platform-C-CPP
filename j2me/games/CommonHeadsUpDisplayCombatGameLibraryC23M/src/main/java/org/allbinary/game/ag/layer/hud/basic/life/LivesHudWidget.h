#ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LIFE_LIVESHUDWIDGET_H
#define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LIFE_LIVESHUDWIDGET_H
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
// package org.allbinary.game.ag.layer.hud.basic.life

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Graphics Graphics;
typedef struct Animation Animation;
typedef struct Life Life;
typedef struct BasicHud BasicHud;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct DisplayChangeEvent DisplayChangeEvent;
typedef struct PaintableInterface PaintableInterface;
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/game/ag/life/Life.h")
#include "org/allbinary/game/ag/life/Life.h"
#endif
#include "org/allbinary/game/graphics/hud/BasicHud.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"

typedef struct LivesHudWidget LivesHudWidget;
struct LivesHudWidget {
    BasicHud base;
    PaintableInterface PaintableInterface_interface;
    Life* lifeInterface;
    int32_t* xArray;
    Animation* animationInterface;
};


LivesHudWidget* LivesHudWidget_new(Animation* animationInterface, Life* lifeInterface, int32_t location, int32_t direction);

void LivesHudWidget_init(LivesHudWidget* this, Animation* animationInterface, Life* lifeInterface, int32_t location, int32_t direction);

void LivesHudWidget_updateMeasurement(LivesHudWidget* this, Graphics* graphics);

void LivesHudWidget_onDisplayChangeEvent(LivesHudWidget* this, DisplayChangeEvent* displayChangeEvent);

void LivesHudWidget_setX(LivesHudWidget* this, int32_t x);

void LivesHudWidget_paint(LivesHudWidget* this, Graphics* graphics);

void LivesHudWidget_paintThreed(LivesHudWidget* this, Graphics* graphics);

Life* LivesHudWidget_getLifeInterface(LivesHudWidget* this);
#define LivesHudWidget_new4 LivesHudWidget_new
#define LivesHudWidget_init4 LivesHudWidget_init
#ifndef LivesHudWidget_getLocation
#define LivesHudWidget_getLocation BasicHud_getLocation
#endif
#ifndef LivesHudWidget_getDirection
#define LivesHudWidget_getDirection BasicHud_getDirection
#endif
#ifndef LivesHudWidget_getHudGraphicsPositionWH
#define LivesHudWidget_getHudGraphicsPositionWH BasicHud_getHudGraphicsPositionWH
#endif
#ifndef LivesHudWidget_onEvent
#define LivesHudWidget_onEvent BasicHud_onEvent
#endif
#ifndef LivesHudWidget_getPoint
#define LivesHudWidget_getPoint BasicHud_getPoint
#endif
#ifndef LivesHudWidget_getBufferZone
#define LivesHudWidget_getBufferZone BasicHud_getBufferZone
#endif
#ifndef LivesHudWidget_setBufferZone
#define LivesHudWidget_setBufferZone BasicHud_setBufferZone
#endif
#ifndef LivesHudWidget_setLocation
#define LivesHudWidget_setLocation BasicHud_setLocation
#endif
#ifndef LivesHudWidget_setDirection
#define LivesHudWidget_setDirection BasicHud_setDirection
#endif
#ifndef LivesHudWidget_getHudGraphicsPosition
#define LivesHudWidget_getHudGraphicsPosition BasicHud_getHudGraphicsPosition
#endif
#ifndef LivesHudWidget_getColor
#define LivesHudWidget_getColor BasicHud_getColor
#endif
#ifndef LivesHudWidget_getX
#define LivesHudWidget_getX BasicHud_getX
#endif
#ifndef LivesHudWidget_setBasicColorP
#define LivesHudWidget_setBasicColorP BasicHud_setBasicColorP
#endif
#ifndef LivesHudWidget_getBasicColorP
#define LivesHudWidget_getBasicColorP BasicHud_getBasicColorP
#endif
#ifndef LivesHudWidget_setY
#define LivesHudWidget_setY BasicHud_setY
#endif
#ifndef LivesHudWidget_getY
#define LivesHudWidget_getY BasicHud_getY
#endif
#ifndef LivesHudWidget_paintSSO
#define LivesHudWidget_paintSSO BasicHud_paintSSO
#endif
#ifndef LivesHudWidget_paintSSOO
#define LivesHudWidget_paintSSOO BasicHud_paintSSOO
#endif
#ifndef LivesHudWidget_paintDXY
#define LivesHudWidget_paintDXY BasicHud_paintDXY
#endif
#ifndef LivesHudWidget_paintDX
#define LivesHudWidget_paintDX BasicHud_paintDX
#endif
#ifndef LivesHudWidget_paintOffsetAndLength
#define LivesHudWidget_paintOffsetAndLength BasicHud_paintOffsetAndLength
#endif
#ifndef LivesHudWidget_paintString
#define LivesHudWidget_paintString BasicHud_paintString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LivesHudWidget_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LivesHudWidget_register(void);

#if __has_include("org/allbinary/game/ag/life/Life.h")
#include "org/allbinary/game/ag/life/Life.h"
#endif

#endif // ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LIFE_LIVESHUDWIDGET_H
