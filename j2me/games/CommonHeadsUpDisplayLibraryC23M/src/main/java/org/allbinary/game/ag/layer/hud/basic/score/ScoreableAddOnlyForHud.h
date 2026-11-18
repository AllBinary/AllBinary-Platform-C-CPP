#ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SCORE_SCOREABLEADDONLYFORHUD_H
#define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SCORE_SCOREABLEADDONLYFORHUD_H
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
typedef struct ScoreHudWidget ScoreHudWidget;
typedef struct Scoreable Scoreable;
#include "org/allbinary/game/score/Scoreable.h"
#if __has_include("org/allbinary/game/ag/layer/hud/basic/score/ScoreHudWidget.h")
#include "org/allbinary/game/ag/layer/hud/basic/score/ScoreHudWidget.h"
#endif

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
#define ScoreableAddOnlyForHud_new1 ScoreableAddOnlyForHud_new
#define ScoreableAddOnlyForHud_init1 ScoreableAddOnlyForHud_init
#ifndef ScoreableAddOnlyForHud_setPoints
#define ScoreableAddOnlyForHud_setPoints Scoreable_setPoints
#endif
#ifndef ScoreableAddOnlyForHud_getPoints
#define ScoreableAddOnlyForHud_getPoints Scoreable_getPoints
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScoreableAddOnlyForHud_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScoreableAddOnlyForHud_register(void);


#endif // ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SCORE_SCOREABLEADDONLYFORHUD_H
