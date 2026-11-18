#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDISPLAYABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDISPLAYABLE_H
// Generated Code Do Not Modify
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Canvas Canvas;
typedef struct Graphics Graphics;
typedef struct BaseGameStatistics BaseGameStatistics;
typedef struct GameStatisticsFactory GameStatisticsFactory;
#include "javax/microedition/lcdui/Canvas.h"
#if __has_include("org/allbinary/canvas/BaseGameStatistics.h")
#include "org/allbinary/canvas/BaseGameStatistics.h"
#endif

//J2SEForJ2ME
typedef struct NullDisplayable NullDisplayable;
struct NullDisplayable {
    Canvas base;
    BaseGameStatistics* baseGameStatistics;
};


NullDisplayable* NullDisplayable_new(void);

NullDisplayable* NullDisplayable_getInstance(void);

void NullDisplayable_init(NullDisplayable* this);

void NullDisplayable_paint(NullDisplayable* this, Graphics* graphics);
#define NullDisplayable_new0 NullDisplayable_new
#define NullDisplayable_init0 NullDisplayable_init
#ifndef NullDisplayable_getGameAction
#define NullDisplayable_getGameAction Canvas_getGameAction
#endif
#ifndef NullDisplayable_getKeyCode
#define NullDisplayable_getKeyCode Canvas_getKeyCode
#endif
#ifndef NullDisplayable_getKeyName
#define NullDisplayable_getKeyName Canvas_getKeyName
#endif
#ifndef NullDisplayable_hasPointerEvents
#define NullDisplayable_hasPointerEvents Canvas_hasPointerEvents
#endif
#ifndef NullDisplayable_hasPointerMotionEvents
#define NullDisplayable_hasPointerMotionEvents Canvas_hasPointerMotionEvents
#endif
#ifndef NullDisplayable_hasRepeatEvents
#define NullDisplayable_hasRepeatEvents Canvas_hasRepeatEvents
#endif
#ifndef NullDisplayable_hideNotify
#define NullDisplayable_hideNotify Canvas_hideNotify
#endif
#ifndef NullDisplayable_isDoubleBuffered
#define NullDisplayable_isDoubleBuffered Canvas_isDoubleBuffered
#endif
#ifndef NullDisplayable_keyPressed
#define NullDisplayable_keyPressed Canvas_keyPressed
#endif
#ifndef NullDisplayable_keyRepeated
#define NullDisplayable_keyRepeated Canvas_keyRepeated
#endif
#ifndef NullDisplayable_keyReleased
#define NullDisplayable_keyReleased Canvas_keyReleased
#endif
#ifndef NullDisplayable_pointerPressed
#define NullDisplayable_pointerPressed Canvas_pointerPressed
#endif
#ifndef NullDisplayable_pointerReleased
#define NullDisplayable_pointerReleased Canvas_pointerReleased
#endif
#ifndef NullDisplayable_pointerDragged
#define NullDisplayable_pointerDragged Canvas_pointerDragged
#endif
#ifndef NullDisplayable_repaint
#define NullDisplayable_repaint Canvas_repaint
#endif
#ifndef NullDisplayable_repaintXYWH
#define NullDisplayable_repaintXYWH Canvas_repaintXYWH
#endif
#ifndef NullDisplayable_serviceRepaints
#define NullDisplayable_serviceRepaints Canvas_serviceRepaints
#endif
#ifndef NullDisplayable_setFullScreenMode
#define NullDisplayable_setFullScreenMode Canvas_setFullScreenMode
#endif
#ifndef NullDisplayable_sizeChanged
#define NullDisplayable_sizeChanged Canvas_sizeChanged
#endif
#ifndef NullDisplayable_showNotify
#define NullDisplayable_showNotify Canvas_showNotify
#endif
#ifndef NullDisplayable_setUI
#define NullDisplayable_setUI Displayable_setUI
#endif
#ifndef NullDisplayable_getUI
#define NullDisplayable_getUI Displayable_getUI
#endif
#ifndef NullDisplayable_addCommand
#define NullDisplayable_addCommand Displayable_addCommand
#endif
#ifndef NullDisplayable_removeCommand
#define NullDisplayable_removeCommand Displayable_removeCommand
#endif
#ifndef NullDisplayable_getWidth
#define NullDisplayable_getWidth Displayable_getWidth
#endif
#ifndef NullDisplayable_getHeight
#define NullDisplayable_getHeight Displayable_getHeight
#endif
#ifndef NullDisplayable_isShown
#define NullDisplayable_isShown Displayable_isShown
#endif
#ifndef NullDisplayable_getTicker
#define NullDisplayable_getTicker Displayable_getTicker
#endif
#ifndef NullDisplayable_setTicker
#define NullDisplayable_setTicker Displayable_setTicker
#endif
#ifndef NullDisplayable_getTitle
#define NullDisplayable_getTitle Displayable_getTitle
#endif
#ifndef NullDisplayable_setTitle
#define NullDisplayable_setTitle Displayable_setTitle
#endif
#ifndef NullDisplayable_setCommandListener
#define NullDisplayable_setCommandListener Displayable_setCommandListener
#endif
#ifndef NullDisplayable_getCommandListener
#define NullDisplayable_getCommandListener Displayable_getCommandListener
#endif
#ifndef NullDisplayable_getCommands
#define NullDisplayable_getCommands Displayable_getCommands
#endif
#ifndef NullDisplayable_setFullScreenMode
#define NullDisplayable_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef NullDisplayable_isFullScreenMode
#define NullDisplayable_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef NullDisplayable_hideNotify
#define NullDisplayable_hideNotify Displayable_hideNotify
#endif
#ifndef NullDisplayable_hideNotifyForDisplay
#define NullDisplayable_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef NullDisplayable_keyPressed
#define NullDisplayable_keyPressed Displayable_keyPressed
#endif
#ifndef NullDisplayable_keyRepeated
#define NullDisplayable_keyRepeated Displayable_keyRepeated
#endif
#ifndef NullDisplayable_keyReleased
#define NullDisplayable_keyReleased Displayable_keyReleased
#endif
#ifndef NullDisplayable_pointerPressed
#define NullDisplayable_pointerPressed Displayable_pointerPressed
#endif
#ifndef NullDisplayable_pointerReleased
#define NullDisplayable_pointerReleased Displayable_pointerReleased
#endif
#ifndef NullDisplayable_pointerDragged
#define NullDisplayable_pointerDragged Displayable_pointerDragged
#endif
#ifndef NullDisplayable_repaint
#define NullDisplayable_repaint Displayable_repaint
#endif
#ifndef NullDisplayable_repaintXYWH
#define NullDisplayable_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef NullDisplayable_sizeChanged
#define NullDisplayable_sizeChanged Displayable_sizeChanged
#endif
#ifndef NullDisplayable_sizeChangedForDisplay
#define NullDisplayable_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef NullDisplayable_showNotify
#define NullDisplayable_showNotify Displayable_showNotify
#endif
#ifndef NullDisplayable_showNotifyForDisplay
#define NullDisplayable_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullDisplayable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullDisplayable_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDISPLAYABLE_H
