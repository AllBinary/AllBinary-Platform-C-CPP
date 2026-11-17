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
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"

typedef struct ScoreHudWidget ScoreHudWidget;
struct ScoreHudWidget {
    NumberStringHud base;
};


ScoreHudWidget* ScoreHudWidget_new(int32_t maxscore, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);
ScoreHudWidget* ScoreHudWidget_getInstance(int32_t maxscore, int32_t location, int32_t direction);

void ScoreHudWidget_init(ScoreHudWidget* this, int32_t maxscore, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);
void ScoreHudWidget_updateMeasurement(ScoreHudWidget* this, Graphics* graphics);


// throws Exception
ScoreHudWidget* ScoreHudWidget_getInstance(int32_t maxscore, int32_t location, int32_t direction) {
        return ScoreHudWidget_new(maxscore, location, direction, 2, BasicColorFactory_getInstance()->GREY);
}


void ScoreHudWidget_init(ScoreHudWidget* this, int32_t maxscore, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
        NumberStringHud_init(&this->base, "Pts ", maxscore, location, direction, bufferZone, basicColor);
        this->updateMaxHeight = 14;
}

ScoreHudWidget* ScoreHudWidget_new(int32_t maxscore, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    ScoreHudWidget* this = calloc(1, sizeof(ScoreHudWidget));
    ScoreHudWidget_init(this, maxscore, location, direction, bufferZone, basicColor);
    return this;
}


void ScoreHudWidget_updateMeasurement(ScoreHudWidget* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->updateMaxWidth = Font_getSize(font) * 5;
        NumberStringHud_updateMeasurement((&this->base), graphics);
}

