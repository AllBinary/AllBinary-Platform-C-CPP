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
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct HighScoreCommandsBaseFactory HighScoreCommandsBaseFactory;
struct HighScoreCommandsBaseFactory {
    LogUtil* logUtil;
    Command** HIGH_SCORE_COMMANDS;
};


HighScoreCommandsBaseFactory* HighScoreCommandsBaseFactory_new(Command** HIGH_SCORE_COMMANDS);

void HighScoreCommandsBaseFactory_init(HighScoreCommandsBaseFactory* this, Command** HIGH_SCORE_COMMANDS);
bool HighScoreCommandsBaseFactory_isHighScoreCommand(HighScoreCommandsBaseFactory* this, Command* command);
int32_t HighScoreCommandsBaseFactory_getIndex(HighScoreCommandsBaseFactory* this, Command* command);

static void HighScoreCommandsBaseFactory_initFields(HighScoreCommandsBaseFactory* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void HighScoreCommandsBaseFactory_init(HighScoreCommandsBaseFactory* this, Command** HIGH_SCORE_COMMANDS) {
    HighScoreCommandsBaseFactory_initFields(this);
        this->HIGH_SCORE_COMMANDS = HIGH_SCORE_COMMANDS;
}

HighScoreCommandsBaseFactory* HighScoreCommandsBaseFactory_new(Command** HIGH_SCORE_COMMANDS) {
    HighScoreCommandsBaseFactory* this = calloc(1, sizeof(HighScoreCommandsBaseFactory));
    HighScoreCommandsBaseFactory_init(this, HIGH_SCORE_COMMANDS);
    return this;
}


bool HighScoreCommandsBaseFactory_isHighScoreCommand(HighScoreCommandsBaseFactory* this, Command* command) {
        for (int32_t index = java_array_length(this->HIGH_SCORE_COMMANDS) - 1; index >= 0; index--) {
            if (command == this->HIGH_SCORE_COMMANDS[index]) {
                return true;
            }
        }
        return false;
}


// throws Exception
int32_t HighScoreCommandsBaseFactory_getIndex(HighScoreCommandsBaseFactory* this, Command* command) {
        for (int32_t index = java_array_length(this->HIGH_SCORE_COMMANDS) - 1; index >= 0; index--) {
            if (command == this->HIGH_SCORE_COMMANDS[index]) {
                return index;
            }
        }
        java_throw(java_exception_new("Exception", "No Such Command"));
}

