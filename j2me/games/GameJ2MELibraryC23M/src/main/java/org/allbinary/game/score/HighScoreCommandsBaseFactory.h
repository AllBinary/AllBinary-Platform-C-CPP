#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSBASEFACTORY_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSBASEFACTORY_H
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
// package org.allbinary.game.score

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Command Command;
typedef struct LogUtil LogUtil;
#if __has_include("javax/microedition/lcdui/Command.h")
#include "javax/microedition/lcdui/Command.h"
#endif
// #include "org/allbinary/J2MEUtil.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct HighScoreCommandsBaseFactory HighScoreCommandsBaseFactory;
struct HighScoreCommandsBaseFactory {
    LogUtil* logUtil;
    Command** HIGH_SCORE_COMMANDS;
};


HighScoreCommandsBaseFactory* HighScoreCommandsBaseFactory_new(Command** HIGH_SCORE_COMMANDS);

void HighScoreCommandsBaseFactory_init(HighScoreCommandsBaseFactory* this, Command** HIGH_SCORE_COMMANDS);

bool HighScoreCommandsBaseFactory_isHighScoreCommand(HighScoreCommandsBaseFactory* this, Command* command);

int32_t HighScoreCommandsBaseFactory_getIndex(HighScoreCommandsBaseFactory* this, Command* command);
#define HighScoreCommandsBaseFactory_new1 HighScoreCommandsBaseFactory_new
#define HighScoreCommandsBaseFactory_init1 HighScoreCommandsBaseFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoreCommandsBaseFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HighScoreCommandsBaseFactory_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSBASEFACTORY_H
