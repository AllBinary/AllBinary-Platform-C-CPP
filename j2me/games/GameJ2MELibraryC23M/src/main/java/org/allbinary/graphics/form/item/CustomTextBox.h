#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMTEXTBOX_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMTEXTBOX_H
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
// package org.allbinary.graphics.form.item

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ABTextFieldItem ABTextFieldItem;
typedef struct CommandListener CommandListener;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct J2MEUtil J2MEUtil;
typedef struct GameCommandCanvas GameCommandCanvas;
typedef struct Input Input;
typedef struct InputFactory InputFactory;
typedef struct PlatformKeyFactory PlatformKeyFactory;
typedef struct RawKeyEventListener RawKeyEventListener;
typedef struct BasicColor BasicColor;
typedef struct TextItemVisitor TextItemVisitor;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonSeps CommonSeps;
#include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"
#if __has_include("org/allbinary/game/input/InputFactory.h")
#include "org/allbinary/game/input/InputFactory.h"
#endif
#include "org/allbinary/game/input/event/RawKeyEventListener.h"
#if __has_include("org/allbinary/graphics/form/item/ABTextFieldItem.h")
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#endif

typedef struct CustomTextBox CustomTextBox;
struct CustomTextBox {
    GameCommandCanvas base;
    RawKeyEventListener RawKeyEventListener_interface;
    ABTextFieldItem* textFieldItem;
    InputFactory* inputFactory;
};


