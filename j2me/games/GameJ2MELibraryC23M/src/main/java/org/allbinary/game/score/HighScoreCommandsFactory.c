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
#include "org/allbinary/game/score/HighScoreCommandsBaseFactory.h"

typedef struct HighScoreCommandsFactory HighScoreCommandsFactory;
struct HighScoreCommandsFactory {
    HighScoreCommandsBaseFactory base;
};

static HighScoreCommandsFactory* HighScoreCommandsFactory_instance;

HighScoreCommandsFactory* HighScoreCommandsFactory_new(void);
HighScoreCommandsFactory* HighScoreCommandsFactory_getInstance(void);

void HighScoreCommandsFactory_init(HighScoreCommandsFactory* this);

// Static fields with runtime initializers: call this once at startup
void HighScoreCommandsFactory_staticInit(void) {
    HighScoreCommandsFactory_instance = HighScoreCommandsFactory_new();
}


HighScoreCommandsFactory* HighScoreCommandsFactory_getInstance(void) {
        return HighScoreCommandsFactory_instance;
}


void HighScoreCommandsFactory_init(HighScoreCommandsFactory* this) {
        HighScoreCommandsBaseFactory_init(&this->base, ((Command**) java_array_from(sizeof(Command*), sizeof((Command*[]){ HighScoreCommands_getInstance()->PERSONAL, HighScoreCommands_getInstance()->WORLD }) / sizeof(Command*), (Command*[]){ HighScoreCommands_getInstance()->PERSONAL, HighScoreCommands_getInstance()->WORLD })));
}

HighScoreCommandsFactory* HighScoreCommandsFactory_new(void) {
    HighScoreCommandsFactory* this = calloc(1, sizeof(HighScoreCommandsFactory));
    HighScoreCommandsFactory_init(this);
    return this;
}

