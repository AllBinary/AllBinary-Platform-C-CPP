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
// #include "javax/microedition/lcdui/Choice.h"
// #include "javax/microedition/lcdui/Command.h"
// #include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFormUtil.h"
#include "org/allbinary/game/configuration/feature/InGameFeatureChoiceGroups.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct InGameOptionsForm InGameOptionsForm;
struct InGameOptionsForm {
    CommandForm base;
};

Command* InGameOptionsForm_DISPLAY;
Command* InGameOptionsForm_SAVE;
Command* InGameOptionsForm_DEFAULT;

InGameOptionsForm* InGameOptionsForm_new(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void InGameOptionsForm_init(InGameOptionsForm* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);
void InGameOptionsForm_initCommands(InGameOptionsForm* this, CommandListener* cmdListener);

// Static fields with runtime initializers: call this once at startup
void InGameOptionsForm_staticInit(void) {
    InGameOptionsForm_DISPLAY = Command_new("Options In Game", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    InGameOptionsForm_SAVE = Command_new("Save", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    InGameOptionsForm_DEFAULT = Command_new("Default", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
}


void InGameOptionsForm_init(InGameOptionsForm* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
        CommandForm_init(&this->base, commandListener, title, backgrounBasicColor, foregroundBasicColor);
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        GameFeatureFormUtil* gameFeatureFormUtil = GameFeatureFormUtil_getInstance();
        GameFeatureFormUtil_addChoiceGroup(gameFeatureFormUtil, this, JAVA_CALL(InGameFeatureChoiceGroups_getExclusiveInstance(), get), Choice_EXCLUSIVE);
        GameFeatureFormUtil_addChoiceGroup(gameFeatureFormUtil, this, JAVA_CALL(InGameFeatureChoiceGroups_getMultipleInstance(), get), Choice_MULTIPLE);
        InGameOptionsForm_initCommands(this, commandListener);
}

InGameOptionsForm* InGameOptionsForm_new(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    InGameOptionsForm* this = calloc(1, sizeof(InGameOptionsForm));
    InGameOptionsForm_init(this, commandListener, title, backgrounBasicColor, foregroundBasicColor);
    return this;
}


void InGameOptionsForm_initCommands(InGameOptionsForm* this, CommandListener* cmdListener) {
        InGameOptionsForm_removeAllCommands(this);
        InGameOptionsForm_addCommand(this, GameCommandsFactory_getInstance()->CLOSE_AND_SHOW_GAME_CANVAS);
        InGameOptionsForm_addCommand(this, InGameOptionsForm_DEFAULT);
        InGameOptionsForm_setCommandListener(this, cmdListener);
}

