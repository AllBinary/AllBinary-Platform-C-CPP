#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATURECANVAS_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATURECANVAS_H
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
// package org.allbinary.game.configuration.feature

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
#include "javax/microedition/lcdui/Canvas.h"

typedef struct GameFeatureCanvas GameFeatureCanvas;
struct GameFeatureCanvas {
    Canvas base;
};


GameFeatureCanvas* GameFeatureCanvas_new(void);

void GameFeatureCanvas_init(GameFeatureCanvas* this);

void GameFeatureCanvas_paint(GameFeatureCanvas* this, Graphics* graphics);
#define GameFeatureCanvas_new0 GameFeatureCanvas_new
#define GameFeatureCanvas_init0 GameFeatureCanvas_init
#ifndef GameFeatureCanvas_getGameAction
#define GameFeatureCanvas_getGameAction Canvas_getGameAction
#endif
#ifndef GameFeatureCanvas_getKeyCode
#define GameFeatureCanvas_getKeyCode Canvas_getKeyCode
#endif
#ifndef GameFeatureCanvas_getKeyName
#define GameFeatureCanvas_getKeyName Canvas_getKeyName
#endif
#ifndef GameFeatureCanvas_hasPointerEvents
#define GameFeatureCanvas_hasPointerEvents Canvas_hasPointerEvents
#endif
#ifndef GameFeatureCanvas_hasPointerMotionEvents
#define GameFeatureCanvas_hasPointerMotionEvents Canvas_hasPointerMotionEvents
#endif
#ifndef GameFeatureCanvas_hasRepeatEvents
#define GameFeatureCanvas_hasRepeatEvents Canvas_hasRepeatEvents
#endif
#ifndef GameFeatureCanvas_hideNotify
#define GameFeatureCanvas_hideNotify Canvas_hideNotify
#endif
#ifndef GameFeatureCanvas_isDoubleBuffered
#define GameFeatureCanvas_isDoubleBuffered Canvas_isDoubleBuffered
#endif
#ifndef GameFeatureCanvas_keyPressed
#define GameFeatureCanvas_keyPressed Canvas_keyPressed
#endif
#ifndef GameFeatureCanvas_keyRepeated
#define GameFeatureCanvas_keyRepeated Canvas_keyRepeated
#endif
#ifndef GameFeatureCanvas_keyReleased
#define GameFeatureCanvas_keyReleased Canvas_keyReleased
#endif
#ifndef GameFeatureCanvas_pointerPressed
#define GameFeatureCanvas_pointerPressed Canvas_pointerPressed
#endif
#ifndef GameFeatureCanvas_pointerReleased
#define GameFeatureCanvas_pointerReleased Canvas_pointerReleased
#endif
#ifndef GameFeatureCanvas_pointerDragged
#define GameFeatureCanvas_pointerDragged Canvas_pointerDragged
#endif
#ifndef GameFeatureCanvas_repaint
#define GameFeatureCanvas_repaint Canvas_repaint
#endif
#ifndef GameFeatureCanvas_repaintXYWH
#define GameFeatureCanvas_repaintXYWH Canvas_repaintXYWH
#endif
#ifndef GameFeatureCanvas_serviceRepaints
#define GameFeatureCanvas_serviceRepaints Canvas_serviceRepaints
#endif
#ifndef GameFeatureCanvas_setFullScreenMode
#define GameFeatureCanvas_setFullScreenMode Canvas_setFullScreenMode
#endif
#ifndef GameFeatureCanvas_sizeChanged
#define GameFeatureCanvas_sizeChanged Canvas_sizeChanged
#endif
#ifndef GameFeatureCanvas_showNotify
#define GameFeatureCanvas_showNotify Canvas_showNotify
#endif
#ifndef GameFeatureCanvas_setUI
#define GameFeatureCanvas_setUI Displayable_setUI
#endif
#ifndef GameFeatureCanvas_getUI
#define GameFeatureCanvas_getUI Displayable_getUI
#endif
#ifndef GameFeatureCanvas_addCommand
#define GameFeatureCanvas_addCommand Displayable_addCommand
#endif
#ifndef GameFeatureCanvas_removeCommand
#define GameFeatureCanvas_removeCommand Displayable_removeCommand
#endif
#ifndef GameFeatureCanvas_getWidth
#define GameFeatureCanvas_getWidth Displayable_getWidth
#endif
#ifndef GameFeatureCanvas_getHeight
#define GameFeatureCanvas_getHeight Displayable_getHeight
#endif
#ifndef GameFeatureCanvas_isShown
#define GameFeatureCanvas_isShown Displayable_isShown
#endif
#ifndef GameFeatureCanvas_getTicker
#define GameFeatureCanvas_getTicker Displayable_getTicker
#endif
#ifndef GameFeatureCanvas_setTicker
#define GameFeatureCanvas_setTicker Displayable_setTicker
#endif
#ifndef GameFeatureCanvas_getTitle
#define GameFeatureCanvas_getTitle Displayable_getTitle
#endif
#ifndef GameFeatureCanvas_setTitle
#define GameFeatureCanvas_setTitle Displayable_setTitle
#endif
#ifndef GameFeatureCanvas_setCommandListener
#define GameFeatureCanvas_setCommandListener Displayable_setCommandListener
#endif
#ifndef GameFeatureCanvas_getCommandListener
#define GameFeatureCanvas_getCommandListener Displayable_getCommandListener
#endif
#ifndef GameFeatureCanvas_getCommands
#define GameFeatureCanvas_getCommands Displayable_getCommands
#endif
#ifndef GameFeatureCanvas_setFullScreenMode
#define GameFeatureCanvas_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef GameFeatureCanvas_isFullScreenMode
#define GameFeatureCanvas_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef GameFeatureCanvas_hideNotify
#define GameFeatureCanvas_hideNotify Displayable_hideNotify
#endif
#ifndef GameFeatureCanvas_hideNotifyForDisplay
#define GameFeatureCanvas_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef GameFeatureCanvas_keyPressed
#define GameFeatureCanvas_keyPressed Displayable_keyPressed
#endif
#ifndef GameFeatureCanvas_keyRepeated
#define GameFeatureCanvas_keyRepeated Displayable_keyRepeated
#endif
#ifndef GameFeatureCanvas_keyReleased
#define GameFeatureCanvas_keyReleased Displayable_keyReleased
#endif
#ifndef GameFeatureCanvas_pointerPressed
#define GameFeatureCanvas_pointerPressed Displayable_pointerPressed
#endif
#ifndef GameFeatureCanvas_pointerReleased
#define GameFeatureCanvas_pointerReleased Displayable_pointerReleased
#endif
#ifndef GameFeatureCanvas_pointerDragged
#define GameFeatureCanvas_pointerDragged Displayable_pointerDragged
#endif
#ifndef GameFeatureCanvas_repaint
#define GameFeatureCanvas_repaint Displayable_repaint
#endif
#ifndef GameFeatureCanvas_repaintXYWH
#define GameFeatureCanvas_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef GameFeatureCanvas_sizeChanged
#define GameFeatureCanvas_sizeChanged Displayable_sizeChanged
#endif
#ifndef GameFeatureCanvas_sizeChangedForDisplay
#define GameFeatureCanvas_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef GameFeatureCanvas_showNotify
#define GameFeatureCanvas_showNotify Displayable_showNotify
#endif
#ifndef GameFeatureCanvas_showNotifyForDisplay
#define GameFeatureCanvas_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameFeatureCanvas_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameFeatureCanvas_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATURECANVAS_H
