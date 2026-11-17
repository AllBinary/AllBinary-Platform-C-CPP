/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"

typedef struct HighScoresHelperBase HighScoresHelperBase;
struct HighScoresHelperBase {
    HighScoresHelperBaseInterface HighScoresHelperBaseInterface_interface;
    LogUtil* logUtil;
    HighScores** highScoresArrayP;
};


HighScoresHelperBase* HighScoresHelperBase_new(void);
void HighScoresHelperBase_setHighScoresArray(HighScoresHelperBase* this, HighScores** highScoresArrayP);
HighScores* HighScoresHelperBase_getNextHighScores(HighScoresHelperBase* this);
bool HighScoresHelperBase_isAnyHighScores(HighScoresHelperBase* this);
void HighScoresHelperBase_setSelectedHighScores(HighScoresHelperBase* this, HighScores* selectedHighScores);
HighScores* HighScoresHelperBase_getSelectedHighScores(HighScoresHelperBase* this);
HighScores** HighScoresHelperBase_getHighScoresArray(HighScoresHelperBase* this);
void HighScoresHelperBase_selectHighScores(HighScoresHelperBase* this);

static void HighScoresHelperBase_initFields(HighScoresHelperBase* this) {
    this->logUtil = LogUtil_getInstance();
    this->highScoresArrayP = LastFetchHighScoresFactory_getInstance()->highScoresArray;
}

void HighScoresHelperBase_init(HighScoresHelperBase* this) {
    HighScoresHelperBase_initFields(this);
}

HighScoresHelperBase* HighScoresHelperBase_new(void) {
    HighScoresHelperBase* this = calloc(1, sizeof(HighScoresHelperBase));
    HighScoresHelperBase_init(this);
    return this;
}


void HighScoresHelperBase_setHighScoresArray(HighScoresHelperBase* this, HighScores** highScoresArrayP) {
        if (highScoresArrayP != nullptr) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), commonStrings->START), appendint, java_array_length(highScoresArrayP)), toString), this, "setHighScoresArray");
        } else {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, commonStrings->START, this, "setHighScoresArray");
        }
        this->highScoresArrayP = highScoresArrayP;
}


HighScores* HighScoresHelperBase_getNextHighScores(HighScoresHelperBase* this) {
        return NullHighScoresSingletonFactory_getInstance();
}


bool HighScoresHelperBase_isAnyHighScores(HighScoresHelperBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void HighScoresHelperBase_setSelectedHighScores(HighScoresHelperBase* this, HighScores* selectedHighScores) {
}


HighScores* HighScoresHelperBase_getSelectedHighScores(HighScoresHelperBase* this) {
        return NullHighScoresSingletonFactory_getInstance();
}


HighScores** HighScoresHelperBase_getHighScoresArray(HighScoresHelperBase* this) {
        return this->highScoresArrayP;
}


void HighScoresHelperBase_selectHighScores(HighScoresHelperBase* this) {
}

