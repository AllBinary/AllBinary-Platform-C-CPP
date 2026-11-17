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
// package org.allbinary.game.ag.layer.hud.basic.score

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/score/Scoreable.h"

typedef struct ScoreableAddOnlyForHud ScoreableAddOnlyForHud;
struct ScoreableAddOnlyForHud {
    Scoreable base;
    ScoreHudWidget* scoreHudWidget;
};


ScoreableAddOnlyForHud* ScoreableAddOnlyForHud_new(ScoreHudWidget* scoreVectorGraphic);

void ScoreableAddOnlyForHud_init(ScoreableAddOnlyForHud* this, ScoreHudWidget* scoreVectorGraphic);
void ScoreableAddOnlyForHud_removePoints(ScoreableAddOnlyForHud* this, int32_t points);
void ScoreableAddOnlyForHud_addPoints(ScoreableAddOnlyForHud* this, int32_t points);
ScoreHudWidget* ScoreableAddOnlyForHud_getScoreHudWidget(ScoreableAddOnlyForHud* this);

static void ScoreableAddOnlyForHud_initFields(ScoreableAddOnlyForHud* this) {
    
}


void ScoreableAddOnlyForHud_init(ScoreableAddOnlyForHud* this, ScoreHudWidget* scoreVectorGraphic) {
        Scoreable_init(&this->base, 0);
        ScoreableAddOnlyForHud_initFields(this);
        this->scoreHudWidget = scoreVectorGraphic;
        JAVA_CALL(ScoreableAddOnlyForHud_getScoreHudWidget(this), set, 0);
}

ScoreableAddOnlyForHud* ScoreableAddOnlyForHud_new(ScoreHudWidget* scoreVectorGraphic) {
    ScoreableAddOnlyForHud* this = calloc(1, sizeof(ScoreableAddOnlyForHud));
    ScoreableAddOnlyForHud_init(this, scoreVectorGraphic);
    return this;
}


void ScoreableAddOnlyForHud_removePoints(ScoreableAddOnlyForHud* this, int32_t points) {
}


void ScoreableAddOnlyForHud_addPoints(ScoreableAddOnlyForHud* this, int32_t points) {
        Scoreable_addPoints((&this->base), points);
        JAVA_CALL(ScoreableAddOnlyForHud_getScoreHudWidget(this), add, points);
}


ScoreHudWidget* ScoreableAddOnlyForHud_getScoreHudWidget(ScoreableAddOnlyForHud* this) {
        return this->scoreHudWidget;
}

