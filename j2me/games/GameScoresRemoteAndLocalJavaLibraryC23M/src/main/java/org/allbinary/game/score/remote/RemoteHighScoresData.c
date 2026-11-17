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
// package org.allbinary.game.score.remote

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct RemoteHighScoresData RemoteHighScoresData;
struct RemoteHighScoresData {
    const char* HIGH_SCORES;
    const char* CUSTOMER_USER_NAME;
    const char* DISPLAY_NAME;
    const char* SCORE;
    const char* GAME_INFO;
    const char* GAME_CONFIGURATION;
};

static RemoteHighScoresData* RemoteHighScoresData_SINGLETON;

RemoteHighScoresData* RemoteHighScoresData_new(void);
RemoteHighScoresData* RemoteHighScoresData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void RemoteHighScoresData_staticInit(void) {
    RemoteHighScoresData_SINGLETON = RemoteHighScoresData_new();
}

static void RemoteHighScoresData_initFields(RemoteHighScoresData* this) {
    this->HIGH_SCORES = "HIGH_SCORES";
    this->CUSTOMER_USER_NAME = "CUSTOMER_USER_NAME";
    this->DISPLAY_NAME = "DISPLAY_NAME";
    this->SCORE = "SCORE";
    this->GAME_INFO = "GAME_INFO";
    this->GAME_CONFIGURATION = "GAME_CONFIGURATION";
}

void RemoteHighScoresData_init(RemoteHighScoresData* this) {
    RemoteHighScoresData_initFields(this);
}

RemoteHighScoresData* RemoteHighScoresData_new(void) {
    RemoteHighScoresData* this = calloc(1, sizeof(RemoteHighScoresData));
    RemoteHighScoresData_init(this);
    return this;
}


RemoteHighScoresData* RemoteHighScoresData_getInstance(void) {
        return RemoteHighScoresData_SINGLETON;
}

