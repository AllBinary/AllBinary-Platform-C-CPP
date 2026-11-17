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
// package org.allbinary.game.displayable.screen

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Command.h"
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/TextField.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/form/item/CustomTextBox.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/graphics/paint/SimpleTextPaintable.h"
#include "org/allbinary/input/event/VirtualKeyboardEventHandler.h"

typedef struct LicenseRegistrationTextBox LicenseRegistrationTextBox;
struct LicenseRegistrationTextBox {
    CustomTextBox base;
    LogUtil* logUtil;
    Paintable* pleaseWaitPaintable;
    Paintable* paintable;
};

Command* LicenseRegistrationTextBox_DISPLAY_COMMAND;
Command* LicenseRegistrationTextBox_SUBMIT_COMMAND;

LicenseRegistrationTextBox* LicenseRegistrationTextBox_new(CommandListener* cmdListener, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void LicenseRegistrationTextBox_init(LicenseRegistrationTextBox* this, CommandListener* cmdListener, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);
void LicenseRegistrationTextBox_initCommands(LicenseRegistrationTextBox* this, CommandListener* cmdListener);
void LicenseRegistrationTextBox_open(LicenseRegistrationTextBox* this);
void LicenseRegistrationTextBox_close(LicenseRegistrationTextBox* this);
void LicenseRegistrationTextBox_paint(LicenseRegistrationTextBox* this, Graphics* graphics);
void LicenseRegistrationTextBox_submit(LicenseRegistrationTextBox* this);

// Static fields with runtime initializers: call this once at startup
void LicenseRegistrationTextBox_staticInit(void) {
    LicenseRegistrationTextBox_DISPLAY_COMMAND = Command_new("Register", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 3);
    LicenseRegistrationTextBox_SUBMIT_COMMAND = Command_new("Submit", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 3);
}

static void LicenseRegistrationTextBox_initFields(LicenseRegistrationTextBox* this) {
    this->logUtil = LogUtil_getInstance();
    this->pleaseWaitPaintable = SimpleTextPaintable_new(this->base.commonStrings->PLEASE_WAIT, BasicColorFactory_getInstance()->WHITE);
    this->paintable = NullPaintable_getInstance();
}


void LicenseRegistrationTextBox_init(LicenseRegistrationTextBox* this, CommandListener* cmdListener, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
        CustomTextBox_init(&this->base, cmdListener, "Enter Registration Code:", StringUtil_getInstance()->EMPTY_STRING, 60, TextField_ANY, Font_getDefaultFont(), backgrounBasicColor, foregroundBasicColor);
        LicenseRegistrationTextBox_initFields(this);
}

LicenseRegistrationTextBox* LicenseRegistrationTextBox_new(CommandListener* cmdListener, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    LicenseRegistrationTextBox* this = calloc(1, sizeof(LicenseRegistrationTextBox));
    LicenseRegistrationTextBox_init(this, cmdListener, backgrounBasicColor, foregroundBasicColor);
    return this;
}


void LicenseRegistrationTextBox_initCommands(LicenseRegistrationTextBox* this, CommandListener* cmdListener) {
        LicenseRegistrationTextBox_removeAllCommands(this);
        LicenseRegistrationTextBox_addCommand(this, GameCommandsFactory_getInstance()->CLOSE_AND_SHOW_GAME_CANVAS);
        LicenseRegistrationTextBox_addCommand(this, GameCommandsFactory_getInstance()->TOGGLE_KEYBOARD);
        LicenseRegistrationTextBox_addCommand(this, LicenseRegistrationTextBox_SUBMIT_COMMAND);
        LicenseRegistrationTextBox_setCommandListener(this, cmdListener);
}


void LicenseRegistrationTextBox_open(LicenseRegistrationTextBox* this) {
        JAVA_TRY {
            VirtualKeyboardEventHandler* virtualKeyboardEventHandler = VirtualKeyboardEventHandler_getInstance();
            VirtualKeyboardEventHandler_fireEvent(virtualKeyboardEventHandler, virtualKeyboardEventHandler->SHOW_EVENT);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, this, "open", e);
        } JAVA_END_TRY;
        CustomTextBox_open((&this->base));
        this->paintable = NullPaintable_getInstance();
        LicenseRegistrationTextBox_repaint(this);
}


// throws Exception
void LicenseRegistrationTextBox_close(LicenseRegistrationTextBox* this) {
        JAVA_TRY {
            VirtualKeyboardEventHandler* virtualKeyboardEventHandler = VirtualKeyboardEventHandler_getInstance();
            VirtualKeyboardEventHandler_fireEvent(virtualKeyboardEventHandler, virtualKeyboardEventHandler->HIDE_EVENT);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, this, "open", e);
        } JAVA_END_TRY;
        this->paintable = this->pleaseWaitPaintable;
        LicenseRegistrationTextBox_repaint(this);
        CustomTextBox_close((&this->base));
}


void LicenseRegistrationTextBox_paint(LicenseRegistrationTextBox* this, Graphics* graphics) {
        CustomTextBox_paint((&this->base), graphics);
        Paintable_paint(this->paintable, graphics);
}


void LicenseRegistrationTextBox_submit(LicenseRegistrationTextBox* this) {
        CommandListener* commandListener = LicenseRegistrationTextBox_getCustomCommandListener(this);
        CommandListener_commandAction(commandListener, LicenseRegistrationTextBox_SUBMIT_COMMAND, this);
}

