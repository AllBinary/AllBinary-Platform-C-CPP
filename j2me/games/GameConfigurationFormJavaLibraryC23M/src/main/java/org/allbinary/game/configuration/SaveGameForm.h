#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_SAVEGAMEFORM_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_SAVEGAMEFORM_H
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
// package org.allbinary.game.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CommandListener CommandListener;
typedef struct TextField TextField;
typedef struct MIDPUtil MIDPUtil;
typedef struct GameCommandsFactory GameCommandsFactory;
typedef struct BasicColor BasicColor;
typedef struct CommandForm CommandForm;
typedef struct ABSystemWrapper ABSystemWrapper;
#if __has_include("org/allbinary/MIDPUtil.h")
#include "org/allbinary/MIDPUtil.h"
#endif
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#include "java/lang/Long.h"

typedef struct SaveGameForm SaveGameForm;
struct SaveGameForm {
    CommandForm base;
    MIDPUtil* meUtil;
};


SaveGameForm* SaveGameForm_new(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

CommandForm* SaveGameForm_createForm(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

CommandForm* SaveGameForm_getInstance(void);

void SaveGameForm_init(SaveGameForm* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void SaveGameForm_initCommands(SaveGameForm* this, CommandListener* cmdListener);
#define SaveGameForm_new4 SaveGameForm_new
#define SaveGameForm_init4 SaveGameForm_init
#ifndef SaveGameForm_getNullCommandForm
#define SaveGameForm_getNullCommandForm CommandForm_getNullCommandForm
#endif
#ifndef SaveGameForm_open
#define SaveGameForm_open CommandForm_open
#endif
#ifndef SaveGameForm_close
#define SaveGameForm_close CommandForm_close
#endif
#ifndef SaveGameForm_update
#define SaveGameForm_update CommandForm_update
#endif
#ifndef SaveGameForm_getSourceId
#define SaveGameForm_getSourceId CommandForm_getSourceId
#endif
#ifndef SaveGameForm_addCommand
#define SaveGameForm_addCommand CommandForm_addCommand
#endif
#ifndef SaveGameForm_removeAllCommands
#define SaveGameForm_removeAllCommands CommandForm_removeAllCommands
#endif
#ifndef SaveGameForm_appendItem
#define SaveGameForm_appendItem Form_appendItem
#endif
#ifndef SaveGameForm_appendImage
#define SaveGameForm_appendImage Form_appendImage
#endif
#ifndef SaveGameForm_append
#define SaveGameForm_append Form_append
#endif
#ifndef SaveGameForm_delete
#define SaveGameForm_delete Form_delete
#endif
#ifndef SaveGameForm_deleteAll
#define SaveGameForm_deleteAll Form_deleteAll
#endif
#ifndef SaveGameForm_get
#define SaveGameForm_get Form_get
#endif
#ifndef SaveGameForm_getHeight
#define SaveGameForm_getHeight Form_getHeight
#endif
#ifndef SaveGameForm_getWidth
#define SaveGameForm_getWidth Form_getWidth
#endif
#ifndef SaveGameForm_insert
#define SaveGameForm_insert Form_insert
#endif
#ifndef SaveGameForm_set
#define SaveGameForm_set Form_set
#endif
#ifndef SaveGameForm_setItemStateListener
#define SaveGameForm_setItemStateListener Form_setItemStateListener
#endif
#ifndef SaveGameForm_size
#define SaveGameForm_size Form_size
#endif
#ifndef SaveGameForm_paintContent
#define SaveGameForm_paintContent Form_paintContent
#endif
#ifndef SaveGameForm_fireItemStateListener
#define SaveGameForm_fireItemStateListener Form_fireItemStateListener
#endif
#ifndef SaveGameForm_fireFocusedItemStateListener
#define SaveGameForm_fireFocusedItemStateListener Form_fireFocusedItemStateListener
#endif
#ifndef SaveGameForm_hideNotify
#define SaveGameForm_hideNotify Form_hideNotify
#endif
#ifndef SaveGameForm_keyPressed
#define SaveGameForm_keyPressed Form_keyPressed
#endif
#ifndef SaveGameForm_showNotify
#define SaveGameForm_showNotify Form_showNotify
#endif
#ifndef SaveGameForm_traverse
#define SaveGameForm_traverse Form_traverse
#endif
#ifndef SaveGameForm_getTopVisibleIndex
#define SaveGameForm_getTopVisibleIndex Form_getTopVisibleIndex
#endif
#ifndef SaveGameForm_getBottomVisibleIndex
#define SaveGameForm_getBottomVisibleIndex Form_getBottomVisibleIndex
#endif
#ifndef SaveGameForm_getHeightToItem
#define SaveGameForm_getHeightToItem Form_getHeightToItem
#endif
#ifndef SaveGameForm_verifyItem
#define SaveGameForm_verifyItem Form_verifyItem
#endif
#ifndef SaveGameForm_verifyItemNum
#define SaveGameForm_verifyItemNum Form_verifyItemNum
#endif
#ifndef SaveGameForm_getCommands
#define SaveGameForm_getCommands Form_getCommands
#endif
#ifndef SaveGameForm_scroll
#define SaveGameForm_scroll Screen_scroll
#endif
#ifndef SaveGameForm_traverse
#define SaveGameForm_traverse Screen_traverse
#endif
#ifndef SaveGameForm_keyPressed
#define SaveGameForm_keyPressed Screen_keyPressed
#endif
#ifndef SaveGameForm_hideNotify
#define SaveGameForm_hideNotify Screen_hideNotify
#endif
#ifndef SaveGameForm_keyRepeated
#define SaveGameForm_keyRepeated Screen_keyRepeated
#endif
#ifndef SaveGameForm_paint
#define SaveGameForm_paint Screen_paint
#endif
#ifndef SaveGameForm_paintContent
#define SaveGameForm_paintContent Screen_paintContent
#endif
#ifndef SaveGameForm_repaint
#define SaveGameForm_repaint Screen_repaint
#endif
#ifndef SaveGameForm_showNotify
#define SaveGameForm_showNotify Screen_showNotify
#endif
#ifndef SaveGameForm_setUI
#define SaveGameForm_setUI Displayable_setUI
#endif
#ifndef SaveGameForm_getUI
#define SaveGameForm_getUI Displayable_getUI
#endif
#ifndef SaveGameForm_addCommand
#define SaveGameForm_addCommand Displayable_addCommand
#endif
#ifndef SaveGameForm_removeCommand
#define SaveGameForm_removeCommand Displayable_removeCommand
#endif
#ifndef SaveGameForm_getWidth
#define SaveGameForm_getWidth Displayable_getWidth
#endif
#ifndef SaveGameForm_getHeight
#define SaveGameForm_getHeight Displayable_getHeight
#endif
#ifndef SaveGameForm_isShown
#define SaveGameForm_isShown Displayable_isShown
#endif
#ifndef SaveGameForm_getTicker
#define SaveGameForm_getTicker Displayable_getTicker
#endif
#ifndef SaveGameForm_setTicker
#define SaveGameForm_setTicker Displayable_setTicker
#endif
#ifndef SaveGameForm_getTitle
#define SaveGameForm_getTitle Displayable_getTitle
#endif
#ifndef SaveGameForm_setTitle
#define SaveGameForm_setTitle Displayable_setTitle
#endif
#ifndef SaveGameForm_setCommandListener
#define SaveGameForm_setCommandListener Displayable_setCommandListener
#endif
#ifndef SaveGameForm_getCommandListener
#define SaveGameForm_getCommandListener Displayable_getCommandListener
#endif
#ifndef SaveGameForm_getCommands
#define SaveGameForm_getCommands Displayable_getCommands
#endif
#ifndef SaveGameForm_setFullScreenMode
#define SaveGameForm_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef SaveGameForm_isFullScreenMode
#define SaveGameForm_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef SaveGameForm_hideNotify
#define SaveGameForm_hideNotify Displayable_hideNotify
#endif
#ifndef SaveGameForm_hideNotifyForDisplay
#define SaveGameForm_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef SaveGameForm_keyPressed
#define SaveGameForm_keyPressed Displayable_keyPressed
#endif
#ifndef SaveGameForm_keyRepeated
#define SaveGameForm_keyRepeated Displayable_keyRepeated
#endif
#ifndef SaveGameForm_keyReleased
#define SaveGameForm_keyReleased Displayable_keyReleased
#endif
#ifndef SaveGameForm_pointerPressed
#define SaveGameForm_pointerPressed Displayable_pointerPressed
#endif
#ifndef SaveGameForm_pointerReleased
#define SaveGameForm_pointerReleased Displayable_pointerReleased
#endif
#ifndef SaveGameForm_pointerDragged
#define SaveGameForm_pointerDragged Displayable_pointerDragged
#endif
#ifndef SaveGameForm_paint
#define SaveGameForm_paint Displayable_paint
#endif
#ifndef SaveGameForm_repaint
#define SaveGameForm_repaint Displayable_repaint
#endif
#ifndef SaveGameForm_repaintXYWH
#define SaveGameForm_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef SaveGameForm_sizeChanged
#define SaveGameForm_sizeChanged Displayable_sizeChanged
#endif
#ifndef SaveGameForm_sizeChangedForDisplay
#define SaveGameForm_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef SaveGameForm_showNotify
#define SaveGameForm_showNotify Displayable_showNotify
#endif
#ifndef SaveGameForm_showNotifyForDisplay
#define SaveGameForm_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SaveGameForm_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SaveGameForm_register(void);

#if __has_include("org/allbinary/graphics/displayable/screen/CommandForm.h")
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#endif

#endif // ORG_ALLBINARY_GAME_CONFIGURATION_SAVEGAMEFORM_H
