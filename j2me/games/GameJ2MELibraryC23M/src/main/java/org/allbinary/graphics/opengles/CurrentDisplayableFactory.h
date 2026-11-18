#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_CURRENTDISPLAYABLEFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_CURRENTDISPLAYABLEFACTORY_H
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
// package org.allbinary.graphics.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct OpenGLFeatureFactory OpenGLFeatureFactory;
typedef struct Displayable Displayable;
typedef struct J2MEUtil J2MEUtil;
typedef struct Features Features;
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct DemoCanvas DemoCanvas;
typedef struct GameInputMappingCanvas GameInputMappingCanvas;
typedef struct GameInputMappingInstructionsCanvas GameInputMappingInstructionsCanvas;
typedef struct GameRunnable GameRunnable;
typedef struct NullDisplayable NullDisplayable;
typedef struct NullWaitGameRunnable NullWaitGameRunnable;
typedef struct SWTUtil SWTUtil;
typedef struct HighScoresCanvas HighScoresCanvas;
typedef struct GraphicsStrings GraphicsStrings;
typedef struct CanvasStrings CanvasStrings;
typedef struct MyCanvas MyCanvas;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonSeps CommonSeps;
typedef struct CommonStrings CommonStrings;
typedef struct NullRunnable NullRunnable;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("javax/microedition/lcdui/Displayable.h")
#include "javax/microedition/lcdui/Displayable.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameRunnable.h")
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/CanvasStrings.h")
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct CurrentDisplayableFactory CurrentDisplayableFactory;
struct CurrentDisplayableFactory {
    CommonStrings* commonStrings;
    CanvasStrings* canvasStrings;
    StringUtil* stringUtil;
    const char* SET_DISPLAYABLE;
    const char* SET_RUNNABLE;
    const char* CLEAR_RUNNABLE;
    const char* SET_USED_RUNNABLE;
    const char* RUNNABLE;
    const char* RUNNABLE_WAS_ALREADY_IN_USE;
    BasicArrayList* DEFAULT_CHILD_NAME_LIST;
    Displayable* displayable;
    Displayable* openGlReadydisplayable;
    GameRunnable* runnable;
    GameRunnable* usedRunnable;
};


CurrentDisplayableFactory* CurrentDisplayableFactory_new(void);

CurrentDisplayableFactory* CurrentDisplayableFactory_getInstance(void);

void CurrentDisplayableFactory_init(CurrentDisplayableFactory* this);

void CurrentDisplayableFactory_setMyCanvas(CurrentDisplayableFactory* this, MyCanvas* displayable);

void CurrentDisplayableFactory_setDisplayable(CurrentDisplayableFactory* this, Displayable* displayable);

void CurrentDisplayableFactory_setOpenGlReadydisplayable(CurrentDisplayableFactory* this, Displayable* openGlReadydisplayable);

Displayable* CurrentDisplayableFactory_getOpenGlReadydisplayable(CurrentDisplayableFactory* this);

void CurrentDisplayableFactory_setRunnable(CurrentDisplayableFactory* this, GameRunnable* runnable);

void CurrentDisplayableFactory_clearRunnable(CurrentDisplayableFactory* this);


Displayable* CurrentDisplayableFactory_getDisplayable(CurrentDisplayableFactory* this);

GameRunnable* CurrentDisplayableFactory_getUsedRunnable(CurrentDisplayableFactory* this);

void CurrentDisplayableFactory_setUsedRunnable(CurrentDisplayableFactory* this, GameRunnable* usedRunnable);
#define CurrentDisplayableFactory_new0 CurrentDisplayableFactory_new
#define CurrentDisplayableFactory_init0 CurrentDisplayableFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CurrentDisplayableFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CurrentDisplayableFactory_register(void);

#if __has_include("javax/microedition/lcdui/Displayable.h")
#include "javax/microedition/lcdui/Displayable.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameRunnable.h")
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_CURRENTDISPLAYABLEFACTORY_H
