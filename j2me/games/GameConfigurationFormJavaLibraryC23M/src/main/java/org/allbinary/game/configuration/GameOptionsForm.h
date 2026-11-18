#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMEOPTIONSFORM_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_GAMEOPTIONSFORM_H
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
typedef struct GameConfigurationTextInput GameConfigurationTextInput;
typedef struct GameConfigurationSingleton GameConfigurationSingleton;
typedef struct GameConfiguration GameConfiguration;
typedef struct GameConfigurationGauge GameConfigurationGauge;
typedef struct GameConfigurationUtil GameConfigurationUtil;
typedef struct GameConfigurationCentral GameConfigurationCentral;
typedef struct Choice Choice;
typedef struct Command Command;
typedef struct CommandListener CommandListener;
typedef struct Item Item;
typedef struct TextField TextField;
typedef struct MIDPUtil MIDPUtil;
typedef struct GameCommandsFactory GameCommandsFactory;
typedef struct GameFeatureChoiceGroups GameFeatureChoiceGroups;
typedef struct GameFeatureFormUtil GameFeatureFormUtil;
typedef struct GameFeatureItemCommandListener GameFeatureItemCommandListener;
typedef struct GameFeatureItemStateListener GameFeatureItemStateListener;
typedef struct SensorFeatureFactory SensorFeatureFactory;
typedef struct GameConfigurationPersistanceSingleton GameConfigurationPersistanceSingleton;
typedef struct KeyValuePersistance KeyValuePersistance;
typedef struct BasicColor BasicColor;
typedef struct MyCommandsFactory MyCommandsFactory;
typedef struct CommandForm CommandForm;
typedef struct OrientationData OrientationData;
typedef struct StringMaker StringMaker;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct BasicArrayList BasicArrayList;
typedef struct HashtableUtil HashtableUtil;
typedef struct StdUtil StdUtil;
typedef struct ABHashtable ABHashtable;
#if __has_include("org/allbinary/MIDPUtil.h")
#include "org/allbinary/MIDPUtil.h"
#endif
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#include "java/lang/Integer.h"

typedef struct GameOptionsForm GameOptionsForm;
struct GameOptionsForm {
    CommandForm base;
    MIDPUtil* meUtil;
};


