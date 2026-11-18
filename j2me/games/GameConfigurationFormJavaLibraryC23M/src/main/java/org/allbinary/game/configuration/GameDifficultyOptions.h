#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMEDIFFICULTYOPTIONS_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_GAMEDIFFICULTYOPTIONS_H
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
typedef struct NullImage NullImage;
typedef struct MIDPUtil MIDPUtil;
typedef struct GameCommandsFactory GameCommandsFactory;
typedef struct GameDifficultyFactory GameDifficultyFactory;
typedef struct BasicColor BasicColor;
typedef struct CommandForm CommandForm;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/MIDPUtil.h")
#include "org/allbinary/MIDPUtil.h"
#endif
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "java/lang/Integer.h"

typedef struct GameDifficultyOptions GameDifficultyOptions;
struct GameDifficultyOptions {
    CommandForm base;
    MIDPUtil* meUtil;
    BasicArrayList* list;
};


GameDifficultyOptions* GameDifficultyOptions_new(CommandListener* commandListener, const char* title, BasicArrayList* list, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void GameDifficultyOptions_init(GameDifficultyOptions* this, CommandListener* commandListener, const char* title, BasicArrayList* list, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void GameDifficultyOptions_open(GameDifficultyOptions* this);

void GameDifficultyOptions_close(GameDifficultyOptions* this);

void GameDifficultyOptions_save(GameDifficultyOptions* this);

void GameDifficultyOptions_initCommands(GameDifficultyOptions* this, CommandListener* cmdListener);

void GameDifficultyOptions_update(GameDifficultyOptions* this);



void GameDifficultyOptions_setSelectedId(GameDifficultyOptions* this, int32_t id);

int32_t GameDifficultyOptions_getSelectedId(GameDifficultyOptions* this);

int32_t GameDifficultyOptions_getSelectedText(GameDifficultyOptions* this);
#define GameDifficultyOptions_new5 GameDifficultyOptions_new
#define GameDifficultyOptions_init5 GameDifficultyOptions_init
#ifndef GameDifficultyOptions_getNullCommandForm
#define GameDifficultyOptions_getNullCommandForm CommandForm_getNullCommandForm
#endif
#ifndef GameDifficultyOptions_getSourceId
#define GameDifficultyOptions_getSourceId CommandForm_getSourceId
#endif
#ifndef GameDifficultyOptions_addCommand
#define GameDifficultyOptions_addCommand CommandForm_addCommand
#endif
#ifndef GameDifficultyOptions_removeAllCommands
#define GameDifficultyOptions_removeAllCommands CommandForm_removeAllCommands
#endif
#ifndef GameDifficultyOptions_appendItem
#define GameDifficultyOptions_appendItem Form_appendItem
#endif
#ifndef GameDifficultyOptions_appendImage
#define GameDifficultyOptions_appendImage Form_appendImage
#endif
#ifndef GameDifficultyOptions_append
#define GameDifficultyOptions_append Form_append
#endif
#ifndef GameDifficultyOptions_delete
#define GameDifficultyOptions_delete Form_delete
#endif
#ifndef GameDifficultyOptions_deleteAll
#define GameDifficultyOptions_deleteAll Form_deleteAll
#endif
#ifndef GameDifficultyOptions_get
#define GameDifficultyOptions_get Form_get
#endif
#ifndef GameDifficultyOptions_getHeight
#define GameDifficultyOptions_getHeight Form_getHeight
#endif
#ifndef GameDifficultyOptions_getWidth
#define GameDifficultyOptions_getWidth Form_getWidth
#endif
#ifndef GameDifficultyOptions_insert
#define GameDifficultyOptions_insert Form_insert
#endif
#ifndef GameDifficultyOptions_set
#define GameDifficultyOptions_set Form_set
#endif
#ifndef GameDifficultyOptions_setItemStateListener
#define GameDifficultyOptions_setItemStateListener Form_setItemStateListener
#endif
#ifndef GameDifficultyOptions_size
#define GameDifficultyOptions_size Form_size
#endif
#ifndef GameDifficultyOptions_paintContent
#define GameDifficultyOptions_paintContent Form_paintContent
#endif
#ifndef GameDifficultyOptions_fireItemStateListener
#define GameDifficultyOptions_fireItemStateListener Form_fireItemStateListener
#endif
#ifndef GameDifficultyOptions_fireFocusedItemStateListener
#define GameDifficultyOptions_fireFocusedItemStateListener Form_fireFocusedItemStateListener
#endif
#ifndef GameDifficultyOptions_hideNotify
#define GameDifficultyOptions_hideNotify Form_hideNotify
#endif
#ifndef GameDifficultyOptions_keyPressed
#define GameDifficultyOptions_keyPressed Form_keyPressed
#endif
#ifndef GameDifficultyOptions_showNotify
#define GameDifficultyOptions_showNotify Form_showNotify
#endif
#ifndef GameDifficultyOptions_traverse
#define GameDifficultyOptions_traverse Form_traverse
#endif
#ifndef GameDifficultyOptions_getTopVisibleIndex
#define GameDifficultyOptions_getTopVisibleIndex Form_getTopVisibleIndex
#endif
#ifndef GameDifficultyOptions_getBottomVisibleIndex
#define GameDifficultyOptions_getBottomVisibleIndex Form_getBottomVisibleIndex
#endif
#ifndef GameDifficultyOptions_getHeightToItem
#define GameDifficultyOptions_getHeightToItem Form_getHeightToItem
#endif
#ifndef GameDifficultyOptions_verifyItem
#define GameDifficultyOptions_verifyItem Form_verifyItem
#endif
#ifndef GameDifficultyOptions_verifyItemNum
#define GameDifficultyOptions_verifyItemNum Form_verifyItemNum
#endif
#ifndef GameDifficultyOptions_getCommands
#define GameDifficultyOptions_getCommands Form_getCommands
#endif
#ifndef GameDifficultyOptions_scroll
#define GameDifficultyOptions_scroll Screen_scroll
#endif
#ifndef GameDifficultyOptions_traverse
#define GameDifficultyOptions_traverse Screen_traverse
#endif
#ifndef GameDifficultyOptions_keyPressed
#define GameDifficultyOptions_keyPressed Screen_keyPressed
#endif
#ifndef GameDifficultyOptions_hideNotify
#define GameDifficultyOptions_hideNotify Screen_hideNotify
#endif
#ifndef GameDifficultyOptions_keyRepeated
#define GameDifficultyOptions_keyRepeated Screen_keyRepeated
#endif
#ifndef GameDifficultyOptions_paint
#define GameDifficultyOptions_paint Screen_paint
#endif
#ifndef GameDifficultyOptions_paintContent
#define GameDifficultyOptions_paintContent Screen_paintContent
#endif
#ifndef GameDifficultyOptions_repaint
#define GameDifficultyOptions_repaint Screen_repaint
#endif
#ifndef GameDifficultyOptions_showNotify
#define GameDifficultyOptions_showNotify Screen_showNotify
#endif
#ifndef GameDifficultyOptions_setUI
#define GameDifficultyOptions_setUI Displayable_setUI
#endif
#ifndef GameDifficultyOptions_getUI
#define GameDifficultyOptions_getUI Displayable_getUI
#endif
#ifndef GameDifficultyOptions_addCommand
#define GameDifficultyOptions_addCommand Displayable_addCommand
#endif
#ifndef GameDifficultyOptions_removeCommand
#define GameDifficultyOptions_removeCommand Displayable_removeCommand
#endif
#ifndef GameDifficultyOptions_getWidth
#define GameDifficultyOptions_getWidth Displayable_getWidth
#endif
#ifndef GameDifficultyOptions_getHeight
#define GameDifficultyOptions_getHeight Displayable_getHeight
#endif
#ifndef GameDifficultyOptions_isShown
#define GameDifficultyOptions_isShown Displayable_isShown
#endif
#ifndef GameDifficultyOptions_getTicker
#define GameDifficultyOptions_getTicker Displayable_getTicker
#endif
#ifndef GameDifficultyOptions_setTicker
#define GameDifficultyOptions_setTicker Displayable_setTicker
#endif
#ifndef GameDifficultyOptions_getTitle
#define GameDifficultyOptions_getTitle Displayable_getTitle
#endif
#ifndef GameDifficultyOptions_setTitle
#define GameDifficultyOptions_setTitle Displayable_setTitle
#endif
#ifndef GameDifficultyOptions_setCommandListener
#define GameDifficultyOptions_setCommandListener Displayable_setCommandListener
#endif
#ifndef GameDifficultyOptions_getCommandListener
#define GameDifficultyOptions_getCommandListener Displayable_getCommandListener
#endif
#ifndef GameDifficultyOptions_getCommands
#define GameDifficultyOptions_getCommands Displayable_getCommands
#endif
#ifndef GameDifficultyOptions_setFullScreenMode
#define GameDifficultyOptions_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef GameDifficultyOptions_isFullScreenMode
#define GameDifficultyOptions_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef GameDifficultyOptions_hideNotify
#define GameDifficultyOptions_hideNotify Displayable_hideNotify
#endif
#ifndef GameDifficultyOptions_hideNotifyForDisplay
#define GameDifficultyOptions_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef GameDifficultyOptions_keyPressed
#define GameDifficultyOptions_keyPressed Displayable_keyPressed
#endif
#ifndef GameDifficultyOptions_keyRepeated
#define GameDifficultyOptions_keyRepeated Displayable_keyRepeated
#endif
#ifndef GameDifficultyOptions_keyReleased
#define GameDifficultyOptions_keyReleased Displayable_keyReleased
#endif
#ifndef GameDifficultyOptions_pointerPressed
#define GameDifficultyOptions_pointerPressed Displayable_pointerPressed
#endif
#ifndef GameDifficultyOptions_pointerReleased
#define GameDifficultyOptions_pointerReleased Displayable_pointerReleased
#endif
#ifndef GameDifficultyOptions_pointerDragged
#define GameDifficultyOptions_pointerDragged Displayable_pointerDragged
#endif
#ifndef GameDifficultyOptions_paint
#define GameDifficultyOptions_paint Displayable_paint
#endif
#ifndef GameDifficultyOptions_repaint
#define GameDifficultyOptions_repaint Displayable_repaint
#endif
#ifndef GameDifficultyOptions_repaintXYWH
#define GameDifficultyOptions_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef GameDifficultyOptions_sizeChanged
#define GameDifficultyOptions_sizeChanged Displayable_sizeChanged
#endif
#ifndef GameDifficultyOptions_sizeChangedForDisplay
#define GameDifficultyOptions_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef GameDifficultyOptions_showNotify
#define GameDifficultyOptions_showNotify Displayable_showNotify
#endif
#ifndef GameDifficultyOptions_showNotifyForDisplay
#define GameDifficultyOptions_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameDifficultyOptions_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameDifficultyOptions_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_GAMEDIFFICULTYOPTIONS_H
