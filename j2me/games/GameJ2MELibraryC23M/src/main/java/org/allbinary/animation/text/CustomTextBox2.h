#ifndef ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOX2_H
#define ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOX2_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.animation.text

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CommandListener CommandListener;
typedef struct Font Font;
typedef struct BasicColor BasicColor;
typedef struct CustomTextBox CustomTextBox;
#include "org/allbinary/graphics/form/item/CustomTextBox.h"

typedef struct CustomTextBox2 CustomTextBox2;
struct CustomTextBox2 {
    CustomTextBox base;
};


CustomTextBox2* CustomTextBox2_new(CommandListener* cmdListener, const char* label, const char* text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void CustomTextBox2_init(CustomTextBox2* this, CommandListener* cmdListener, const char* label, const char* text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
#define CustomTextBox2_new8 CustomTextBox2_new
#define CustomTextBox2_init8 CustomTextBox2_init
#ifndef CustomTextBox2_submit
#define CustomTextBox2_submit CustomTextBox_submit
#endif
#ifndef CustomTextBox2_onEventRaw
#define CustomTextBox2_onEventRaw CustomTextBox_onEventRaw
#endif
#ifndef CustomTextBox2_keyPressed
#define CustomTextBox2_keyPressed CustomTextBox_keyPressed
#endif
#ifndef CustomTextBox2_keyReleased
#define CustomTextBox2_keyReleased CustomTextBox_keyReleased
#endif
#ifndef CustomTextBox2_keyRepeated
#define CustomTextBox2_keyRepeated CustomTextBox_keyRepeated
#endif
#ifndef CustomTextBox2_keyPressedByDevice
#define CustomTextBox2_keyPressedByDevice CustomTextBox_keyPressedByDevice
#endif
#ifndef CustomTextBox2_keyReleasedByDevice
#define CustomTextBox2_keyReleasedByDevice CustomTextBox_keyReleasedByDevice
#endif
#ifndef CustomTextBox2_paint
#define CustomTextBox2_paint CustomTextBox_paint
#endif
#ifndef CustomTextBox2_paintXY
#define CustomTextBox2_paintXY CustomTextBox_paintXY
#endif
#ifndef CustomTextBox2_getTextFieldItem
#define CustomTextBox2_getTextFieldItem CustomTextBox_getTextFieldItem
#endif
#ifndef CustomTextBox2_updateMeasurement
#define CustomTextBox2_updateMeasurement GameCommandCanvas_updateMeasurement
#endif
#ifndef CustomTextBox2_onEvent
#define CustomTextBox2_onEvent GameCommandCanvas_onEvent
#endif
#ifndef CustomTextBox2_onDisplayChangeEvent
#define CustomTextBox2_onDisplayChangeEvent GameCommandCanvas_onDisplayChangeEvent
#endif
#ifndef CustomTextBox2_initCommands
#define CustomTextBox2_initCommands GameCommandCanvas_initCommands
#endif
#ifndef CustomTextBox2_initMenu
#define CustomTextBox2_initMenu GameCommandCanvas_initMenu
#endif
#ifndef CustomTextBox2_createForm
#define CustomTextBox2_createForm GameCommandCanvas_createForm
#endif
#ifndef CustomTextBox2_createRectangle
#define CustomTextBox2_createRectangle GameCommandCanvas_createRectangle
#endif
#ifndef CustomTextBox2_open
#define CustomTextBox2_open GameCommandCanvas_open
#endif
#ifndef CustomTextBox2_close
#define CustomTextBox2_close GameCommandCanvas_close
#endif
#ifndef CustomTextBox2_update
#define CustomTextBox2_update GameCommandCanvas_update
#endif
#ifndef CustomTextBox2_getSourceId
#define CustomTextBox2_getSourceId GameCommandCanvas_getSourceId
#endif
#ifndef CustomTextBox2_keyPressed
#define CustomTextBox2_keyPressed GameCommandCanvas_keyPressed
#endif
#ifndef CustomTextBox2_keyReleased
#define CustomTextBox2_keyReleased GameCommandCanvas_keyReleased
#endif
#ifndef CustomTextBox2_keyRepeated
#define CustomTextBox2_keyRepeated GameCommandCanvas_keyRepeated
#endif
#ifndef CustomTextBox2_keyPressedByDevice
#define CustomTextBox2_keyPressedByDevice GameCommandCanvas_keyPressedByDevice
#endif
#ifndef CustomTextBox2_keyReleasedByDevice
#define CustomTextBox2_keyReleasedByDevice GameCommandCanvas_keyReleasedByDevice
#endif
#ifndef CustomTextBox2_keyRepeatedByDevice
#define CustomTextBox2_keyRepeatedByDevice GameCommandCanvas_keyRepeatedByDevice
#endif
#ifndef CustomTextBox2_addGameKeyEvent
#define CustomTextBox2_addGameKeyEvent GameCommandCanvas_addGameKeyEvent
#endif
#ifndef CustomTextBox2_removeGameKeyEvent
#define CustomTextBox2_removeGameKeyEvent GameCommandCanvas_removeGameKeyEvent
#endif
#ifndef CustomTextBox2_paint
#define CustomTextBox2_paint GameCommandCanvas_paint
#endif
#ifndef CustomTextBox2_setMenuInputProcessor
#define CustomTextBox2_setMenuInputProcessor GameCommandCanvas_setMenuInputProcessor
#endif
#ifndef CustomTextBox2_getMenuInputProcessor
#define CustomTextBox2_getMenuInputProcessor GameCommandCanvas_getMenuInputProcessor
#endif
#ifndef CustomTextBox2_getWidth
#define CustomTextBox2_getWidth MyCanvas_getWidth
#endif
#ifndef CustomTextBox2_getHeight
#define CustomTextBox2_getHeight MyCanvas_getHeight
#endif
#ifndef CustomTextBox2_setFullScreenMode
#define CustomTextBox2_setFullScreenMode MyCanvas_setFullScreenMode
#endif
#ifndef CustomTextBox2_sizeChanged
#define CustomTextBox2_sizeChanged MyCanvas_sizeChanged
#endif
#ifndef CustomTextBox2_getCommandStack
#define CustomTextBox2_getCommandStack MyCanvas_getCommandStack
#endif
#ifndef CustomTextBox2_isCommand
#define CustomTextBox2_isCommand MyCanvas_isCommand
#endif
#ifndef CustomTextBox2_addCommand
#define CustomTextBox2_addCommand MyCanvas_addCommand
#endif
#ifndef CustomTextBox2_removeCommand
#define CustomTextBox2_removeCommand MyCanvas_removeCommand
#endif
#ifndef CustomTextBox2_removeAllCommands
#define CustomTextBox2_removeAllCommands MyCanvas_removeAllCommands
#endif
#ifndef CustomTextBox2_setCommandListener
#define CustomTextBox2_setCommandListener MyCanvas_setCommandListener
#endif
#ifndef CustomTextBox2_getCustomCommandListener
#define CustomTextBox2_getCustomCommandListener MyCanvas_getCustomCommandListener
#endif
#ifndef CustomTextBox2_isPaused
#define CustomTextBox2_isPaused MyCanvas_isPaused
#endif
#ifndef CustomTextBox2_removePauseCommand
#define CustomTextBox2_removePauseCommand MyCanvas_removePauseCommand
#endif
#ifndef CustomTextBox2_pause
#define CustomTextBox2_pause MyCanvas_pause
#endif
#ifndef CustomTextBox2_unPause
#define CustomTextBox2_unPause MyCanvas_unPause
#endif
#ifndef CustomTextBox2_process
#define CustomTextBox2_process MyCanvas_process
#endif
#ifndef CustomTextBox2_paint
#define CustomTextBox2_paint MyCanvas_paint
#endif
#ifndef CustomTextBox2_draw
#define CustomTextBox2_draw MyCanvas_draw
#endif
#ifndef CustomTextBox2_hasChild
#define CustomTextBox2_hasChild MyCanvas_hasChild
#endif
#ifndef CustomTextBox2_destroy
#define CustomTextBox2_destroy MyCanvas_destroy
#endif
#ifndef CustomTextBox2_setPaused
#define CustomTextBox2_setPaused MyCanvas_setPaused
#endif
#ifndef CustomTextBox2_keyPressedByDevice
#define CustomTextBox2_keyPressedByDevice MyCanvas_keyPressedByDevice
#endif
#ifndef CustomTextBox2_keyRepeatedByDevice
#define CustomTextBox2_keyRepeatedByDevice MyCanvas_keyRepeatedByDevice
#endif
#ifndef CustomTextBox2_keyReleasedByDevice
#define CustomTextBox2_keyReleasedByDevice MyCanvas_keyReleasedByDevice
#endif
#ifndef CustomTextBox2_pointerDragged
#define CustomTextBox2_pointerDragged MyCanvas_pointerDragged
#endif
#ifndef CustomTextBox2_pointerPressed
#define CustomTextBox2_pointerPressed MyCanvas_pointerPressed
#endif
#ifndef CustomTextBox2_pointerReleased
#define CustomTextBox2_pointerReleased MyCanvas_pointerReleased
#endif
#ifndef CustomTextBox2_nextSong
#define CustomTextBox2_nextSong MyCanvas_nextSong
#endif
#ifndef CustomTextBox2_getGameAction
#define CustomTextBox2_getGameAction Canvas_getGameAction
#endif
#ifndef CustomTextBox2_getKeyCode
#define CustomTextBox2_getKeyCode Canvas_getKeyCode
#endif
#ifndef CustomTextBox2_getKeyName
#define CustomTextBox2_getKeyName Canvas_getKeyName
#endif
#ifndef CustomTextBox2_hasPointerEvents
#define CustomTextBox2_hasPointerEvents Canvas_hasPointerEvents
#endif
#ifndef CustomTextBox2_hasPointerMotionEvents
#define CustomTextBox2_hasPointerMotionEvents Canvas_hasPointerMotionEvents
#endif
#ifndef CustomTextBox2_hasRepeatEvents
#define CustomTextBox2_hasRepeatEvents Canvas_hasRepeatEvents
#endif
#ifndef CustomTextBox2_hideNotify
#define CustomTextBox2_hideNotify Canvas_hideNotify
#endif
#ifndef CustomTextBox2_isDoubleBuffered
#define CustomTextBox2_isDoubleBuffered Canvas_isDoubleBuffered
#endif
#ifndef CustomTextBox2_keyPressed
#define CustomTextBox2_keyPressed Canvas_keyPressed
#endif
#ifndef CustomTextBox2_keyRepeated
#define CustomTextBox2_keyRepeated Canvas_keyRepeated
#endif
#ifndef CustomTextBox2_keyReleased
#define CustomTextBox2_keyReleased Canvas_keyReleased
#endif
#ifndef CustomTextBox2_paint
#define CustomTextBox2_paint Canvas_paint
#endif
#ifndef CustomTextBox2_pointerPressed
#define CustomTextBox2_pointerPressed Canvas_pointerPressed
#endif
#ifndef CustomTextBox2_pointerReleased
#define CustomTextBox2_pointerReleased Canvas_pointerReleased
#endif
#ifndef CustomTextBox2_pointerDragged
#define CustomTextBox2_pointerDragged Canvas_pointerDragged
#endif
#ifndef CustomTextBox2_repaint
#define CustomTextBox2_repaint Canvas_repaint
#endif
#ifndef CustomTextBox2_repaintXYWH
#define CustomTextBox2_repaintXYWH Canvas_repaintXYWH
#endif
#ifndef CustomTextBox2_serviceRepaints
#define CustomTextBox2_serviceRepaints Canvas_serviceRepaints
#endif
#ifndef CustomTextBox2_setFullScreenMode
#define CustomTextBox2_setFullScreenMode Canvas_setFullScreenMode
#endif
#ifndef CustomTextBox2_sizeChanged
#define CustomTextBox2_sizeChanged Canvas_sizeChanged
#endif
#ifndef CustomTextBox2_showNotify
#define CustomTextBox2_showNotify Canvas_showNotify
#endif
#ifndef CustomTextBox2_setUI
#define CustomTextBox2_setUI Displayable_setUI
#endif
#ifndef CustomTextBox2_getUI
#define CustomTextBox2_getUI Displayable_getUI
#endif
#ifndef CustomTextBox2_addCommand
#define CustomTextBox2_addCommand Displayable_addCommand
#endif
#ifndef CustomTextBox2_removeCommand
#define CustomTextBox2_removeCommand Displayable_removeCommand
#endif
#ifndef CustomTextBox2_getWidth
#define CustomTextBox2_getWidth Displayable_getWidth
#endif
#ifndef CustomTextBox2_getHeight
#define CustomTextBox2_getHeight Displayable_getHeight
#endif
#ifndef CustomTextBox2_isShown
#define CustomTextBox2_isShown Displayable_isShown
#endif
#ifndef CustomTextBox2_getTicker
#define CustomTextBox2_getTicker Displayable_getTicker
#endif
#ifndef CustomTextBox2_setTicker
#define CustomTextBox2_setTicker Displayable_setTicker
#endif
#ifndef CustomTextBox2_getTitle
#define CustomTextBox2_getTitle Displayable_getTitle
#endif
#ifndef CustomTextBox2_setTitle
#define CustomTextBox2_setTitle Displayable_setTitle
#endif
#ifndef CustomTextBox2_setCommandListener
#define CustomTextBox2_setCommandListener Displayable_setCommandListener
#endif
#ifndef CustomTextBox2_getCommandListener
#define CustomTextBox2_getCommandListener Displayable_getCommandListener
#endif
#ifndef CustomTextBox2_getCommands
#define CustomTextBox2_getCommands Displayable_getCommands
#endif
#ifndef CustomTextBox2_setFullScreenMode
#define CustomTextBox2_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef CustomTextBox2_isFullScreenMode
#define CustomTextBox2_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef CustomTextBox2_hideNotify
#define CustomTextBox2_hideNotify Displayable_hideNotify
#endif
#ifndef CustomTextBox2_hideNotifyForDisplay
#define CustomTextBox2_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef CustomTextBox2_keyPressed
#define CustomTextBox2_keyPressed Displayable_keyPressed
#endif
#ifndef CustomTextBox2_keyRepeated
#define CustomTextBox2_keyRepeated Displayable_keyRepeated
#endif
#ifndef CustomTextBox2_keyReleased
#define CustomTextBox2_keyReleased Displayable_keyReleased
#endif
#ifndef CustomTextBox2_pointerPressed
#define CustomTextBox2_pointerPressed Displayable_pointerPressed
#endif
#ifndef CustomTextBox2_pointerReleased
#define CustomTextBox2_pointerReleased Displayable_pointerReleased
#endif
#ifndef CustomTextBox2_pointerDragged
#define CustomTextBox2_pointerDragged Displayable_pointerDragged
#endif
#ifndef CustomTextBox2_paint
#define CustomTextBox2_paint Displayable_paint
#endif
#ifndef CustomTextBox2_repaint
#define CustomTextBox2_repaint Displayable_repaint
#endif
#ifndef CustomTextBox2_repaintXYWH
#define CustomTextBox2_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef CustomTextBox2_sizeChanged
#define CustomTextBox2_sizeChanged Displayable_sizeChanged
#endif
#ifndef CustomTextBox2_sizeChangedForDisplay
#define CustomTextBox2_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef CustomTextBox2_showNotify
#define CustomTextBox2_showNotify Displayable_showNotify
#endif
#ifndef CustomTextBox2_showNotifyForDisplay
#define CustomTextBox2_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CustomTextBox2_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CustomTextBox2_register(void);


#endif // ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOX2_H
