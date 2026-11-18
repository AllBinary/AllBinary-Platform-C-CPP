#ifndef ORG_ALLBINARY_GAME_PAINT_GAMESCROLLMENUPAINTABLE_H
#define ORG_ALLBINARY_GAME_PAINT_GAMESCROLLMENUPAINTABLE_H
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
// package org.allbinary.game.paint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicGameDemoPaintable BasicGameDemoPaintable;
typedef struct MainGameDemoStatePaintable MainGameDemoStatePaintable;
typedef struct BasicColor BasicColor;
typedef struct ColorChangeEventHandler ColorChangeEventHandler;
typedef struct ColorChangeListener ColorChangeListener;
typedef struct FormPaintable FormPaintable;
typedef struct ScrollSelectionForm ScrollSelectionForm;
typedef struct ABStringComponent ABStringComponent;
typedef struct ABTextItem ABTextItem;
typedef struct Paintable Paintable;
typedef struct AllBinaryEventObject AllBinaryEventObject;
#include "org/allbinary/graphics/color/ColorChangeListener.h"
#include "org/allbinary/game/paint/BasicGameDemoPaintable.h"

typedef struct GameScrollMenuPaintable GameScrollMenuPaintable;
struct GameScrollMenuPaintable {
    BasicGameDemoPaintable base;
    ColorChangeListener ColorChangeListener_interface;
};


GameScrollMenuPaintable* GameScrollMenuPaintable_new(Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface, BasicColor* basicColor);

void GameScrollMenuPaintable_init(GameScrollMenuPaintable* this, Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface, BasicColor* basicColor);

void GameScrollMenuPaintable_setState(GameScrollMenuPaintable* this, int32_t state);

void GameScrollMenuPaintable_onEvent(GameScrollMenuPaintable* this, AllBinaryEventObject* eventObject);

void GameScrollMenuPaintable_setColor(GameScrollMenuPaintable* this, BasicColor* basicColor);
#define GameScrollMenuPaintable_new4 GameScrollMenuPaintable_new
#define GameScrollMenuPaintable_init4 GameScrollMenuPaintable_init
#ifndef GameScrollMenuPaintable_paint
#define GameScrollMenuPaintable_paint BasicGameDemoPaintable_paint
#endif
#ifndef GameScrollMenuPaintable_getHelpPaintableInterface
#define GameScrollMenuPaintable_getHelpPaintableInterface BasicGameDemoPaintable_getHelpPaintableInterface
#endif
#ifndef GameScrollMenuPaintable_setCurrentStatePaintable
#define GameScrollMenuPaintable_setCurrentStatePaintable BasicGameDemoPaintable_setCurrentStatePaintable
#endif
#ifndef GameScrollMenuPaintable_getCurrentStatePaintable
#define GameScrollMenuPaintable_getCurrentStatePaintable BasicGameDemoPaintable_getCurrentStatePaintable
#endif
#ifndef GameScrollMenuPaintable_getMainDemoStatePaintable
#define GameScrollMenuPaintable_getMainDemoStatePaintable BasicGameDemoPaintable_getMainDemoStatePaintable
#endif
#ifndef GameScrollMenuPaintable_setBasicColorP
#define GameScrollMenuPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef GameScrollMenuPaintable_paint
#define GameScrollMenuPaintable_paint Paintable_paint
#endif
#ifndef GameScrollMenuPaintable_paintThreed
#define GameScrollMenuPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameScrollMenuPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameScrollMenuPaintable_register(void);


#endif // ORG_ALLBINARY_GAME_PAINT_GAMESCROLLMENUPAINTABLE_H
