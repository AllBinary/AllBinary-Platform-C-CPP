#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESPAINTABLE_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESPAINTABLE_H
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
// package org.allbinary.game.score

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct NullHighScoresSingletonFactory NullHighScoresSingletonFactory;
typedef struct HighScores HighScores;
typedef struct HighScore HighScore;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct Anchor Anchor;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct ColorChangeEvent ColorChangeEvent;
typedef struct ColorChangeListener ColorChangeListener;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct Paintable Paintable;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#include "org/allbinary/graphics/color/ColorChangeListener.h"
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#if __has_include("org/allbinary/game/score/HighScores.h")
#include "org/allbinary/game/score/HighScores.h"
#endif

typedef struct HighScoresPaintable HighScoresPaintable;
struct HighScoresPaintable {
    Paintable base;
    ColorChangeListener ColorChangeListener_interface;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    DisplayInfoSingleton* displayInfoSingleton;
    MyFontProcessor* myFontProcessor;
    BasicColor* basicColor;
    HighScores* highScores;
    int32_t anchor;
    int32_t charHeight;
};


HighScoresPaintable* HighScoresPaintable_new(void);

void HighScoresPaintable_init(HighScoresPaintable* this);

void HighScoresPaintable_updateMeasurement(HighScoresPaintable* this, Graphics* graphics);

void HighScoresPaintable_onEvent(HighScoresPaintable* this, AllBinaryEventObject* eventObject);

void HighScoresPaintable_paint(HighScoresPaintable* this, Graphics* graphics);

void HighScoresPaintable_setBasicColorP(HighScoresPaintable* this, BasicColor* basicColor);

BasicColor* HighScoresPaintable_getBasicColorP(HighScoresPaintable* this);

void HighScoresPaintable_setHighScores(HighScoresPaintable* this, HighScores* highScores);
#define HighScoresPaintable_new0 HighScoresPaintable_new
#define HighScoresPaintable_init0 HighScoresPaintable_init
#ifndef HighScoresPaintable_paintThreed
#define HighScoresPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoresPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HighScoresPaintable_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORESPAINTABLE_H
