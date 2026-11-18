#ifndef ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUD_H
#define ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUD_H
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
// package org.allbinary.game.graphics.hud

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct HudGraphicsPosition HudGraphicsPosition;
typedef struct BasicHudFactory BasicHudFactory;
typedef struct Graphics Graphics;
typedef struct J2MEUtil J2MEUtil;
typedef struct Anchor Anchor;
typedef struct GPoint GPoint;
typedef struct PointFactory PointFactory;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct BasicColorSetUtil BasicColorSetUtil;
typedef struct CanvasStrings CanvasStrings;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct DisplayChangeEvent DisplayChangeEvent;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct LogUtil LogUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorSetUtil.h")
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/CanvasStrings.h")
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/game/graphics/hud/HudGraphicsPosition.h")
#include "org/allbinary/game/graphics/hud/HudGraphicsPosition.h"
#endif

typedef struct BasicHud BasicHud;
struct BasicHud {
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CanvasStrings* canvasStrings;
    BasicColorSetUtil* basicSetColorUtil;
    DisplayInfoSingleton* displayInfo;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    int32_t location;
    int32_t direction;
    int32_t bufferZone;
    int32_t bufferZoneY;
    HudGraphicsPosition* hudGraphicsPosition;
    int32_t x;
    int32_t y;
    BasicColor* basicColor;
    int32_t color;
    int32_t updateMaxWidth;
    int32_t updateMaxHeight;
    int32_t offsetY;
};


BasicHud* BasicHud_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

void BasicHud_init(BasicHud* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

void BasicHud_updateMeasurement(BasicHud* this, Graphics* graphics);

int32_t BasicHud_getLocation(BasicHud* this);

int32_t BasicHud_getDirection(BasicHud* this);

HudGraphicsPosition* BasicHud_getHudGraphicsPositionWH(BasicHud* this, int32_t width, int32_t height, int32_t maxWidth, int32_t maxHeight);

void BasicHud_onEvent(BasicHud* this, AllBinaryEventObject* eventObject);

void BasicHud_onDisplayChangeEvent(BasicHud* this, DisplayChangeEvent* displayChangeEvent);

GPoint* BasicHud_getPoint(BasicHud* this, int32_t x, int32_t y);

int32_t BasicHud_getBufferZone(BasicHud* this);

void BasicHud_setBufferZone(BasicHud* this, int32_t bufferZone);

void BasicHud_setLocation(BasicHud* this, int32_t location);

void BasicHud_setDirection(BasicHud* this, int32_t direction);

HudGraphicsPosition* BasicHud_getHudGraphicsPosition(BasicHud* this);

int32_t BasicHud_getColor(BasicHud* this);

int32_t BasicHud_getX(BasicHud* this);

void BasicHud_setX(BasicHud* this, int32_t x);

void BasicHud_setBasicColorP(BasicHud* this, BasicColor* basicColor);

BasicColor* BasicHud_getBasicColorP(BasicHud* this);

void BasicHud_setY(BasicHud* this, int32_t y);

int32_t BasicHud_getY(BasicHud* this);

void BasicHud_paintSSO(BasicHud* this, Graphics* graphics, const char* string, const char* string2, int32_t offset);

void BasicHud_paintSSOO(BasicHud* this, Graphics* graphics, const char* string, const char* string2, int32_t offset, int32_t offset2);

void BasicHud_paintDXY(BasicHud* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len, uint16_t* charArray2, int32_t offset2, int32_t len2, int32_t xOffset, int32_t xOffset2);

void BasicHud_paintDX(BasicHud* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len, uint16_t* charArray2, int32_t offset2, int32_t len2, int32_t xOffset);

void BasicHud_paintOffsetAndLength(BasicHud* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len);

void BasicHud_paintString(BasicHud* this, Graphics* graphics, const char* string);
#define BasicHud_new4 BasicHud_new
#define BasicHud_init4 BasicHud_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicHud_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicHud_register(void);

#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUD_H
