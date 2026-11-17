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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/score/HighScoresInterface.h"

typedef struct HighScores HighScores;
struct HighScores {
    HighScoresInterface HighScoresInterface_interface;
    BasicArrayList* orderedHighScoresList;
    const char* name;
    const char* heading;
    const char* columnOneHeading;
    const char* columnTwoHeading;
};


HighScores* HighScores_new(const char* name, const char* heading, const char* columnTwoHeading);

void HighScores_init(HighScores* this, const char* name, const char* heading, const char* columnTwoHeading);
void HighScores_setList(HighScores* this, BasicArrayList* orderedHighScoresList);
BasicArrayList* HighScores_getList(HighScores* this);
const char* HighScores_getName(HighScores* this);
int32_t HighScores_getTotal(HighScores* this);
void HighScores_addHighScore(HighScores* this, HighScore* newHighScore);
const char* HighScores_getHeading(HighScores* this);
const char* HighScores_getColumnOneHeading(HighScores* this);
const char* HighScores_getColumnTwoHeading(HighScores* this);
bool HighScores_isBestScore(HighScores* this, HighScore* newHighScore);
const char* HighScores_toString(HighScores* this);

static void HighScores_initFields(HighScores* this) {
    this->orderedHighScoresList = BasicArrayListD_new();
    
    
    this->columnOneHeading = "Name";
    
}


void HighScores_init(HighScores* this, const char* name, const char* heading, const char* columnTwoHeading) {
    HighScores_initFields(this);
        this->name = name;
        this->heading = heading;
        this->columnTwoHeading = columnTwoHeading;
}

HighScores* HighScores_new(const char* name, const char* heading, const char* columnTwoHeading) {
    HighScores* this = calloc(1, sizeof(HighScores));
    HighScores_init(this, name, heading, columnTwoHeading);
    return this;
}


void HighScores_setList(HighScores* this, BasicArrayList* orderedHighScoresList) {
        this->orderedHighScoresList = orderedHighScoresList;
}


BasicArrayList* HighScores_getList(HighScores* this) {
        return this->orderedHighScoresList;
}


const char* HighScores_getName(HighScores* this) {
        return this->name;
}


int32_t HighScores_getTotal(HighScores* this) {
        return JAVA_CALL(HighScores_getList(this), size);
}


void HighScores_addHighScore(HighScores* this, HighScore* newHighScore) {
        BasicArrayList_add(this->orderedHighScoresList, newHighScore);
}


const char* HighScores_getHeading(HighScores* this) {
        return this->heading;
}


const char* HighScores_getColumnOneHeading(HighScores* this) {
        return this->columnOneHeading;
}


const char* HighScores_getColumnTwoHeading(HighScores* this) {
        return this->columnTwoHeading;
}


// throws Exception
bool HighScores_isBestScore(HighScores* this, HighScore* newHighScore) {
        return false;
}


const char* HighScores_toString(HighScores* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "HighScores: ");
        StringMaker_append(stringBuffer, this->heading);
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, CommonLabels_getInstance()->TOTAL_LABEL);
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->orderedHighScoresList));
        return StringMaker_toString(stringBuffer);
}

