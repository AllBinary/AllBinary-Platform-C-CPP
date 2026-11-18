#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_COMMANDFORM_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_COMMANDFORM_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
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
// package org.allbinary.graphics.displayable.screen

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ScreenRepaintProcessorFactory ScreenRepaintProcessorFactory;
typedef struct Command Command;
typedef struct CommandListener CommandListener;
typedef struct Form Form;
typedef struct NullCommandListener NullCommandListener;
typedef struct Processor Processor;
typedef struct MenuListener MenuListener;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct MyCommandInterface MyCommandInterface;
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
typedef struct StdUtil StdUtil;
typedef struct ABStack ABStack;
#include "javax/microedition/lcdui/Form.h"
#if __has_include("org/allbinary/canvas/Processor.h")
#include "org/allbinary/canvas/Processor.h"
#endif
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#include "org/allbinary/graphics/displayable/command/MyCommandInterface.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/ABStack.h")
#include "org/allbinary/util/ABStack.h"
#endif

typedef struct CommandForm CommandForm;
struct CommandForm {
    Form base;
    MyCommandInterface MyCommandInterface_interface;
    MenuListener MenuListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    Processor* repaintProcessor;
    ABStack* commandStack;
};


CommandForm* CommandForm_new(CommandListener* commandListener, const char* formTitle, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

CommandForm* CommandForm_getNullCommandForm(void);

void CommandForm_init(CommandForm* this, CommandListener* commandListener, const char* formTitle, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void CommandForm_initCommands(CommandForm* this, CommandListener* cmdListener);

void CommandForm_open(CommandForm* this);

void CommandForm_close(CommandForm* this);

void CommandForm_update(CommandForm* this);

int32_t CommandForm_getSourceId(CommandForm* this);

void CommandForm_addCommand(CommandForm* this, Command* command);

void CommandForm_removeAllCommands(CommandForm* this);
#define CommandForm_new4 CommandForm_new
#define CommandForm_init4 CommandForm_init
#ifndef CommandForm_appendItem
#define CommandForm_appendItem Form_appendItem
#endif
#ifndef CommandForm_appendImage
#define CommandForm_appendImage Form_appendImage
#endif
#ifndef CommandForm_append
#define CommandForm_append Form_append
#endif
#ifndef CommandForm_delete
#define CommandForm_delete Form_delete
#endif
#ifndef CommandForm_deleteAll
#define CommandForm_deleteAll Form_deleteAll
#endif
#ifndef CommandForm_get
#define CommandForm_get Form_get
#endif
#ifndef CommandForm_getHeight
#define CommandForm_getHeight Form_getHeight
#endif
#ifndef CommandForm_getWidth
#define CommandForm_getWidth Form_getWidth
#endif
#ifndef CommandForm_insert
#define CommandForm_insert Form_insert
#endif
#ifndef CommandForm_set
#define CommandForm_set Form_set
#endif
#ifndef CommandForm_setItemStateListener
#define CommandForm_setItemStateListener Form_setItemStateListener
#endif
#ifndef CommandForm_size
#define CommandForm_size Form_size
#endif
#ifndef CommandForm_paintContent
#define CommandForm_paintContent Form_paintContent
#endif
#ifndef CommandForm_fireItemStateListener
#define CommandForm_fireItemStateListener Form_fireItemStateListener
#endif
#ifndef CommandForm_fireFocusedItemStateListener
#define CommandForm_fireFocusedItemStateListener Form_fireFocusedItemStateListener
#endif
#ifndef CommandForm_hideNotify
#define CommandForm_hideNotify Form_hideNotify
#endif
#ifndef CommandForm_keyPressed
#define CommandForm_keyPressed Form_keyPressed
#endif
#ifndef CommandForm_showNotify
#define CommandForm_showNotify Form_showNotify
#endif
#ifndef CommandForm_traverse
#define CommandForm_traverse Form_traverse
#endif
#ifndef CommandForm_getTopVisibleIndex
#define CommandForm_getTopVisibleIndex Form_getTopVisibleIndex
#endif
#ifndef CommandForm_getBottomVisibleIndex
#define CommandForm_getBottomVisibleIndex Form_getBottomVisibleIndex
#endif
#ifndef CommandForm_getHeightToItem
#define CommandForm_getHeightToItem Form_getHeightToItem
#endif
#ifndef CommandForm_verifyItem
#define CommandForm_verifyItem Form_verifyItem
#endif
#ifndef CommandForm_verifyItemNum
#define CommandForm_verifyItemNum Form_verifyItemNum
#endif
#ifndef CommandForm_getCommands
#define CommandForm_getCommands Form_getCommands
#endif
#ifndef CommandForm_scroll
#define CommandForm_scroll Screen_scroll
#endif
#ifndef CommandForm_traverse
#define CommandForm_traverse Screen_traverse
#endif
#ifndef CommandForm_keyPressed
#define CommandForm_keyPressed Screen_keyPressed
#endif
#ifndef CommandForm_hideNotify
#define CommandForm_hideNotify Screen_hideNotify
#endif
#ifndef CommandForm_keyRepeated
#define CommandForm_keyRepeated Screen_keyRepeated
#endif
#ifndef CommandForm_paint
#define CommandForm_paint Screen_paint
#endif
#ifndef CommandForm_paintContent
#define CommandForm_paintContent Screen_paintContent
#endif
#ifndef CommandForm_repaint
#define CommandForm_repaint Screen_repaint
#endif
#ifndef CommandForm_showNotify
#define CommandForm_showNotify Screen_showNotify
#endif
#ifndef CommandForm_setUI
#define CommandForm_setUI Displayable_setUI
#endif
#ifndef CommandForm_getUI
#define CommandForm_getUI Displayable_getUI
#endif
#ifndef CommandForm_removeCommand
#define CommandForm_removeCommand Displayable_removeCommand
#endif
#ifndef CommandForm_getWidth
#define CommandForm_getWidth Displayable_getWidth
#endif
#ifndef CommandForm_getHeight
#define CommandForm_getHeight Displayable_getHeight
#endif
#ifndef CommandForm_isShown
#define CommandForm_isShown Displayable_isShown
#endif
#ifndef CommandForm_getTicker
#define CommandForm_getTicker Displayable_getTicker
#endif
#ifndef CommandForm_setTicker
#define CommandForm_setTicker Displayable_setTicker
#endif
#ifndef CommandForm_getTitle
#define CommandForm_getTitle Displayable_getTitle
#endif
#ifndef CommandForm_setTitle
#define CommandForm_setTitle Displayable_setTitle
#endif
#ifndef CommandForm_setCommandListener
#define CommandForm_setCommandListener Displayable_setCommandListener
#endif
#ifndef CommandForm_getCommandListener
#define CommandForm_getCommandListener Displayable_getCommandListener
#endif
#ifndef CommandForm_getCommands
#define CommandForm_getCommands Displayable_getCommands
#endif
#ifndef CommandForm_setFullScreenMode
#define CommandForm_setFullScreenMode Displayable_setFullScreenMode
#endif
#ifndef CommandForm_isFullScreenMode
#define CommandForm_isFullScreenMode Displayable_isFullScreenMode
#endif
#ifndef CommandForm_hideNotify
#define CommandForm_hideNotify Displayable_hideNotify
#endif
#ifndef CommandForm_hideNotifyForDisplay
#define CommandForm_hideNotifyForDisplay Displayable_hideNotifyForDisplay
#endif
#ifndef CommandForm_keyPressed
#define CommandForm_keyPressed Displayable_keyPressed
#endif
#ifndef CommandForm_keyRepeated
#define CommandForm_keyRepeated Displayable_keyRepeated
#endif
#ifndef CommandForm_keyReleased
#define CommandForm_keyReleased Displayable_keyReleased
#endif
#ifndef CommandForm_pointerPressed
#define CommandForm_pointerPressed Displayable_pointerPressed
#endif
#ifndef CommandForm_pointerReleased
#define CommandForm_pointerReleased Displayable_pointerReleased
#endif
#ifndef CommandForm_pointerDragged
#define CommandForm_pointerDragged Displayable_pointerDragged
#endif
#ifndef CommandForm_paint
#define CommandForm_paint Displayable_paint
#endif
#ifndef CommandForm_repaint
#define CommandForm_repaint Displayable_repaint
#endif
#ifndef CommandForm_repaintXYWH
#define CommandForm_repaintXYWH Displayable_repaintXYWH
#endif
#ifndef CommandForm_sizeChanged
#define CommandForm_sizeChanged Displayable_sizeChanged
#endif
#ifndef CommandForm_sizeChangedForDisplay
#define CommandForm_sizeChangedForDisplay Displayable_sizeChangedForDisplay
#endif
#ifndef CommandForm_showNotify
#define CommandForm_showNotify Displayable_showNotify
#endif
#ifndef CommandForm_showNotifyForDisplay
#define CommandForm_showNotifyForDisplay Displayable_showNotifyForDisplay
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CommandForm_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CommandForm_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_COMMANDFORM_H
