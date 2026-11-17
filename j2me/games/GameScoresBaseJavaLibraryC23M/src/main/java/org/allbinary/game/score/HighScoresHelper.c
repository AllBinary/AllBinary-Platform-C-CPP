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

typedef struct HighScoresHelper HighScoresHelper;
struct HighScoresHelper {
    HighScoresHelperBase base;
    CircularIndexUtil* circularIndexUtil;
    int32_t lastIndex;
};


HighScoresHelper* HighScoresHelper_new(void);
void HighScoresHelper_setHighScoresArray(HighScoresHelper* this, HighScores** highScoresArrayP);
HighScores* HighScoresHelper_getNextHighScores(HighScoresHelper* this);
bool HighScoresHelper_isAnyHighScores(HighScoresHelper* this);

static void HighScoresHelper_initFields(HighScoresHelper* this) {
    this->circularIndexUtil = CircularIndexUtil_createInstanceAt(0, 0);
    this->lastIndex = -1;
}

void HighScoresHelper_init(HighScoresHelper* this) {
    HighScoresHelperBase_init(&this->base);
    HighScoresHelper_initFields(this);
}

HighScoresHelper* HighScoresHelper_new(void) {
    HighScoresHelper* this = calloc(1, sizeof(HighScoresHelper));
    HighScoresHelper_init(this);
    return this;
}


void HighScoresHelper_setHighScoresArray(HighScoresHelper* this, HighScores** highScoresArrayP) {
        HighScoresHelperBase_setHighScoresArray((&this->base), highScoresArrayP);
        CircularIndexUtil_setSize(this->circularIndexUtil, java_array_length(this->highScoresArrayP));
}


HighScores* HighScoresHelper_getNextHighScores(HighScoresHelper* this) {
        HighScores* highScores = this->highScoresArrayP[CircularIndexUtil_getIndex(this->circularIndexUtil)];
        int32_t index = 0;
        while ((HighScores_getTotal(highScores) < 1 || this->lastIndex == CircularIndexUtil_getIndex(this->circularIndexUtil)) && index < java_array_length(this->highScoresArrayP)) {
            CircularIndexUtil_next(this->circularIndexUtil);
            highScores = this->highScoresArrayP[CircularIndexUtil_getIndex(this->circularIndexUtil)];
            index++;
        }
        this->lastIndex = CircularIndexUtil_getIndex(this->circularIndexUtil);
        return highScores;
}


bool HighScoresHelper_isAnyHighScores(HighScoresHelper* this) {
        if (java_array_length(this->highScoresArrayP) < 1) {
            return false;
        }
        bool anyScores = false;
        HighScores* highScores = nullptr;
        for (int32_t index = java_array_length(this->highScoresArrayP) - 1; index >= 0; index--) {
            highScores = this->highScoresArrayP[index];
            if (HighScores_getTotal(highScores) > 0) {
                anyScores = true;
            }
        }
        return anyScores;
}

