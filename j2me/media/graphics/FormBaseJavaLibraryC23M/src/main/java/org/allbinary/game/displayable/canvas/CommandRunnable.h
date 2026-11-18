#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDRUNNABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDRUNNABLE_H
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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CommandFormInputProcessor CommandFormInputProcessor;
typedef struct Command Command;
typedef struct CommandListener CommandListener;
typedef struct MyCanvas MyCanvas;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("javax/microedition/lcdui/Command.h")
#include "javax/microedition/lcdui/Command.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "java/lang/Runnable.h"
#if __has_include("org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h"
#endif

typedef struct CommandRunnable CommandRunnable;
struct CommandRunnable {
    Runnable Runnable_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CommandFormInputProcessor* commandFormInputProcessor;
    Command* command;
};


CommandRunnable* CommandRunnable_new(CommandFormInputProcessor* commandFormInputProcessor, Command* command);

void CommandRunnable_init(CommandRunnable* this, CommandFormInputProcessor* commandFormInputProcessor, Command* command);

void CommandRunnable_run(CommandRunnable* this);
#define CommandRunnable_new2 CommandRunnable_new
#define CommandRunnable_init2 CommandRunnable_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CommandRunnable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CommandRunnable_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDRUNNABLE_H
