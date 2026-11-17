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
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/TextField.h"
#include "org/allbinary/MIDPUtil.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#include "org/allbinary/logic/ABSystemWrapper.h"

typedef struct SaveGameForm SaveGameForm;
struct SaveGameForm {
    CommandForm base;
    MIDPUtil* meUtil;
};

static CommandForm* SaveGameForm_FORM;

SaveGameForm* SaveGameForm_new(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);
CommandForm* SaveGameForm_createForm(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);
CommandForm* SaveGameForm_getInstance(void);

void SaveGameForm_init(SaveGameForm* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);
void SaveGameForm_initCommands(SaveGameForm* this, CommandListener* cmdListener);

// Static fields with runtime initializers: call this once at startup
void SaveGameForm_staticInit(void) {
    SaveGameForm_FORM = CommandForm_getNullCommandForm();
}

static void SaveGameForm_initFields(SaveGameForm* this) {
    this->meUtil = MIDPUtil_getInstance();
}


// throws Exception
CommandForm* SaveGameForm_createForm(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
        SaveGameForm_FORM = SaveGameForm_new(commandListener, title, backgrounBasicColor, foregroundBasicColor);
        return SaveGameForm_FORM;
}


CommandForm* SaveGameForm_getInstance(void) {
        return SaveGameForm_FORM;
}


void SaveGameForm_init(SaveGameForm* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
        CommandForm_init(&this->base, commandListener, title, backgrounBasicColor, foregroundBasicColor);
        SaveGameForm_initFields(this);
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        const char* timeString = java_string_of(ABSystemWrapper_currentTimeMillis(ABSystemWrapper_getInstance()));
        MIDPUtil_appendItem(this->meUtil, this, TextField_new("Name: ", timeString, 30, TextField_ANY));
        SaveGameForm_initCommands(this, commandListener);
}

SaveGameForm* SaveGameForm_new(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    SaveGameForm* this = calloc(1, sizeof(SaveGameForm));
    SaveGameForm_init(this, commandListener, title, backgrounBasicColor, foregroundBasicColor);
    return this;
}


void SaveGameForm_initCommands(SaveGameForm* this, CommandListener* cmdListener) {
        GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
        SaveGameForm_removeAllCommands(this);
        SaveGameForm_addCommand(this, gameCommandsFactory->SAVE);
        SaveGameForm_addCommand(this, gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS);
        SaveGameForm_setCommandListener(this, cmdListener);
}

