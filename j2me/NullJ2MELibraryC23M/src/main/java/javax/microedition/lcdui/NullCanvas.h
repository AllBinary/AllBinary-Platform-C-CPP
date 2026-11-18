#ifndef JAVAX_MICROEDITION_LCDUI_NULLCANVAS_H
#define JAVAX_MICROEDITION_LCDUI_NULLCANVAS_H
// Generated Code Do Not Modify
// package javax.microedition.lcdui

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Canvas Canvas;
typedef struct Command Command;
typedef struct CommandListener CommandListener;
typedef struct Graphics Graphics;
#include "java/util/Stack.h"
#include "javax/microedition/lcdui/Canvas.h"

typedef struct NullCanvas NullCanvas;
struct NullCanvas {
    Canvas base;
};

extern NullCanvas* NullCanvas_NULL_CANVAS;

NullCanvas* NullCanvas_new(void);

void NullCanvas_init(NullCanvas* this);

void NullCanvas_setFullScreenMode(NullCanvas* this, bool mode);

void NullCanvas_sizeChanged(NullCanvas* this, int32_t w, int32_t h);

Stack* NullCanvas_getCommandStack(NullCanvas* this);

bool NullCanvas_isCommand(NullCanvas* this, Command* command);

void NullCanvas_addCommand(NullCanvas* this, Command* command);

void NullCanvas_removeCommand(NullCanvas* this, Command* command);

void NullCanvas_removeAllCommands(NullCanvas* this);

void NullCanvas_setCommandListener(NullCanvas* this, CommandListener* l);

CommandListener* NullCanvas_getCustomCommandListener(NullCanvas* this);

bool NullCanvas_isPaused(NullCanvas* this);

void NullCanvas_removePauseCommand(NullCanvas* this);

void NullCanvas_pause(NullCanvas* this);

void NullCanvas_unPause(NullCanvas* this);

void NullCanvas_process(NullCanvas* this);

void NullCanvas_paint(NullCanvas* this, Graphics* graphics);

void NullCanvas_destroy(NullCanvas* this);

void NullCanvas_setPaused(NullCanvas* this, bool isPaused);

void NullCanvas_pointerDragged(NullCanvas* this, int32_t x, int32_t y);

void NullCanvas_pointerPressed(NullCanvas* this, int32_t x, int32_t y);

void NullCanvas_pointerReleased(NullCanvas* this, int32_t x, int32_t y);
#define NullCanvas_new0 NullCanvas_new
#define NullCanvas_init0 NullCanvas_init
#ifndef NullCanvas_getGameAction
#define NullCanvas_getGameAction Canvas_getGameAction
#endif
#ifndef NullCanvas_getKeyCode
#define NullCanvas_getKeyCode Canvas_getKeyCode
#endif
#ifndef NullCanvas_getKeyName
#define NullCanvas_getKeyName Canvas_getKeyName
#endif
#ifndef NullCanvas_hasPointerEvents
#define NullCanvas_hasPointerEvents Canvas_hasPointerEvents
#endif
#ifndef NullCanvas_hasPointerMotionEvents
#define NullCanvas_hasPointerMotionEvents Canvas_hasPointerMotionEvents
#endif
#ifndef NullCanvas_hasRepeatEvents
#define NullCanvas_hasRepeatEvents Canvas_hasRepeatEvents
#endif
#ifndef NullCanvas_hideNotify
#define NullCanvas_hideNotify Canvas_hideNotify
#endif
#ifndef NullCanvas_isDoubleBuffered
#define NullCanvas_isDoubleBuffered Canvas_isDoubleBuffered
#endif
#ifndef NullCanvas_keyPressed
#define NullCanvas_keyPressed Canvas_keyPressed
#endif
#ifndef NullCanvas_keyRepeated
#define NullCanvas_keyRepeated Canvas_keyRepeated
#endif
#ifndef NullCanvas_keyReleased
#define NullCanvas_keyReleased Canvas_keyReleased
#endif
#ifndef NullCanvas_repaint
#define NullCanvas_repaint Canvas_repaint
#endif
#ifndef NullCanvas_repaintXYWH
#define NullCanvas_repaintXYWH Canvas_repaintXYWH
#endif
#ifndef NullCanvas_serviceRepaints
#define NullCanvas_serviceRepaints Canvas_serviceRepaints
#endif
#ifndef NullCanvas_showNotify
#define NullCanvas_showNotify Canvas_showNotify
#endif
#ifndef NullCanvas_setUI
#define NullCanvas_setUI Displayable_setUI
#endif
#ifndef NullCanvas_getUI
#define NullCanvas_getUI Displayable_getUI
#endif
#ifndef NullCanvas_getWidth
#define NullCanvas_getWidth Displayable_getWidth
#endif
#ifndef NullCanvas_getHeight
#define NullCanvas_getHeight Displayable_getHeight
#endif
#ifndef NullCanvas_isShown
#define NullCanvas_isShown Displayable_isShown
#endif
#ifndef NullCanvas_getTicker
#define NullCanvas_getTicker Displayable_getTicker
#endif
#ifndef NullCanvas_setTicker
#define NullCanvas_setTicker Displayable_setTicker
#endif
#ifndef NullCanvas_getTitle
#define NullCanvas_getTitle Displayable_getTitle
#endif
#ifndef NullCanvas_setTitle
#define NullCanvas_setTitle Displayable_setTitle
#endif
#ifndef NullCanvas_getCommandListener
#define NullCanvas_getCommandListener Displayable_getCommandListener
#endif
#ifndef NullCanvas_getCommands
#define NullCanvas_getCommands Displayable_getCommands
#endif
#ifndef NullCanvas_isFullScreenMode
#define NullCanvas_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef NullCanvas_hideNotify
#define NullCanvas_hideNotify Displayable_hideNotify
#endif
#ifndef NullCanvas_hideNotifyForDisplay
#define NullCanvas_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef NullCanvas_keyPressed
#define NullCanvas_keyPressed Displayable_keyPressed
#endif
#ifndef NullCanvas_keyRepeated
#define NullCanvas_keyRepeated Displayable_keyRepeated
#endif
#ifndef NullCanvas_keyReleased
#define NullCanvas_keyReleased Displayable_keyReleased
#endif
#ifndef NullCanvas_repaint
#define NullCanvas_repaint Displayable_repaint
#endif
#ifndef NullCanvas_repaintXYWH
#define NullCanvas_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef NullCanvas_sizeChangedForDisplay
#define NullCanvas_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef NullCanvas_showNotify
#define NullCanvas_showNotify Displayable_showNotify
#endif
#ifndef NullCanvas_showNotifyForDisplay
#define NullCanvas_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullCanvas_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullCanvas_register(void);


#endif // JAVAX_MICROEDITION_LCDUI_NULLCANVAS_H
