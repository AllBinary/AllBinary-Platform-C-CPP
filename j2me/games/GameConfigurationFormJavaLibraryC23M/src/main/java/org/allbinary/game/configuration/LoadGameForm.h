#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_LOADGAMEFORM_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_LOADGAMEFORM_H
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
typedef struct ChoiceGroup ChoiceGroup;
typedef struct CommandListener CommandListener;
typedef struct Item Item;
typedef struct NullImage NullImage;
typedef struct StringItem StringItem;
typedef struct MIDPUtil MIDPUtil;
typedef struct GameCommandsFactory GameCommandsFactory;
typedef struct GamePersistanceSingleton GamePersistanceSingleton;
typedef struct BasicColor BasicColor;
typedef struct CommandForm CommandForm;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/MIDPUtil.h")
#include "org/allbinary/MIDPUtil.h"
#endif
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#include "java/lang/Integer.h"

typedef struct LoadGameForm LoadGameForm;
struct LoadGameForm {
    CommandForm base;
    MIDPUtil* meUtil;
    bool areChoices;
};


LoadGameForm* LoadGameForm_new(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void LoadGameForm_init(LoadGameForm* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void LoadGameForm_initCommands(LoadGameForm* this, CommandListener* cmdListener);

void LoadGameForm_update(LoadGameForm* this);



int32_t LoadGameForm_getSelectedId(LoadGameForm* this);

int32_t LoadGameForm_getSelectedText(LoadGameForm* this);
#define LoadGameForm_new4 LoadGameForm_new
#define LoadGameForm_init4 LoadGameForm_init
#ifndef LoadGameForm_getNullCommandForm
#define LoadGameForm_getNullCommandForm CommandForm_getNullCommandForm
#endif
#ifndef LoadGameForm_open
#define LoadGameForm_open CommandForm_open
#endif
#ifndef LoadGameForm_close
#define LoadGameForm_close CommandForm_close
#endif
#ifndef LoadGameForm_getSourceId
#define LoadGameForm_getSourceId CommandForm_getSourceId
#endif
#ifndef LoadGameForm_addCommand
#define LoadGameForm_addCommand CommandForm_addCommand
#endif
#ifndef LoadGameForm_removeAllCommands
#define LoadGameForm_removeAllCommands CommandForm_removeAllCommands
#endif
#ifndef LoadGameForm_appendItem
#define LoadGameForm_appendItem Form_appendItem
#endif
#ifndef LoadGameForm_appendImage
#define LoadGameForm_appendImage Form_appendImage
#endif
#ifndef LoadGameForm_append
#define LoadGameForm_append Form_append
#endif
#ifndef LoadGameForm_delete
#define LoadGameForm_delete Form_delete
#endif
#ifndef LoadGameForm_deleteAll
#define LoadGameForm_deleteAll Form_deleteAll
#endif
#ifndef LoadGameForm_get
#define LoadGameForm_get Form_get
#endif
#ifndef LoadGameForm_getHeight
#define LoadGameForm_getHeight Form_getHeight
#endif
#ifndef LoadGameForm_getWidth
#define LoadGameForm_getWidth Form_getWidth
#endif
#ifndef LoadGameForm_insert
#define LoadGameForm_insert Form_insert
#endif
#ifndef LoadGameForm_set
#define LoadGameForm_set Form_set
#endif
#ifndef LoadGameForm_setItemStateListener
#define LoadGameForm_setItemStateListener Form_setItemStateListener
#endif
#ifndef LoadGameForm_size
#define LoadGameForm_size Form_size
#endif
#ifndef LoadGameForm_paintContent
#define LoadGameForm_paintContent Form_paintContent
#endif
#ifndef LoadGameForm_fireItemStateListener
#define LoadGameForm_fireItemStateListener Form_fireItemStateListener
#endif
#ifndef LoadGameForm_fireFocusedItemStateListener
#define LoadGameForm_fireFocusedItemStateListener Form_fireFocusedItemStateListener
#endif
#ifndef LoadGameForm_hideNotify
#define LoadGameForm_hideNotify Form_hideNotify
#endif
#ifndef LoadGameForm_keyPressed
#define LoadGameForm_keyPressed Form_keyPressed
#endif
#ifndef LoadGameForm_showNotify
#define LoadGameForm_showNotify Form_showNotify
#endif
#ifndef LoadGameForm_traverse
#define LoadGameForm_traverse Form_traverse
#endif
#ifndef LoadGameForm_getTopVisibleIndex
#define LoadGameForm_getTopVisibleIndex Form_getTopVisibleIndex
#endif
#ifndef LoadGameForm_getBottomVisibleIndex
#define LoadGameForm_getBottomVisibleIndex Form_getBottomVisibleIndex
#endif
#ifndef LoadGameForm_getHeightToItem
#define LoadGameForm_getHeightToItem Form_getHeightToItem
#endif
#ifndef LoadGameForm_verifyItem
#define LoadGameForm_verifyItem Form_verifyItem
#endif
#ifndef LoadGameForm_verifyItemNum
#define LoadGameForm_verifyItemNum Form_verifyItemNum
#endif
#ifndef LoadGameForm_getCommands
#define LoadGameForm_getCommands Form_getCommands
#endif
#ifndef LoadGameForm_scroll
#define LoadGameForm_scroll Screen_scroll
#endif
#ifndef LoadGameForm_traverse
#define LoadGameForm_traverse Screen_traverse
#endif
#ifndef LoadGameForm_keyPressed
#define LoadGameForm_keyPressed Screen_keyPressed
#endif
#ifndef LoadGameForm_hideNotify
#define LoadGameForm_hideNotify Screen_hideNotify
#endif
#ifndef LoadGameForm_keyRepeated
#define LoadGameForm_keyRepeated Screen_keyRepeated
#endif
#ifndef LoadGameForm_paint
#define LoadGameForm_paint Screen_paint
#endif
#ifndef LoadGameForm_paintContent
#define LoadGameForm_paintContent Screen_paintContent
#endif
#ifndef LoadGameForm_repaint
#define LoadGameForm_repaint Screen_repaint
#endif
#ifndef LoadGameForm_showNotify
#define LoadGameForm_showNotify Screen_showNotify
#endif
#ifndef LoadGameForm_setUI
#define LoadGameForm_setUI Displayable_setUI
#endif
#ifndef LoadGameForm_getUI
#define LoadGameForm_getUI Displayable_getUI
#endif
#ifndef LoadGameForm_addCommand
#define LoadGameForm_addCommand Displayable_addCommand
#endif
#ifndef LoadGameForm_removeCommand
#define LoadGameForm_removeCommand Displayable_removeCommand
#endif
#ifndef LoadGameForm_getWidth
#define LoadGameForm_getWidth Displayable_getWidth
#endif
#ifndef LoadGameForm_getHeight
#define LoadGameForm_getHeight Displayable_getHeight
#endif
#ifndef LoadGameForm_isShown
#define LoadGameForm_isShown Displayable_isShown
#endif
#ifndef LoadGameForm_getTicker
#define LoadGameForm_getTicker Displayable_getTicker
#endif
#ifndef LoadGameForm_setTicker
#define LoadGameForm_setTicker Displayable_setTicker
#endif
#ifndef LoadGameForm_getTitle
#define LoadGameForm_getTitle Displayable_getTitle
#endif
#ifndef LoadGameForm_setTitle
#define LoadGameForm_setTitle Displayable_setTitle
#endif
#ifndef LoadGameForm_setCommandListener
#define LoadGameForm_setCommandListener Displayable_setCommandListener
#endif
#ifndef LoadGameForm_getCommandListener
#define LoadGameForm_getCommandListener Displayable_getCommandListener
#endif
#ifndef LoadGameForm_getCommands
#define LoadGameForm_getCommands Displayable_getCommands
#endif
#ifndef LoadGameForm_setFullScreenMode
#define LoadGameForm_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef LoadGameForm_isFullScreenMode
#define LoadGameForm_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef LoadGameForm_hideNotify
#define LoadGameForm_hideNotify Displayable_hideNotify
#endif
#ifndef LoadGameForm_hideNotifyForDisplay
#define LoadGameForm_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef LoadGameForm_keyPressed
#define LoadGameForm_keyPressed Displayable_keyPressed
#endif
#ifndef LoadGameForm_keyRepeated
#define LoadGameForm_keyRepeated Displayable_keyRepeated
#endif
#ifndef LoadGameForm_keyReleased
#define LoadGameForm_keyReleased Displayable_keyReleased
#endif
#ifndef LoadGameForm_pointerPressed
#define LoadGameForm_pointerPressed Displayable_pointerPressed
#endif
#ifndef LoadGameForm_pointerReleased
#define LoadGameForm_pointerReleased Displayable_pointerReleased
#endif
#ifndef LoadGameForm_pointerDragged
#define LoadGameForm_pointerDragged Displayable_pointerDragged
#endif
#ifndef LoadGameForm_paint
#define LoadGameForm_paint Displayable_paint
#endif
#ifndef LoadGameForm_repaint
#define LoadGameForm_repaint Displayable_repaint
#endif
#ifndef LoadGameForm_repaintXYWH
#define LoadGameForm_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef LoadGameForm_sizeChanged
#define LoadGameForm_sizeChanged Displayable_sizeChanged
#endif
#ifndef LoadGameForm_sizeChangedForDisplay
#define LoadGameForm_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef LoadGameForm_showNotify
#define LoadGameForm_showNotify Displayable_showNotify
#endif
#ifndef LoadGameForm_showNotifyForDisplay
#define LoadGameForm_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LoadGameForm_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LoadGameForm_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_LOADGAMEFORM_H
