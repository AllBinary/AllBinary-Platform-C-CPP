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
// #include "javax/microedition/lcdui/Command.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct HighScoreCommands HighScoreCommands;
struct HighScoreCommands {
    Command* DISPLAY;
    Command* PERSONAL;
    Command* WORLD;
};

static HighScoreCommands* HighScoreCommands_instance;

HighScoreCommands* HighScoreCommands_new(void);
HighScoreCommands* HighScoreCommands_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void HighScoreCommands_staticInit(void) {
    HighScoreCommands_instance = HighScoreCommands_new();
}

static void HighScoreCommands_initFields(HighScoreCommands* this) {
    this->DISPLAY = Command_new("Scores", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    this->PERSONAL = Command_new("Personal", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
    this->WORLD = Command_new("World", StringUtil_getInstance()->EMPTY_STRING, Command_SCREEN, 1);
}

void HighScoreCommands_init(HighScoreCommands* this) {
    HighScoreCommands_initFields(this);
}

HighScoreCommands* HighScoreCommands_new(void) {
    HighScoreCommands* this = calloc(1, sizeof(HighScoreCommands));
    HighScoreCommands_init(this);
    return this;
}


HighScoreCommands* HighScoreCommands_getInstance(void) {
        return HighScoreCommands_instance;
}

