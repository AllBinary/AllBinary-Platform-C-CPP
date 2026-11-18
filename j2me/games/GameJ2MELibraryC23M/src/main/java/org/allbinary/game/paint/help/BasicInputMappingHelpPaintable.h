#ifndef ORG_ALLBINARY_GAME_PAINT_HELP_BASICINPUTMAPPINGHELPPAINTABLE_H
#define ORG_ALLBINARY_GAME_PAINT_HELP_BASICINPUTMAPPINGHELPPAINTABLE_H
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
typedef struct GameKey GameKey;
typedef struct GameKeyFactory GameKeyFactory;
typedef struct Input Input;
typedef struct PlatformInputMappingFactory PlatformInputMappingFactory;
typedef struct GameInputMapping GameInputMapping;
typedef struct PersistentInputMapping PersistentInputMapping;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct StringMaker StringMaker;
typedef struct CommonSeps CommonSeps;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/GameInputMapping.h")
#include "org/allbinary/game/input/mapping/GameInputMapping.h"
#endif
#include "org/allbinary/game/paint/help/HelpPaintable.h"

typedef struct BasicInputMappingHelpPaintable BasicInputMappingHelpPaintable;
struct BasicInputMappingHelpPaintable {
    HelpPaintable base;
    GameInputMapping** gameInputMappingArray;
    GameKey* NONE;
};


BasicInputMappingHelpPaintable* BasicInputMappingHelpPaintable_new(GameInputMapping** gameInputMappingArray, BasicColor* basicColor);

void BasicInputMappingHelpPaintable_init(BasicInputMappingHelpPaintable* this, GameInputMapping** gameInputMappingArray, BasicColor* basicColor);

void BasicInputMappingHelpPaintable_update(BasicInputMappingHelpPaintable* this, GameKey* selectedGameKey, Input* selectedInput);

#define BasicInputMappingHelpPaintable_new2 BasicInputMappingHelpPaintable_new
#define BasicInputMappingHelpPaintable_init2 BasicInputMappingHelpPaintable_init
#ifndef BasicInputMappingHelpPaintable_updateMeasurement
#define BasicInputMappingHelpPaintable_updateMeasurement HelpPaintable_updateMeasurement
#endif
#ifndef BasicInputMappingHelpPaintable_setInputInfoP
#define BasicInputMappingHelpPaintable_setInputInfoP HelpPaintable_setInputInfoP
#endif
#ifndef BasicInputMappingHelpPaintable_paint
#define BasicInputMappingHelpPaintable_paint HelpPaintable_paint
#endif
#ifndef BasicInputMappingHelpPaintable_setBasicColorP
#define BasicInputMappingHelpPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef BasicInputMappingHelpPaintable_paint
#define BasicInputMappingHelpPaintable_paint Paintable_paint
#endif
#ifndef BasicInputMappingHelpPaintable_paintThreed
#define BasicInputMappingHelpPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicInputMappingHelpPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicInputMappingHelpPaintable_register(void);


#endif // ORG_ALLBINARY_GAME_PAINT_HELP_BASICINPUTMAPPINGHELPPAINTABLE_H
