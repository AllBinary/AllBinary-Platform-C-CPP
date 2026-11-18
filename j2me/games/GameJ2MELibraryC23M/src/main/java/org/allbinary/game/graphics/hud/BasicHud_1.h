#ifndef ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUD_1_H
#define ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUD_1_H
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
// #include "org/allbinary/logic/string/StringMaker.h"
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/game/graphics/hud/HudGraphicsPosition.h")
#include "org/allbinary/game/graphics/hud/HudGraphicsPosition.h"
#endif

typedef struct BasicHud_1 BasicHud_1;
struct BasicHud_1 {
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
    HudGraphicsPosition* hudGraphicsPosition;
    int32_t x;
    int32_t y;
    BasicColor* basicColor;
    int32_t color;
    int32_t updateMaxWidth;
    int32_t updateMaxHeight;
    int32_t offsetY;
};


BasicHud_1* BasicHud_1_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

void BasicHud_1_init(BasicHud_1* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

void BasicHud_1_updateMeasurement(BasicHud_1* this, Graphics* graphics);

int32_t BasicHud_1_getLocation(BasicHud_1* this);

int32_t BasicHud_1_getDirection(BasicHud_1* this);

HudGraphicsPosition* BasicHud_1_getHudGraphicsPositionWH(BasicHud_1* this, int32_t width, int32_t height, int32_t maxWidth, int32_t maxHeight);

void BasicHud_1_onEvent(BasicHud_1* this, AllBinaryEventObject* eventObject);

void BasicHud_1_onDisplayChangeEvent(BasicHud_1* this, DisplayChangeEvent* displayChangeEvent);

GPoint* BasicHud_1_getPoint(BasicHud_1* this, int32_t x, int32_t y);

int32_t BasicHud_1_getBufferZone(BasicHud_1* this);

void BasicHud_1_setBufferZone(BasicHud_1* this, int32_t bufferZone);

void BasicHud_1_setLocation(BasicHud_1* this, int32_t location);

void BasicHud_1_setDirection(BasicHud_1* this, int32_t direction);

HudGraphicsPosition* BasicHud_1_getHudGraphicsPosition(BasicHud_1* this);

int32_t BasicHud_1_getColor(BasicHud_1* this);

int32_t BasicHud_1_getX(BasicHud_1* this);

void BasicHud_1_setX(BasicHud_1* this, int32_t x);

void BasicHud_1_setBasicColorP(BasicHud_1* this, BasicColor* basicColor);

BasicColor* BasicHud_1_getBasicColorP(BasicHud_1* this);

void BasicHud_1_setY(BasicHud_1* this, int32_t y);

int32_t BasicHud_1_getY(BasicHud_1* this);

void BasicHud_1_paintSSO(BasicHud_1* this, Graphics* graphics, const char* string, const char* string2, int32_t offset);

void BasicHud_1_paintSSOO(BasicHud_1* this, Graphics* graphics, const char* string, const char* string2, int32_t offset, int32_t offset2);

void BasicHud_1_paintDXY(BasicHud_1* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len, uint16_t* charArray2, int32_t offset2, int32_t len2, int32_t xOffset, int32_t xOffset2);

void BasicHud_1_paintDX(BasicHud_1* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len, uint16_t* charArray2, int32_t offset2, int32_t len2, int32_t xOffset);

void BasicHud_1_paintOffsetAndLength(BasicHud_1* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len);

void BasicHud_1_paintString(BasicHud_1* this, Graphics* graphics, const char* string);
#define BasicHud_1_new4 BasicHud_1_new
#define BasicHud_1_init4 BasicHud_1_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicHud_1_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicHud_1_register(void);

#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUD_1_H
