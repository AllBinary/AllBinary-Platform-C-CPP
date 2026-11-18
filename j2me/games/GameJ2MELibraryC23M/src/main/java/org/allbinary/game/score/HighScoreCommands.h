#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDS_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDS_H
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
typedef struct StringUtil StringUtil;
#if __has_include("javax/microedition/lcdui/Command.h")
#include "javax/microedition/lcdui/Command.h"
#endif

typedef struct HighScoreCommands HighScoreCommands;
struct HighScoreCommands {
    Command* DISPLAY;
    Command* PERSONAL;
    Command* WORLD;
};


HighScoreCommands* HighScoreCommands_new(void);
void HighScoreCommands_init(HighScoreCommands* this);

HighScoreCommands* HighScoreCommands_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoreCommands_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HighScoreCommands_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDS_H