CustomTextBox* CustomTextBox_new(CommandListener* cmdListener, const char* label, const char* text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void CustomTextBox_init(CustomTextBox* this, CommandListener* cmdListener, const char* label, const char* text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void CustomTextBox_submit(CustomTextBox* this);

void CustomTextBox_onEventRaw(CustomTextBox* this, int32_t keyCode, int32_t deviceId, bool repeated);

void CustomTextBox_keyPressed(CustomTextBox* this, int32_t keyCode);

void CustomTextBox_keyReleased(CustomTextBox* this, int32_t keyCode);

void CustomTextBox_keyRepeated(CustomTextBox* this, int32_t keyCode);

void CustomTextBox_keyPressedByDevice(CustomTextBox* this, int32_t keyCode, int32_t deviceId);

void CustomTextBox_keyReleasedByDevice(CustomTextBox* this, int32_t keyCode, int32_t deviceId);

void CustomTextBox_paint(CustomTextBox* this, Graphics* graphics);

void CustomTextBox_paintXY(CustomTextBox* this, Graphics* graphics, int32_t x, int32_t y);

ABTextFieldItem* CustomTextBox_getTextFieldItem(CustomTextBox* this);
#define CustomTextBox_new8 CustomTextBox_new
#define CustomTextBox_init8 CustomTextBox_init
#ifndef CustomTextBox_updateMeasurement
#define CustomTextBox_updateMeasurement GameCommandCanvas_updateMeasurement
#endif
#ifndef CustomTextBox_onEvent
#define CustomTextBox_onEvent GameCommandCanvas_onEvent
#endif
#ifndef CustomTextBox_onDisplayChangeEvent
#define CustomTextBox_onDisplayChangeEvent GameCommandCanvas_onDisplayChangeEvent
#endif
#ifndef CustomTextBox_initCommands
#define CustomTextBox_initCommands GameCommandCanvas_initCommands
#endif
#ifndef CustomTextBox_initMenu
#define CustomTextBox_initMenu GameCommandCanvas_initMenu
#endif
#ifndef CustomTextBox_createForm
#define CustomTextBox_createForm GameCommandCanvas_createForm
#endif
#ifndef CustomTextBox_createRectangle
#define CustomTextBox_createRectangle GameCommandCanvas_createRectangle
#endif
#ifndef CustomTextBox_open
#define CustomTextBox_open GameCommandCanvas_open
#endif
#ifndef CustomTextBox_close
#define CustomTextBox_close GameCommandCanvas_close
#endif
#ifndef CustomTextBox_update
#define CustomTextBox_update GameCommandCanvas_update
#endif
#ifndef CustomTextBox_getSourceId
#define CustomTextBox_getSourceId GameCommandCanvas_getSourceId
#endif
#ifndef CustomTextBox_keyRepeatedByDevice
#define CustomTextBox_keyRepeatedByDevice GameCommandCanvas_keyRepeatedByDevice
#endif
#ifndef CustomTextBox_addGameKeyEvent
#define CustomTextBox_addGameKeyEvent GameCommandCanvas_addGameKeyEvent
#endif
#ifndef CustomTextBox_removeGameKeyEvent
#define CustomTextBox_removeGameKeyEvent GameCommandCanvas_removeGameKeyEvent
#endif
#ifndef CustomTextBox_setMenuInputProcessor
#define CustomTextBox_setMenuInputProcessor GameCommandCanvas_setMenuInputProcessor
#endif
#ifndef CustomTextBox_getMenuInputProcessor
#define CustomTextBox_getMenuInputProcessor GameCommandCanvas_getMenuInputProcessor
#endif
#ifndef CustomTextBox_getWidth
#define CustomTextBox_getWidth MyCanvas_getWidth
#endif
#ifndef CustomTextBox_getHeight
#define CustomTextBox_getHeight MyCanvas_getHeight
#endif
#ifndef CustomTextBox_setFullScreenMode
#define CustomTextBox_setFullScreenMode MyCanvas_setFullScreenMode
#endif
#ifndef CustomTextBox_sizeChanged
#define CustomTextBox_sizeChanged MyCanvas_sizeChanged
#endif
#ifndef CustomTextBox_getCommandStack
#define CustomTextBox_getCommandStack MyCanvas_getCommandStack
#endif
#ifndef CustomTextBox_isCommand
#define CustomTextBox_isCommand MyCanvas_isCommand
#endif
#ifndef CustomTextBox_addCommand
#define CustomTextBox_addCommand MyCanvas_addCommand
#endif
#ifndef CustomTextBox_removeCommand
#define CustomTextBox_removeCommand MyCanvas_removeCommand
#endif
#ifndef CustomTextBox_removeAllCommands
#define CustomTextBox_removeAllCommands MyCanvas_removeAllCommands
#endif
#ifndef CustomTextBox_setCommandListener
#define CustomTextBox_setCommandListener MyCanvas_setCommandListener
#endif
#ifndef CustomTextBox_getCustomCommandListener
#define CustomTextBox_getCustomCommandListener MyCanvas_getCustomCommandListener
#endif
#ifndef CustomTextBox_isPaused
#define CustomTextBox_isPaused MyCanvas_isPaused
#endif
#ifndef CustomTextBox_removePauseCommand
#define CustomTextBox_removePauseCommand MyCanvas_removePauseCommand
#endif
#ifndef CustomTextBox_pause
#define CustomTextBox_pause MyCanvas_pause
#endif
#ifndef CustomTextBox_unPause
#define CustomTextBox_unPause MyCanvas_unPause
#endif
#ifndef CustomTextBox_process
#define CustomTextBox_process MyCanvas_process
#endif
#ifndef CustomTextBox_draw
#define CustomTextBox_draw MyCanvas_draw
#endif
#ifndef CustomTextBox_hasChild
#define CustomTextBox_hasChild MyCanvas_hasChild
#endif
#ifndef CustomTextBox_destroy
#define CustomTextBox_destroy MyCanvas_destroy
#endif
#ifndef CustomTextBox_setPaused
#define CustomTextBox_setPaused MyCanvas_setPaused
#endif
#ifndef CustomTextBox_keyRepeatedByDevice
#define CustomTextBox_keyRepeatedByDevice MyCanvas_keyRepeatedByDevice
#endif
#ifndef CustomTextBox_pointerDragged
#define CustomTextBox_pointerDragged MyCanvas_pointerDragged
#endif
#ifndef CustomTextBox_pointerPressed
#define CustomTextBox_pointerPressed MyCanvas_pointerPressed
#endif
#ifndef CustomTextBox_pointerReleased
#define CustomTextBox_pointerReleased MyCanvas_pointerReleased
#endif
#ifndef CustomTextBox_nextSong
#define CustomTextBox_nextSong MyCanvas_nextSong
#endif
#ifndef CustomTextBox_getGameAction
#define CustomTextBox_getGameAction Canvas_getGameAction
#endif
#ifndef CustomTextBox_getKeyCode
#define CustomTextBox_getKeyCode Canvas_getKeyCode
#endif
#ifndef CustomTextBox_getKeyName
#define CustomTextBox_getKeyName Canvas_getKeyName
#endif
#ifndef CustomTextBox_hasPointerEvents
#define CustomTextBox_hasPointerEvents Canvas_hasPointerEvents
#endif
#ifndef CustomTextBox_hasPointerMotionEvents
#define CustomTextBox_hasPointerMotionEvents Canvas_hasPointerMotionEvents
#endif
#ifndef CustomTextBox_hasRepeatEvents
#define CustomTextBox_hasRepeatEvents Canvas_hasRepeatEvents
#endif
#ifndef CustomTextBox_hideNotify
#define CustomTextBox_hideNotify Canvas_hideNotify
#endif
#ifndef CustomTextBox_isDoubleBuffered
#define CustomTextBox_isDoubleBuffered Canvas_isDoubleBuffered
#endif
#ifndef CustomTextBox_pointerPressed
#define CustomTextBox_pointerPressed Canvas_pointerPressed
#endif
#ifndef CustomTextBox_pointerReleased
#define CustomTextBox_pointerReleased Canvas_pointerReleased
#endif
#ifndef CustomTextBox_pointerDragged
#define CustomTextBox_pointerDragged Canvas_pointerDragged
#endif
#ifndef CustomTextBox_repaint
#define CustomTextBox_repaint Canvas_repaint
#endif
#ifndef CustomTextBox_repaintXYWH
#define CustomTextBox_repaintXYWH Canvas_repaintXYWH
#endif
#ifndef CustomTextBox_serviceRepaints
#define CustomTextBox_serviceRepaints Canvas_serviceRepaints
#endif
#ifndef CustomTextBox_setFullScreenMode
#define CustomTextBox_setFullScreenMode Canvas_setFullScreenMode
#endif
#ifndef CustomTextBox_sizeChanged
#define CustomTextBox_sizeChanged Canvas_sizeChanged
#endif
#ifndef CustomTextBox_showNotify
#define CustomTextBox_showNotify Canvas_showNotify
#endif
#ifndef CustomTextBox_setUI
#define CustomTextBox_setUI Displayable_setUI
#endif
#ifndef CustomTextBox_getUI
#define CustomTextBox_getUI Displayable_getUI
#endif
#ifndef CustomTextBox_addCommand
#define CustomTextBox_addCommand Displayable_addCommand
#endif
#ifndef CustomTextBox_removeCommand
#define CustomTextBox_removeCommand Displayable_removeCommand
#endif
#ifndef CustomTextBox_getWidth
#define CustomTextBox_getWidth Displayable_getWidth
#endif
#ifndef CustomTextBox_getHeight
#define CustomTextBox_getHeight Displayable_getHeight
#endif
#ifndef CustomTextBox_isShown
#define CustomTextBox_isShown Displayable_isShown
#endif
#ifndef CustomTextBox_getTicker
#define CustomTextBox_getTicker Displayable_getTicker
#endif
#ifndef CustomTextBox_setTicker
#define CustomTextBox_setTicker Displayable_setTicker
#endif
#ifndef CustomTextBox_getTitle
#define CustomTextBox_getTitle Displayable_getTitle
#endif
#ifndef CustomTextBox_setTitle
#define CustomTextBox_setTitle Displayable_setTitle
#endif
#ifndef CustomTextBox_setCommandListener
#define CustomTextBox_setCommandListener Displayable_setCommandListener
#endif
#ifndef CustomTextBox_getCommandListener
#define CustomTextBox_getCommandListener Displayable_getCommandListener
#endif
#ifndef CustomTextBox_getCommands
#define CustomTextBox_getCommands Displayable_getCommands
#endif
#ifndef CustomTextBox_setFullScreenMode
#define CustomTextBox_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef CustomTextBox_isFullScreenMode
#define CustomTextBox_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef CustomTextBox_hideNotify
#define CustomTextBox_hideNotify Displayable_hideNotify
#endif
#ifndef CustomTextBox_hideNotifyForDisplay
#define CustomTextBox_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef CustomTextBox_pointerPressed
#define CustomTextBox_pointerPressed Displayable_pointerPressed
#endif
#ifndef CustomTextBox_pointerReleased
#define CustomTextBox_pointerReleased Displayable_pointerReleased
#endif
#ifndef CustomTextBox_pointerDragged
#define CustomTextBox_pointerDragged Displayable_pointerDragged
#endif
#ifndef CustomTextBox_repaint
#define CustomTextBox_repaint Displayable_repaint
#endif
#ifndef CustomTextBox_repaintXYWH
#define CustomTextBox_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef CustomTextBox_sizeChanged
#define CustomTextBox_sizeChanged Displayable_sizeChanged
#endif
#ifndef CustomTextBox_sizeChangedForDisplay
#define CustomTextBox_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef CustomTextBox_showNotify
#define CustomTextBox_showNotify Displayable_showNotify
#endif
#ifndef CustomTextBox_showNotifyForDisplay
#define CustomTextBox_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CustomTextBox_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CustomTextBox_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMTEXTBOX_H
