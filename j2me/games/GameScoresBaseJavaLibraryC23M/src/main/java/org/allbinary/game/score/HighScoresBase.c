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
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"

typedef struct HighScoresBase HighScoresBase;
struct HighScoresBase {
    HighScoresFactoryInterface HighScoresFactoryInterface_interface;
    CommonStrings* commonStrings;
};


HighScoresBase* HighScoresBase_new(void);

void HighScoresBase_init(HighScoresBase* this);
void HighScoresBase_fetchHighScores(HighScoresBase* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener);
void HighScoresBase_fetchHighScoresPreload(HighScoresBase* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener, bool preload);
HighScoresHelperBaseInterface* HighScoresBase_createHighScoresHelper(HighScoresBase* this);

static void HighScoresBase_initFields(HighScoresBase* this) {
    this->commonStrings = CommonStrings_getInstance();
}


void HighScoresBase_init(HighScoresBase* this) {
    HighScoresBase_initFields(this);
}

HighScoresBase* HighScoresBase_new(void) {
    HighScoresBase* this = calloc(1, sizeof(HighScoresBase));
    HighScoresBase_init(this);
    return this;
}


void HighScoresBase_fetchHighScores(HighScoresBase* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void HighScoresBase_fetchHighScoresPreload(HighScoresBase* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener, bool preload) {
        java_throw(java_exception_new("RuntimeException", ""));
}


HighScoresHelperBaseInterface* HighScoresBase_createHighScoresHelper(HighScoresBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

