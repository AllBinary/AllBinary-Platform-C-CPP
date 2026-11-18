#ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HEALTH_HEALTHHUDWIDGET_H
#define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HEALTH_HEALTHHUDWIDGET_H
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
// package org.allbinary.game.ag.layer.hud.basic.health

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
typedef struct BasicHud BasicHud;
typedef struct Health Health;
typedef struct HealthListenerInterface HealthListenerInterface;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct PaintableInterface PaintableInterface;
typedef struct GameTickTimeDelayHelper GameTickTimeDelayHelper;
typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
typedef struct NoTimeDelayHelper NoTimeDelayHelper;
typedef struct TimeDelayHelper TimeDelayHelper;
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#include "org/allbinary/game/graphics/hud/BasicHud.h"
#if __has_include("org/allbinary/game/health/Health.h")
#include "org/allbinary/game/health/Health.h"
#endif
#include "org/allbinary/game/health/HealthListenerInterface.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif

typedef struct HealthHudWidget HealthHudWidget;
struct HealthHudWidget {
    BasicHud base;
    PaintableInterface PaintableInterface_interface;
    HealthListenerInterface HealthListenerInterface_interface;
    int32_t healthScale;
    Animation* animationInterface;
    Health* healthInterface;
    int32_t max;
    int32_t* xArray;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
    TimeDelayHelper* timeDelayHelper;
    TimeDelayHelper* slowBeatTimeDelayHelper;
    TimeDelayHelper* mediumBeatTimeDelayHelper;
    TimeDelayHelper* fastBeatTimeDelayHelper;
};


HealthHudWidget* HealthHudWidget_new(Animation* animationInterface, Health* healthInterface, int32_t location, int32_t direction);

void HealthHudWidget_init(HealthHudWidget* this, Animation* animationInterface, Health* healthInterface, int32_t location, int32_t direction);


void HealthHudWidget_setX(HealthHudWidget* this, int32_t x);

void HealthHudWidget_onHealthChange(HealthHudWidget* this);

void HealthHudWidget_paint(HealthHudWidget* this, Graphics* graphics);

void HealthHudWidget_paintThreed(HealthHudWidget* this, Graphics* graphics);
#define HealthHudWidget_new4 HealthHudWidget_new
#define HealthHudWidget_init4 HealthHudWidget_init
#ifndef HealthHudWidget_updateMeasurement
#define HealthHudWidget_updateMeasurement BasicHud_updateMeasurement
#endif
#ifndef HealthHudWidget_getLocation
#define HealthHudWidget_getLocation BasicHud_getLocation
#endif
#ifndef HealthHudWidget_getDirection
#define HealthHudWidget_getDirection BasicHud_getDirection
#endif
#ifndef HealthHudWidget_getHudGraphicsPositionWH
#define HealthHudWidget_getHudGraphicsPositionWH BasicHud_getHudGraphicsPositionWH
#endif
#ifndef HealthHudWidget_onEvent
#define HealthHudWidget_onEvent BasicHud_onEvent
#endif
#ifndef HealthHudWidget_onDisplayChangeEvent
#define HealthHudWidget_onDisplayChangeEvent BasicHud_onDisplayChangeEvent
#endif
#ifndef HealthHudWidget_getPoint
#define HealthHudWidget_getPoint BasicHud_getPoint
#endif
#ifndef HealthHudWidget_getBufferZone
#define HealthHudWidget_getBufferZone BasicHud_getBufferZone
#endif
#ifndef HealthHudWidget_setBufferZone
#define HealthHudWidget_setBufferZone BasicHud_setBufferZone
#endif
#ifndef HealthHudWidget_setLocation
#define HealthHudWidget_setLocation BasicHud_setLocation
#endif
#ifndef HealthHudWidget_setDirection
#define HealthHudWidget_setDirection BasicHud_setDirection
#endif
#ifndef HealthHudWidget_getHudGraphicsPosition
#define HealthHudWidget_getHudGraphicsPosition BasicHud_getHudGraphicsPosition
#endif
#ifndef HealthHudWidget_getColor
#define HealthHudWidget_getColor BasicHud_getColor
#endif
#ifndef HealthHudWidget_getX
#define HealthHudWidget_getX BasicHud_getX
#endif
#ifndef HealthHudWidget_setBasicColorP
#define HealthHudWidget_setBasicColorP BasicHud_setBasicColorP
#endif
#ifndef HealthHudWidget_getBasicColorP
#define HealthHudWidget_getBasicColorP BasicHud_getBasicColorP
#endif
#ifndef HealthHudWidget_setY
#define HealthHudWidget_setY BasicHud_setY
#endif
#ifndef HealthHudWidget_getY
#define HealthHudWidget_getY BasicHud_getY
#endif
#ifndef HealthHudWidget_paintSSO
#define HealthHudWidget_paintSSO BasicHud_paintSSO
#endif
#ifndef HealthHudWidget_paintSSOO
#define HealthHudWidget_paintSSOO BasicHud_paintSSOO
#endif
#ifndef HealthHudWidget_paintDXY
#define HealthHudWidget_paintDXY BasicHud_paintDXY
#endif
#ifndef HealthHudWidget_paintDX
#define HealthHudWidget_paintDX BasicHud_paintDX
#endif
#ifndef HealthHudWidget_paintOffsetAndLength
#define HealthHudWidget_paintOffsetAndLength BasicHud_paintOffsetAndLength
#endif
#ifndef HealthHudWidget_paintString
#define HealthHudWidget_paintString BasicHud_paintString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HealthHudWidget_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HealthHudWidget_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HEALTH_HEALTHHUDWIDGET_H
