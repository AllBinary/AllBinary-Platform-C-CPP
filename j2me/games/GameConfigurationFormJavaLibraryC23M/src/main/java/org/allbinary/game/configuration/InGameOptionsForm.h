#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORM_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORM_H
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
typedef struct Choice Choice;
typedef struct Command Command;
typedef struct CommandListener CommandListener;
typedef struct GameCommandsFactory GameCommandsFactory;
typedef struct GameFeatureFormUtil GameFeatureFormUtil;
typedef struct InGameFeatureChoiceGroups InGameFeatureChoiceGroups;
typedef struct BasicColor BasicColor;
typedef struct CommandForm CommandForm;
typedef struct StringUtil StringUtil;
#if __has_include("javax/microedition/lcdui/Command.h")
#include "javax/microedition/lcdui/Command.h"
#endif
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"

typedef struct InGameOptionsForm InGameOptionsForm;
struct InGameOptionsForm {
    CommandForm base;
};

extern Command* InGameOptionsForm_DISPLAY;
extern Command* InGameOptionsForm_SAVE;
extern Command* InGameOptionsForm_DEFAULT;

InGameOptionsForm* InGameOptionsForm_new(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void InGameOptionsForm_init(InGameOptionsForm* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void InGameOptionsForm_initCommands(InGameOptionsForm* this, CommandListener* cmdListener);
#define InGameOptionsForm_new4 InGameOptionsForm_new
#define InGameOptionsForm_init4 InGameOptionsForm_init
#ifndef InGameOptionsForm_getNullCommandForm
#define InGameOptionsForm_getNullCommandForm CommandForm_getNullCommandForm
#endif
#ifndef InGameOptionsForm_open
#define InGameOptionsForm_open CommandForm_open
#endif
#ifndef InGameOptionsForm_close
#define InGameOptionsForm_close CommandForm_close
#endif
#ifndef InGameOptionsForm_update
#define InGameOptionsForm_update CommandForm_update
#endif
#ifndef InGameOptionsForm_getSourceId
#define InGameOptionsForm_getSourceId CommandForm_getSourceId
#endif
#ifndef InGameOptionsForm_addCommand
#define InGameOptionsForm_addCommand CommandForm_addCommand
#endif
#ifndef InGameOptionsForm_removeAllCommands
#define InGameOptionsForm_removeAllCommands CommandForm_removeAllCommands
#endif
#ifndef InGameOptionsForm_appendItem
#define InGameOptionsForm_appendItem Form_appendItem
#endif
#ifndef InGameOptionsForm_appendImage
#define InGameOptionsForm_appendImage Form_appendImage
#endif
#ifndef InGameOptionsForm_append
#define InGameOptionsForm_append Form_append
#endif
#ifndef InGameOptionsForm_delete
#define InGameOptionsForm_delete Form_delete
#endif
#ifndef InGameOptionsForm_deleteAll
#define InGameOptionsForm_deleteAll Form_deleteAll
#endif
#ifndef InGameOptionsForm_get
#define InGameOptionsForm_get Form_get
#endif
#ifndef InGameOptionsForm_getHeight
#define InGameOptionsForm_getHeight Form_getHeight
#endif
#ifndef InGameOptionsForm_getWidth
#define InGameOptionsForm_getWidth Form_getWidth
#endif
#ifndef InGameOptionsForm_insert
#define InGameOptionsForm_insert Form_insert
#endif
#ifndef InGameOptionsForm_set
#define InGameOptionsForm_set Form_set
#endif
#ifndef InGameOptionsForm_setItemStateListener
#define InGameOptionsForm_setItemStateListener Form_setItemStateListener
#endif
#ifndef InGameOptionsForm_size
#define InGameOptionsForm_size Form_size
#endif
#ifndef InGameOptionsForm_paintContent
#define InGameOptionsForm_paintContent Form_paintContent
#endif
#ifndef InGameOptionsForm_fireItemStateListener
#define InGameOptionsForm_fireItemStateListener Form_fireItemStateListener
#endif
#ifndef InGameOptionsForm_fireFocusedItemStateListener
#define InGameOptionsForm_fireFocusedItemStateListener Form_fireFocusedItemStateListener
#endif
#ifndef InGameOptionsForm_hideNotify
#define InGameOptionsForm_hideNotify Form_hideNotify
#endif
#ifndef InGameOptionsForm_keyPressed
#define InGameOptionsForm_keyPressed Form_keyPressed
#endif
#ifndef InGameOptionsForm_showNotify
#define InGameOptionsForm_showNotify Form_showNotify
#endif
#ifndef InGameOptionsForm_traverse
#define InGameOptionsForm_traverse Form_traverse
#endif
#ifndef InGameOptionsForm_getTopVisibleIndex
#define InGameOptionsForm_getTopVisibleIndex Form_getTopVisibleIndex
#endif
#ifndef InGameOptionsForm_getBottomVisibleIndex
#define InGameOptionsForm_getBottomVisibleIndex Form_getBottomVisibleIndex
#endif
#ifndef InGameOptionsForm_getHeightToItem
#define InGameOptionsForm_getHeightToItem Form_getHeightToItem
#endif
#ifndef InGameOptionsForm_verifyItem
#define InGameOptionsForm_verifyItem Form_verifyItem
#endif
#ifndef InGameOptionsForm_verifyItemNum
#define InGameOptionsForm_verifyItemNum Form_verifyItemNum
#endif
#ifndef InGameOptionsForm_getCommands
#define InGameOptionsForm_getCommands Form_getCommands
#endif
#ifndef InGameOptionsForm_scroll
#define InGameOptionsForm_scroll Screen_scroll
#endif
#ifndef InGameOptionsForm_traverse
#define InGameOptionsForm_traverse Screen_traverse
#endif
#ifndef InGameOptionsForm_keyPressed
#define InGameOptionsForm_keyPressed Screen_keyPressed
#endif
#ifndef InGameOptionsForm_hideNotify
#define InGameOptionsForm_hideNotify Screen_hideNotify
#endif
#ifndef InGameOptionsForm_keyRepeated
#define InGameOptionsForm_keyRepeated Screen_keyRepeated
#endif
#ifndef InGameOptionsForm_paint
#define InGameOptionsForm_paint Screen_paint
#endif
#ifndef InGameOptionsForm_paintContent
#define InGameOptionsForm_paintContent Screen_paintContent
#endif
#ifndef InGameOptionsForm_repaint
#define InGameOptionsForm_repaint Screen_repaint
#endif
#ifndef InGameOptionsForm_showNotify
#define InGameOptionsForm_showNotify Screen_showNotify
#endif
#ifndef InGameOptionsForm_setUI
#define InGameOptionsForm_setUI Displayable_setUI
#endif
#ifndef InGameOptionsForm_getUI
#define InGameOptionsForm_getUI Displayable_getUI
#endif
#ifndef InGameOptionsForm_addCommand
#define InGameOptionsForm_addCommand Displayable_addCommand
#endif
#ifndef InGameOptionsForm_removeCommand
#define InGameOptionsForm_removeCommand Displayable_removeCommand
#endif
#ifndef InGameOptionsForm_getWidth
#define InGameOptionsForm_getWidth Displayable_getWidth
#endif
#ifndef InGameOptionsForm_getHeight
#define InGameOptionsForm_getHeight Displayable_getHeight
#endif
#ifndef InGameOptionsForm_isShown
#define InGameOptionsForm_isShown Displayable_isShown
#endif
#ifndef InGameOptionsForm_getTicker
#define InGameOptionsForm_getTicker Displayable_getTicker
#endif
#ifndef InGameOptionsForm_setTicker
#define InGameOptionsForm_setTicker Displayable_setTicker
#endif
#ifndef InGameOptionsForm_getTitle
#define InGameOptionsForm_getTitle Displayable_getTitle
#endif
#ifndef InGameOptionsForm_setTitle
#define InGameOptionsForm_setTitle Displayable_setTitle
#endif
#ifndef InGameOptionsForm_setCommandListener
#define InGameOptionsForm_setCommandListener Displayable_setCommandListener
#endif
#ifndef InGameOptionsForm_getCommandListener
#define InGameOptionsForm_getCommandListener Displayable_getCommandListener
#endif
#ifndef InGameOptionsForm_getCommands
#define InGameOptionsForm_getCommands Displayable_getCommands
#endif
#ifndef InGameOptionsForm_setFullScreenMode
#define InGameOptionsForm_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef InGameOptionsForm_isFullScreenMode
#define InGameOptionsForm_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef InGameOptionsForm_hideNotify
#define InGameOptionsForm_hideNotify Displayable_hideNotify
#endif
#ifndef InGameOptionsForm_hideNotifyForDisplay
#define InGameOptionsForm_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef InGameOptionsForm_keyPressed
#define InGameOptionsForm_keyPressed Displayable_keyPressed
#endif
#ifndef InGameOptionsForm_keyRepeated
#define InGameOptionsForm_keyRepeated Displayable_keyRepeated
#endif
#ifndef InGameOptionsForm_keyReleased
#define InGameOptionsForm_keyReleased Displayable_keyReleased
#endif
#ifndef InGameOptionsForm_pointerPressed
#define InGameOptionsForm_pointerPressed Displayable_pointerPressed
#endif
#ifndef InGameOptionsForm_pointerReleased
#define InGameOptionsForm_pointerReleased Displayable_pointerReleased
#endif
#ifndef InGameOptionsForm_pointerDragged
#define InGameOptionsForm_pointerDragged Displayable_pointerDragged
#endif
#ifndef InGameOptionsForm_paint
#define InGameOptionsForm_paint Displayable_paint
#endif
#ifndef InGameOptionsForm_repaint
#define InGameOptionsForm_repaint Displayable_repaint
#endif
#ifndef InGameOptionsForm_repaintXYWH
#define InGameOptionsForm_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef InGameOptionsForm_sizeChanged
#define InGameOptionsForm_sizeChanged Displayable_sizeChanged
#endif
#ifndef InGameOptionsForm_sizeChangedForDisplay
#define InGameOptionsForm_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef InGameOptionsForm_showNotify
#define InGameOptionsForm_showNotify Displayable_showNotify
#endif
#ifndef InGameOptionsForm_showNotifyForDisplay
#define InGameOptionsForm_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InGameOptionsForm_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InGameOptionsForm_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORM_H