GameOptionsForm* GameOptionsForm_new(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void GameOptionsForm_init(GameOptionsForm* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void GameOptionsForm_closeClientInformation(GameOptionsForm* this, AbeClientInformationInterface* abeClientInformation);




void GameOptionsForm_initCommands(GameOptionsForm* this, CommandListener* cmdListener);

void GameOptionsForm_save(GameOptionsForm* this, AbeClientInformationInterface* abeClientInformation);
#define GameOptionsForm_new4 GameOptionsForm_new
#define GameOptionsForm_init4 GameOptionsForm_init
#ifndef GameOptionsForm_getNullCommandForm
#define GameOptionsForm_getNullCommandForm CommandForm_getNullCommandForm
#endif
#ifndef GameOptionsForm_open
#define GameOptionsForm_open CommandForm_open
#endif
#ifndef GameOptionsForm_close
#define GameOptionsForm_close CommandForm_close
#endif
#ifndef GameOptionsForm_update
#define GameOptionsForm_update CommandForm_update
#endif
#ifndef GameOptionsForm_getSourceId
#define GameOptionsForm_getSourceId CommandForm_getSourceId
#endif
#ifndef GameOptionsForm_addCommand
#define GameOptionsForm_addCommand CommandForm_addCommand
#endif
#ifndef GameOptionsForm_removeAllCommands
#define GameOptionsForm_removeAllCommands CommandForm_removeAllCommands
#endif
#ifndef GameOptionsForm_appendItem
#define GameOptionsForm_appendItem Form_appendItem
#endif
#ifndef GameOptionsForm_appendImage
#define GameOptionsForm_appendImage Form_appendImage
#endif
#ifndef GameOptionsForm_append
#define GameOptionsForm_append Form_append
#endif
#ifndef GameOptionsForm_delete
#define GameOptionsForm_delete Form_delete
#endif
#ifndef GameOptionsForm_deleteAll
#define GameOptionsForm_deleteAll Form_deleteAll
#endif
#ifndef GameOptionsForm_get
#define GameOptionsForm_get Form_get
#endif
#ifndef GameOptionsForm_getHeight
#define GameOptionsForm_getHeight Form_getHeight
#endif
#ifndef GameOptionsForm_getWidth
#define GameOptionsForm_getWidth Form_getWidth
#endif
#ifndef GameOptionsForm_insert
#define GameOptionsForm_insert Form_insert
#endif
#ifndef GameOptionsForm_set
#define GameOptionsForm_set Form_set
#endif
#ifndef GameOptionsForm_setItemStateListener
#define GameOptionsForm_setItemStateListener Form_setItemStateListener
#endif
#ifndef GameOptionsForm_size
#define GameOptionsForm_size Form_size
#endif
#ifndef GameOptionsForm_paintContent
#define GameOptionsForm_paintContent Form_paintContent
#endif
#ifndef GameOptionsForm_fireItemStateListener
#define GameOptionsForm_fireItemStateListener Form_fireItemStateListener
#endif
#ifndef GameOptionsForm_fireFocusedItemStateListener
#define GameOptionsForm_fireFocusedItemStateListener Form_fireFocusedItemStateListener
#endif
#ifndef GameOptionsForm_hideNotify
#define GameOptionsForm_hideNotify Form_hideNotify
#endif
#ifndef GameOptionsForm_keyPressed
#define GameOptionsForm_keyPressed Form_keyPressed
#endif
#ifndef GameOptionsForm_showNotify
#define GameOptionsForm_showNotify Form_showNotify
#endif
#ifndef GameOptionsForm_traverse
#define GameOptionsForm_traverse Form_traverse
#endif
#ifndef GameOptionsForm_getTopVisibleIndex
#define GameOptionsForm_getTopVisibleIndex Form_getTopVisibleIndex
#endif
#ifndef GameOptionsForm_getBottomVisibleIndex
#define GameOptionsForm_getBottomVisibleIndex Form_getBottomVisibleIndex
#endif
#ifndef GameOptionsForm_getHeightToItem
#define GameOptionsForm_getHeightToItem Form_getHeightToItem
#endif
#ifndef GameOptionsForm_verifyItem
#define GameOptionsForm_verifyItem Form_verifyItem
#endif
#ifndef GameOptionsForm_verifyItemNum
#define GameOptionsForm_verifyItemNum Form_verifyItemNum
#endif
#ifndef GameOptionsForm_getCommands
#define GameOptionsForm_getCommands Form_getCommands
#endif
#ifndef GameOptionsForm_scroll
#define GameOptionsForm_scroll Screen_scroll
#endif
#ifndef GameOptionsForm_traverse
#define GameOptionsForm_traverse Screen_traverse
#endif
#ifndef GameOptionsForm_keyPressed
#define GameOptionsForm_keyPressed Screen_keyPressed
#endif
#ifndef GameOptionsForm_hideNotify
#define GameOptionsForm_hideNotify Screen_hideNotify
#endif
#ifndef GameOptionsForm_keyRepeated
#define GameOptionsForm_keyRepeated Screen_keyRepeated
#endif
#ifndef GameOptionsForm_paint
#define GameOptionsForm_paint Screen_paint
#endif
#ifndef GameOptionsForm_paintContent
#define GameOptionsForm_paintContent Screen_paintContent
#endif
#ifndef GameOptionsForm_repaint
#define GameOptionsForm_repaint Screen_repaint
#endif
#ifndef GameOptionsForm_showNotify
#define GameOptionsForm_showNotify Screen_showNotify
#endif
#ifndef GameOptionsForm_setUI
#define GameOptionsForm_setUI Displayable_setUI
#endif
#ifndef GameOptionsForm_getUI
#define GameOptionsForm_getUI Displayable_getUI
#endif
#ifndef GameOptionsForm_addCommand
#define GameOptionsForm_addCommand Displayable_addCommand
#endif
#ifndef GameOptionsForm_removeCommand
#define GameOptionsForm_removeCommand Displayable_removeCommand
#endif
#ifndef GameOptionsForm_getWidth
#define GameOptionsForm_getWidth Displayable_getWidth
#endif
#ifndef GameOptionsForm_getHeight
#define GameOptionsForm_getHeight Displayable_getHeight
#endif
#ifndef GameOptionsForm_isShown
#define GameOptionsForm_isShown Displayable_isShown
#endif
#ifndef GameOptionsForm_getTicker
#define GameOptionsForm_getTicker Displayable_getTicker
#endif
#ifndef GameOptionsForm_setTicker
#define GameOptionsForm_setTicker Displayable_setTicker
#endif
#ifndef GameOptionsForm_getTitle
#define GameOptionsForm_getTitle Displayable_getTitle
#endif
#ifndef GameOptionsForm_setTitle
#define GameOptionsForm_setTitle Displayable_setTitle
#endif
#ifndef GameOptionsForm_setCommandListener
#define GameOptionsForm_setCommandListener Displayable_setCommandListener
#endif
#ifndef GameOptionsForm_getCommandListener
#define GameOptionsForm_getCommandListener Displayable_getCommandListener
#endif
#ifndef GameOptionsForm_getCommands
#define GameOptionsForm_getCommands Displayable_getCommands
#endif
#ifndef GameOptionsForm_setFullScreenMode
#define GameOptionsForm_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef GameOptionsForm_isFullScreenMode
#define GameOptionsForm_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef GameOptionsForm_hideNotify
#define GameOptionsForm_hideNotify Displayable_hideNotify
#endif
#ifndef GameOptionsForm_hideNotifyForDisplay
#define GameOptionsForm_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef GameOptionsForm_keyPressed
#define GameOptionsForm_keyPressed Displayable_keyPressed
#endif
#ifndef GameOptionsForm_keyRepeated
#define GameOptionsForm_keyRepeated Displayable_keyRepeated
#endif
#ifndef GameOptionsForm_keyReleased
#define GameOptionsForm_keyReleased Displayable_keyReleased
#endif
#ifndef GameOptionsForm_pointerPressed
#define GameOptionsForm_pointerPressed Displayable_pointerPressed
#endif
#ifndef GameOptionsForm_pointerReleased
#define GameOptionsForm_pointerReleased Displayable_pointerReleased
#endif
#ifndef GameOptionsForm_pointerDragged
#define GameOptionsForm_pointerDragged Displayable_pointerDragged
#endif
#ifndef GameOptionsForm_paint
#define GameOptionsForm_paint Displayable_paint
#endif
#ifndef GameOptionsForm_repaint
#define GameOptionsForm_repaint Displayable_repaint
#endif
#ifndef GameOptionsForm_repaintXYWH
#define GameOptionsForm_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef GameOptionsForm_sizeChanged
#define GameOptionsForm_sizeChanged Displayable_sizeChanged
#endif
#ifndef GameOptionsForm_sizeChangedForDisplay
#define GameOptionsForm_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef GameOptionsForm_showNotify
#define GameOptionsForm_showNotify Displayable_showNotify
#endif
#ifndef GameOptionsForm_showNotifyForDisplay
#define GameOptionsForm_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameOptionsForm_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameOptionsForm_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_GAMEOPTIONSFORM_H
