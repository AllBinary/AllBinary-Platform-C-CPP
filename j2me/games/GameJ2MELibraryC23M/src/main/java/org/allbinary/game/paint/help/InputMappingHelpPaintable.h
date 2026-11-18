#ifndef ORG_ALLBINARY_GAME_PAINT_HELP_INPUTMAPPINGHELPPAINTABLE_H
#define ORG_ALLBINARY_GAME_PAINT_HELP_INPUTMAPPINGHELPPAINTABLE_H
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
// package org.allbinary.game.paint.help

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct HelpPaintable HelpPaintable;
typedef struct UpdateMyFontProperties UpdateMyFontProperties;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct GameKey GameKey;
typedef struct GameKeyFactory GameKeyFactory;
typedef struct Input Input;
typedef struct PlatformInputMappingFactory PlatformInputMappingFactory;
typedef struct GameInputMapping GameInputMapping;
typedef struct PersistentInputMapping PersistentInputMapping;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct BasicColorUtil BasicColorUtil;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonLabels CommonLabels;
typedef struct CommonSeps CommonSeps;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/GameInputMapping.h")
#include "org/allbinary/game/input/mapping/GameInputMapping.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
// #include "org/allbinary/logic/NullUtil.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "org/allbinary/game/paint/help/HelpPaintable.h"
#if __has_include("org/allbinary/game/paint/help/UpdateMyFontProperties.h")
#include "org/allbinary/game/paint/help/UpdateMyFontProperties.h"
#endif

typedef struct InputMappingHelpPaintable InputMappingHelpPaintable;
struct InputMappingHelpPaintable {
    HelpPaintable base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CommonSeps* commonSeps;
    StringUtil* stringUtil;
    BasicColorFactory* basicColorFactory;
    GameKey* NONE;
    const char* EMPTY_STRING;
    GameInputMapping** gameInputMappingArray;
    BasicArrayList** keyMappingArray;
    BasicColor** actionBasicColor;
    BasicColor*** inputBasicColorArray;
    BasicColor* selectedBasicColor;
    UpdateMyFontProperties* updateMyFontProperties;
};


InputMappingHelpPaintable* InputMappingHelpPaintable_new(GameInputMapping** gameInputMappingArray, BasicColor* backgroundBasicColor, BasicColor* basicColor);

void InputMappingHelpPaintable_init(InputMappingHelpPaintable* this, GameInputMapping** gameInputMappingArray, BasicColor* backgroundBasicColor, BasicColor* basicColor);

void InputMappingHelpPaintable_updateMeasurement(InputMappingHelpPaintable* this, Graphics* graphics);

void InputMappingHelpPaintable_update(InputMappingHelpPaintable* this, GameKey* selectedGameKey, Input* selectedInput);


void InputMappingHelpPaintable_paint(InputMappingHelpPaintable* this, Graphics* graphics);
#define InputMappingHelpPaintable_new3 InputMappingHelpPaintable_new
#define InputMappingHelpPaintable_init3 InputMappingHelpPaintable_init
#ifndef InputMappingHelpPaintable_setInputInfoP
#define InputMappingHelpPaintable_setInputInfoP HelpPaintable_setInputInfoP
#endif
#ifndef InputMappingHelpPaintable_setBasicColorP
#define InputMappingHelpPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef InputMappingHelpPaintable_paintThreed
#define InputMappingHelpPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InputMappingHelpPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InputMappingHelpPaintable_register(void);


#endif // ORG_ALLBINARY_GAME_PAINT_HELP_INPUTMAPPINGHELPPAINTABLE_H
