#ifndef ORG_ALLBINARY_GAME_COMMANDS_GAMECOMMANDSFACTORY_H
#define ORG_ALLBINARY_GAME_COMMANDS_GAMECOMMANDSFACTORY_H
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
typedef struct Command Command;
typedef struct CanvasStrings CanvasStrings;
typedef struct NullUtil NullUtil;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("javax/microedition/lcdui/Command.h")
#include "javax/microedition/lcdui/Command.h"
#endif

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


GameCommandsFactory* GameCommandsFactory_new(void);

GameCommandsFactory* GameCommandsFactory_getInstance(void);

void GameCommandsFactory_init(GameCommandsFactory* this);
#define GameCommandsFactory_new0 GameCommandsFactory_new
#define GameCommandsFactory_init0 GameCommandsFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameCommandsFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameCommandsFactory_register(void);


#endif // ORG_ALLBINARY_GAME_COMMANDS_GAMECOMMANDSFACTORY_H
