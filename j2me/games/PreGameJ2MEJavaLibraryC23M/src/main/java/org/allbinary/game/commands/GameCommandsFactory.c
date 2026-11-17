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
// package org.allbinary.game.commands

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Command.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct GameCommandsFactory GameCommandsFactory;
struct GameCommandsFactory {
    Command* TOGGLE_FULLSCREEN;
    Command* TOGGLE_KEYBOARD;
    Command* SET_MENU_DISPLAYABLE;
    Command* APPLICATION_UPDATE;
    Command* DISPLAY_ABOUT;
    Command* OPEN_WEB_URL;
    Command* CLOSE_OPTIONS;
    Command* DISPLAY_OPTIONS;
    Command* START_TRACE;
    Command* STOP_TRACE;
    Command* DEFAULT_OPTIONS;
    Command* SHOW_GAME_CANVAS;
    Command* CLOSE_AND_SHOW_GAME_CANVAS;
    Command* QUIT_COMMAND;
    Command* RESTART_COMMAND;
    Command* DISPLAY_SAVE_FORM;
    Command* SAVE;
    Command* DISPLAY_LOAD_FORM;
    Command* LOAD_FILE;
    Command* DELETE_FILE;
    Command* EXIT_COMMAND;
    Command* EXIT_WITHOUT_PROGRESS_COMMAND;
    Command* START_COMMAND;
    Command* CONTINUE_COMMAND;
    Command* SELECT_COMMAND;
    Command* FEATURE_UPDATE;
    Command* BUY_COMMAND;
};

static Any* GameCommandsFactory_instance;

GameCommandsFactory* GameCommandsFactory_new(void);
GameCommandsFactory* GameCommandsFactory_getInstance(void);

void GameCommandsFactory_init(GameCommandsFactory* this);

// Static fields with runtime initializers: call this once at startup
void GameCommandsFactory_staticInit(void) {
    GameCommandsFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void GameCommandsFactory_initFields(GameCommandsFactory* this) {
    this->TOGGLE_FULLSCREEN = Command_new("Toggle FullScreen", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    this->TOGGLE_KEYBOARD = Command_new("Keyboard", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    this->SET_MENU_DISPLAYABLE = Command_new("Set Menu Displayable", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    this->APPLICATION_UPDATE = Command_new(CommonStrings_getInstance()->UPDATE, StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    this->DISPLAY_ABOUT = Command_new(CanvasStrings_getInstance()->ABOUT, StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 2);
    this->OPEN_WEB_URL = Command_new("Open Web URL", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 2);
    this->CLOSE_OPTIONS = Command_new("Back", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    this->DISPLAY_OPTIONS = Command_new(CanvasStrings_getInstance()->OPTIONS, StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 2);
    this->START_TRACE = Command_new("Start Trace", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    this->STOP_TRACE = Command_new("Stop Trace", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    this->DEFAULT_OPTIONS = Command_new("Default", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    this->SHOW_GAME_CANVAS = Command_new("Back to Game", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    this->CLOSE_AND_SHOW_GAME_CANVAS = Command_new("Back", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    this->QUIT_COMMAND = Command_new("Quit", StringUtil_getInstance()->EMPTY_STRING, Command_STOP, 1);
    this->RESTART_COMMAND = Command_new("Restart", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 0);
    this->DISPLAY_SAVE_FORM = Command_new("Save To", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 3);
    this->SAVE = Command_new("Save", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 3);
    this->DISPLAY_LOAD_FORM = Command_new("Load", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 3);
    this->LOAD_FILE = Command_new("Load File", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 3);
    this->DELETE_FILE = Command_new("Delete File", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    this->EXIT_COMMAND = Command_new("Exit", StringUtil_getInstance()->EMPTY_STRING, Command_EXIT, 2);
    this->EXIT_WITHOUT_PROGRESS_COMMAND = Command_new("Exit Without Progress", StringUtil_getInstance()->EMPTY_STRING, Command_EXIT, 2);
    this->START_COMMAND = Command_new(CommonStrings_getInstance()->START, StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    this->CONTINUE_COMMAND = Command_new("Continue", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    this->SELECT_COMMAND = Command_new("Select", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    this->FEATURE_UPDATE = Command_new("Feature Update", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    this->BUY_COMMAND = Command_new("BUY", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
}


GameCommandsFactory* GameCommandsFactory_getInstance(void) {
        if (GameCommandsFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            GameCommandsFactory_instance = GameCommandsFactory_new();
        }
        return ((GameCommandsFactory*) GameCommandsFactory_instance);
}


void GameCommandsFactory_init(GameCommandsFactory* this) {
    GameCommandsFactory_initFields(this);
}

GameCommandsFactory* GameCommandsFactory_new(void) {
    GameCommandsFactory* this = calloc(1, sizeof(GameCommandsFactory));
    GameCommandsFactory_init(this);
    return this;
}

