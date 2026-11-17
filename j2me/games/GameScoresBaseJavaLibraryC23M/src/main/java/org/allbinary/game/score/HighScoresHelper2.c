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
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/game/score/HighScoresHelperBase.h"

typedef struct HighScoresHelper2 HighScoresHelper2;
struct HighScoresHelper2 {
    HighScoresHelperBase base;
    CircularIndexUtil* circularIndexUtil;
    HighScores* selectedHighScores;
};


HighScoresHelper2* HighScoresHelper2_new(void);
void HighScoresHelper2_setSelectedHighScores(HighScoresHelper2* this, HighScores* selectedHighScores);
HighScores* HighScoresHelper2_getSelectedHighScores(HighScoresHelper2* this);
void HighScoresHelper2_setHighScoresArray(HighScoresHelper2* this, HighScores** highScoresArrayP);
void HighScoresHelper2_selectHighScores(HighScoresHelper2* this);

static void HighScoresHelper2_initFields(HighScoresHelper2* this) {
    this->circularIndexUtil = CircularIndexUtil_createInstanceAt(0, 0);
    this->selectedHighScores = NullHighScoresSingletonFactory_getInstance();
}

void HighScoresHelper2_init(HighScoresHelper2* this) {
    HighScoresHelperBase_init(&this->base);
    HighScoresHelper2_initFields(this);
}

HighScoresHelper2* HighScoresHelper2_new(void) {
    HighScoresHelper2* this = calloc(1, sizeof(HighScoresHelper2));
    HighScoresHelper2_init(this);
    return this;
}


void HighScoresHelper2_setSelectedHighScores(HighScoresHelper2* this, HighScores* selectedHighScores) {
        this->selectedHighScores = selectedHighScores;
}


HighScores* HighScoresHelper2_getSelectedHighScores(HighScoresHelper2* this) {
        return this->selectedHighScores;
}


void HighScoresHelper2_setHighScoresArray(HighScoresHelper2* this, HighScores** highScoresArrayP) {
        HighScoresHelperBase_setHighScoresArray((&this->base), highScoresArrayP);
        CircularIndexUtil_setSize(this->circularIndexUtil, java_array_length(this->highScoresArrayP));
        HighScoresHelper2_selectHighScores(this);
}


void HighScoresHelper2_selectHighScores(HighScoresHelper2* this) {
        if (java_array_length(this->highScoresArrayP) == 0) {
            HighScoresHelper2_setSelectedHighScores(this, NullHighScoresSingletonFactory_getInstance());
            return;
        }
        CircularIndexUtil_next(this->circularIndexUtil);
        HighScores* highScores = this->highScoresArrayP[CircularIndexUtil_getIndex(this->circularIndexUtil)];
        int32_t index = 0;
        while (HighScores_getTotal(highScores) < 1 && index < java_array_length(this->highScoresArrayP)) {
            highScores = this->highScoresArrayP[CircularIndexUtil_next(this->circularIndexUtil)];
            index++;
        }
        HighScoresHelper2_setSelectedHighScores(this, highScores);
}

