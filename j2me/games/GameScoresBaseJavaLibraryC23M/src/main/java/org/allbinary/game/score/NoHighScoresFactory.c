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
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/game/score/HighScoresBase.h"

typedef struct NoHighScoresFactory NoHighScoresFactory;
struct NoHighScoresFactory {
    HighScoresBase base;
    LogUtil* logUtil;
    HighScores** NO_HIGH_SCORES;
};

static NoHighScoresFactory* NoHighScoresFactory_instance;

NoHighScoresFactory* NoHighScoresFactory_new(void);
NoHighScoresFactory* NoHighScoresFactory_getInstance(void);

void NoHighScoresFactory_init(NoHighScoresFactory* this);
void NoHighScoresFactory_fetchHighScores(NoHighScoresFactory* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener);
HighScoresHelperBaseInterface* NoHighScoresFactory_createHighScoresHelper(NoHighScoresFactory* this);

// Static fields with runtime initializers: call this once at startup
void NoHighScoresFactory_staticInit(void) {
    NoHighScoresFactory_instance = NoHighScoresFactory_new();
}

static void NoHighScoresFactory_initFields(NoHighScoresFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->NO_HIGH_SCORES = ((HighScores**) java_array_new(sizeof(HighScores*), 0));
}


NoHighScoresFactory* NoHighScoresFactory_getInstance(void) {
        return NoHighScoresFactory_instance;
}


void NoHighScoresFactory_init(NoHighScoresFactory* this) {
    HighScoresBase_init(&this->base);
    NoHighScoresFactory_initFields(this);
}

NoHighScoresFactory* NoHighScoresFactory_new(void) {
    NoHighScoresFactory* this = calloc(1, sizeof(NoHighScoresFactory));
    NoHighScoresFactory_init(this);
    return this;
}


void NoHighScoresFactory_fetchHighScores(NoHighScoresFactory* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener) {
        LogUtil_putF(this->logUtil, "Getting No HighScores", this, "fetchHighScores");
        HighScoresResultsListener_setHighScoresArray(highScoresResultsListener, this->NO_HIGH_SCORES);
}


HighScoresHelperBaseInterface* NoHighScoresFactory_createHighScoresHelper(NoHighScoresFactory* this) {
        return HighScoresHelperBase_new();
}

